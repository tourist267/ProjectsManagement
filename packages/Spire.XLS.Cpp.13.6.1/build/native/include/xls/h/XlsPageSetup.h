#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IPageSetup.h"
#include "XlsPageSetupBase.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS XlsPageSetup : public virtual XlsPageSetupBase,public virtual IPageSetup
{
public:
    virtual bool GetIsPrintGridlines ();
    virtual void SetIsPrintGridlines (bool value);
    virtual bool GetIsPrintHeadings ();
    virtual void SetIsPrintHeadings (bool value);
    virtual LPCWSTR_S GetPrintArea ();
    virtual void SetPrintArea (LPCWSTR_S value);
    virtual LPCWSTR_S GetPrintTitleColumns ();
    virtual void SetPrintTitleColumns (LPCWSTR_S value);
    virtual LPCWSTR_S GetPrintTitleRows ();
    virtual void SetPrintTitleRows (LPCWSTR_S value);
    /*
    <summary>
        Gets / sets relation id to the printer settings part.
    </summary>
    */
    LPCWSTR_S GetRelationId ();
    virtual bool GetIsSummaryRowBelow ();
    virtual void SetIsSummaryRowBelow (bool value);
    virtual bool GetIsSummaryColumnRight ();
    virtual void SetIsSummaryColumnRight (bool value);
    virtual bool GetIsFitToPage ();
    virtual void SetIsFitToPage (bool value);
    bool GetNeedDataArray ();
    /*
    <summary>
        Gets or sets default row height.
    </summary>
    */
    int GetDefaultRowHeight ();
    void SetDefaultRowHeight (int value);
    bool GetDefaultRowHeightFlag ();
    void SetDefaultRowHeightFlag (bool value);
    //intrusive_ptr<XlsPageSetup> Clone (System.Object parent);
    virtual int GetStoreSize (ExcelVersion version);
    virtual bool GetFitToPagesTall() 
    { 
        return XlsPageSetupBase::GetFitToPagesTall();
    }
    virtual void SetFitToPagesTall(bool value) 
    {
        XlsPageSetupBase::SetFitToPagesTall(value);
    }

    virtual bool GetFitToPagesWide() 
    {
        return XlsPageSetupBase::GetFitToPagesWide();
    }

    virtual void SetFitToPagesWide(bool value) 
    {
        XlsPageSetupBase::SetFitToPagesWide(value);
    }

private:
};
}}
