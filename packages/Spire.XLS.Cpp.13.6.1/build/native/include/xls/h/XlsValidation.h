#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IExcelApplication.h"
#include "ICloneParent.h"
#include "IOptimizedUpdate.h"
#include "IDataValidation.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS XlsValidation : public virtual Object,public virtual IDataValidation,public virtual ICloneParent
{
public:
    virtual LPCWSTR_S GetInputTitle ();
    virtual void SetInputTitle (LPCWSTR_S value);
    virtual LPCWSTR_S GetInputMessage ();
    virtual void SetInputMessage (LPCWSTR_S value);
    virtual LPCWSTR_S GetErrorTitle ();
    virtual void SetErrorTitle (LPCWSTR_S value);
    virtual LPCWSTR_S GetErrorMessage ();
    virtual void SetErrorMessage (LPCWSTR_S value);
    virtual LPCWSTR_S GetFormula1 ();
    virtual void SetFormula1 (LPCWSTR_S value);
    virtual intrusive_ptr<DateTime> GetDateTime1 ();
    virtual void SetDateTime1 (intrusive_ptr<DateTime> value);
    virtual LPCWSTR_S GetFormula2 ();
    virtual void SetFormula2 (LPCWSTR_S value);
    virtual intrusive_ptr<DateTime> GetDateTime2 ();
    virtual void SetDateTime2 (intrusive_ptr<DateTime> value);
    virtual CellDataType GetAllowType ();
    virtual void SetAllowType (CellDataType value);
    virtual ValidationComparisonOperator GetCompareOperator ();
    virtual void SetCompareOperator (ValidationComparisonOperator value);
    virtual bool GetIsListInFormula ();
    virtual void SetIsListInFormula (bool value);
    virtual bool GetIgnoreBlank ();
    virtual void SetIgnoreBlank (bool value);
    virtual bool GetIsSuppressDropDownArrow ();
    virtual void SetIsSuppressDropDownArrow (bool value);
    int GetShapesCount ();
    virtual bool GetShowInput ();
    virtual void SetShowInput (bool value);
    virtual bool GetShowError ();
    virtual void SetShowError (bool value);
    virtual int GetPromptBoxHPosition ();
    virtual void SetPromptBoxHPosition (int value);
    virtual int GetPromptBoxVPosition ();
    virtual void SetPromptBoxVPosition (int value);
    virtual bool GetIsInputVisible ();
    virtual void SetIsInputVisible (bool value);
    virtual bool GetIsInputPositionFixed ();
    virtual void SetIsInputPositionFixed (bool value);
    virtual AlertStyleType GetAlertStyle ();
    virtual void SetAlertStyle (AlertStyleType value);
    virtual std::vector<LPCWSTR_S> GetValues ();
    virtual void SetValues (std::vector<LPCWSTR_S> value);
    virtual intrusive_ptr<IXLSRange> GetDataRange ();
    virtual void SetDataRange (intrusive_ptr<IXLSRange> value);
    void AddRange (intrusive_ptr<XlsValidation> dv);
    void AddRange (intrusive_ptr<XlsRange> range);
    void RemoveRange (std::vector<intrusive_ptr<Rectangle>> rectangles);
    void RemoveRange (intrusive_ptr<XlsRange> range);
    intrusive_ptr<XlsWorksheet> GetWorksheet ();
    bool ContainsCell (long lCellIndex);
    //virtual System.Object Clone (System.Object parent);
    //virtual System.Object GetParent ();
    intrusive_ptr<XlsDataValidationCollection> GetParentCollection ();
    void SetParentCollection (intrusive_ptr<XlsDataValidationCollection> value);
    virtual void BeginUpdate ();
    virtual void EndUpdate ();
private:
};
}}
