#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS IconSet : public virtual Object
{
    friend class ConditionalFormatWrapper;
    friend class IConditionalFormat;
    friend class XlsConditionalFormat;
public:
    //System.Collections.Generic.IList`1[[Spire.Xls.ConditionValue, Spire.XLS, Version=12.7.7.0, Culture=neutral, PublicKeyToken=null]] GetIconCriteria ();
    /*
    <summary>
        Get or sets icon set type
    </summary>
    */
    IconSetType GetIconSetType ();
    void SetIconSetType (IconSetType value);
    /*
    <summary>
        Gets or sets a Boolean value indicates whether thresholds for an icon
            set conditional format are determined using percentiles. 
    </summary>
    */
    bool GetPercentileValues ();
    void SetPercentileValues (bool value);
    /*
    <summary>
        Gets or sets a Boolean value indicates whether the order of icons is
            reversed for an icon set.
    </summary>
    */
    bool GetIsReverseOrder ();
    void SetIsReverseOrder (bool value);
    /*
    <summary>
        Gets or sets a Boolean value indcates whether only the icon is displayed
            for an icon set conditional format.
    </summary>
    */
    bool GetShowIconOnly ();
    void SetShowIconOnly (bool value);
private:
};
}}
