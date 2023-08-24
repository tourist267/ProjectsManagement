#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IAutoFilterCondition.h"
#pragma warning(pop)

namespace Spire{namespace Xls{
class EXPORTS CustomFilter : public virtual Object,public virtual IAutoFilterCondition
{
    friend class CustomFilterCollection;
public:
    /*
    <summary>
        Gets and sets the filter operator type.
    </summary>
    */
    FilterOperatorType GetFilterOperatorType ();
    void SetFilterOperatorType (FilterOperatorType value);
    //System.Object GetCriteria ();
    //void SetCriteria (System.Object value);
    virtual FilterDataType GetDataType ();
    virtual void SetDataType (FilterDataType value);
    virtual FilterConditionType GetConditionOperator ();
    virtual void SetConditionOperator (FilterConditionType value);
    virtual LPCWSTR_S GetString ();
    virtual void SetString (LPCWSTR_S value);
    virtual bool GetBoolean ();
    virtual void SetBoolean (bool value);
    virtual BYTE GetErrorCode ();
    virtual void SetErrorCode (BYTE value);
    virtual double GetDouble ();
    virtual void SetDouble (double value);
private:
};
}}
