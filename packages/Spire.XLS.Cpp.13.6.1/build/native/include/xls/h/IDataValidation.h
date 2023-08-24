#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
//#include "AlertStyleType.h"
//#include "CellDataType.h"
//#include "ValidationComparisonOperator.h"
#include "IExcelApplication.h"
//#include "IXLSRange.h"
#include "IOptimizedUpdate.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS IDataValidation : public virtual IExcelApplication,public virtual IOptimizedUpdate
{
    friend class IDataValidationCollection;
    friend class IDataValidationTable;
    friend class XlsDataValidationTable;
    friend class XlsDataValidationCollection;
public:
    virtual LPCWSTR_S GetInputTitle ()=0;
    virtual void SetInputTitle (LPCWSTR_S value)=0;
    virtual LPCWSTR_S GetInputMessage ()=0;
    virtual void SetInputMessage (LPCWSTR_S value)=0;
    virtual LPCWSTR_S GetErrorTitle ()=0;
    virtual void SetErrorTitle (LPCWSTR_S value)=0;
    virtual LPCWSTR_S GetErrorMessage ()=0;
    virtual void SetErrorMessage (LPCWSTR_S value)=0;
    virtual LPCWSTR_S GetFormula1 ()=0;
    virtual void SetFormula1 (LPCWSTR_S value)=0;
    virtual intrusive_ptr<DateTime> GetDateTime1 ()=0;
    virtual void SetDateTime1 (intrusive_ptr<DateTime> value)=0;
    virtual LPCWSTR_S GetFormula2 ()=0;
    virtual void SetFormula2 (LPCWSTR_S value)=0;
    virtual intrusive_ptr<DateTime> GetDateTime2 ()=0;
    virtual void SetDateTime2 (intrusive_ptr<DateTime> value)=0;
    virtual CellDataType GetAllowType ()=0;
    virtual void SetAllowType (CellDataType value)=0;
    virtual ValidationComparisonOperator GetCompareOperator ()=0;
    virtual void SetCompareOperator (ValidationComparisonOperator value)=0;
    virtual bool GetIsListInFormula ()=0;
    virtual void SetIsListInFormula (bool value)=0;
    virtual bool GetIgnoreBlank ()=0;
    virtual void SetIgnoreBlank (bool value)=0;
    virtual bool GetIsSuppressDropDownArrow ()=0;
    virtual void SetIsSuppressDropDownArrow (bool value)=0;
    virtual bool GetShowInput ()=0;
    virtual void SetShowInput (bool value)=0;
    virtual bool GetShowError ()=0;
    virtual void SetShowError (bool value)=0;
    virtual int GetPromptBoxHPosition ()=0;
    virtual void SetPromptBoxHPosition (int value)=0;
    virtual int GetPromptBoxVPosition ()=0;
    virtual void SetPromptBoxVPosition (int value)=0;
    virtual bool GetIsInputVisible ()=0;
    virtual void SetIsInputVisible (bool value)=0;
    virtual bool GetIsInputPositionFixed ()=0;
    virtual void SetIsInputPositionFixed (bool value)=0;
    virtual AlertStyleType GetAlertStyle ()=0;
    virtual void SetAlertStyle (AlertStyleType value)=0;
    virtual std::vector<LPCWSTR_S> GetValues ()=0;
    virtual void SetValues (std::vector<LPCWSTR_S> value)=0;
    virtual intrusive_ptr<IXLSRange> GetDataRange ()=0;
    virtual void SetDataRange (intrusive_ptr<IXLSRange> value)=0;
private:
};
}}
