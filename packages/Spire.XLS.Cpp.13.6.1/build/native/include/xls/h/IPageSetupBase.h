#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
//#include "OrderType.h"
//#include "PageOrientationType.h"
//#include "PaperSizeType.h"
//#include "PrintCommentType.h"
//#include "PrintErrorsType.h"
#include "IExcelApplication.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS IPageSetupBase : public virtual IExcelApplication
{
public:
    virtual bool GetAutoFirstPageNumber ()=0;
    virtual void SetAutoFirstPageNumber (bool value)=0;
    virtual bool GetBlackAndWhite ()=0;
    virtual void SetBlackAndWhite (bool value)=0;
    virtual double GetBottomMargin ()=0;
    virtual void SetBottomMargin (double value)=0;
    virtual LPCWSTR_S GetCenterFooter ()=0;
    virtual void SetCenterFooter (LPCWSTR_S value)=0;
    virtual intrusive_ptr<Image> GetCenterFooterImage ()=0;
    virtual void SetCenterFooterImage (intrusive_ptr<Image> value)=0;
    virtual LPCWSTR_S GetCenterHeader ()=0;
    virtual void SetCenterHeader (LPCWSTR_S value)=0;
    virtual intrusive_ptr<Image> GetCenterHeaderImage ()=0;
    virtual void SetCenterHeaderImage (intrusive_ptr<Image> value)=0;
    virtual bool GetCenterHorizontally ()=0;
    virtual void SetCenterHorizontally (bool value)=0;
    virtual bool GetCenterVertically ()=0;
    virtual void SetCenterVertically (bool value)=0;
    virtual int GetCopies ()=0;
    virtual void SetCopies (int value)=0;
    virtual bool GetDraft ()=0;
    virtual void SetDraft (bool value)=0;
    virtual int GetFirstPageNumber ()=0;
    virtual void SetFirstPageNumber (int value)=0;
    virtual double GetFooterMarginInch ()=0;
    virtual void SetFooterMarginInch (double value)=0;
    virtual double GetHeaderMarginInch ()=0;
    virtual void SetHeaderMarginInch (double value)=0;
    virtual LPCWSTR_S GetLeftFooter ()=0;
    virtual void SetLeftFooter (LPCWSTR_S value)=0;
    virtual intrusive_ptr<Image> GetLeftFooterImage ()=0;
    virtual void SetLeftFooterImage (intrusive_ptr<Image> value)=0;
    virtual LPCWSTR_S GetLeftHeader ()=0;
    virtual void SetLeftHeader (LPCWSTR_S value)=0;
    virtual intrusive_ptr<Image> GetLeftHeaderImage ()=0;
    virtual void SetLeftHeaderImage (intrusive_ptr<Image> value)=0;
    virtual double GetLeftMargin ()=0;
    virtual void SetLeftMargin (double value)=0;
    virtual OrderType GetOrder ()=0;
    virtual void SetOrder (OrderType value)=0;
    virtual PageOrientationType GetOrientation ()=0;
    virtual void SetOrientation (PageOrientationType value)=0;
    virtual PaperSizeType GetPaperSize ()=0;
    virtual void SetPaperSize (PaperSizeType value)=0;
    virtual PrintCommentType GetPrintComments ()=0;
    virtual void SetPrintComments (PrintCommentType value)=0;
    virtual PrintErrorsType GetPrintErrors ()=0;
    virtual void SetPrintErrors (PrintErrorsType value)=0;
    virtual bool GetPrintNotes ()=0;
    virtual void SetPrintNotes (bool value)=0;
    virtual int GetPrintQuality ()=0;
    virtual void SetPrintQuality (int value)=0;
    virtual LPCWSTR_S GetRightFooter ()=0;
    virtual void SetRightFooter (LPCWSTR_S value)=0;
    virtual intrusive_ptr<Image> GetRightFooterImage ()=0;
    virtual void SetRightFooterImage (intrusive_ptr<Image> value)=0;
    virtual LPCWSTR_S GetRightHeader ()=0;
    virtual void SetRightHeader (LPCWSTR_S value)=0;
    virtual intrusive_ptr<Image> GetRightHeaderImage ()=0;
    virtual void SetRightHeaderImage (intrusive_ptr<Image> value)=0;
    virtual double GetRightMargin ()=0;
    virtual void SetRightMargin (double value)=0;
    virtual double GetTopMargin ()=0;
    virtual void SetTopMargin (double value)=0;
    virtual int GetZoom ()=0;
    virtual void SetZoom (int value)=0;
    virtual intrusive_ptr<Bitmap> GetBackgoundImage ()=0;
    virtual void SetBackgoundImage (intrusive_ptr<Bitmap> value)=0;
private:
};
}}
