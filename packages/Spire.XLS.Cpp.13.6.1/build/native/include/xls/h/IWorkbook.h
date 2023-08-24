#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
//#include "ExcelColors.h"
//#include "ExcelSaveType.h"
//#include "ExcelVersion.h"
//#include "FindType.h"
#include "IExcelApplication.h"
//#include "IXLSRange.h"
//#include "IFont.h"
//#include "IWorksheet.h"
//#include "IBuiltInDocumentProperties.h"
//#include "ICharts.h"
//#include "IAddInFunctions.h"
//#include "ITabSheets.h"
//#include "IWorksheets.h"
//#include "IStyles.h"
//#include "ICustomDocumentProperties.h"
//#include "IMarkersDesigner.h"
//#include "XlsPivotCachesCollection.h"
#include "INameRanges.h"
//#include "HTMLOptions.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS IWorkbook : public virtual IExcelApplication
{
    friend class ITabSheet;
    friend class XlsWorkbook;
    friend class XlsWorksheetBase;
    friend class XlsWorkbookObjectsCollection;
public:
    /*
    <summary>
         Replaces specified string by specified value.
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
    <param name="oldValue">String value to replace.</param>
    <param name="newValue">New value for the range with specified string.</param>
    */
    virtual void Replace (LPCWSTR_S oldValue,LPCWSTR_S newValue)=0;
    /*
    <summary>
         Replaces specified string by specified value.
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
    <param name="oldValue">String value to replace.</param>
    <param name="newValue">New value for the range with specified string.</param>
    */
    virtual void Replace (LPCWSTR_S oldValue,double newValue)=0;
    /*
    <summary>
         Replaces specified string by specified value.
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
    <param name="oldValue">String value to replace.</param>
    <param name="newValue">New value for the range with specified string.</param>
    */
    virtual void Replace (LPCWSTR_S oldValue,intrusive_ptr<DateTime> newValue)=0;
    /*
    <summary>
         Replaces specified string by data from array.
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
    <param name="oldValue">String value to replace.</param>
    <param name="newValues">Array of new values.</param>
    <param name="isVertical">Indicates whether array should be inserted vertically.</param>
    */
    virtual void Replace (LPCWSTR_S oldValue,std::vector<LPCWSTR_S> newValues,bool isVertical)=0;
    /*
    <summary>
         Replaces specified string by data from array.
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
    <param name="oldValue">String value to replace.</param>
    <param name="newValues">Array of new values.</param>
    <param name="isVertical">Indicates whether array should be inserted vertically.</param>
    */
    virtual void Replace (LPCWSTR_S oldValue,std::vector<int> newValues,bool isVertical)=0;
    /*
    <summary>
         Replaces specified string by data from array.
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
    <param name="oldValue">String value to replace.</param>
    <param name="newValues">Array of new values.</param>
    <param name="isVertical">Indicates whether array should be inserted vertically.</param>
    */
    virtual void Replace (LPCWSTR_S oldValue,std::vector<double> newValues,bool isVertical)=0;
    //virtual void Replace (LPCWSTR_S oldValue,System.Data.DataTable newValues,bool isFieldNamesShown)=0;
    //virtual void Replace (LPCWSTR_S oldValue,System.Data.DataColumn newValues,bool isFieldNamesShown)=0;
    /*
    <summary>
         This method seraches for the first cell with specified string value.
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
    <param name="findValue">Value to search.</param>
    <param name="flags">Type of value to search.</param>
    <returns>First found cell, or Null if value was not found.</returns>
    */
    virtual intrusive_ptr<IXLSRange> FindOne (LPCWSTR_S findValue,FindType flags)=0;
    /*
    <summary>
         This method seraches for the first cell with specified double value.
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
    <param name="findValue">Value to search.</param>
    <param name="flags">Type of value to search.</param>
    <returns>First found cell, or Null if value was not found.</returns>
    */
    virtual intrusive_ptr<IXLSRange> FindOne (double findValue,FindType flags)=0;
    /*
    <summary>
         This method seraches for the first cell with specified bool value.
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
    <param name="findValue">Value to search.</param>
    <returns>First found cell, or Null if value was not found.</returns>
    */
    virtual intrusive_ptr<IXLSRange> FindOne (bool findValue)=0;
    /*
    <summary>
         This method seraches for the first cell with specified DateTime value.
        <example>This sample shows how to find the first cell with specified DateTime value:
        <code>
        //Create workbook
        Workbook workbook = new Workbook();
        workbook.LoadFromFile("Sample.xlsx");
        //Find cell with specified DateTime value
        DateTime dateTime = DateTime.Now;
        IXLSRange result = workbook.FindDateTime(dateTime);
        </code>
        </example>
    </summary>
    <param name="findValue">Value to search.</param>
    <returns>First found cell, or Null if value was not found.</returns>
    */
    virtual intrusive_ptr<IXLSRange> FindOne (intrusive_ptr<DateTime> findValue)=0;
    /*
    <summary>
         This method seraches for the first cell with specified TimeSpan value.
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
    <param name="findValue">Value to search.</param>
    <returns>First found cell, or Null if value was not found.</returns>
    */
    virtual intrusive_ptr<IXLSRange> FindOne (intrusive_ptr<TimeSpan> findValue)=0;
    /*
    <summary>
         This method seraches for the all cells with specified string value.
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
    <param name="findValue">Value to search.</param>
    <param name="flags">Type of value to search.</param>
    <returns>All found cells, or Null if value was not found.</returns>
    */
    virtual intrusive_ptr<IList<CellRange>> FindAll (LPCWSTR_S findValue,FindType flags)=0;
    /*
    <summary>
         This method seraches for the all cells with specified double value.
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
    <param name="findValue">Value to search.</param>
    <param name="flags">Type of value to search.</param>
    <returns>All found cells, or Null if value was not found.</returns>
    */
    virtual intrusive_ptr<IList<CellRange>> FindAll (double findValue,FindType flags)=0;
    /*
    <summary>
         This method seraches for the all cells with specified bool value.
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
    <param name="findValue">Value to search.</param>
    <returns>All found cells, or Null if value was not found</returns>
    */
    virtual intrusive_ptr<IList<CellRange>> FindAll (bool findValue)=0;
    /*
    <summary>
         This method seraches for the all cells with specified DateTime value.
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
    <param name="findValue">Value to search.</param>
    <returns>All found cells, or Null if value was not found.</returns>
    */
    virtual intrusive_ptr<IList<CellRange>> FindAll (intrusive_ptr<DateTime> findValue)=0;
    /*
    <summary>
         This method seraches for the all cells with specified TimeSpan value.
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
    <param name="findValue">Value to search.</param>
    <returns>All found cells, or Null if value was not found.</returns>
    */
    virtual intrusive_ptr<IList<CellRange>> FindAll (intrusive_ptr<TimeSpan> findValue)=0;
    /*
    <summary>
         Save active WorkSheet using separator.
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
    <param name="fileName">Path to save.</param>
    <param name="separator">Current separator.</param>
    */
    virtual void SaveAs (LPCWSTR_S fileName,LPCWSTR_S separator)=0;
    /*
    <summary>
         Save active WorkSheet using separator.
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
    <param name="stream">Stream to save.</param>
    <param name="separator">Current separator.</param>
    */
    virtual void SaveAs (intrusive_ptr<Stream> stream,LPCWSTR_S separator)=0;
    //virtual void SetSeparators (System.Char argumentsSeparator,System.Char arrayRowsSeparator)=0;
    /*
    <summary>
        Sets separators for formula parsing.
    </summary>
    <param name="argumentsSeparator">Arguments separator to set.</param>
    <param name="arrayRowsSeparator">Array rows separator to set.</param>
    */
    //virtual void SetSeparators (System.Char argumentsSeparator,System.Char arrayRowsSeparator)=0;
    /*
    <summary>
        Sets protection for workbook.
    </summary>
    <param name="bIsProtectWindow">Indicates if protect workbook window.</param>
    <param name="bIsProtectContent">Indicates if protect workbook content.</param>
    */
    virtual void Protect (bool bIsProtectWindow,bool bIsProtectContent)=0;
    /*
    <summary>
        Unprotects workbook.
    </summary>
    */
    virtual void Unprotect ()=0;
    /*
    <summary>
        Creates copy of the current instance.
    </summary>
    <returns>Copy of the current instance.</returns>
    */
    virtual intrusive_ptr<IWorkbook> Clone ()=0;
    /*
    <summary>
        This method sets write protection password.
    </summary>
    <param name="password">Password to set.</param>
    */
    virtual void SetWriteProtectionPassword (LPCWSTR_S password)=0;
    /*
    <summary>
        Returns an object that represents the active sheet (the sheet on top)
            in the active workbook or in the specified window or workbook. Returns
            Nothing if no sheet is active. Read-only.
    </summary>
    */
    virtual intrusive_ptr<IWorksheet> GetActiveSheet ()=0;
    /*
    <summary>
        Gets / sets index of the active sheet.
    </summary>
    */
    virtual int GetActiveSheetIndex ()=0;
    virtual void SetActiveSheetIndex (int value)=0;
    /*
    <summary>
        Returns collection of all workbook's add-in functions. Read-only.
    </summary>
    */
    virtual intrusive_ptr<IAddInFunctions> GetAddInFunctions ()=0;
    /*
    <summary>
        Returns or sets the author of the comment. Read-only String.
    </summary>
    */
    virtual LPCWSTR_S GetAuthor ()=0;
    virtual void SetAuthor (LPCWSTR_S value)=0;
    /*
    <summary>
         Gets or sets a value indicating whether to display horizontal scroll bar. 
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
    virtual bool GetIsHScrollBarVisible ()=0;
    virtual void SetIsHScrollBarVisible (bool value)=0;
    /*
    <summary>
         Gets or sets a value indicating whether to display vertical scroll bar. 
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
    virtual bool GetIsVScrollBarVisible ()=0;
    virtual void SetIsVScrollBarVisible (bool value)=0;
    /*
    <summary>
         Returns collection that represents all the built-in document properties
             for the specified workbook. Read-only.
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
    virtual intrusive_ptr<IBuiltInDocumentProperties> GetBuiltInDocumentProperties ()=0;
    /*
    <summary>
        Name which is used by macros to access the workbook items.
    </summary>
    */
    virtual LPCWSTR_S GetCodeName ()=0;
    virtual void SetCodeName (LPCWSTR_S value)=0;
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
    virtual intrusive_ptr<ICustomDocumentProperties> GetCustomDocumentProperties ()=0;
    /*
    <summary>
        True if the workbook uses the 1904 date system. Read / write Boolean.
    </summary>
    */
    virtual bool GetDate1904 ()=0;
    virtual void SetDate1904 (bool value)=0;
    /*
    <summary>
        True if cell is protected.
    </summary>
    */
    virtual bool GetIsDisplayPrecision ()=0;
    virtual void SetIsDisplayPrecision (bool value)=0;
    /*
    <summary>
        True if cell is protected.
    </summary>
    */
    virtual bool GetIsCellProtection ()=0;
    /*
    <summary>
        True if window is protected.
    </summary>
    */
    virtual bool GetIsWindowProtection ()=0;
    /*
    <summary>
         For an ReservedHandle object, returns a Names collection that represents
             all the names in the active workbook. For a Workbook object, returns
             a Names collection that represents all the names in the specified
             workbook (including all worksheet-specific names).
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
    virtual intrusive_ptr<INameRanges> GetNames ()=0;
    /*
    <summary>
        True if the workbook has been opened as Read-only. Read-only Boolean.
    </summary>
    */
    virtual bool GetReadOnly ()=0;
    /*
    <summary>
        True if no changes have been made to the specified workbook since
            it was last saved. Read/write Boolean.
    </summary>
    */
    virtual bool GetSaved ()=0;
    virtual void SetSaved (bool value)=0;
    /*
    <summary>
         Returns a Styles collection that represents all the styles
             in the specified workbook. Read-only.
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
    virtual intrusive_ptr<IStyles> GetStyles ()=0;
    /*
    <summary>
        Returns a Sheets collection that represents all the worksheets
            in the specified workbook. Read-only Sheets object.
    </summary>
    */
    virtual intrusive_ptr<IWorksheets> GetWorksheets ()=0;
    /*
    <summary>
        True indicate that opened workbook contains VBA macros.
    </summary>
    */
    virtual bool GetHasMacros ()=0;
    //virtual std::vector<intrusive_ptr<Color>> GetPalette ()=0;
    /*
    <summary>
        Index of tab which will be displayed on document open.
    </summary>
    */
    virtual int GetDisplayedTab ()=0;
    virtual void SetDisplayedTab (int value)=0;
    /*
    <summary>
        Collection of the chart objects.
    </summary>
    */
    virtual intrusive_ptr<ICharts> GetCharts ()=0;
    /*
    <summary>
        Indicates whether exception should be thrown when unknown
            name was found in a formula.
    </summary>
    */
    virtual bool GetThrowOnUnknownNames ()=0;
    virtual void SetThrowOnUnknownNames (bool value)=0;
    /*
    <summary>
        This Property allows users to disable load of macros from 
            document. Excel on file open will simply skip macros and will 
            work as if document does not contain them. This options works
            only when file contains macros (HasMacros property is True).
    </summary>
    */
    virtual bool GetDisableMacrosStart ()=0;
    virtual void SetDisableMacrosStart (bool value)=0;
    /*
    <summary>
         Returns or sets the standard font size, in points. Read/write.
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
    virtual double GetStandardFontSize ()=0;
    virtual void SetStandardFontSize (double value)=0;
    /*
    <summary>
         Returns or sets the name of the standard font. Read/write String.
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
    virtual LPCWSTR_S GetStandardFont ()=0;
    virtual void SetStandardFont (LPCWSTR_S value)=0;
    /*
    <summary>
        Indicates whether to allow usage of 3D ranges in DataValidation
            list property (MS Excel doesn't allow).
    </summary>
    */
    virtual bool GetAllow3DRangesInDataValidation ()=0;
    virtual void SetAllow3DRangesInDataValidation (bool value)=0;
    /*
    <summary>
        Gets / sets row separator for array parsing.
    </summary>
    */
    virtual LPCWSTR_S GetRowSeparator ()=0;
    /*
    <summary>
        Formula arguments separator.
    </summary>
    */
    virtual LPCWSTR_S GetArgumentsSeparator ()=0;
    /*
    <summary>
        Indicates whether worksheet is displayed right to left.
    </summary>
    */
    virtual bool GetIsRightToLeft ()=0;
    virtual void SetIsRightToLeft (bool value)=0;
    /*
    <summary>
        Indicates whether tabs are visible.
    </summary>
    */
    virtual bool GetDisplayWorkbookTabs ()=0;
    virtual void SetDisplayWorkbookTabs (bool value)=0;
    //virtual intrusive_ptr<ITabSheets> GetTabSheets ()=0;
    /*
    <summary>
        Indicates whether library should try to detect string value passed to Value (and Value2)
            property as DateTime. Setting this property to false can increase performance greatly for
            such operations especially on Framework 1.0 and 1.1. Default value is true.
    </summary>
    */
    virtual bool GetDetectDateTimeInValue ()=0;
    virtual void SetDetectDateTimeInValue (bool value)=0;
    /*
    <summary>
        True to display a message when the file is opened, recommending that the file be opened as read-only.
    </summary>
    */
    virtual bool GetReadOnlyRecommended ()=0;
    virtual void SetReadOnlyRecommended (bool value)=0;
    /*
    <summary>
        Gets / sets password to encrypt document.
    </summary>
    */
    virtual LPCWSTR_S GetPasswordToOpen ()=0;
    virtual void SetPasswordToOpen (LPCWSTR_S value)=0;
    /*
    <summary>
        Returns maximum row count for each worksheet in this workbook. Read-only.
    </summary>
    */
    virtual int GetMaxRowCount ()=0;
     /*
    <summary>
        Returns maximum column count for each worksheet in this workbook. Read-only.
    </summary>
    */
    virtual int GetMaxColumnCount ()=0;
    /*
    <summary>
        Gets / sets excel version.
    </summary>
    */
    virtual ExcelVersion GetVersion ()=0;
    virtual void SetVersion (ExcelVersion value)=0;
    //virtual intrusive_ptr<XlsPivotCachesCollection> GetPivotCaches ()=0;
    /*
    <summary>
        Activates the first window associated with the workbook.
    </summary>
    */
    virtual void Activate ()=0;
    /*
    <summary>
        Adds font to the inner fonts collection and makes this font read-only.
    </summary>
    <param name="fontToAdd">Font to add.</param>
    <returns>Added font.</returns>
    */
    virtual intrusive_ptr<IFont> AddFont (intrusive_ptr<IFont> fontToAdd)=0;
    /*
    <summary>
        Closes the object.
    </summary>
    <param name="SaveChanges">If True, all changes will be saved.</param>
    <param name="Filename">Name of the file.</param>
    */
    virtual void Close (bool SaveChanges,LPCWSTR_S Filename)=0;
    /*
    <summary>
        Closes the object.
    </summary>
    <param name="saveChanges">If True, all changes will be saved.</param>
    */
    virtual void Close (bool saveChanges)=0;
    /*
    <summary>
        Closes the object without saving.
    </summary>
    */
    virtual void Close ()=0;
    /*
    <summary>
        Closes the object and saves changes into specified file.
    </summary>
    <param name="Filename">
            File name in which workbook will be saved if SaveChanges is true.
    </param>
    */
    virtual void Close (LPCWSTR_S Filename)=0;
    /*
    <summary>
        Copies workbook to the clipboard.
    </summary>
    */
    virtual void CopyToClipboard ()=0;
    //virtual intrusive_ptr<IMarkersDesigner> CreateTemplateMarkersProcessor ()=0;
    /*
    <summary>
        Saves changes to the specified workbook.
            <example>This sample shows how to save changes to the specified workbook:
            <code>
        //Load workbook
        Workbook workbook = new Workbook();
        workbook.LoadFromFile("Sample.xlsx");
        //Save to file
        workbook.Save();
        </code>
        </example>
    </summary>
    */
    virtual void Save ()=0;
    /*
    <summary>
        Short variant of SaveAs method.
    </summary>
    <param name="Filename"></param>
    */
    virtual void SaveAs (LPCWSTR_S Filename)=0;
    /*
    <summary>
        Short variant of SaveAs method.
    </summary>
    <param name="Filename">Name of the file.</param>
    <param name="saveType">Excel save type.</param>
    */
    virtual void SaveAs (LPCWSTR_S Filename,ExcelSaveType saveType)=0;
    /*
    <summary>
        Saves changes to the specified stream.
    </summary>
    <param name="filename">Name of the file.</param>
    <param name="saveOptions">Save options in html.</param>
    */
    virtual void SaveAsHtml (LPCWSTR_S filename,intrusive_ptr<HTMLOptions> saveOptions)=0;
    /*
    <summary>
        Saves changes to the specified stream.
    </summary>
    <param name="stream">Stream that will receive workbook data.</param>
    */
    virtual void SaveAs (intrusive_ptr<Stream> stream)=0;
    /*
    <summary>
        Saves changes to the specified stream.
    </summary>
    <param name="stream">Stream that will receive workbook data.</param>
    <param name="saveType">Type of the Excel file.</param>
    */
    virtual void SaveAs (intrusive_ptr<Stream> stream,ExcelSaveType saveType)=0;
    //virtual void SaveAs (LPCWSTR_S fileName,ExcelSaveType saveType,System.Web.HttpResponse response)=0;
    //virtual void SaveAs (LPCWSTR_S fileName,System.Web.HttpResponse response)=0;
    //virtual void SetPaletteColor (int index,intrusive_ptr<Color> color)=0;
    /*
    <summary>
         Recover palette to default values.
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
    virtual void ResetPalette ()=0;
    /*
    <summary>
         Method return Color object from workbook palette by its index.
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
    virtual intrusive_ptr<Color> GetPaletteColor (ExcelColors color)=0;
    /*
    <summary>
         Gets the nearest color to the specified Color structure
             from Workbook palette.
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
    <param name="color">System color.</param>
    <returns>Color index from workbook palette.</returns>
    */
    virtual ExcelColors GetNearestColor (intrusive_ptr<Color> color)=0;
    /*
    <summary>
         Gets the nearest color to the specified by red, green, and blue 
             values color from Workbook palette.
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
    <param name="r">Red component of the color.</param>
    <param name="g">Green component of the color.</param>
    <param name="b">Blue component of the color.</param>
    <returns>Color index from workbook palette.</returns>
    */
    virtual ExcelColors GetNearestColor (int r,int g,int b)=0;
    /*
    <summary>
        If there is at least one free color, define a new color;
            if not, search for the closest one.
    </summary>
    <param name="color"></param>
    <returns>Color index from workbook palette.</returns>
    */
    virtual ExcelColors SetColorOrGetNearest (intrusive_ptr<Color> color)=0;
    /*
    <summary>
        If there is at least one free color, define a new color;
            if not, search for the closest one.
    </summary>
    <param name="r">Red component of the color.</param>
    <param name="g">Green component of the color.</param>
    <param name="b">Blue component of the color.</param>
    <returns>Color index from workbook palette.</returns>
    */
    virtual ExcelColors SetColorOrGetNearest (int r,int g,int b)=0;
    /*
    <summary>
         Method to create a font object and register it in the workbook.
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
    <returns>Newly created font.</returns>
    */
    virtual intrusive_ptr<IFont> CreateFont ()=0;
    /*
    <summary>
        Method that creates font object based on another font object
            and registers it in the workbook.
    </summary>
    <param name="baseFont">Base font for the new one.</param>
    <returns>Newly created font.</returns>
    */
    virtual intrusive_ptr<IFont> CreateFont (intrusive_ptr<IFont> baseFont)=0;
    /*
    <summary>
        Method creates a font object based on native font and register it in the workbook.
    </summary>]
                <param name="nativeFont">Native font to get settings from.</param>    <returns>Newly created font.</returns>
    */
    virtual intrusive_ptr<IFont> CreateFont (Font* nativeFont)=0;
private:
};
}}
