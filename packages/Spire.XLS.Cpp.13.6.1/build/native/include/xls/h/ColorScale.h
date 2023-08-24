#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS ColorScale : public virtual Object
{
    friend class ConditionalFormatWrapper;
    friend class IConditionalFormat;
    friend class XlsConditionalFormat;
public:
    //System.Collections.Generic.IList`1[[Spire.Xls.Core.Spreadsheet.ColorConditionValue, Spire.XLS, Version=12.7.7.0, Culture=neutral, PublicKeyToken=null]] GetCriteria ();
    /*
    <summary>
        Get or set the max value object's corresponding color.
    </summary>
    */
    intrusive_ptr<Color> GetMaxColor ();
    void SetMaxColor (intrusive_ptr<Color> value);
    /*
    <summary>
        Get or set the mid value object's corresponding color.
    </summary>
    */
    intrusive_ptr<Color> GetMidColor ();
    void SetMidColor (intrusive_ptr<Color> value);
    /*
    <summary>
        Get or set the min value object's corresponding color.
    </summary>
    */
    intrusive_ptr<Color> GetMinColor ();
    void SetMinColor (intrusive_ptr<Color> value);
    /*
    <summary>
        Get or set this ColorScale's max value object.
    </summary>
    */
    intrusive_ptr<IConditionValue> GetMaxValue ();
    /*
    <summary>
        Get or set this ColorScale's mid value object.
    </summary>
    */
    intrusive_ptr<IConditionValue> GetMidValue ();
    /*
    <summary>
        Get or set this ColorScale's min value object.
    </summary>
    */
    intrusive_ptr<IConditionValue> GetMinValue ();
    void AddCriteria (intrusive_ptr<ColorConditionValue> item);
    //void AddCriteria (ConditionValueType type,System.Object value,intrusive_ptr<Color> color);
    /*
    <summary>
        Sets number of objects in the collection.
    </summary>
    <param name="count"></param>
    */
    void SetConditionCount (int count);
private:
};
}}
