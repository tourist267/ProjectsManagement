#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS IAutoFilterCondition : public virtual Object
{
    friend class IAutoFilter;
    friend class FilterColumn;
public:
    virtual FilterDataType GetDataType ()=0;
    virtual void SetDataType (FilterDataType value)=0;
    virtual FilterConditionType GetConditionOperator ()=0;
    virtual void SetConditionOperator (FilterConditionType value)=0;
    virtual LPCWSTR_S GetString ()=0;
    virtual void SetString (LPCWSTR_S value)=0;
    virtual bool GetBoolean ()=0;
    virtual void SetBoolean (bool value)=0;
    virtual BYTE GetErrorCode ()=0;
    virtual void SetErrorCode (BYTE value)=0;
    virtual double GetDouble ()=0;
    virtual void SetDouble (double value)=0;
private:
};
}}
