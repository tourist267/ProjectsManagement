#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IConditionValue.h"
#include "XlsConditionValue.h"
#include "IColorConditionValue.h"
#pragma warning(pop)

namespace Spire{namespace Xls{
class EXPORTS ColorConditionValue : public virtual XlsConditionValue
{
public:
    virtual intrusive_ptr<Color> GetFormatColor ();
    virtual void SetFormatColor (intrusive_ptr<Color> value);
    virtual bool GetIsGTE ();
    virtual void SetIsGTE (bool value);
    ConditionValuePosition GetPosition ();
    virtual ConditionValueType GetType ();
    virtual void SetType (ConditionValueType value);
    LPCWSTR_S GetValue ();
    void SetValue (LPCWSTR_S value);
private:
};
}}
