#pragma once
#include "pch.h"
#pragma warning(push)
#pragma warning(disable:4250)
//#include "ExcelColors.h"
//#include "ExcelSheetType.h"
//#include "ImageType.h"
//#include "IExcelApplication.h"
#include "ITabSheet.h"
//#include "IXLSRange.h"
//#include "IComments.h"
//#include "IHPageBreaks.h"
//#include "IHyperLinks.h"
//#include "IVPageBreaks.h"
//#include "IAutoFilters.h"
//#include "IOleObjects.h"
//#include "IListObjects.h"
#include "INameRanges.h"
//#include "XlsRange.h"
//#include "IStyle.h"
//#include "IPageSetup.h"
//#include "HTMLOptions.h"
//#include "PivotTablesCollection.h"
//#include "CellValueChangedEventHandler.h"
#pragma warning(pop)

namespace Spire{namespace Xls{
class EXPORTS IWorksheet : public virtual ITabSheet
{
    friend class INameRanges;
    friend class IWorksheetGroup;
    friend class IWorksheets;
    friend class IListObject;
    friend class INamedRange;
    friend class IXLSRange;
    friend class IWorkbook;
    friend class XlsName;
    friend class XlsRange;
    friend class XlsWorkbook;
    friend class XlsRangesCollection;
    friend class XlsWorksheetsCollection;
public:
    /*
    <summary>
         Protects worksheet's content with password.
        <example>The following code illustrates how to protect the sheet except select lock/unlock cells:
        <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        Worksheet worksheet = workbook.Worksheets[0];
        //Protects the first worksheet's content with password
        worksheet.Protect("123456");
        //Save to file
        workbook.SaveToFile("Protect.xlsx");
        </code>
        </example>
    </summary>
    <param name="password">Password to protect with.</param>
    */
    virtual void Protect (LPCWSTR_S password)=0;
    /*
    <summary>
        Unprotects worksheet's content with password.
    </summary>
    <param name="password">Password to unprotect.</param>
    */
    virtual void Unprotect (LPCWSTR_S password)=0;
    /*
    <summary>
         Autofits specified row.
        <example>The following code illustrates how to Auto-fit the row:
        <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        Worksheet worksheet = workbook.Worksheets[0];
        //Set text
        worksheet["C2"].Value = "Sample text";
        //Set Style
        CellStyle style = workbook.Styles.Add("CustomStyle");
        IFont font = style.Font;
        font.Size = 18;
        worksheet["C2"].Style = style;
        //Set auto fit
        worksheet.AutoFitRow(2);
        //Save to file
        workbook.SaveToFile("AutoFitRow.xlsx");
        </code>
        </example>
    </summary>
    <param name="rowIndex">One-based row index.</param>
    */
    virtual void AutoFitRow (int rowIndex)=0;
    /*
    <summary>
         Autofits specified column.
        <example>The following code illustrates how to Auto-fit the column:
        <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        Worksheet worksheet = workbook.Worksheets[0];
        //Set text
        worksheet["A1"].Text = "Sample text in cell";
        //Set auto fit
        worksheet.AutoFitColumn(1);
        //Save to file
        workbook.SaveToFile("AutoFitColumn.xlsx");
        </code>
        </example>
    </summary>
    <param name="columnIndex">One-based column index.</param>
    */
    virtual void AutoFitColumn (int columnIndex)=0;
    /*
    <summary>
         Replaces specified string by specified value.
        <example>The following code snippet illustrates how to replace the string with another string:
        <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        workbook.LoadFromFile("Sample.xlsx");
        Worksheet worksheet = workbook.Worksheets[0];
        //Replace the oldValue by newValue
        string oldValue = "Find";
        string newValue = "NewValue";
        worksheet.Replace(oldValue, newValue);
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
        //Create worksheet
        Workbook workbook = new Workbook();
        workbook.LoadFromFile("Sample.xlsx");
        Worksheet worksheet = workbook.Worksheets[0];
        //Replace the oldValue by double
        string oldValue = "Ten";
        worksheet.Replace(oldValue, 10.0);
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
        //Create worksheet
        Workbook workbook = new Workbook();
        workbook.LoadFromFile("Sample.xlsx");
        Worksheet worksheet = workbook.Worksheets[0];
        //Replace the oldValue by dateTime
        string oldValue = "Find";
        DateTime dateTime = DateTime.Now;
        worksheet.Replace(oldValue, dateTime);
        //Save to file
        workbook.SaveToFile("Replace.xlsx");
        </code>
        </example>
    </summary>
    <param name="oldValue">String value to replace.</param>
    <param name="newValue">New value for the range with specified string.</param>
    */
    virtual void Replace (LPCWSTR_S oldValue, intrusive_ptr<DateTime> newValue)=0;
    /*
    <summary>
         Replaces specified string by data from array.
        <example>The following code snippet illustrates how to replace the string with array of string values:
        <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        workbook.LoadFromFile("Sample.xlsx");
        Worksheet worksheet = workbook.Worksheets[0];
        //Replace the oldValue by array of string values
        string oldValue = "Find";
        string[] newValues = { "X values", "Y values" };
        worksheet.Replace(oldValue, newValues , true);
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
        //Create worksheet
        Workbook workbook = new Workbook();
        workbook.LoadFromFile("Sample.xlsx");
        Worksheet worksheet = workbook.Worksheets[0];
        //Replace the oldValue by array of int values
        string oldValue = "Find";
        int[] newValues = { 1, 2 };
        worksheet.Replace(oldValue, newValues, true);
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
        //Create worksheet
        Workbook workbook = new Workbook();
        workbook.LoadFromFile("Sample.xlsx");
        Worksheet worksheet = workbook.Worksheets[0];
        //Replace the oldValue by array of double values
        string oldValue = "Find";
        double[] newValues = { 1.0, 2.0 };
        worksheet.Replace(oldValue, newValues, true);
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
        Removes worksheet from parent worksheets collection.
    </summary>
    */
    virtual void Remove ()=0;
    /*
    <summary>
        Moves worksheet.
    </summary>
    <param name="iNewIndex">New index of the worksheet.</param>
    */
    virtual void MoveWorksheet (int iNewIndex)=0;
    /*
    <summary>
        Converts column width into pixels.
    </summary>
    <param name="widthInChars">Width in characters.</param>
    <returns>Width in pixels</returns>
    */
    virtual int ColumnWidthToPixels (double widthInChars)=0;
    /*
    <summary>
        Converts pixels into column width (in characters).
    </summary>
    <param name="pixels">Width in pixels</param>
    <returns>Widht in characters.</returns>
    */
    virtual double PixelsToColumnWidth (double pixels)=0;
    /*
    <summary>
         Sets column width in pixels.
        <example>The following code illustrates how to set width for a column:
        <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        Worksheet worksheet = workbook.Worksheets[0];
        //Set column width
        worksheet.SetColumnWidthInPixels(2, 160);
        //Save to file
        workbook.SaveToFile("SetColumnWidthInPixels.xlsx");
        </code>
        </example>
    </summary>
    <param name="columnIndex">One-based column index.</param>
    <param name="value">Width to set.</param>
    */
    virtual void SetColumnWidthInPixels (int columnIndex,int value)=0;
    /*
    <summary>
         Sets row height in pixels.
        <example>The following code illustrates how to set height for a row:
        <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        Worksheet worksheet = workbook.Worksheets[0];
        //Set row height
        worksheet.SetRowHeightPixels(3, 150);
        //Save to file
        workbook.SaveToFile("SetRowHeightPixels.xlsx");
        </code>
        </example>
    </summary>
    <param name="Row">One-based row index to set height.</param>
    <param name="value">Value in pixels to set.</param>
    */
    virtual void SetRowHeightPixels (int Row,double value)=0;
    /*
    <summary>
         Returns width in pixels from ColumnInfoRecord if there is corresponding ColumnInfoRecord
             or StandardWidth if not.
        <example>The following code illustrates how to get the column width for a particular column:
        <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        Worksheet worksheet = workbook.Worksheets[0];
        //Set text
        worksheet["A1"].Text = "Sample text in cell";
        //Set auto fit
        worksheet.AutoFitColumn(1);
        //Get column width
        Console.WriteLine(worksheet.GetColumnWidthPixels(1));
        //Save to file
        workbook.SaveToFile("UsedRange.xlsx");
        </code>
        </example>
    </summary>
    <param name="Column">One-based index of the column.</param>
    <returns>Width in pixels of the specified column.</returns>
    */
    virtual int GetColumnWidthPixels (int Column)=0;
    /*
    <summary>
         Returns height from RowRecord if there is a corresponding RowRecord.
             Otherwise returns StandardHeight. 
        <example>The following code illustrates how to get the row height for a particular row:
        <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        Worksheet worksheet = workbook.Worksheets[0];
        //Set text
        worksheet["C2"].Text = "Sample text";
        worksheet["C2"].Style.Font.Size = 18;
        //Set auto fit
        worksheet.AutoFitRow(2);
        //Get row height
        Console.WriteLine(worksheet.GetRowHeightPixels(2));
        //Save to file
        workbook.SaveToFile("UsedRange.xlsx");
        </code>
        </example>
    </summary>
    <param name="Row">One-bazed index of the row.</param>
    <returns>
             Height in pixels from RowRecord if there is corresponding RowRecord.
             Otherwise returns StandardHeight.
             </returns>
    */
    virtual int GetRowHeightPixels (int Row)=0;
    /*
    <summary>
        Save tabsheet using separator.
    </summary>
    <example>The following code illustrates how to saves the worksheet in a different file with separator:
        <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        workbook.LoadFromFile("Sample.xlsx");
        Worksheet worksheet = workbook.Worksheets[0];
        //Save to file
        worksheet.SaveToFile("SaveToFile.csv" , ",");</para>
        </code>
    </example>
    <param name="fileName">File to save.</param>
    <param name="separator">Current seperator.</param>
    */
    virtual void SaveToFile (LPCWSTR_S fileName,LPCWSTR_S separator)=0;
    /*
    <summary>
        Save tabsheet using separator.
            <example>The following code illustrates how to saves the worksheet as stream with separator:
            <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        workbook.LoadFromFile("Sample.xlsx");
        Worksheet worksheet = workbook.Worksheets[0];
        //Create stream
        Stream stream = new MemoryStream();
        //Save to stream
        worksheet.SaveToStream(stream , ",");
        </code>
        </example>
    </summary>
    <param name="stream">Stream to save. </param>
    <param name="separator">Current seperator.</param>
    */
    virtual void SaveToStream (intrusive_ptr<Stream> stream,LPCWSTR_S separator)=0;
    /*
    <summary>
         Sets by column index default style for column.
        <example>The following code illustrates how to set the default style for a column:
        <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        Worksheet worksheet = workbook.Worksheets[0];
        //Create style
        CellStyle style = workbook.Styles.Add("CustomStyle");
        //Set Color
        style.Color = Color.Red;
        //Set default style
        worksheet.SetDefaultColumnStyle(2, style);
        //Save to file
        workbook.SaveToFile("SetDefaultColumnStyle.xlsx");
        </code>
        </example>
    </summary>
    <param name="iColumnIndex">Column index.</param>
    <param name="defaultStyle">Default style.</param>
    */
    virtual void SetDefaultColumnStyle (int iColumnIndex,intrusive_ptr<IStyle> defaultStyle)=0;
    /*
    <summary>
         Sets by column index default style for column.
        <example>The following code illustrates how to set the default style for columns:
        <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        Worksheet worksheet = workbook.Worksheets[0];
        //Create style
        CellStyle style = workbook.Styles.Add("CustomStyle");
        //Set Color
        style.Color = Color.Red;
        //Set default style
        worksheet.SetDefaultColumnStyle(2, 5, style);
        //Save to file
        workbook.SaveToFile("SetDefaultColumnStyle.xlsx");
        </code>
        </example>
    </summary>
    <param name="iStartColumnIndex">Start column index.</param>
    <param name="iEndColumnIndex">End column index.</param>
    <param name="defaultStyle">Default style.</param>
    */
    virtual void SetDefaultColumnStyle (int iStartColumnIndex,int iEndColumnIndex,intrusive_ptr<IStyle> defaultStyle)=0;
    /*
    <summary>
         Sets by column index default style for row.
        <example>The following code illustrates how to set the default style for a row:
        <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        Worksheet worksheet = workbook.Worksheets[0];
        //Create style
        CellStyle style = workbook.Styles.Add("CustomStyle");
        //Set Color
        style.Color = Color.Red;
        //Set default style
        worksheet.SetDefaultRowStyle(2, style);
        //Save to file
        workbook.SaveToFile("SetDefaultRowStyle.xlsx");
        </code>
        </example>
    </summary>
    <param name="rowIndex">Row index.</param>
    <param name="defaultStyle">Default style.</param>
    */
    virtual void SetDefaultRowStyle (int rowIndex,intrusive_ptr<IStyle> defaultStyle)=0;
    /*
    <summary>
         Sets by column index default style for row.
        <example>The following code illustrates how to set the default style for rows:
        <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        Worksheet worksheet = workbook.Worksheets[0];
        //Create style
        CellStyle style = workbook.Styles.Add("CustomStyle");
        //Set Color
        style.Color = Color.Red;
        //Set default style
        worksheet.SetDefaultRowStyle(2, 5, style);
        //Save to file
        workbook.SaveToFile("SetDefaultRowStyle.xlsx");
        </code>
        </example>
    </summary>
    <param name="iStartRowIndex">Start row index.</param>
    <param name="iEndRowIndex">End row index.</param>
    <param name="defaultStyle">Default style.</param>
    */
    virtual void SetDefaultRowStyle (int iStartRowIndex,int iEndRowIndex,intrusive_ptr<IStyle> defaultStyle)=0;
    /*
    <summary>
         Returns default column style.
        <example>The following code illustrates how to get default column style:
        <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        Worksheet worksheet = workbook.Worksheets[0];
        //Create style
        CellStyle style = workbook.Styles.Add("CustomStyle");
        //Set Color
        style.Color = Color.Red;
        //Set default style
        worksheet.SetDefaultColumnStyle(2,style);
        //Get default style
        CellStyle defaultStyle = worksheet.GetDefaultColumnStyle(2);
        //Set color
        defaultStyle.Color = Color.Blue;
        worksheet.SetDefaultColumnStyle(3, defaultStyle);
        //Save to file
        workbook.SaveToFile("GetDefaultColumnStyle.xlsx");
        </code>
        </example>
    </summary>
    <param name="iColumnIndex">Column index.</param>
    <returns>Default column style or null if style wasn't set.</returns>
    */
    virtual intrusive_ptr<IStyle> GetDefaultColumnStyle (int iColumnIndex)=0;
    /*
    <summary>
         Returns default row style.
        <example>The following code illustrates how to get default row style:
        <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        Worksheet worksheet = workbook.Worksheets[0];
        //Create style
        CellStyle style = workbook.Styles.Add("CustomStyle");
        //Set Color
        style.Color = Color.Red;
        //Set default style
        worksheet.SetDefaultRowStyle(2,style);
        //Get default style
        CellStyle defaultStyle = worksheet.GetDefaultRowStyle(2);
        //Set color
        defaultStyle.Color = Color.Blue;
        worksheet.SetDefaultRowStyle(3, defaultStyle);
        //Save to file
        workbook.SaveToFile("GetDefaultColumnStyle.xlsx");
        </code>
        </example>
    </summary>
    <param name="rowIndex">Row index.</param>
    <returns>Default row style or null if style wasn't set.</returns>
    */
    virtual intrusive_ptr<IStyle> GetDefaultRowStyle (int rowIndex)=0;
    /*
    <summary>
        Sets value in the specified cell.
    </summary>
    <param name="iRow">One-based row index  of the cell to set value.</param>
    <param name="iColumn">One-based column index of the cell to set value.</param>
    <param name="value">Value to set.</param>
    */
    virtual void SetValue (int iRow,int iColumn,LPCWSTR_S value)=0;
    /*
    <summary>
        Sets value in the specified cell.
    </summary>
    <param name="iRow">One-based row index  of the cell to set value.</param>
    <param name="iColumn">One-based column index of the cell to set value.</param>
    <param name="value">Value to set.</param>
    */
    virtual void SetNumber (int iRow,int iColumn,double value)=0;
    /*
    <summary>
        Sets value in the specified cell.
    </summary>
    <param name="iRow">One-based row index  of the cell to set value.</param>
    <param name="iColumn">One-based column index of the cell to set value.</param>
    <param name="value">Value to set.</param>
    */
    virtual void SetBoolean (int iRow,int iColumn,bool value)=0;
    /*
    <summary>
        Sets text in the specified cell.
    </summary>
    <param name="iRow">One-based row index  of the cell to set value.</param>
    <param name="iColumn">One-based column index of the cell to set value.</param>
    <param name="value">Text to set.</param>
    */
    virtual void SetText (int iRow,int iColumn,LPCWSTR_S value)=0;
    /*
    <summary>
        Sets formula in the specified cell.
    </summary>
    <param name="iRow">One-based row index  of the cell to set value.</param>
    <param name="iColumn">One-based column index of the cell to set value.</param>
    <param name="value">Formula to set.</param>
    */
    virtual void SetFormula (int iRow,int iColumn,LPCWSTR_S value)=0;
    /*
    <summary>
        Sets error in the specified cell.
    </summary>
    <param name="iRow">One-based row index  of the cell to set value.</param>
    <param name="iColumn">One-based column index of the cell to set value.</param>
    <param name="value">Error to set.</param>
    */
    virtual void SetError (int iRow,int iColumn,LPCWSTR_S value)=0;
    /*
    <summary>
        Sets blank in specified cell.
    </summary>
    <param name="iRow">One-based row index  of the cell to set value.</param>
    <param name="iColumn">One-based column index of the cell to set value.</param>
    */
    virtual void SetBlank (int iRow,int iColumn)=0;
    /*
    <summary>
        Sets formula number value.
    </summary>
    <param name="iRow">One based row index.</param>
    <param name="iColumn">One based column index.</param>
    <param name="value">Represents formula number value for set.</param>
    */
    virtual void SetFormulaNumberValue (int iRow,int iColumn,double value)=0;
    /*
    <summary>
        Sets formula error value.
    </summary>
    <param name="iRow">One based row index.</param>
    <param name="iColumn">One based column index.</param>
    <param name="value">Represents formula error value for set.</param>
    */
    virtual void SetFormulaErrorValue (int iRow,int iColumn,LPCWSTR_S value)=0;
    /*
    <summary>
        Sets formula bool value.
    </summary>
    <param name="iRow">One based row index.</param>
    <param name="iColumn">One based column index.</param>
    <param name="value">Represents formula bool value for set.</param>
    */
    virtual void SetFormulaBoolValue (int iRow,int iColumn,bool value)=0;
    /*
    <summary>
        Sets formula string value.
    </summary>
    <param name="iRow">One based row index.</param>
    <param name="iColumn">One based column index.</param>
    <param name="value">Represents formula string value for set.</param>
    */
    virtual void SetFormulaStringValue (int iRow,int iColumn,LPCWSTR_S value)=0;
    /*
    <summary>
        Returns string value corresponding to the cell.
    </summary>
    <param name="row">One-based row index of the cell to get value from.</param>
    <param name="column">One-based column index of the cell to get value from.</param>
    <returns>String contained by the cell.</returns>
    */
    virtual LPCWSTR_S GetText (int row,int column)=0;
    /*
    <summary>
        Returns number value corresponding to the cell.
    </summary>
    <param name="row">One-based row index of the cell to get value from.</param>
    <param name="column">One-based column index of the cell to get value from.</param>
    <returns>Number contained by the cell.</returns>
    */
    virtual double GetNumber (int row,int column)=0;
    /*
    <summary>
        Returns formula value corresponding to the cell.
    </summary>
    <param name="row">One-based row index of the cell to get value from.</param>
    <param name="column">One-based column index of the cell to get value from.</param>
    <param name="bR1C1">Indicates whether R1C1 notation should be used.</param>
    <returns>Formula contained by the cell.</returns>
    */
    virtual LPCWSTR_S GetFormula (int row,int column,bool bR1C1)=0;
    /*
    <summary>
        Gets error value from cell.
    </summary>
    <param name="row">Row index.</param>
    <param name="column">Column index.</param>
    <returns>Returns error value or null.</returns>
    */
    virtual LPCWSTR_S GetError (int row,int column)=0;
    /*
    <summary>
        Gets bool value from cell.
    </summary>
    <param name="row">Represents row index.</param>
    <param name="column">Represents column index.</param>
    <returns>Returns found bool value. If cannot found returns false.</returns>
    */
    virtual bool GetBoolean (int row,int column)=0;
    /*
    <summary>
        Gets formula bool value from cell.
    </summary>
    <param name="row">Represents row index.</param>
    <param name="column">Represents column index.</param>
    <returns>Returns found bool value. If cannot found returns false.</returns>
    */
    virtual bool GetFormulaBoolValue (int row,int column)=0;
    /*
    <summary>
        Gets formula error value from cell.
    </summary>
    <param name="row">Row index.</param>
    <param name="column">Column index.</param>
    <returns>Returns error value or null.</returns>
    */
    virtual LPCWSTR_S GetFormulaErrorValue (int row,int column)=0;
    /*
    <summary>
        Returns formula number value corresponding to the cell.
    </summary>
    <param name="row">One-based row index of the cell to get value from.</param>
    <param name="column">One-based column index of the cell to get value from.</param>
    <returns>Number contained by the cell.</returns>
    */
    virtual double GetFormulaNumberValue (int row,int column)=0;
    /*
    <summary>
        Returns formula string value corresponding to the cell.
    </summary>
    <param name="row">One-based row index of the cell to get value from.</param>
    <param name="column">One-based column index of the cell to get value from.</param>
    <returns>String contained by the cell.</returns>
    */
    virtual LPCWSTR_S GetFormulaStringValue (int row,int column)=0;
    //virtual intrusive_ptr<Image> SaveToImage (int firstRow,int firstColumn,int lastRow,int lastColumn)=0;
    //virtual void SaveToImage (intrusive_ptr<Stream> stream,int firstRow,int firstColumn,int lastRow,int lastColumn,ImageType imageType)=0;
    /*
    <summary>
        Saves worksheet with specified filename.
            <example>The following code snippets illustrates how to save as html to the specified file name:
            <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        workbook.LoadFromFile("Sample.xlsx");
        Worksheet worksheet = workbook.Worksheets[0];
        //Save to HTML file
        worksheet.SaveToHtml("Output.html");
        </code>
        </example>
    </summary>
    <param name="filename">File to save.</param>
    */
    virtual void SaveToHtml (LPCWSTR_S filename)=0;
    /*
    <summary>
        Save to HTML stream.
            <example>The following code snippets illustrates how to save as html as stream:
            <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        workbook.LoadFromFile("Sample.xlsx");
        Worksheet worksheet = workbook.Worksheets[0];
        //Creat stream
        Stream stream = new MemoryStream();
        //Save to HTML stream
        worksheet.SaveToHtml(stream);
        </code>
        </example>
    </summary>
    <param name="stream">Stream object.</param>
    */
    virtual void SaveToHtml (intrusive_ptr<Stream> stream)=0;
    /*
    <summary>
        Saves as HTML.
            <example>The following code snippets illustrates how to save as html to the specified file name and save option:
            <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        workbook.LoadFromFile("Sample.xlsx");
        Worksheet worksheet = workbook.Worksheets[0];
        //Save to HTML file
        worksheet.SaveToHtml("Sample.html" , Spire.Xls.Core.Spreadsheet.HTMLOptions.Default);
        </code>
        </example>
    </summary>
    <param name="filename">The filename.</param>
    <param name="saveOptions">The option.</param>
    */
    virtual void SaveToHtml (LPCWSTR_S filename,intrusive_ptr<HTMLOptions> saveOptions)=0;
    /*
    <summary>
        Saves work sheet to HTML.
            <example>The following code snippets illustrates how to save as html as stream with Save option:
            <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        workbook.LoadFromFile("Sample.xlsx");
        Worksheet worksheet = workbook.Worksheets[0];
        //Creat stream
        Stream stream = new MemoryStream();
        //Save to HTML stream
        worksheet.SaveToHtml(stream, Spire.Xls.Core.Spreadsheet.HTMLOptions.Default);
        </code>
        </example>
    </summary>
    <param name="stream">Stream to save.</param>
    <param name="saveOptions">Save Options.</param>
    */
    virtual void SaveToHtml (intrusive_ptr<Stream> stream,intrusive_ptr<HTMLOptions> saveOptions)=0;
    //virtual void SaveToImage (intrusive_ptr<Stream> outputStream,int firstRow,int firstColumn,int lastRow,int lastColumn,EmfType emfType)=0;
    //virtual void SaveToImage (intrusive_ptr<Stream> outputStream,int firstRow,int firstColumn,int lastRow,int lastColumn,ImageType imageType,EmfType emfType)=0;
    virtual void add_CellValueChanged (intrusive_ptr<CellValueChangedEventHandler> value)=0;
    virtual void remove_CellValueChanged (intrusive_ptr<CellValueChangedEventHandler> value)=0;
    /*
    <summary>
        Returns collection of worksheet's autofilters. Read-only.
    </summary>
    */
    virtual intrusive_ptr<IAutoFilters> GetAutoFilters ()=0;
    /*
    <summary>
        Returns all used cells in the worksheet. Read-only.
    </summary>
    */
    virtual intrusive_ptr<IList<XlsRange>> GetCells ()=0;
    /*
    <summary>
        True if page breaks (both automatic and manual) on the specified
            worksheet are displayed. Read / write Boolean.
    </summary>
    */
    virtual bool GetDisplayPageBreaks ()=0;
    virtual void SetDisplayPageBreaks (bool value)=0;
    /*
    <summary>
        Returns the index number of the object within the collection of
            similar objects. Read-only.
    </summary>
    */
    virtual int GetIndex ()=0;
    /*
    <summary>
         Returns all merged ranges. Read-only.
        <example>The following code illustrates how to get the merged ranges:
        <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        Worksheet worksheet = workbook.Worksheets[0];
        //Merge cells
        worksheet["C2:D2"].Merge();
        worksheet["F3:G3"].Merge();
        //Get merged ranges
        IXLSRange[] mergedRanges = worksheet.MergedCells;
        //Get merged range count . Output will be 2
        Console.Write(mergedRanges.Length);
        //Save to file
        workbook.SaveToFile("MergedCells.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual intrusive_ptr<IList<XlsRange>> GetMergedCells ()=0;
    /*
    <summary>
        For a Worksheet object, returns a Names collection that represents
            all the worksheet-specific names (names defined with the "WorksheetName!"
            prefix). Read-only Names object.
    </summary>
    */
    virtual intrusive_ptr<INameRanges> GetNames ()=0;
    /*
    <summary>
        Name that is used by macros to access the workbook items.
    </summary>
    */
    virtual LPCWSTR_S GetCodeName ()=0;
    virtual void SetCodeName (LPCWSTR_S value)=0;
    /*
    <summary>
        Returns a PageSetup object that contains all the page setup settings
            for the specified object. Read-only.
    </summary>
    */
    virtual intrusive_ptr<IPageSetup> GetPageSetup ()=0;
    /*
    <summary>
        Returns a Range object that represents a cell or a range of cells.
    </summary>
    */
    virtual intrusive_ptr<IXLSRange> GetAllocatedRange ()=0;
    /*
    <summary>
        For a Worksheet object, returns an array of Range objects that represents
            all the rows on the specified worksheet. Read-only Range object.
    </summary>
    */
    virtual intrusive_ptr<IList<XlsRange>> GetRows ()=0;
    /*
    <summary>
        For a Worksheet object, returns an array of Range objects that represents
            all the columns on the specified worksheet. Read-only Range object.
    </summary>
    */
    virtual intrusive_ptr<IList<XlsRange>> GetColumns ()=0;
    /*
    <summary>
         Returns the standard (default) height of all the rows in the worksheet,
             in points. Read/write Double.
        <example>The following code illustrates how to get the default row height:
        <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        Worksheet worksheet = workbook.Worksheets[0];
        //Get row height
        Console.Write(worksheet.DefaultRowHeight);
        //Set default height
        worksheet.DefaultRowHeight = 40;
        //Save to file
        workbook.SaveToFile("DefaultRowHeight.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual double GetDefaultRowHeight ()=0;
    virtual void SetDefaultRowHeight (double value)=0;
    /*
    <summary>
         Returns or sets the standard (default) width of all the columns in the
             worksheet. Read/write Double.
        <example>The following code illustrates how to get the default column width:
        <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        Worksheet worksheet = workbook.Worksheets[0];
        //Get column width
        Console.Write(worksheet.DefaultColumnWidth);
        //Set default width
        worksheet.DefaultColumnWidth = 40;
        //Save to file
        workbook.SaveToFile("DefaultColumnWidth.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual double GetDefaultColumnWidth ()=0;
    virtual void SetDefaultColumnWidth (double value)=0;
    /*
    <summary>
        Returns or sets the worksheet type. Read-only ExcelSheetType.
    </summary>
    */
    virtual ExcelSheetType GetType ()=0;
    /*
    <summary>
         Returns a Range object that represents the used range on the
             specified worksheet. Read-only.            
        <example>The following code illustrates how to get used range on the specified worksheet:
        <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        Worksheet worksheet = workbook.Worksheets[0];
        //Set text
        worksheet["B2"].Text = "Text";
        //Set Color
        worksheet["J3"].Style.Color = Color.Red;
        //Get used range . Output will be B2:J3
        Console.Write(worksheet.Range.RangeAddressLocal);
        //Save to file
        workbook.SaveToFile("UsedRange.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual intrusive_ptr<XlsRange> GetRange ()=0;
    /*
    <summary>
         Zoom factor of document. Value must be in range from 10 till 400.
        <example>The following code illustrates how to set zoom level of the sheet:
        <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        Worksheet worksheet = workbook.Worksheets[0];
        //Set zoom
        worksheet.Zoom = 200;
        //Save to file
        workbook.SaveToFile("Zoom.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual int GetZoom ()=0;
    virtual void SetZoom (int value)=0;
    /*
    <summary>
        Gets or sets the position of vertical split in the worksheet.
    </summary>
    <remarks>
        Position of the vertical split (px, 0 = No vertical split):
        Unfrozen pane: Width of the left pane(s) (in twips = 1/20 of a point)
        Frozen pane: Number of visible columns in left pane(s)
    </remarks>
    */
    virtual int GetVerticalSplit ()=0;
    virtual void SetVerticalSplit (int value)=0;
    /*
    <summary>
        Gets or sets the position of horizontal split in the worksheet.
    </summary>
    <remarks>
        Position of the horizontal split (by, 0 = No horizontal split):
        Unfrozen pane: Height of the top pane(s) (in twips = 1/20 of a point)
        Frozen pane: Number of visible rows in top pane(s)
    </remarks>
    */
    virtual int GetHorizontalSplit ()=0;
    virtual void SetHorizontalSplit (int value)=0;
    /*
    <summary>
        Index to first visible row in bottom pane(s).
    </summary>
    */
    virtual int GetFirstVisibleRow ()=0;
    virtual void SetFirstVisibleRow (int value)=0;
    /*
    <summary>
        Index to first visible column in right pane(s).
    </summary>
    */
    virtual int GetFirstVisibleColumn ()=0;
    virtual void SetFirstVisibleColumn (int value)=0;
    /*
    <summary>
        Identifier of pane with active cell cursor.
    </summary>
    */
    virtual int GetActivePane ()=0;
    virtual void SetActivePane (int value)=0;
    /*
    <summary>
        True if zero values to be displayed
            False otherwise.
    </summary>
    */
    virtual bool GetIsDisplayZeros ()=0;
    virtual void SetIsDisplayZeros (bool value)=0;
    /*
    <summary>
         True if gridlines are visible;
             False otherwise.
        <example>The following code illustrates how to set visibility for grid lines:
        <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        Worksheet worksheet = workbook.Worksheets[0];
        //Set grid line visibility
        worksheet.GridLinesVisible = false;
        //Save to file
        workbook.SaveToFile("GridLinesVisible.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual bool GetGridLinesVisible ()=0;
    virtual void SetGridLinesVisible (bool value)=0;
    /*
    <summary>
         Gets / sets Grid line color.
        <example>The following code illustrates how to set the grid line color:
        <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        Worksheet worksheet = workbook.Worksheets[0];
        //Set grid lines color
        worksheet.GridLineColor = ExcelColors.Red;
        //Save to file
        workbook.SaveToFile("GridLineColor.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual ExcelColors GetGridLineColor ()=0;
    virtual void SetGridLineColor (ExcelColors value)=0;
    /*
    <summary>
        True if row and column headers are visible;
            False otherwise.
    </summary>
    */
    virtual bool GetRowColumnHeadersVisible ()=0;
    virtual void SetRowColumnHeadersVisible (bool value)=0;
    virtual bool GetFormulasVisible ()=0;
    virtual void SetFormulasVisible (bool value)=0;
    /*
    <summary>
        Returns a VPageBreaks collection that represents the vertical page
            breaks on the sheet. Read-only.
    </summary>
    */
    virtual intrusive_ptr<IVPageBreaks> GetVPageBreaks ()=0;
    /*
    <summary>
        Returns an HPageBreaks collection that represents the horizontal
            page breaks on the sheet. Read-only.
    </summary>
    */
    virtual intrusive_ptr<IHPageBreaks> GetHPageBreaks ()=0;
    /*
    <summary>
        Indicates if all values in the workbook are preserved as strings.
    </summary>
    */
    virtual bool GetIsStringsPreserved ()=0;
    virtual void SetIsStringsPreserved (bool value)=0;
    /*
    <summary>
         Comments collection.            
        <example>The following code illustrates how to access the comments collection in the worksheet:
        <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        Worksheet worksheet = workbook.Worksheets[0];
        //Adding comments to a cell.
        ICommentShape comment1 = worksheet.Range["A1"].AddComment();
        ICommentShape comment2 = worksheet.Range["B1"].AddComment();
        //Set comment text
        comment1.Text = "Comment1";
        comment2.Text = "Comment2";
        //Check count
        Console.Write(worksheet.Comments.Count);
        //Save to file
        workbook.SaveToFile("Comments.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual intrusive_ptr<IComments> GetComments ()=0;
    /*
    <summary>
        Gets / sets cell by row and index.
    </summary>
    */
    virtual intrusive_ptr<IXLSRange> Get (int row,int column)=0;
    /*
    <summary>
        Get cells range.
    </summary>
    */
    virtual intrusive_ptr<IXLSRange> Get (int row,int column,int lastRow,int lastColumn)=0;
    /*
    <summary>
        Get cell range.
    </summary>
    */
    virtual intrusive_ptr<IXLSRange> Get (LPCWSTR_S name)=0;
    /*
    <summary>
        Collection of all worksheet's hyperlinks.
    </summary>
    */
    virtual intrusive_ptr<IHyperLinks> GetHyperLinks ()=0;
    /*
    <summary>
        Indicates whether all created range objects should be cached. Default value is false.
    </summary>
    */
    virtual bool GetUseRangesCache ()=0;
    virtual void SetUseRangesCache (bool value)=0;
    /*
    <summary>
         Gets/sets top visible row of the worksheet.
        <example>The following code illustrates how to set the top visible row:
        <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        Worksheet worksheet = workbook.Worksheets[0];
        //Set top visible row
        worksheet.TopVisibleRow = 5;
        //Get top visible row
        Console.Write(worksheet.TopVisibleRow);
        //Save to file
        workbook.SaveToFile("TopVisibleRow.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual int GetTopVisibleRow ()=0;
    virtual void SetTopVisibleRow (int value)=0;
    /*
    <summary>
         Gets/sets left visible column of the worksheet.
        <example>The following code illustrates how to set the left visible column:
        <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        Worksheet worksheet = workbook.Worksheets[0];
        //Set left visible column
        worksheet.LeftVisibleColumn = 3;
        //Get left visible column
        Console.Write(worksheet.LeftVisibleColumn);
        //Save to file
        workbook.SaveToFile("LeftVisibleColumn.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual int GetLeftVisibleColumn ()=0;
    virtual void SetLeftVisibleColumn (int value)=0;
    /*
    <summary>
        Returns pivot table collection containing all pivot tables in the worksheet. Read-only.
    </summary>
    */
    virtual intrusive_ptr<PivotTablesCollection> GetPivotTables ()=0;
    //virtual intrusive_ptr<IListObjects> GetListObjects ()=0;
    /*
    <summary>
         Gets the OLE objects.
        <example>The following code illustrates how to access the IListObjects collection in the worksheet to add a new IOleObject:
        <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        Worksheet worksheet = workbook.Worksheets[0];
        //Create image stream
        System.Drawing.Image image = System.Drawing.Image.FromFile("image.png");
        //Add ole object
        IOleObject oleObject = worksheet.OleObjects.Add("Shapes.xlsx", image, OleLinkType.Embed);
        //Save to file
        workbook.SaveToFile("OLEObjects.xlsx");
        </code>
        </example>
    </summary>
    <value>The OLE objects.</value>
    */
    virtual intrusive_ptr<IOleObjects> GetOleObjects ()=0;
    /*
    <summary>
         Gets or sets a value indicating whether this instance is OLE object.
        <example>The following code illustrates how to access the IListObjects collection in the worksheet to add a new IOleObject and check Ole Object:
        <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        Worksheet worksheet = workbook.Worksheets[0];
        //Create image stream
        System.Drawing.Image image = System.Drawing.Image.FromFile("image.png");
        //Add ole object
        IOleObject oleObject = worksheet.OleObjects.Add("Shapes.xlsx", image, OleLinkType.Embed);
        //Check HasOleObject.Output will be true.</para>
                 Console.Write(worksheet.HasOleObjects);
                 
                 <para>//Save to file
        workbook.SaveToFile("HasOleObjects.xlsx");
        </code>
        </example>
    </summary>
    <value>
        <c>true</c> if this instance is OLE object; otherwise, <c>false</c>.
    </value>
    */
    virtual bool GetHasOleObjects ()=0;
    /*
    <summary>
        Copies worksheet into the clipboard.
    </summary>
    */
    virtual void CopyToClipboard ()=0;
    /*
    <summary>
        Clears worksheet data. Removes all formatting and merges.
    </summary>
    */
    virtual void Clear ()=0;
    /*
    <summary>
        Clears worksheet. Only the data is removed from each cell.
    </summary>
    */
    virtual void ClearData ()=0;
    /*
    <summary>
         Indicates whether a cell was initialized or accessed by the user.
        <example>The following code illustrates if the cells was initialized or accessed by the user:
        <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        Worksheet worksheet = workbook.Worksheets[0];
        //Set text
        worksheet.Range["A1"].Text = "Hello";
        //Check the cell.Output will be true.
        Console.Write(worksheet.CheckExistence(1, 1));
        //Save to file
        workbook.SaveToFile("CheckExistence.xlsx");
        </code>
        </example>
    </summary>
    <param name="iRow">One-based row index of the cell.</param>
    <param name="iColumn">One-based column index of the cell.</param>
    <returns>Value indicating whether the cell was initialized or accessed by the user.</returns>
    */
    virtual bool CheckExistence (int iRow,int iColumn)=0;
    virtual void CreateNamedRanges (LPCWSTR_S namedRange,LPCWSTR_S referRange,bool vertical)=0;
    /*
    <summary>
        Method check is Column with specifed index visible to end user or not.
    </summary>
    <param name="columnIndex">Index of column.</param>
    <returns>True - column is visible; otherwise False.</returns>
    */
    virtual bool IsColumnVisible (int columnIndex)=0;
    /*
    <summary>
        Method check is Row with specifed index visible to user or not.
    </summary>
    <param name="rowIndex">Index of row visibility of each must be checked.</param>
    <returns>True - row is visible to user, otherwise False.</returns>
    */
    virtual bool IsRowVisible (int rowIndex)=0;
    /*
    <summary>
        Removes specified row (with formulas update).
    </summary>
    <param name="index">One-based row index to remove.</param>
    */
    virtual void DeleteRow (int index)=0;
    /*
    <summary>
        Removes specified column (with formulas update).
    </summary>
    <param name="index">One-based column index to remove.</param>
    */
    virtual void DeleteColumn (int index)=0;
    //virtual int InsertArray (std::vector<System.Object> arrObject,int firstRow,int firstColumn,bool isVertical)=0;
    /*
    <summary>
         Imports an array of strings into a worksheet.
        <example>The following code illustrates how to Imports an array of String into a worksheet with specified row and column:
        <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        Worksheet worksheet = workbook.Worksheets[0];
        //Initialize the string Array
        string[] arrayString = new string[4] { "Total Income", "Actual Expense", "Expected Expenses", "Profit" };
        //Insert the string Array to Sheet
        worksheet.InsertArray(arrayString, 1, 1, true);
        //Save to file
        workbook.SaveToFile(InsertArray.xlsx");
        </code>
        </example>
    </summary>
    <param name="arrString">Array to import.</param>
    <param name="firstRow">Row of the first cell where array should be imported.</param>
    <param name="firstColumn">Column of the first cell where array should be imported.</param>
    <param name="isVertical">True if array should be imported vertically; False - horizontally.</param>
    <returns>Number of imported elements.</returns>
    */
    virtual int InsertArray (std::vector<LPCWSTR_S> arrString,int firstRow,int firstColumn,bool isVertical)=0;
    /*
    <summary>
         Imports an array of integers into a worksheet.
        <example>The following code illustrates how to Imports an array of integer values into a worksheet with the specified row and column:
        <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        Worksheet worksheet = workbook.Worksheets[0];
        //Initialize the integer Array
        int[] arrayInt = new int[4] {1000, 2000, 3000, 4000};
        //Insert the integer Array to Sheet
        worksheet.InsertArray(arrayInt, 1, 1, true);
        //Save to file
        workbook.SaveToFile(InsertArray.xlsx");
        </code>
        </example>
    </summary>
    <param name="arrInt">Array to import.</param>
    <param name="firstRow">Row of the first cell where array should be imported.</param>
    <param name="firstColumn">Column of the first cell where array should be imported.</param>
    <param name="isVertical">True if array should be imported vertically; False - horizontally.</param>
    <returns>Number of imported elements.</returns>
    */
    virtual int InsertArray (std::vector<int> arrInt,int firstRow,int firstColumn,bool isVertical)=0;
    /*
    <summary>
         Imports an array of doubles into a worksheet.
        <example>The following code illustrates how to Imports an array of Double values into a worksheet with the specified row and column:
        <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        Worksheet worksheet = workbook.Worksheets[0];
        //Initialize the double Array
        double[] arrayDouble = new double[4] { 344.0045, 345.0045, 346.0045, 347.0045 };
        //Insert the double Array to Sheet
        worksheet.InsertArray(arrayDouble, 1, 1, true);
        //Save to file
        workbook.SaveToFile(InsertArray.xlsx");
        </code>
        </example>
    </summary>
    <param name="arrDouble">Array to import.</param>
    <param name="firstRow">Row of the first cell where array should be imported.</param>
    <param name="firstColumn">Column of the first cell where array should be imported.</param>
    <param name="isVertical">True if array should be imported vertically; False - horizontally.</param>
    <returns>Number of imported elements.</returns>
    */
    virtual int InsertArray (std::vector<double> arrDouble,int firstRow,int firstColumn,bool isVertical)=0;
    //virtual int InsertArray (std::vector<System.DateTime> arrDateTime,int firstRow,int firstColumn,bool isVertical)=0;
    //virtual int InsertArray (std::vector<<#=mi.TypeName#>> arrObject,int firstRow,int firstColumn)=0;
    //virtual int InsertDataColumn (System.Data.DataColumn dataColumn,bool isFieldNameShown,int firstRow,int firstColumn)=0;
    //virtual int InsertDataTable (System.Data.DataTable dataTable,bool isFieldNameShown,int firstRow,int firstColumn)=0;
    //virtual int InsertDataTable (System.Data.DataTable dataTable,bool isFieldNameShown,int firstRow,int firstColumn,bool preserveTypes)=0;
    //virtual int InsertDataTable (System.Data.DataTable dataTable,bool isFieldNameShown,int firstRow,int firstColumn,int maxRows,int maxColumns)=0;
    //virtual int InsertDataTable (System.Data.DataTable dataTable,bool isFieldNameShown,int firstRow,int firstColumn,int maxRows,int maxColumns,bool preserveTypes)=0;
    //virtual int InsertDataView (System.Data.DataView dataView,bool isFieldNameShown,int firstRow,int firstColumn)=0;
    //virtual int InsertDataView (System.Data.DataView dataView,bool isFieldNameShown,int firstRow,int firstColumn,bool bPreserveTypes)=0;
    //virtual int InsertDataView (System.Data.DataView dataView,bool isFieldNameShown,int firstRow,int firstColumn,int maxRows,int maxColumns)=0;
    //virtual int InsertDataView (System.Data.DataView dataView,bool isFieldNameShown,int firstRow,int firstColumn,int maxRows,int maxColumns,bool bPreserveTypes)=0;
    /*
    <summary>
        Removes panes from a worksheet.
    </summary>
    */
    virtual void RemovePanes ()=0;
private:
};
}}
