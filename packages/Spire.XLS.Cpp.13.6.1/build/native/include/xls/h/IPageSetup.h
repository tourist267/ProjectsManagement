#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
//#include "IExcelApplication.h"
#include "IPageSetupBase.h"
#pragma warning(pop)

namespace Spire{namespace Xls{
class EXPORTS IPageSetup : public virtual IPageSetupBase
{
    friend class IWorksheet;
    friend class XlsWorksheet;
public:
    virtual bool GetFitToPagesTall ()=0;
    virtual void SetFitToPagesTall (bool value)=0;
    virtual bool GetFitToPagesWide ()=0;
    virtual void SetFitToPagesWide (bool value)=0;
    virtual bool GetIsPrintGridlines ()=0;
    virtual void SetIsPrintGridlines (bool value)=0;
    virtual bool GetIsPrintHeadings ()=0;
    virtual void SetIsPrintHeadings (bool value)=0;
    virtual LPCWSTR_S GetPrintArea ()=0;
    virtual void SetPrintArea (LPCWSTR_S value)=0;
    virtual LPCWSTR_S GetPrintTitleColumns ()=0;
    virtual void SetPrintTitleColumns (LPCWSTR_S value)=0;
    virtual LPCWSTR_S GetPrintTitleRows ()=0;
    virtual void SetPrintTitleRows (LPCWSTR_S value)=0;
    virtual bool GetIsSummaryRowBelow ()=0;
    virtual void SetIsSummaryRowBelow (bool value)=0;
    virtual bool GetIsSummaryColumnRight ()=0;
    virtual void SetIsSummaryColumnRight (bool value)=0;
    virtual bool GetIsFitToPage ()=0;
    virtual void SetIsFitToPage (bool value)=0;
private:
};
}}
