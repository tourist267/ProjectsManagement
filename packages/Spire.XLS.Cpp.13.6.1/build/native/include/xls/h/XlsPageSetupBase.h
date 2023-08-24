#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IPageSetupBase.h"
#include "XlsObject.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS XlsPageSetupBase : public virtual XlsObject,public virtual IPageSetupBase
{
public:
    virtual double GetRightMargin ();
    virtual void SetRightMargin (double value);
    virtual double GetTopMargin ();
    virtual void SetTopMargin (double value);
    virtual int GetZoom ();
    virtual void SetZoom (int value);
    /*
    <summary>
        Gets or set width of picture for center part of the footer.
    </summary>
    */
    int GetCenterFooterPictureWidth ();
    void SetCenterFooterPictureWidth (int value);
    /*
    <summary>
        Gets or set height of picture for center part of the footer.
    </summary>
    */
    int GetCenterFooterPictureHeight ();
    void SetCenterFooterPictureHeight (int value);
    /*
    <summary>
        Gets or set width of picture for center part of the header.
    </summary>
    */
    int GetCenterHeaderPictureWidth ();
    void SetCenterHeaderPictureWidth (int value);
    /*
    <summary>
        Gets or set height of picture for center part of the header.
    </summary>
    */
    int GetCenterHeaderPictureHeight ();
    void SetCenterHeaderPictureHeight (int value);
    int GetLeftFooterPictureWidth ();
    void SetLeftFooterPictureWidth (int value);
    /*
    <summary>
        Gets or set height of picture for left part of the footer.
    </summary>
    */
    int GetLeftFooterPictureHeight ();
    void SetLeftFooterPictureHeight (int value);
    /*
    <summary>
        Gets or set width of picture for left part of the header.
    </summary>
    */
    int GetLeftHeaderPictureWidth ();
    void SetLeftHeaderPictureWidth (int value);
    /*
    <summary>
        Gets or set height of picture for left part of the header.
    </summary>
    */
    int GetLeftHeaderPictureHeight ();
    void SetLeftHeaderPictureHeight (int value);
    /*
    <summary>
        Gets or set width of picture for right part of the footer.
    </summary>
    */
    int GetRightFooterPictureWidth ();
    void SetRightFooterPictureWidth (int value);
    /*
    <summary>
        Gets or set height of picture for right part of the footer.
    </summary>
    */
    int GetRightFooterPictureHeight ();
    void SetRightFooterPictureHeight (int value);
    /*
    <summary>
        Gets or set width of picture for right part of the header.
    </summary>
    */
    int GetRightHeaderPictureWidth ();
    void SetRightHeaderPictureWidth (int value);
    /*
    <summary>
        Gets or set height of picture for right part of the header.
    </summary>
    */
    int GetRightHeaderPictureHeight ();
    void SetRightHeaderPictureHeight (int value);
    virtual intrusive_ptr<Bitmap> GetBackgoundImage ();
    virtual void SetBackgoundImage (intrusive_ptr<Bitmap> value);
    /*
    <summary>
        Returns ods page background. Read-only.
    </summary>
    */
    intrusive_ptr<OdsPageBackground> GetODSPageBackground ();
    virtual int GetStoreSize (ExcelVersion version);
    /*
    <summary>
        Returns page width in points. Read-only.
    </summary>
    */
    double GetPageWidth ();
    /*
    <summary>
        Returns page width in points. Read-only.
    </summary>
    */
    double GetPageHeight ();
    void Copy (intrusive_ptr<PageSetup> source);
    bool GetIsSettingsNotValid ();
    void SetIsSettingsNotValid (bool value);
    virtual bool GetAutoFirstPageNumber ();
    virtual void SetAutoFirstPageNumber (bool value);
    virtual bool GetBlackAndWhite ();
    virtual void SetBlackAndWhite (bool value);
    virtual double GetBottomMargin ();
    virtual void SetBottomMargin (double value);
    virtual LPCWSTR_S GetCenterFooter ();
    virtual void SetCenterFooter (LPCWSTR_S value);
    //std::vector<System.Byte> GetPrinterSettings ();
    //void SetPrinterSettings (std::vector<System.Byte> value);
    virtual intrusive_ptr<Image> GetCenterFooterImage ();
    virtual void SetCenterFooterImage (intrusive_ptr<Image> value);
    virtual LPCWSTR_S GetCenterHeader ();
    virtual void SetCenterHeader (LPCWSTR_S value);
    virtual intrusive_ptr<Image> GetCenterHeaderImage ();
    virtual void SetCenterHeaderImage (intrusive_ptr<Image> value);
    virtual bool GetCenterHorizontally ();
    virtual void SetCenterHorizontally (bool value);
    virtual bool GetCenterVertically ();
    virtual void SetCenterVertically (bool value);
    virtual int GetCopies ();
    virtual void SetCopies (int value);
    virtual bool GetDraft ();
    virtual void SetDraft (bool value);
    virtual int GetFirstPageNumber ();
    virtual void SetFirstPageNumber (int value);
    virtual double GetFooterMarginInch ();
    virtual void SetFooterMarginInch (double value);
    virtual bool GetFitToPagesTall ();
    virtual void SetFitToPagesTall (bool value);
    virtual bool GetFitToPagesWide ();
    virtual void SetFitToPagesWide (bool value);
    virtual double GetHeaderMarginInch ();
    virtual void SetHeaderMarginInch (double value);
    /*
    <summary>
        Gets or sets horizontal resolution in dpi.
    </summary>
    */
    int GetHResolution ();
    void SetHResolution (int value);
    /*
    <summary>
        Represents full header string. Read only.
    </summary>
    */
    LPCWSTR_S GetFullHeaderString ();
    void SetFullHeaderString (LPCWSTR_S value);
    /*
    <summary>
        Gets footer full string. Read only.
    </summary>
    */
    LPCWSTR_S GetFullFooterString ();
    void SetFullFooterString (LPCWSTR_S value);
    /*
    <summary>
        Represents first page header string. Read only.
    </summary>
    */
    LPCWSTR_S GetFirstHeaderString ();
    void SetFirstHeaderString (LPCWSTR_S value);
    /*
    <summary>
        Gets first page footer string. Read only.
    </summary>
    */
    LPCWSTR_S GetFirstFooterString ();
    void SetFirstFooterString (LPCWSTR_S value);
    /*
    <summary>
        Gets Odd page header string. Read only.
    </summary>
    */
    LPCWSTR_S GetOddHeaderString ();
    void SetOddHeaderString (LPCWSTR_S value);
    /*
    <summary>
        Gets Odd page footer string. Read only.
    </summary>
    */
    LPCWSTR_S GetOddFooterString ();
    void SetOddFooterString (LPCWSTR_S value);
    /*
    <summary>
        Gets Even page header string. Read only.
    </summary>
    */
    LPCWSTR_S GetEvenHeaderString ();
    void SetEvenHeaderString (LPCWSTR_S value);
    /*
    <summary>
        Gets OddEven page footer string. Read only.
    </summary>
    */
    LPCWSTR_S GetEvenFooterString ();
    void SetEvenFooterString (LPCWSTR_S value);
    /*
    <summary>
        Indicates whether align header footer margins with page margins.default is 1
    </summary>
    */
    BYTE GetAlignWithMargins ();
    void SetAlignWithMargins (BYTE value);
    /*
    <summary>
        Indicates whether different odd and even page headers and footers.default is 0
    </summary>
    */
    BYTE GetDifferentOddEven ();
    void SetDifferentOddEven (BYTE value);
    /*
    <summary>
        Indicates whether scale header and footer with document scaling.default is 1
    </summary>
    */
    BYTE GetScaleWithDoc ();
    void SetScaleWithDoc (BYTE value);
    /*
    <summary>
        Indicates whether different first page header and footer.default is 0
    </summary>
    */
    BYTE GetDifferentFirst ();
    void SetDifferentFirst (BYTE value);
    /*
    <summary>
        Gets or sets vertical resolution in dpi.
    </summary>
    */
    int GetVResolution ();
    void SetVResolution (int value);
    virtual LPCWSTR_S GetLeftFooter ();
    virtual void SetLeftFooter (LPCWSTR_S value);
    virtual intrusive_ptr<Image> GetLeftFooterImage ();
    virtual void SetLeftFooterImage (intrusive_ptr<Image> value);
    virtual LPCWSTR_S GetLeftHeader ();
    virtual void SetLeftHeader (LPCWSTR_S value);
    virtual intrusive_ptr<Image> GetLeftHeaderImage ();
    virtual void SetLeftHeaderImage (intrusive_ptr<Image> value);
    virtual double GetLeftMargin ();
    virtual void SetLeftMargin (double value);
    virtual OrderType GetOrder ();
    virtual void SetOrder (OrderType value);
    virtual PageOrientationType GetOrientation ();
    virtual void SetOrientation (PageOrientationType value);
    virtual PaperSizeType GetPaperSize ();
    virtual void SetPaperSize (PaperSizeType value);
    /*
    <summary>
        Sets the custom paper size. Unit mm.
    </summary>
    */
    void SetCustomPaperSize (float width,float height);
    /*
    <summary>
        Returns or sets the name of custom paper that is from printer.
    </summary>
    */
    LPCWSTR_S GetCustomPaperSizeName ();
    void SetCustomPaperSizeName (LPCWSTR_S value);
    /*
    <summary>
        Returns whether paper size is automatic. Read only.
    </summary>
    */
    bool GetIsAutoPaperSize ();
    virtual PrintCommentType GetPrintComments ();
    virtual void SetPrintComments (PrintCommentType value);
    virtual PrintErrorsType GetPrintErrors ();
    virtual void SetPrintErrors (PrintErrorsType value);
    virtual bool GetPrintNotes ();
    virtual void SetPrintNotes (bool value);
    virtual int GetPrintQuality ();
    virtual void SetPrintQuality (int value);
    int GetRecordCode ();
    long GetStreamPos ();
    void SetStreamPos (long value);
    virtual LPCWSTR_S GetRightFooter ();
    virtual void SetRightFooter (LPCWSTR_S value);
    virtual intrusive_ptr<Image> GetRightFooterImage ();
    virtual void SetRightFooterImage (intrusive_ptr<Image> value);
    virtual LPCWSTR_S GetRightHeader ();
    virtual void SetRightHeader (LPCWSTR_S value);
    virtual intrusive_ptr<Image> GetRightHeaderImage ();
    virtual void SetRightHeaderImage (intrusive_ptr<Image> value);
    static double DEFAULT_TOP_MARGIN ();
    static double DEFAULT_BOTTOM_MARGIN ();
    static double DEFAULT_LEFT_MARGIN ();
    static double DEFAULT_RIGHT_MARGIN ();
private:
};
}}
