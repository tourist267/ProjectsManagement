#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS Workbook : public virtual Object
{
    friend class Chart;
    friend class ChartSheet;
    friend class Worksheet;
    friend class WorkbookObjectsCollection;
    friend class ChartPlotArea;
    friend class IDataValidationCollection;
    friend class IDataValidationTable;
    friend class XlsDataValidationTable;
    friend class XlsDataValidationCollection;
public:
    Workbook();
    ~Workbook();
    /*
    <summary>
        Save workbook to image.
    </summary>
    <param name="sheetIndex">sheet Index</param>
    <param name="dpiX">Dpi X</param>
    <param name="dpiY">Dpi Y</param>
    <returns></returns>
    */
    intrusive_ptr<Image> SaveAsImage (int sheetIndex,float dpiX,float dpiY);
    /*
    <summary>
        Save workbook to an XML data file. 
    </summary>
    <param name="fileName">XML file name.</param>
    */
    void SaveAsXml (LPCWSTR_S fileName);
    /*
    <summary>
        Save workbook as XML format to stream. 
    </summary>
    <param name="stream">Stream object.</param>
    */
    void SaveAsXml (intrusive_ptr<Stream> stream);
    //std::vector<intrusive_ptr<Image>> SaveChartAsEmfImage (intrusive_ptr<Worksheet> worksheet);
    //intrusive_ptr<Image> SaveChartAsEmfImage (intrusive_ptr<Worksheet> worksheet,int chartIndex);
    //void SaveChartAsEmfImage (intrusive_ptr<Worksheet> worksheet,int chartIndex,intrusive_ptr<Stream> emfStream);
    /*
    <summary>
        Save chart to image.
    </summary>
    <param name="worksheet">chart sheet</param>
    */
    intrusive_ptr<Image> SaveChartAsImage (intrusive_ptr<ChartSheet> chartSheet);
    /*
    <summary>
        Save chart to images.
    </summary>
    <param name="worksheet">worksheet instance</param>
    */
    std::vector<intrusive_ptr<Image>> SaveChartAsImage (intrusive_ptr<Worksheet> worksheet);
    /*
    <summary>
        Save chart to image.
    </summary>
    <param name="worksheet">work sheet</param>
    <param name="chartIndex">chart index</param>
    */
    intrusive_ptr<Image> SaveChartAsImage (intrusive_ptr<Worksheet> worksheet,int chartIndex);
    /*
    <summary>
        Save workbook as template to file.
    </summary>
    <param name="fileName">File name.</param>
    */
    void SaveAsTemplate (LPCWSTR_S fileName);
    //void SaveAsTemplate (LPCWSTR_S fileName,System.Web.HttpResponse response);
    //void SaveToHttpResponse (LPCWSTR_S FileName,System.Web.HttpResponse response);
    //void SaveToHttpResponse (LPCWSTR_S FileName,System.Web.HttpResponse response,bool isInlineMode);
    //void SaveToHttpResponse (LPCWSTR_S FileName,System.Web.HttpResponse response,HttpContentType httpContextType);
    //void SaveToHttpResponse (LPCWSTR_S FileName,System.Web.HttpResponse response,HttpContentType httpContextType,FileFormat fileFormat);
    /*
    <summary>
        Save workbook the stream
    </summary>
    <param name="Stream">Stream object</param>
    */
    void SaveToStream(intrusive_ptr<Stream> stream);
    /*
    <summary>
        Save workbook to stream.
    </summary>
    <param name="Stream"></param>
    <param name="fileFormat"></param>
    */
    void SaveToStream (intrusive_ptr<Stream> stream,FileFormat fileFormat);
    /*
    <summary>
         Save workbook the stream.
        <example>The following code illustrates how to saves the active worksheet as stream with separator:
        <code>
        //Create workbook
        Workbook workbook = new Workbook();
        workbook.LoadFromFile("Sample.xlsx");
        //Save to stream
        Stream stream = new MemoryStream();
        workbook.SaveToFile(stream , ",");
        </code>
        </example>
    </summary>
    <param name="stream">Stream object.</param>
    <param name="separator">Separator.</param>
    */
    void SaveToStream (intrusive_ptr<Stream> stream,LPCWSTR_S separator);
    void SetMaxDigitWidth (int w);
    /*
    <summary>
        set the size of the visible range of cells when this workbook is displyed as an embedded obect in another document;
    </summary>
    <param name="firstRow">the visible range's first row index</param>
    <param name="firstColumn">the visible range's first column index</param>
    <param name="lastRow">the visible range's last row index</param>
    <param name="lastColumn">the visible range's last column index</param>
    */
    void SetOleSize (int firstRow,int firstColumn,int lastRow,int lastColumn);
    /*
    <summary>
        Sets write protection password.
    </summary>
    <param name="password">Password to set</param>
    */
    void SetWriteProtectionPassword (LPCWSTR_S password);
    /*
    <summary>
        unprotect file
            also upprotect workbook window and structure
    </summary>
    */
    void UnProtect ();
    /*
    <summary>
        unprotect file
            also upprotect workbook window and structure
    </summary>
    <param name="bookWindowAndStructurePassword">password for protect workbook window and structure</param>
    */
    void UnProtect (LPCWSTR_S bookWindowAndStructurePassword);
    /*
    <summary>
        unprotect workbook window and structure
    </summary>
    <param name="password">password</param>
    */
    void UnProtectWorkbook (LPCWSTR_S password);
    intrusive_ptr<ChartSheet> GetChartSheetByName (LPCWSTR_S name);
    /*
    <summary>
        get the size of the visible range of cells when this workbook is displyed as an embedded obect in another document;
    </summary>
    <returns>if there does not set the size ,return null</returns>
    */
    intrusive_ptr<IXLSRange> GetOleSize ();
    /*
    <summary>
        Indicates whether the workbook has any tracked changes
    </summary>
    */
    bool GetHasTrackedChanges ();
    /*
    <summary>
        Reject all tracked changes in the workbook. 
    </summary>
    */
    void RejectAllTrackedChanges ();
    /*
    <summary>
        Accept all tracked changes in the workbook. 
    </summary>
    */
    void AcceptAllTrackedChanges ();
    //intrusive_ptr<IDigitalSignatures> AddDigitalSignature (System.Security.Cryptography.X509Certificates.X509Certificate2 certificate,LPCWSTR_S comments,tm signTime);
    //intrusive_ptr<IDigitalSignatures> GetDigitalSignatures ();
    /*
    <summary>
        Remove all DigitalSignature in this file.
    </summary>
    */
    void RemoveAllDigitalSignatures ();
    /*
    <summary>
        Indicates whether this spreadsheet is digitally signed.
    </summary>
    */
    bool GetIsDigitallySigned ();
    /*
    <summary>
        Gets theme color.
    </summary>
    <param name="type">The theme color type.</param>
    <returns>The theme color.</returns>
    */
    intrusive_ptr<Color> GetThemeColor (ThemeColorType type);
    /*
    <summary>
        Sets the theme color
    </summary>
    <param name="type">The theme color type.</param>
    <param name="color">the theme color</param>
    */
    void SetThemeColor (ThemeColorType type, intrusive_ptr<Color> color);
    /*
    <summary>
        Copy the theme from source workbook
    </summary>
    <param name="srcWorkbook">source workbook.</param>
    */
    void CopyTheme (intrusive_ptr<Workbook> srcWorkbook);
    /*
    <summary>
        Copy the theme color from source workbook
    </summary>
    <param name="srcWorkbook">source workbook.</param>
    */
    void CopyThemeColor (intrusive_ptr<Workbook> srcWorkbook);
    /*
    <summary>
        Loads a file and imports its data. 
    </summary>
    <param name="FileName">File name.</param>
    */
    void LoadFromFile (LPCWSTR_S fileName);
    /*
    <summary>
        Loads a file and imports its data. 
    </summary>
    <param name="fileName">File name</param>
    <param name="preserveMode">Preserve mode</param>
    */
    void LoadFromFile (LPCWSTR_S fileName,bool preserveMode);
    /*
    <summary>
        Loads a file and imports its data. 
    </summary>
    <param name="fileName">File name</param>
    <param name="version">Excel version</param>
    */
    void LoadFromFile (LPCWSTR_S fileName,ExcelVersion version);
    /*
    <summary>
        Loads text files stream with user defined separator. 
    </summary>
    <param name="fileName">File name</param>
    <param name="separator">Delimiter of text file. </param>
    */
    void LoadFromFile (LPCWSTR_S fileName,LPCWSTR_S separator);
    /*
    <summary>
        Loads text files with user defined separator.
    </summary>
    <param name="fileName">File name.</param>
    <param name="separator">Delimiter of text file.</param>
    <param name="row">Start row.</param>
    <param name="column">Start column.</param>
    */
    void LoadFromFile (LPCWSTR_S fileName,LPCWSTR_S separator,int row,int column);
    /*
    <summary>
        Loads text files with user defined separator.
    </summary>
    <param name="fileName">File name.</param>
    <param name="separator">Delimiter of text file.</param>
    <param name="row">Start row.</param>
    <param name="column">Start column.</param>
    <param name="version">workbook version</param>
    */
    void LoadFromFile (LPCWSTR_S fileName,LPCWSTR_S separator,int row,int column,ExcelVersion version);
    /*
    <summary>
        Loads text files with user defined separator.
    </summary>
    <param name="fileName">File name.</param>
    <param name="separator">Delimiter of text file.</param>
    <param name="row">Start row.</param>
    <param name="column">Start column.</param>
    <param name="version">workbook version</param>
    <param name="encoding">Text Encoding</param>
    */
    void LoadFromFile (LPCWSTR_S fileName,LPCWSTR_S separator,int row,int column,ExcelVersion version,intrusive_ptr<Encoding> encoding);
    /*
    <summary>
        Load workbook from the stream.
    </summary>
    <param name="stream">Stream contains data.</param>
    */
    void LoadFromStream (intrusive_ptr<Stream> stream);
    void LoadFromStream(intrusive_ptr<Stream> stream, LPCWSTR_S separator);
    /*
    <summary>
        Load workbook from the stream.
    </summary>
    <param name="stream">Stream contains data.</param>
    <param name="loadStyles">Indicates whether loads styles.</param>
    */
    void LoadFromStream (intrusive_ptr<Stream> stream,bool loadStyles);
    /*
    <summary>
        Load workbook from the stream.
    </summary>
    <param name="stream">Stream contains data</param>
    <param name="version">Excel version</param>
    */
    void LoadFromStream (intrusive_ptr<Stream> stream,ExcelVersion version);
    /*
    <summary>
        Loads text files stream with user defined separator.max row 60000.
    </summary>
    <param name="stream">File stream.</param>
    <param name="separator">Delimiter of text file.</param>
    <param name="row">Start row.</param>
    <param name="column">Start column.</param>
    */
    void LoadFromStream (intrusive_ptr<Stream> stream,LPCWSTR_S separator,int row,int column);
    /*
    <summary>
        Loads text files stream with user defined separator. Version2007 support 60000+ row 
    </summary>
    <param name="stream">File stream.</param>
    <param name="separator">Delimiter of text file.</param>
    <param name="row">Start row.</param>
    <param name="column">Start column.</param>
    <param name="version">Excel version.</param>
    */
    void LoadFromStream (intrusive_ptr<Stream> stream,LPCWSTR_S separator,int row,int column,ExcelVersion version);
    /*
    <summary>
        Loads a xml file and imports its data. 
    </summary>
    <param name="fileName">File name.</param>
    */
    void LoadFromXml (LPCWSTR_S fileName);
    /*
    <summary>
        Loads a xml file and imports its data. 
    </summary>
    <param name="stream">Stream contains data.</param>
    */
    void LoadFromXml (intrusive_ptr<Stream> stream);
    /*
    <summary>
        Loads a html file and imports its data. 
    </summary>
    <param name="fileName">File name.</param>
    */
    void LoadFromHtml (LPCWSTR_S fileName);
    /*
    <summary>
        Loads a html file and imports its data. 
    </summary>
    <param name="stream">Stream contains data.</param>
    */
    void LoadFromHtml (intrusive_ptr<Stream> stream);
    /*
    <summary>
        Loads a Mhtml file and imports its data. 
    </summary>
    <param name="fileName">File name.</param>
    */
    void LoadFromMHtml (LPCWSTR_S fileName);
    /*
    <summary>
        Loads a Mhtml file and imports its data. 
    </summary>
    <param name="stream">Stream contains data.</param>
    */
    void LoadFromMHtml (intrusive_ptr<Stream> stream);
    /*
    <summary>
        Load workbook from the excel template.
    </summary>
    <param name="fileName">File name</param>
    */
    void LoadTemplateFromFile (LPCWSTR_S fileName);
    /*
    <summary>
        Load workbook from the excel template.
    </summary>
    <param name="fileName">File name</param>
    <param name="loadStyles">Indicates whehter load styles.</param>
    */
    void LoadTemplateFromFile (LPCWSTR_S fileName,bool loadStyles);
    /*
    <summary>
        Saves the workbook to html
    </summary>
    <param name="fileName">File name.</param>
    */
    void SaveToHtml (LPCWSTR_S fileName);
    /*
    <summary>
        Saves the workbook to html
    </summary>
    <param name="fileName">File name.</param>
    <param name="skipHideSheet">Whether skip hidden sheet.</param>
    */
    void SaveToHtml (LPCWSTR_S fileName,bool skipHideSheet);
    /*
    <summary>
        Saves changes to the workbook in a different file
    </summary>
    <param name="fileName">File name.</param>
    */
    void SaveToFile (LPCWSTR_S fileName);
    /*
    <summary>
        Saves changes to the workbook in a different file
    </summary>
    <param name="fileName">File name</param>
    <param name="fileFormat">File format</param>
    */
    void SaveToFile (LPCWSTR_S fileName,FileFormat fileFormat);
    /*
    <summary>
         Saves changes to the workbook in a different file.
        <example>The following code illustrates how to save the active worksheet in a different file with separator:
        <code>
        //Create workbook
        Workbook workbook = new Workbook();
        workbook.LoadFromFile("Sample.xlsx");
        //Save to file
        workbook.SaveToFile("Result.csv" , ",");
        </code>
        </example>
    </summary>
    <param name="fileName">File name.</param>
    <param name="separator">Current separator.</param>
    */
    void SaveToFile (LPCWSTR_S fileName,LPCWSTR_S separator);
    /*
    <summary>
        Saves changes to the workbook in a different file
    </summary>
    <param name="fileName">File name</param>
    <param name="fileFormat">File format</param>
    <param name="retainHiddenDataToCSV">Retain hidden data when save to csv.</param>
    */
    void SaveToFile (LPCWSTR_S fileName,FileFormat fileFormat,bool retainHiddenDataToCSV);
    /*
    <summary>
        Saves changes to the workbook in a different file
    </summary>
    <param name="fileName">File name</param>
    <param name="textSaveOptions">Text save options.</param>
    */
    void SaveToFile (LPCWSTR_S fileName,intrusive_ptr<TextSaveOptions> textSaveOptions);
    /*
    <summary>
        Saves changes to the workbook in a different file
    </summary>
    <param name="fileName">File name</param>
    <param name="version">Excel version</param>
    */
    void SaveToFile (LPCWSTR_S fileName,ExcelVersion version);
    virtual void Dispose ();
    void AddPivotTableStyle (intrusive_ptr<PivotTableStyle> pts);
    /*
    <summary>
        Computes the string formula
    </summary>
    <param name="text"></param>
    <returns></returns>
    */
    int* CalculateFormulaValue (LPCWSTR_S text);
    /*
    <summary>
        Caculate all formula for the workbook
    </summary>
    */
    void CalculateAllValue ();
    /*
    <summary>
         Changes the palette for the spreadsheet in the specified index. 
        <example>The following code snippet illustrates how to set palette color:
        <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        Worksheet worksheet = workbook.Worksheets[0];
        //Set palette color
        workbook.ChangePaletteColor(System.Drawing.Color.Red , 10);
        //Set color
        worksheet["B2"].Style.Color = workbook.Colors[10];
        //Save to file
        workbook.SaveToFile("CellFormats.xlsx");
        </code>
        </example>
    </summary>
    <param name="color">Color structure</param>
    <param name="index">Palette index,Value should be from 0 to 55</param>
    */
    void ChangePaletteColor (intrusive_ptr<Color> color,int index);
    /*
    <summary>
        onverts column width in characters into column width in pixels.
    </summary>
    <param name="columnWidth">Column width in characters.</param>
    <returns>Column width in pixels.</returns>
    */
    double ColumnWidthToPixels (double columnWidth);
    /*
    <summary>
        Indicates whether the workbook contains specified font.
    </summary>
    <param name="font"></param>
    <returns></returns>
    */
    bool ContainsFont (intrusive_ptr<ExcelFont> font);
    /*
    <summary>
        Copies whole workbook to the clipboard.
    </summary>
    */
    void CopyToClipboard ();
    /*
    <summary>
        Copies the selected worksheet to clipboard.
    </summary>
    <param name="worksheet"></param>
    */
    void CopyToClipboard (intrusive_ptr<Worksheet> worksheet);
    /*
    <summary>
        Create a new worksheet.
    </summary>
    <returns></returns>
    */
    intrusive_ptr<Worksheet> CreateEmptySheet ();
    /*
    <summary>
         Create a new worksheet.
    </summary>
    <param name="name">Sheet name.</param>
    <returns></returns>
    */
    intrusive_ptr<Worksheet> CreateEmptySheet (LPCWSTR_S name);
    /*
    <summary>
        Create workbook with specified number of worksheets.
    </summary>
    <param name="sheetCount"></param>
    */
    void CreateEmptySheets (int sheetCount);
    /*
    <summary>
        Create workbook with specified names of worksheets.
    </summary>
    <param name="sheetNames"></param>
    */
    void CreateEmptySheets (std::vector<LPCWSTR_S> sheetNames);
    /*
    <summary>
         Creates a font object and add it to the workbook.
        <example>The following code illustrates how to create IFont object:
        <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        Worksheet worksheet = workbook.Worksheets[0];
        //Set text
        IRichTextString richText = worksheet["B2"].RichText;
        //Create font
        IFont font = workbook.CreateFont();
        //Set color
        font.Color = Color.Red;
        //Set text
        richText.Text = "Sample";
        //Set font
        richText.SetFont(0, 5, font);
        //Save to file
        workbook.SaveToFile("CellFormats.xlsx");
        </code>
        </example>
    </summary>
    <returns></returns>
    */
    intrusive_ptr<ExcelFont> CreateExcelFont();
    intrusive_ptr<ExcelFont> CreateExcelFont (intrusive_ptr<Font> font);
    intrusive_ptr<PivotStyle> CreatePivotStyle ();
    /*
    <summary>
         Finds the cell with the input bool.
        <example>This sample shows how to find all cells with specified bool value:
        <code>
        //Create workbook
        Workbook workbook = new Workbook();
        workbook.LoadFromFile("Sample.xlsx");
        //Find cells with specified bool value
        CellRange[] result = workbook.FindAllBool(true);
        </code>
        </example>
    </summary>
    <param name="boolValue">Bool value to search for</param>
    <returns>Found ranges</returns>
    */
    intrusive_ptr<IList<CellRange>> FindAllBool (bool boolValue);
    /*
    <summary>
         Finds the cell with the input double.
        <example>This sample shows how to find all cells with specified doulbe value:
        <code>
        //Create workbook
        Workbook workbook = new Workbook();
        workbook.LoadFromFile("Sample.xlsx");
        //Find cells with specified double value
        CellRange[] result = workbook.FindAllNumber(100.32 , false);
        </code>
        </example>
    </summary>
    <param name="doubleValue">Double value to search for.</param>
    <param name="formulaValue">Indicates whether includes formula value to search for.</param>
    <returns>Found ranges.</returns>
    */
    intrusive_ptr<IList<CellRange>> FindAllNumber (double doubleValue,bool formulaValue);
    /*
    <summary>
         Finds the cell with the input string.
        <example>This sample shows how to find all cells with specified string value:
        <code>
        //Create workbook
        Workbook workbook = new Workbook();
        workbook.LoadFromFile("Sample.xlsx");
        //Find cells with specified string value
        string value = "value";
        CellRange[] result = workbook.FindAllString(value , false , false);
        </code>
        </example>
    </summary>
    <param name="stringValue">String value to search for</param>
    <param name="formula">Indicates whether includes formula to search for.</param>
    <param name="formulaValue">Indicates whether includes formula value to search for.</param>
    <returns>Found ranges.</returns>
    */
    intrusive_ptr<IList<CellRange>> FindAllString (LPCWSTR_S stringValue,bool formula,bool formulaValue);
    /*
    <summary>
         Finds the cell with the input datetime.
        <example>This sample shows how to find all cells with specified DateTime value:
        <code>
        //Create workbook
        Workbook workbook = new Workbook();
        workbook.LoadFromFile("Sample.xlsx");
        //Find cells with specified DateTime value
        CellRange[] result = workbook.FindAllDateTime(DateTime.Now);
        </code>
        </example>
    </summary>
    <param name="dateTimeValue">Datetime value to search for.</param>
    <returns>Found ranges.</returns>
    */
    intrusive_ptr<IList<CellRange>> FindAllDateTime (intrusive_ptr<DateTime> dateTimeValue);
    /*
    <summary>
         Finds the cell with the input time span.
        <example>This sample shows how to find all cells with specified TimeSpan value:
        <code>
        //Create workbook
        Workbook workbook = new Workbook();
        workbook.LoadFromFile("Sample.xlsx");
        //Find cells with specified TimeSpan value
        TimeSpan value = new TimeSpan(2, 30, 30);
        CellRange[] result = workbook.FindAllTimeSpan(value);
        </code>
        </example>
    </summary>
    <param name="timeSpanValue"></param>
    <returns>Found ranges.</returns>
    */
    intrusive_ptr<IList<CellRange>> FindAllTimeSpan (intrusive_ptr<TimeSpan> timeSpanValue);
    /*
    <summary>
         Finds the cell with the input bool.
        <example>This sample shows how to find the first cell with specified bool value:
        <code>
        //Create workbook
        Workbook workbook = new Workbook();
        workbook.LoadFromFile("Sample.xlsx");
        //Find cell with specified bool value
        IXLSRange result = workbook.FindBool(true);
        </code>
        </example>
    </summary>
    <param name="boolValue">Bool value to search for.</param>
    <returns>Found range.</returns>
    */
    intrusive_ptr<CellRange> FindBool (bool boolValue);
    /*
    <summary>
         Finds the cell with the input number.
        <example>This sample shows how to find the first cell with specified double value:
        <code>
        //Create workbook
        Workbook workbook = new Workbook();
        workbook.LoadFromFile("Sample.xlsx");
        //Find cell with specified double value
        double value = 9.00;
        IXLSRange result = workbook.FindNumber(value, false);
        </code>
        </example>
    </summary>
    <param name="doubleValue">Double value to search for.</param>
    <param name="formulaValue">Indicates whether includes formula value to search for.</param>
    <returns>Found range.</returns>
    */
    intrusive_ptr<CellRange> FindNumber (double doubleValue,bool formulaValue);
    /*
    <summary>
         Finds the cell with the input string.
        <example>This sample shows how to find the first cell with specified string value:
        <code>
        //Create workbook
        Workbook workbook = new Workbook();
        workbook.LoadFromFile("Sample.xlsx");
        //Find cell with specified string value
        string value = "value";
        IXLSRange result = workbook.FindString(value, false, false);
        </code>
        </example>
    </summary>
    <param name="stringValue">String value to search for.</param>
    <param name="formula">Indicates whether includes formula to search for.</param>
    <param name="formulaValue">Indicates whether includes formula value to search for.</param>
    <returns>Found range.</returns>
    */
    intrusive_ptr<CellRange> FindString (LPCWSTR_S stringValue,bool formula,bool formulaValue);
    /*
    <summary>
         Finds the cell with the input datetime.
        <example>This sample shows how to find the first cell with specified DataTime value:
        <code>
        //Create workbook
        Workbook workbook = new Workbook();
        workbook.LoadFromFile("Sample.xlsx");
        //Find cell with specified DataTime value
        DateTime dateTime = DateTime.Now;
        IXLSRange result = workbook.FindDateTime(dateTime);
        </code>
        </example>
    </summary>
    <param name="dateTimeValue">Datetime value to search for.</param>
    <returns>Found range.</returns>
    */
    intrusive_ptr<CellRange> FindDateTime (intrusive_ptr<DateTime> dateTimeValue);
    /*
    <summary>
         Finds the cell with the input time span.
        <example>This sample shows how to find the first cell with specified TimeSpan value:
        <code>
        //Create workbook
        Workbook workbook = new Workbook();
        workbook.LoadFromFile("Sample.xlsx");
        //Find cell with specified TimeSpan value
        TimeSpan timeSpan = new TimeSpan(2, 30, 30);
        IXLSRange result = workbook.FindTimeSpan(timeSpan);
        </code>
        </example>
    </summary>
    <param name="timeSpanValue">Time span value to search for.</param>
    <returns>Found range.</returns>
    */
    intrusive_ptr<CellRange> FindTimeSpan (intrusive_ptr<TimeSpan> timeSpanValue);
    /*
    <summary>
         Find best matching Color in workbook palette. 
        <example>The following code illustrates how to get the indexed color from ExcelColors for the given color from Color structure:
        <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        Worksheet worksheet = workbook.Worksheets[0];
        //Get color
        ExcelColors color = workbook.GetMatchingColor(System.Drawing.Color.Red);
        //Set color
        worksheet["B2"].Style.KnownColor = color;
        //Save to file
        workbook.SaveToFile("CellFormats.xlsx");
        </code>
        </example>
    </summary>
    <param name="color">Color to search for.</param>
    <returns>Workbook palette color.</returns>
    */
    ExcelColors GetMatchingColor (intrusive_ptr<Color> color);
    /*
    <summary>
         Find best matching Color in workbook palette.
        <example>The following code illustrates how to get the indexed color from ExcelColors for the given color from Color structure:
        <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        Worksheet worksheet = workbook.Worksheets[0];
        //Get color
        ExcelColors color = workbook.GetMatchingColor(255, 0, 0);
        //Set color
        worksheet["B2"].Style.KnownColor = color;
        //Save to file
        workbook.SaveToFile("CellFormats.xlsx");
        </code>
        </example>
    </summary>
    <param name="r">Red color.</param>
    <param name="g">Green color.</param>
    <param name="b">Blue color.</param>
    <returns>Workbook palette color.</returns>
    */
    ExcelColors GetMatchingColor (int r,int g,int b);
    /*
    <summary>
         Gets excel color from workbook palette.
        <example>The following code illustrates how to get the RGB color value for the specified color from ExcelColors enumeration:
        <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        Worksheet worksheet = workbook.Worksheets[0];
        //Get color
        System.Drawing.Color color = workbook.GetPaletteColor(ExcelColors.Red);
        //Set color
        worksheet["B2"].Style.Color = workbook.Colors[10];
        //Save to file
        workbook.SaveToFile("CellFormats.xlsx");
        </code>
        </example>
    </summary>
    <param name="color">Index from palette array.</param>
    <returns>RGB Color.</returns>
    */
    intrusive_ptr<Color> GetPaletteColor (ExcelColors color);
    //System.Collections.Generic.List`1[[System.Collections.Generic.Dictionary`2[[System.Int32, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089],[Spire.Xls.PageColRow, Spire.XLS, Version=12.7.7.0, Culture=neutral, PublicKeyToken=null]], mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089]] GetSplitPageInfo ();
    //System.Data.DataTable GetSplitPageTable (intrusive_ptr<Workbook> wb);
    /*
    <summary>
        Initilize Calc engine
    </summary>
    */
    void InitCalcEngine ();
    /*
    <summary>
        check file is password protect
    </summary>
    <param name="fileName"></param>
    <returns></returns>
    */
    static bool IsPasswordProtected (LPCWSTR_S fileName);
    static bool IsPasswordProtected (intrusive_ptr<Stream> stream);
    /*
    <summary>
        Copies workbook and all its worksheets from the clipboard.
    </summary>
    */
    void PasteFromClipboard ();
    /*
    <summary>
        Converts column width in pixels into column width in characters.
    </summary>
    <param name="pixels">Column width in pixels.</param>
    <returns>Column width in characters.</returns>
    */
    double PixelsToColumnWidth (double pixels);
    /*
    <summary>
        protect file also protect workbook window and structure.
    </summary>
    <param name="passwordToOpen">password to open file.</param>
    */
    void Protect (LPCWSTR_S passwordToOpen);
    /*
    <summary>
        protect file,also Indicates whether protect workbook window and structure or not
    </summary>
    <param name="passwordToOpen">password to open file.</param>
    <param name="bIsProtectWindow">Indicates if protect workbook window.</param>
    <param name="bIsProtectContent">Indicates if protect workbook content.</param>
    */
    void Protect (LPCWSTR_S passwordToOpen,bool bIsProtectWindow,bool bIsProtectContent);
    /*
    <summary>
        Sets protection for workbook.
    </summary>
    <param name="bIsProtectWindow">Indicates if protect workbook window.</param>
    <param name="bIsProtectContent">Indicates if protect workbook content.</param>
    <param name="password">password</param>
    */
    void ProtectWorkbook (bool bIsProtectWindow,bool bIsProtectContent,LPCWSTR_S password);
    //void Replace (LPCWSTR_S oldValue,System.Data.DataColumn newValues,bool includeColumnName);
    //void Replace (LPCWSTR_S oldValue,System.Data.DataTable newValues,bool includeColumnName);
    /*
    <summary>
         Replaces cell's value by specified value.
        <example>The following code illustrates how to replace the string value with datetime:
        <code>
        //Create workbook
        Workbook workbook = new Workbook();
        workbook.LoadFromFile("Sample.xlsx");
        //Replace the oldValue by dateTime
        string oldValue = "Find";
        DateTime dateTime = DateTime.Now;
        workbook.Replace(oldValue, dateTime);
        //Save to file
        workbook.SaveToFile("Replace.xlsx");
        </code>
        </example>
    </summary>
    <param name="oldValue">Value to replace.</param>
    <param name="newValue">New value</param>
    */
    void Replace (LPCWSTR_S oldValue,intrusive_ptr<DateTime> newValue);
    /*
    <summary>
         Replaces cell's value by specified value.
        <example>The following code snippet illustrates how to replace the string with double:
        <code>
        //Create workbook
        Workbook workbook = new Workbook();
        workbook.LoadFromFile("Sample.xlsx");
        //Replace the oldValue by double
        string oldValue = "Ten";
        workbook.Replace(oldValue, 10.0);
        //Save to file
        workbook.SaveToFile("Replace.xlsx");
        </code>
        </example>
    </summary>
    <param name="oldValue">Value to replace.</param>
    <param name="newValue">New value.</param>
    */
    void Replace (LPCWSTR_S oldValue,double newValue);
    /*
    <summary>
         Replaces cell's value from array.
        <example>The following code snippet illustrates how to replace the string with array of double values:
        <code>
        //Create workbook
        Workbook workbook = new Workbook();
        workbook.LoadFromFile("Sample.xlsx");
        //Replace the oldValue by array of double values
        string oldValue = "Find";
        double[] newValues = { 1.0, 2.0 };
        workbook.Replace(oldValue, newValues, true);
        //Save to file
        workbook.SaveToFile("Replace.xlsx");
        </code>
        </example>
    </summary>
    <param name="oldValue">Value to replace.</param>
    <param name="newValues">New values.</param>
    <param name="isVertical">Indicates whether new values should be inserted vertically.</param>
    */
    void Replace (LPCWSTR_S oldValue,std::vector<double> newValues,bool isVertical);
    /*
    <summary>
         Replaces cell's value from array.
        <example>The following code snippet illustrates how to replace the string with array of int values:
        <code>
        //Create workbook
        Workbook workbook = new Workbook();
        workbook.LoadFromFile("Sample.xlsx");
        //Replace the oldValue by array of int values
        string oldValue = "Find";
        int[] newValues = { 1, 2 };
        workbook.Replace(oldValue, newValues, true);
        //Save to file
        workbook.SaveToFile("Replace.xlsx");
        </code>
        </example>
    </summary>
    <param name="oldValue">Value to replace.</param>
    <param name="newValues">New values.</param>
    <param name="isVertical">Indicates whether new values should be inserted vertically.</param>
    */
    void Replace (LPCWSTR_S oldValue,std::vector<int> newValues,bool isVertical);
    /*
    <summary>
         Replaces cell's value by specified value.
        <example>The following code snippet illustrates how to replace the string with another string:
        <code>
        //Create workbook
        Workbook workbook = new Workbook();
        workbook.LoadFromFile("Sample.xlsx");
        //Replace the oldValue by newValue
        string oldValue = "Find";
        string newValue = "NewValue";
        workbook.Replace(oldValue, newValue);
        //Save to file
        workbook.SaveToFile("Replace.xlsx");
        </code>
        </example>
    </summary>
    <param name="oldValue">Value to replace.</param>
    <param name="newValue">New value</param>
    */
    void Replace (LPCWSTR_S oldValue,LPCWSTR_S newValue);
    /*
    <summary>
         Replaces cell's value from array.
        <example>The following code snippet illustrates how to replace the string with array of string values:
        <code>
        //Create workbook
        Workbook workbook = new Workbook();
        workbook.LoadFromFile("Sample.xlsx");
        //Replace the oldValue by array of string values
        string oldValue = "Find";
        string[] newValues = { "X values", "Y values" };
        workbook.Replace(oldValue, newValues , true);
        //Save to file
        workbook.SaveToFile("Replace.xlsx");
        </code>
        </example>
    </summary>
    <param name="oldValue">Value to replace.</param>
    <param name="newValues">New values.</param>
    <param name="isVertical">Indicates whether new values should be inserted vertically.</param>
    */
    void Replace (LPCWSTR_S oldValue,std::vector<LPCWSTR_S> newValues,bool isVertical);
    /*
    <summary>
         Resets the color palette to the default colors. 
        <example>The following code snippets illustrates how to reset the palette:
        <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        Worksheet worksheet = workbook.Worksheets[0];
        //Get colors
        System.Drawing.Color[] colors = workbook.Colors;
        //Check color
        Console.WriteLine(colors[2].Name);
        //Set color
        colors[2] = System.Drawing.Color.Yellow;
        //Reset palette
        workbook.ResetPalette();
        //Check color
        Console.WriteLine(workbook.Colors[2].Name);
        //Save to file
        workbook.SaveToFile("CellFormats.xlsx");
        </code>
        </example>
    </summary>
    */
    void ResetPalette ();
    /*
    <summary>
        Saves changes to the specified workbook
    </summary>
    */
    void Save ();
    std::vector<intrusive_ptr<Image>> SaveAsImage (float dpiX,float dpiY);
    /*
    <summary>
        Returns a Sheets collection that represents all the worksheets in the specified workbook. Read-only Sheets object.
    </summary>
    */
    intrusive_ptr<WorksheetsCollection> GetWorksheets ();
    /*
    <summary>
         Gets Names collection that represents all the names in the specified
             workbook.
        <example>The following code snippet illustrates how to get names:
        <code>
        //Create workbook
        Workbook workbook = new Workbook();
        workbook.LoadFromFile("Sample.xlsx");
        //Get names
        INameRanges names = workbook.NameRanges;
        </code>
        </example>
    </summary>
    */
    intrusive_ptr<INameRanges> GetNameRanges ();
    bool GetCheckComptiliblity ();
    void SetCheckComptiliblity (bool value);
    intrusive_ptr<DataConnections> GetDataConns ();
    intrusive_ptr<CultureInfo> GetCultureInfo ();
    void SetCultureInfo (intrusive_ptr<CultureInfo> value);
    intrusive_ptr<ExternalLinkCollection> GetExternalLinks ();
    LPCWSTR_S GetSafeSheetName (LPCWSTR_S inputName);
    LPCWSTR_S GetSafeSheetName (LPCWSTR_S inputName,char replaceChar);
    /*
    <summary>
        Returns an object that represents the active sheet (the sheet 
            on top) in the active workbook or in the specified window or 
            workbook. Returns Nothing if no sheet is active. Read-only.
    </summary>
    */
    intrusive_ptr<Worksheet> GetActiveSheet ();
    bool GetAllow3DRangesInDataValidation ();
    void SetAllow3DRangesInDataValidation (bool value);
    /*
    <summary>
        Gets or sets index of the active worksheet.
    </summary>
    */
    int GetActiveSheetIndex ();
    void SetActiveSheetIndex (int value);
    /*
    <summary>
        Returns collection of add-in functions. 
    </summary>
    */
    intrusive_ptr<AddInFunctionsCollection> GetAddInFunctions ();
    /*
    <summary>
        Get or set calculation mode.
    </summary>
    */
    ExcelCalculationMode GetCalculationMode ();
    void SetCalculationMode (ExcelCalculationMode value);
    /*
    <summary>
        Gets Data sorter to sort the data..
    </summary>
    */
    intrusive_ptr<DataSorter> GetDataSorter ();
    int GetMaxColumnCount ();
    int GetMaxRowCount ();
    /*
    <summary>
        Name which used by macros to access to workbook items.
    </summary>
    */
    LPCWSTR_S GetCodeName ();
    void SetCodeName (LPCWSTR_S value);
    //std::vector<intrusive_ptr<Color>> GetColors ();
    intrusive_ptr<ConverterSetting> GetConverterSetting ();
    void SetConverterSetting (intrusive_ptr<ConverterSetting> value);
    /*
    <summary>
        True if the workbook uses the 1904 date system. Read/write Boolean.
    </summary>
    */
    bool GetDate1904 ();
    void SetDate1904 (bool value);
    int GetMaxRowsOfSharedFormula ();
    void SetMaxRowsOfSharedFormula (int value);
    /*
    <summary>
         Returns or sets the name of the default font.
        <example>The following code illustrates how to set the standard font for the workbook:
        <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        Worksheet worksheet = workbook.Worksheets[0];
        //Set text
        worksheet["B2"].Text = "Text";
        //Set standard font
        workbook.DefaultFontName = "Arial";
        //Set standard font size
        workbook.DefaultFontSize = 18;
        //Save to file
        workbook.SaveToFile("CellFormats.xlsx");
        </code>
        </example>
    </summary>
    */
    LPCWSTR_S GetDefaultFontName ();
    void SetDefaultFontName (LPCWSTR_S value);
    /*
    <summary>
         Returns or sets the default font size.
        <example>The following code illustrates how to set the standard font size for the workbook:
        <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        Worksheet worksheet = workbook.Worksheets[0];
        //Set text
        worksheet["B2"].Text = "Text";
        //Set standard font
        workbook.DefaultFontName = "Arial";
        //Set standard font size
        workbook.DefaultFontSize = 18;
        //Save to file
        workbook.SaveToFile("CellFormats.xlsx");
        </code>
        </example>
    </summary>
    */
    double GetDefaultFontSize ();
    void SetDefaultFontSize (double value);
    /*
    <summary>
        Returns or sets the custom path of font files.
    </summary>
    */
    std::vector<LPCWSTR_S> GetCustomFontFilePaths ();
    void SetCustomFontFilePaths (std::vector<LPCWSTR_S> value);
    //System.Collections.Hashtable GetCustomFontParsedResult ();
    /*
    <summary>
        Sets the custom directory of font files.
    </summary>
    */
    std::vector<LPCWSTR_S> GetCustomFontFileDirectory ();
    void SetCustomFontFileDirectory (std::vector<LPCWSTR_S> value);
    /*
    <summary>
        Allows users to disable load of macros from document.
    </summary>
    */
    bool GetDisableMacrosStart ();
    void SetDisableMacrosStart (bool value);
    /*
    <summary>
        Gets file name.
    </summary>
    */
    LPCWSTR_S GetFileName ();
    /*
    <summary>
        Indicates whether contains VBA macros.
    </summary>
    */
    bool GetHasMacros ();
    //void SetHasMacros (bool value);
    /*
    <summary>
        Indicates whether cells are protected.
    </summary>
    */
    bool GetIsCellProtection ();
    /*
    <summary>
        Indicates whether worksheet is displayed right to left.
    </summary>
    */
    bool GetIsRightToLeft ();
    void SetIsRightToLeft (bool value);
    /*
    <summary>
        Indicates whether workbook changes have been saved. 
    </summary>
    */
    bool GetIsSaved ();
    void SetIsSaved (bool value);
    /*
    <summary>
        Indicates window is protected.
    </summary>
    */
    bool GetIsWindowProtection ();
    intrusive_ptr<MarkerDesigner> GetMarkerDesigner ();
    int GetMaxDigitWidth ();
    /*
    <summary>
        Returns or sets password to encrypt document.
    </summary>
    */
    LPCWSTR_S GetOpenPassword ();
    void SetOpenPassword (LPCWSTR_S value);
    /*
    <summary>
        Returns options of the workbook write protection.
    </summary>
    */
    intrusive_ptr<WriteProtection> GetWriteProtection ();
    /*
    <summary>
         Returns or sets whether show vertical scroll bar.
        <example>This sample shows how to hide vertical scroll bar:
        <code>
        //Create workbook
        Workbook workbook = new Workbook();
        //Hide vertical scroll bar
        workbook.IsVScrollBarVisible = false;
        //Save to file
        workbook.SaveToFile("IsVScrollBarVisible.xlsx");
        </code>
        </example>
    </summary>
    */
    bool GetIsVScrollBarVisible ();
    void SetIsVScrollBarVisible (bool value);
    /*
    <summary>
         Returns or sets whether show horizontal scroll bar.
        <example>This sample shows how to hide horizontal scroll bar:
        <code>
        //Create workbook
        Workbook workbook = new Workbook();
        //Hide horizontal scroll bar
        workbook.IsHScrollBarVisible = false;
        //Save to file
        workbook.SaveToFile("IsHScrollBarVisible.xlsx");
        </code>
        </example>
    </summary>
    */
    bool GetIsHScrollBarVisible ();
    void SetIsHScrollBarVisible (bool value);
    /*
    <summary>
        Returns or sets the width of worksheet tab bar. 1/1000 of window width.
    </summary>
    */
    int GetSheetTabBarWidth ();
    void SetSheetTabBarWidth (int value);
    /*
    <summary>
        Indicates whether to optimize Import data. This option will
            take effect only on Import methods that are available with the worksheet
            WARNING: Setting this property to True can decrease memory significantly,
            but will increase the performance of data import .
    </summary>
    */
    bool GetOptimizeImport ();
    void SetOptimizeImport (bool value);
    /*
    <summary>
        Returns pivot caches collection. Read-only.
            <example>The following code snippet illustrates how to get pivot caches:
            <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        workbook.LoadFromFile("Sample.xlsx");
        Worksheet worksheet = workbook.Worksheets[0];
        //Gets pivot caches collection
        IPivotCaches pivotCaches = workbook.PivotCaches;
        </code>
        </example>
    </summary>
    */
    intrusive_ptr<PivotCachesCollection> GetPivotCaches ();
    //void SetPrintDialog (System.Windows.Forms.PrintDialog value);
    //System.Drawing.Printing.PrintDocument GetPrintDocument ();
    /*
    <summary>
        Indicates whether the workbook has been opened as Read-only.
    </summary>
    */
    bool GetReadOnly ();
    /*
    <summary>
        Gets or sets tab index of selected.
    </summary>
    */
    int GetSelectedTab ();
    void SetSelectedTab (int value);
    /*
    <summary>
        Get or sets a value whether the Workbook tabs are displayed.
    </summary>
    */
    bool GetShowTabs ();
    void SetShowTabs (bool value);
    /*
    <summary>
         Returns a Styles collection that represents all the styles in the specified workbook. Read-only.
        <example>The following code snippet illustrates how to get the Styles:
        <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        Worksheet worksheet = workbook.Worksheets[0];
        //Set styles
        IStyles styles = workbook.Styles;
        </code>
        </example>
    </summary>
    */
    intrusive_ptr<StylesCollection> GetStyles ();
    /*
    <summary>
        User Compound storage mode
    </summary>
    */
    bool GetUseStorageMode ();
    void SetUseStorageMode (bool value);
    ExcelVersion GetVersion ();
    void SetVersion (ExcelVersion value);
    /*
    <summary>
        Hide window
    </summary>
    */
    bool GetIsHideWindow ();
    void SetIsHideWindow (bool value);
    /*
    <summary>
        Returns a Sheets collection that represents all the chart sheets in the specified workbook. Read-only.
    </summary>
    */
    intrusive_ptr<ChartsCollection> GetCharts ();
    //System.Collections.Generic.List`1[[Spire.Xls.ChartSheet, Spire.XLS, Version=12.7.7.0, Culture=neutral, PublicKeyToken=null]] GetChartsheets ();
    /*
    <summary>
         Returns collection that represents all the custom document properties
             for the specified workbook. Read-only.
        <example>The following code snippet illustrates how to get the custom document properties:
        <code>
        //Create workbook
        Workbook workbook = new Workbook();
        workbook.LoadFromFile("Sample.xlsx");
        //Get the document properties
        ICustomDocumentProperties documentProperties = workbook.CustomDocumentProperties;
        </code>
        </example>
    </summary>
    */
    intrusive_ptr<ICustomDocumentProperties> GetCustomDocumentProperties ();
    //System.Collections.Generic.Dictionary`2[[System.String, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089],[Spire.Xls.Core.Spreadsheet.PivotTables.PivotTableStyle, Spire.XLS, Version=12.7.7.0, Culture=neutral, PublicKeyToken=null]] GetCustomTableStyles ();
    /*
    <summary>
         Returns a BuiltInDocumentProperties collection that represents all the built-in document properties for the specified workbook. Read-only.
        <example>The following code snippet illustrates how to get the built in document properties:
        <code>
        //Create workbook
        Workbook workbook = new Workbook();
        workbook.LoadFromFile("Sample.xlsx");
        //Get the built in document properties
        IBuiltInDocumentProperties builtInDocumentProperties = workbook.DocumentProperties;
        </code>
        </example>
    </summary>
    */
    intrusive_ptr<BuiltInDocumentProperties> GetDocumentProperties ();
    //static intrusive_ptr<DateTime> FixDateTimeNow ();
    //static intrusive_ptr<DateTime> FixDateTimeToday ();
private:
};
}}
