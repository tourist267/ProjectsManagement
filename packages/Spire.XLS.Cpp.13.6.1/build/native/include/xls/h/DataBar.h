#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Xls{
/*
    <summary>
        Represents a data bar conditional formating rule.
    </summary>
*/
class EXPORTS DataBar : public virtual Object
{
    friend class ConditionalFormatWrapper;
    friend class IConditionalFormat;
    friend class XlsConditionalFormat;
public:
    /*
    <summary>
        The shortest bar is evaluated for a data bar conditional format.
    </summary>
    */
    intrusive_ptr<ConditionValue> GetMinPoint ();
    /*
    <summary>
        The longest bar is evaluated for a data bar conditional format.
    </summary>
    */
    intrusive_ptr<ConditionValue> GetMaxPoint ();
    /*
    <summary>
        Gets or sets the color of the bar in a data bar condition format.
    </summary>
    */
    intrusive_ptr<Color> GetBarColor ();
    void SetBarColor (intrusive_ptr<Color> value);
    /*
    <summary>
        Gets or sets a value that specifies the length of the longest data bar as a percentage of cell width.
    </summary>
    */
    int GetPercentMax ();
    void SetPercentMax (int value);
    /*
    <summary>
        Gets or sets a value that specifies the length of the shortest data bar as a percentage of cell width.
    </summary>
    */
    int GetPercentMin ();
    void SetPercentMin (int value);
    /*
    <summary>
        Gets or sets a Boolean value that specifies if the value in the cell is displayed.
    </summary>
    */
    bool GetShowValue ();
    void SetShowValue (bool value);
    /*
    <summary>
        Gets the color of the axis for cells with conditional formatting as data bars.
    </summary>
    */
    intrusive_ptr<Color> GetAxisColor ();
    void SetAxisColor (intrusive_ptr<Color> value);
    /*
    <summary>
        Gets or sets the position of the axis of the data bars specified by a conditional formatting rule.
    </summary>
    */
    DataBarAxisPosition GetAxisPosition ();
    void SetAxisPosition (DataBarAxisPosition value);
    /*
    <summary>
        Gets an object that specifies the border of a data bar.
    </summary>
    */
    intrusive_ptr<DataBarBorder> GetBarBorder ();
    DataBarFillType GetBarFillType ();
    void SetBarFillType (DataBarFillType value);
    /*
    <summary>
        Gets or sets the direction the databar is displayed.
    </summary>
    */
    TextDirectionType GetDirection ();
    void SetDirection (TextDirectionType value);
    /*
    <summary>
        Gets the NegativeBarFormat object associated with a data bar conditional formatting rule.
    </summary>
    */
    intrusive_ptr<NegativeBarFormat> GetNegativeBarFormat ();
private:
};
}}
