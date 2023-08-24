#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "XlsObject.h"
#include "IWorkbook.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS XlsWorkbook : public virtual XlsObject,public virtual IWorkbook
{
    friend class ChartTextArea;
    friend class IInternalWorksheet;
    friend class IInternalAddtionalFormat;
    friend class AddtionalFormatWrapper;
    friend class FontWrapper;
    friend class XlsWorksheetBase;
    friend class XlsPivotTable;
    friend class XlsPivotCachesCollection;
public:
    //virtual intrusive_ptr<IMarkersDesigner> CreateTemplateMarkersProcessor ();
    /*
    <summary>
        Closes the object and saves changes into specified file.
    </summary>
    <param name="Filename">
            File name in which workbook will be saved if SaveChanges is true.
    </param>
    */
    virtual void Close (LPCWSTR_S Filename);
    virtual void Close (bool SaveChanges,LPCWSTR_S Filename);
    virtual void Close (bool saveChanges);
    virtual void Close ();
    virtual intrusive_ptr<IFont> AddFont (intrusive_ptr<IFont> fontToAdd);
    virtual void Activate ();
    //System.Collections.Generic.List`1[[System.Collections.Generic.Dictionary`2[[System.Int32, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089],[Spire.Xls.PageColRow, Spire.XLS, Version=12.7.7.0, Culture=neutral, PublicKeyToken=null]], mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089]] SplitPageInfo (intrusive_ptr<ConverterSetting> converterSetting);
    double PixelsToWidth (double pixels);
    double ConvertUnits (double value,MeasureUnits from,MeasureUnits to);
    LPCWSTR_S DecodeName (LPCWSTR_S name);
    LPCWSTR_S EncodeName (LPCWSTR_S strName);
    int GetBookIndex (int referenceIndex);
    bool IsExternalReference (int reference);
    bool IsFormatted (int xfIndex);
    virtual void Dispose ();
    virtual void SetIsRightToLeft (bool value);
    virtual bool GetIsVScrollBarVisible ();
    virtual void SetIsVScrollBarVisible (bool value);
    bool GetLoading ();
    virtual bool GetIsWindowProtection ();
    virtual int GetMaxColumnCount ();
    virtual int GetMaxRowCount ();
    double GetMaxDigitWidth ();
    virtual LPCWSTR_S GetPasswordToOpen ();
    virtual void SetPasswordToOpen (LPCWSTR_S value);
    virtual bool GetReadOnly ();
    virtual bool GetReadOnlyRecommended ();
    virtual void SetReadOnlyRecommended (bool value);
    virtual LPCWSTR_S GetRowSeparator ();
    virtual intrusive_ptr<IStyles> GetStyles ();
    //virtual intrusive_ptr<ITabSheets> GetTabSheets ();
    virtual bool GetThrowOnUnknownNames ();
    virtual void SetThrowOnUnknownNames (bool value);
    bool ContainsFont (intrusive_ptr<XlsFont> font);
    double FileWidthToPixels (double fileWidth);
    double WidthToFileWidth (double width);
    virtual void CopyToClipboard ();
    virtual void SetWriteProtectionPassword (LPCWSTR_S password);
    virtual intrusive_ptr<IWorkbook> Clone ();
    virtual void Unprotect ();
    void Unprotect (LPCWSTR_S password);
    virtual void Protect (bool bIsProtectWindow,bool bIsProtectContent);
    void Protect (bool bIsProtectWindow,bool bIsProtectContent,LPCWSTR_S password);
    //virtual void SetSeparators (System.Char argumentsSeparator,System.Char arrayRowsSeparator);
    virtual void SaveAs (intrusive_ptr<Stream> stream,LPCWSTR_S separator);
    virtual void SaveAs (LPCWSTR_S fileName,LPCWSTR_S separator);
    std::vector<intrusive_ptr<Image>> SaveAsImages (float dpiX,float dpiY);
    intrusive_ptr<Image> SaveAsImages (int sheetIndex,float dpiX,float dpiY);
    intrusive_ptr<Image> SaveAsImages (int sheetIndex,int firstRow,int firstColumn,int lastRow,int lastColumn,float dpiX,float dpiY);
    void SaveAsEmfStream (int sheetIndex,intrusive_ptr<Stream> EmfStream,int firstRow,int firstColumn,int lastRow,int lastColumn);
    //void SaveChartAsEmfImage (intrusive_ptr<Worksheet> worksheet,int chartIndex,intrusive_ptr<ConverterSetting> imageOrPrintOptions,intrusive_ptr<Stream> emfStream);
    std::vector<intrusive_ptr<Image>> SaveChartAsImage (intrusive_ptr<Worksheet> worksheet,intrusive_ptr<ConverterSetting> imageOrPrintOptions);
    intrusive_ptr<Image> SaveChartAsImage (intrusive_ptr<ChartSheet> chartSheet,intrusive_ptr<ConverterSetting> imageOrPrintOptions);
    intrusive_ptr<Image> SaveChartAsImage (intrusive_ptr<Worksheet> worksheet,int charIndex,intrusive_ptr<ConverterSetting> imageOrPrintOptions);
    virtual intrusive_ptr<IXLSRange> FindOne (double findValue,FindType flags);
    virtual intrusive_ptr<IXLSRange> FindOne (LPCWSTR_S findValue,FindType flags);
    virtual intrusive_ptr<IXLSRange> FindOne (bool findValue);
    virtual intrusive_ptr<IXLSRange> FindOne (intrusive_ptr<DateTime> findValue);
    virtual intrusive_ptr<IXLSRange> FindOne (intrusive_ptr<TimeSpan> findValue);
    virtual intrusive_ptr<IList<CellRange>> FindAll (LPCWSTR_S findValue,FindType flags);
    virtual intrusive_ptr<IList<CellRange>> FindAll (double findValue,FindType flags);
    virtual intrusive_ptr<IList<CellRange>> FindAll (bool findValue);
    virtual intrusive_ptr<IList<CellRange>> FindAll (intrusive_ptr<DateTime> findValue);
    virtual intrusive_ptr<IList<CellRange>> FindAll (intrusive_ptr<TimeSpan> findValue);
    virtual void Replace (LPCWSTR_S oldValue,LPCWSTR_S newValue);
    virtual void Replace (LPCWSTR_S oldValue,intrusive_ptr<DateTime> newValue);
    virtual void Replace (LPCWSTR_S oldValue,double newValue);
    virtual void Replace (LPCWSTR_S oldValue,std::vector<LPCWSTR_S> newValues,bool isVertical);
    virtual void Replace (LPCWSTR_S oldValue,std::vector<int> newValues,bool isVertical);
    virtual void Replace (LPCWSTR_S oldValue,std::vector<double> newValues,bool isVertical);
    //virtual void Replace (LPCWSTR_S oldValue,System.Data.DataTable newValues,bool isFieldNamesShown);
    //virtual void Replace (LPCWSTR_S oldValue,System.Data.DataColumn newValues,bool isFieldNamesShown);
    virtual intrusive_ptr<IFont> CreateFont ();
    virtual intrusive_ptr<IFont> CreateFont (Font* nativeFont);
    virtual intrusive_ptr<IFont> CreateFont (intrusive_ptr<IFont> baseFont);
    intrusive_ptr<IFont> CreateFont (intrusive_ptr<IFont> baseFont,bool bAddToCollection);
    virtual ExcelColors SetColorOrGetNearest (intrusive_ptr<Color> color);
    void SetActiveWorksheet (intrusive_ptr<XlsWorksheetBase> sheet);
    void SetChanged ();
    virtual ExcelColors SetColorOrGetNearest (int r,int g,int b);
    void SetMaxDigitWidth (int w);
    virtual ExcelColors GetNearestColor (intrusive_ptr<Color> color);
    ExcelColors GetNearestColor (intrusive_ptr<Color> color,int iStartIndex);
    virtual ExcelColors GetNearestColor (int r,int g,int b);
    virtual intrusive_ptr<Color> GetPaletteColor (ExcelColors color);
    virtual void ResetPalette ();
    virtual void SetPaletteColor (int index,intrusive_ptr<Color> color);
    //virtual void SaveAs (LPCWSTR_S fileName,System.Web.HttpResponse response);
    //virtual void SaveAs (LPCWSTR_S fileName,ExcelSaveType saveType,System.Web.HttpResponse response);
    virtual void SaveAs (intrusive_ptr<Stream> stream,ExcelSaveType saveType);
    void SaveAs (intrusive_ptr<Stream> stream,ExcelSaveType saveType,ExcelVersion version);
    virtual void SaveAs (intrusive_ptr<Stream> stream);
    virtual void SaveAs (LPCWSTR_S fileName,ExcelSaveType saveType);
    void SaveAs (LPCWSTR_S fileName,ExcelSaveType saveType,ExcelVersion version);
    void SaveToXlsm (LPCWSTR_S fileName);
    void SaveToXlsm (intrusive_ptr<Stream> stream);
    void SaveToPdf (intrusive_ptr<Stream> stream);
    void SaveToPdf (LPCWSTR_S fileName);
    void SaveAsImageOrXps (intrusive_ptr<Stream> stream,FileFormat fileFormat);
    void SaveAsImageOrXps (LPCWSTR_S fileName,FileFormat fileFormat);
    virtual void SaveAsHtml (LPCWSTR_S fileName,intrusive_ptr<HTMLOptions> saveOption);
    virtual void SaveAs (LPCWSTR_S FileName);
    virtual void Save ();
    double GetStandardRowHeight ();
    void SetStandardRowHeight (double value);
    int GetStandardRowHeightInPixels ();
    void SetStandardRowHeightInPixels (int value);
    int GetMaxXFCount ();
    int GetMaxIndent ();
    virtual ExcelVersion GetVersion ();
    virtual void SetVersion (ExcelVersion value);
    virtual intrusive_ptr<IWorksheets> GetWorksheets ();
    intrusive_ptr<XlsAddInFunctionsCollection> GetInnerAddInFunctions ();
    intrusive_ptr<XlsFontsCollection> GetInnerFonts ();
    //System.Drawing.Graphics GetInnerGraphics ();
    //System.Collections.Generic.List`1[[intrusive_ptr<Color>, System.Drawing, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b03f5f7f11d50a3a]] GetInnerPalette ();
    virtual intrusive_ptr<INameRanges> GetNames ();
    intrusive_ptr<DataConnections> GetDataConns ();
    intrusive_ptr<ExternalLinkCollection> GetExternalLinks ();
    int GetObjectCount ();
    intrusive_ptr<IXLSRange> GetOleSize ();
    void SetOleSize (intrusive_ptr<IXLSRange> value);
    virtual intrusive_ptr<IWorksheet> GetActiveSheet ();
    virtual int GetActiveSheetIndex ();
    virtual void SetActiveSheetIndex (int value);
    virtual LPCWSTR_S GetCodeName ();
    virtual void SetCodeName (LPCWSTR_S value);
    //virtual std::vector<intrusive_ptr<Color>> GetPalette ();
    virtual bool GetDate1904 ();
    virtual void SetDate1904 (bool value);
    virtual LPCWSTR_S GetStandardFont ();
    virtual void SetStandardFont (LPCWSTR_S value);
    virtual double GetStandardFontSize ();
    virtual void SetStandardFontSize (double value);
    virtual bool GetDisableMacrosStart ();
    virtual void SetDisableMacrosStart (bool value);
    int GetFirstCharSize ();
    void SetFirstCharSize (int value);
    int GetSecondCharSize ();
    void SetSecondCharSize (int value);
    LPCWSTR_S GetFullFileName ();
    bool GetHasDuplicatedNames ();
    void SetHasDuplicatedNames (bool value);
    virtual bool GetHasMacros ();
    virtual bool GetSaved ();
    virtual void SetSaved (bool value);
    bool GetSaving ();
    virtual LPCWSTR_S GetAuthor ();
    virtual void SetAuthor (LPCWSTR_S value);
    virtual intrusive_ptr<IAddInFunctions> GetAddInFunctions ();
    virtual bool GetAllow3DRangesInDataValidation ();
    virtual void SetAllow3DRangesInDataValidation (bool value);
    virtual LPCWSTR_S GetArgumentsSeparator ();
    virtual intrusive_ptr<IBuiltInDocumentProperties> GetBuiltInDocumentProperties ();
    virtual intrusive_ptr<ICharts> GetCharts ();
    //System.Collections.Generic.List`1[[Spire.Xls.ChartSheet, Spire.XLS, Version=12.7.7.0, Culture=neutral, PublicKeyToken=null]] GetChartsheets ();
    virtual intrusive_ptr<ICustomDocumentProperties> GetCustomDocumentProperties ();
    int GetCurrentObjectId ();
    void SetCurrentObjectId (int value);
    int GetCurrentShapeId ();
    void SetCurrentShapeId (int value);
    int GetCurrentHeaderId ();
    void SetCurrentHeaderId (int value);
    int GetDefaultXFIndex ();
    void SetDefaultXFIndex (int value);
    virtual bool GetDetectDateTimeInValue ();
    virtual void SetDetectDateTimeInValue (bool value);
    virtual int GetDisplayedTab ();
    virtual void SetDisplayedTab (int value);
    virtual bool GetDisplayWorkbookTabs ();
    virtual void SetDisplayWorkbookTabs (bool value);
    virtual bool GetIsCellProtection ();
    virtual bool GetIsDisplayPrecision ();
    virtual void SetIsDisplayPrecision (bool value);
    virtual bool GetIsHScrollBarVisible ();
    virtual void SetIsHScrollBarVisible (bool value);
    bool GetIsLoaded ();
    virtual bool GetIsRightToLeft ();
    //static intrusive_ptr<Color> DEF_COMENT_PARSE_COLOR ();
    static int DEF_FIRST_USER_COLOR ();
    static LPCWSTR_S DEF_BAD_SHEET_NAME ();
private:
};
}}
