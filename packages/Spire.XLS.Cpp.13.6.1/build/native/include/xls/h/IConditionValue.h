#pragma once
#include "pch.h"

//#pragma warning(push)
//#pragma warning(disable:4250)
//#include "ConditionValueType.h"
//#pragma warning(pop)

namespace Spire{namespace Xls{
class EXPORTS IConditionValue : public virtual Object
{
    friend class ColorScale;
    friend class ConditionValue;
    friend class IDataBar;
public:
    virtual ConditionValueType GetType ()=0;
    virtual void SetType (ConditionValueType value)=0;
    //virtual System.Object GetValue ()=0;
    //virtual void SetValue (System.Object value)=0;
    virtual bool GetIsGTE ()=0;
    virtual void SetIsGTE (bool value)=0;
private:
};
}}
