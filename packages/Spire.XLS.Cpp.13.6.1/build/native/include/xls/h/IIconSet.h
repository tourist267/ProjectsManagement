#pragma once
#include "pch.h"

//#pragma warning(push)
//#pragma warning(disable:4250)
//#include "IconSetType.h"
//#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS IIconSet 
{
public:
    //virtual System.Collections.Generic.IList`1[[Spire.Xls.ConditionValue, Spire.XLS, Version=12.7.7.0, Culture=neutral, PublicKeyToken=null]] GetIconCriteria ()=0;
    virtual IconSetType GetIconSet ()=0;
    virtual void SetIconSet (IconSetType value)=0;
    virtual bool GetPercentileValues ()=0;
    virtual void SetPercentileValues (bool value)=0;
    virtual bool GetIsReverseOrder ()=0;
    virtual void SetIsReverseOrder (bool value)=0;
    virtual bool GetShowIconOnly ()=0;
    virtual void SetShowIconOnly (bool value)=0;
private:
};
}}
