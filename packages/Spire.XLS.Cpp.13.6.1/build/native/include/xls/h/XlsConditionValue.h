#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IConditionValue.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS XlsConditionValue : public virtual Object,public virtual IConditionValue
{
public:
    virtual bool GetIsGTE ();
    virtual void SetIsGTE (bool value);
    virtual ConditionValueType GetType ();
    virtual void SetType (ConditionValueType value);
    //virtual System.Object GetValue ();
    //virtual void SetValue (System.Object value);
    static bool op_Equality (intrusive_ptr<XlsConditionValue> first,intrusive_ptr<XlsConditionValue> second);
    static bool op_Inequality (intrusive_ptr<XlsConditionValue> first,intrusive_ptr<XlsConditionValue> second);
    //virtual bool Equals (System.Object obj);
    virtual int GetHashCode ();
private:
};
}}
