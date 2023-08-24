#pragma once
#include "pch.h"

//#pragma warning(push)
//#pragma warning(disable:4250)
//#include "AxisTypes.h"
//#include "SubtotalTypes.h"
//#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS IPivotField : public virtual Object
{
    friend class PivotTableFields;
    friend class IPivotCalculatedFields;
    friend class IPivotFields;
    friend class PivotCalculatedFieldsCollection;
public:
    virtual LPCWSTR_S GetName ()=0;
    virtual AxisTypes GetAxis ()=0;
    virtual void SetAxis (AxisTypes value)=0;
    virtual LPCWSTR_S GetNumberFormat ()=0;
    virtual void SetNumberFormat (LPCWSTR_S value)=0;
    virtual SubtotalTypes GetSubtotals ()=0;
    virtual void SetSubtotals (SubtotalTypes value)=0;
    virtual bool GetCanDragToRow ()=0;
    virtual void SetCanDragToRow (bool value)=0;
    virtual bool GetCanDragToColumn ()=0;
    virtual void SetCanDragToColumn (bool value)=0;
    virtual bool GetCanDragToPage ()=0;
    virtual void SetCanDragToPage (bool value)=0;
    virtual bool GetCanDragOff ()=0;
    virtual void SetCanDragOff (bool value)=0;
    virtual bool GetShowBlankRow ()=0;
    virtual void SetShowBlankRow (bool value)=0;
    virtual bool GetCanDragToData ()=0;
    virtual void SetCanDragToData (bool value)=0;
    virtual bool GetIsFormulaField ()=0;
    virtual LPCWSTR_S GetFormula ()=0;
    virtual void SetFormula (LPCWSTR_S value)=0;
    virtual bool GetRepeatItemLabels ()=0;
    virtual void SetRepeatItemLabels (bool value)=0;
private:
};
}}
