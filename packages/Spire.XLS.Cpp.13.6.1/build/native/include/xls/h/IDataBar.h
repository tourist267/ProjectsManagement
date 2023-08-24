#pragma once
#include "pch.h"

//#pragma warning(push)
//#pragma warning(disable:4250)
//#include "IConditionValue.h"
//#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS IDataBar 
{
public:
    virtual intrusive_ptr<IConditionValue> GetMinPoint ()=0;
    virtual intrusive_ptr<IConditionValue> GetMaxPoint ()=0;
    virtual intrusive_ptr<Color> GetBarColor ()=0;
    virtual void SetBarColor (intrusive_ptr<Color> value)=0;
    virtual int GetPercentMax ()=0;
    virtual void SetPercentMax (int value)=0;
    virtual int GetPercentMin ()=0;
    virtual void SetPercentMin (int value)=0;
    virtual bool GetShowValue ()=0;
    virtual void SetShowValue (bool value)=0;
private:
};
}}
