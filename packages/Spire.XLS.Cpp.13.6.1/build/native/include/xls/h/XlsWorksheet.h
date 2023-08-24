#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "ITabSheet.h"
#include "IWorksheet.h"
#include "IInternalWorksheet.h"
#include "XlsWorksheetBase.h"
#include "XlsWorkbook.h"
#include "IComments.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS XlsWorksheet : public virtual XlsWorksheetBase, public virtual IInternalWorksheet
{
    friend class XlsValidation;
    friend class XlsPivotTable;
public:
    /*
    <summary>
        Groups columns. 
    </summary>
    <param name="firstColumn">The first column index to be grouped.</param>
    <param name="lastColumn">The last column index to be grouped.</param>
    <param name="isCollapsed">Indicates whether group should be collapsed.</param>
    <returns></returns>
    */
    intrusive_ptr<CellRange> GroupByColumns (int firstColumn,int lastColumn,bool isCollapsed);
    /*
    <summary>
        Groups rows. 
    </summary>
    <param name="firstRow">The first row index to be grouped.</param>
    <param name="lastRow">The last row index to be grouped.</param>
    <param name="isCollapsed">Indicates whether group should be collapsed.</param>
    <returns></returns>
    */
    intrusive_ptr<CellRange> GroupByRows (int firstRow,int lastRow,bool isCollapsed);
    /*
    <summary>
        Ungroups columns. 
    </summary>
    <param name="firstColumn">The first column index to be grouped.</param>
    <param name="lastColumn">The last column index to be grouped.</param>
    <returns></returns>
    */
    intrusive_ptr<CellRange> UngroupByColumns (int firstColumn,int lastColumn);
    /*
    <summary>
        Ungroups rows. 
    </summary>
    <param name="firstRow">The first row index to be grouped.</param>
    <param name="lastRow">The last row index to be grouped.</param>
    <returns></returns>
    */
    intrusive_ptr<CellRange> UngroupByRows (int firstRow,int lastRow);
    //System.Collections.Generic.List`1[[intrusive_ptr<Bitmap>, System.Drawing, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b03f5f7f11d50a3a]] SaveShapesToImage (intrusive_ptr<SaveShapeTypeOption> option);
    void ApplyStyle (intrusive_ptr<CellStyle> style);
    /*
    <summary>
        Apply style to whole sheet.
    </summary>
    <param name="style">style to apply</param>
    <param name="applyRowStyle">true means apply style to all rows</param>
    <param name="applyColumnStyle">true means apply style to all columns</param>
    */
    void ApplyStyle (intrusive_ptr<CellStyle> style,bool applyRowStyle,bool applyColumnStyle);
    /*
    <summary>
        Creates subtotals for the range.
    </summary>
    <param name="range">The range</param>
    <param name="groupByIndex">The field index to group by, offset from zero</param>
    <param name="totalFields">An array of zero-based field index offsets, indicating the fields to which the subtotals are added.</param>
    <param name="subtotalType">The subtotal type.</param>
    */
    void Subtotal (intrusive_ptr<IXLSRange> range,int groupByIndex,std::vector<int> totalFields,SubtotalTypes subtotalType);
    /*
    <summary>
        Creates subtotals for the range.
    </summary>
    <param name="range">The range</param>
    <param name="groupByIndex">The field index to group by, offset from zero</param>
    <param name="totalFields">An array of zero-based field index offsets, indicating the fields to which the subtotals are added.</param>
    <param name="subtotalType">The subtotal type.</param>
    <param name="replace">Indicates whether replace the current subtotals</param>
    <param name="addPageBreak">Indicates whether add page break between groups</param>
    <param name="addsummaryBelowData">Indicates whether add summarry below data.</param>
    */
    void Subtotal (intrusive_ptr<IXLSRange> range,int groupByIndex,std::vector<int> totalFields,SubtotalTypes subtotalType,bool replace,bool addPageBreak,bool addsummaryBelowData);
    /*
    <summary>
        Get GetRowIsAutoFit By rowIndex
    </summary>
    <param name="rowIndex"></param>
    <returns>If the row is null Return false,else if the row height is Autofit Return true, the row height is CustomHeight Return false</returns>
    */
    bool GetRowIsAutoFit (int rowIndex);
    /*
    <summary>
        Get ColumnIsAutofit By columnIndex
    </summary>
    <param name="columnIndex"></param>
    <returns>If the column is null Return false,else if the column width is Autofit Return true, the column width is CustomWidth Return false</returns>
    */
    bool GetColumnIsAutoFit (int columnIndex);
    /*
    <summary>
        Returns formula string value corresponding to the cell.
    </summary>
    <param name="row">One-based row index of the cell to get value from.</param>
    <param name="column">One-based column index of the cell to get value from.</param>
    <returns>String contained by the cell.</returns>
    */
    virtual LPCWSTR_S GetFormulaStringValue (int row,int column);
    virtual LPCWSTR_S GetFormula (int row,int column,bool bR1C1);
    LPCWSTR_S GetFormula (int row,int column,bool bR1C1,bool isForSerialization);
    /*
    <summary>
        Gets formula bool value from cell.
    </summary>
    <param name="row">Represents row index.</param>
    <param name="column">Represents column index.</param>
    <returns>Returns found bool value. If cannot found returns false.</returns>
    */
    virtual bool GetFormulaBoolValue (int row,int column);
    /*
    <summary>
        Returns number value corresponding to the cell.
    </summary>
    <param name="row">One-based row index of the cell to get value from.</param>
    <param name="column">One-based column index of the cell to get value from.</param>
    <returns>Number contained by the cell.</returns>
    */
    virtual double GetNumber (int row,int column);
    /*
    <summary>
        Gets the height of a specified row. 
    </summary>
    <param name="row">Row index.</param>
    <returns>Height of row</returns>
    */
    double GetRowHeight (int row);
    /*
    <summary>
        Indicates whether the column is hidden.
    </summary>
    <param name="columnIndex">Column index.</param>
    <returns></returns>
    */
    bool GetColumnIsHide (int columnIndex);
    /*
    <summary>
        Indicates whether the row is hidden.
    </summary>
    <param name="rowIndex">Row index.</param>
    <returns></returns>
    */
    bool GetRowIsHide (int rowIndex);
    /*
    <summary>
        Hides a column.
    </summary>
    <param name="columnIndex">Column index.</param>
    */
    void HideColumn (int columnIndex);
    /*
    <summary>
        Hides columns.
    </summary>
    <param name="columnIndex">Column index.</param>
    <param name="columnCount">Column count.</param>
    */
    void HideColumns (int columnIndex,int columnCount);
    /*
    <summary>
        Hides a row.
    </summary>
    <param name="rowIndex">Row index.</param>
    */
    void HideRow (int rowIndex);
    /*
    <summary>
        Hides a row.
    </summary>
    <param name="rowIndex">Row index.</param>
    <param name="rowCount">Row count.</param>
    */
    void HideRows (int rowIndex,int rowCount);
    /*
    <summary>
         Gets the height of a specified row in unit of pixel. 
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
    <param name="rowIndex">Row index.</param>
    <returns>Height of row</returns>
    */
    virtual int GetRowHeightPixels (int rowIndex);
    /*
    <summary>
        Returns string value corresponding to the cell.
    </summary>
    <param name="row">One-based row index of the cell to get value from.</param>
    <param name="column">One-based column index of the cell to get value from.</param>
    <returns>String contained by the cell.</returns>
    */
    virtual LPCWSTR_S GetText (int row,int column);
    /*
    <summary>
        delete a range in worksheet
    </summary>
    <param name="range">the range to be deleted</param>
    <param name="deleteOption">Choose to move the right range to left or move the below range to above</param>
    */
    void DeleteRange (intrusive_ptr<CellRange> range,DeleteOption deleteOption);
    /*
    <summary>
        Moves worksheet into new position.
    </summary>
    <param name="destIndex">Destination index.</param>
    */
    virtual void MoveWorksheet (int destIndex);
    virtual double PixelsToColumnWidth (double pixels);
    /*
    <summary>
        Removes worksheet from parernt worksheets collection.
    </summary>
    */
    virtual void Remove ();
    virtual void RemoveMergedCells (intrusive_ptr<XlsRange> range);
    /*
    <summary>
        Removes panes from a worksheet.
    </summary>
    */
    virtual void RemovePanes ();
    /*
    <summary>
          Replaces cells' values with new data.
        <example>The following code snippet illustrates how to replace the string value with data column:
        <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        workbook.LoadFromFile("Sample.xlsx");
        Worksheet worksheet = workbook.Worksheets[0];
        //Replace the oldValue by data column
        string oldValue = "Find";
        System.Data.DataTable table = new System.Data.DataTable();
        table.Columns.Add("Dosage", typeof(int));
        table.Rows.Add(1);
        System.Data.DataColumn dataColumn = table.Columns[0];
        worksheet.Replace(oldValue, dataColumn, true);
        //Save to file
        workbook.SaveToFile("Replace.xlsx");
        </code>
        </example>
    </summary>
    <param name="oldValue">String value to replace.</param>
    <param name="column">Data table with new data.</param>
    <param name="columnHeaders">Indicates whether to import field names.</param>
    <remarks>
        This can be long operation (needs iteration through all cells
        in the worksheet). Better use named ranges instead and call
        Import function instead of placeholders.
    </remarks>
    */
    //virtual void Replace (LPCWSTR_S oldValue,System.Data.DataColumn column,bool columnHeaders);
    /*
    <summary>
         Replaces cells' values with new data.
        <example>The following code snippet illustrates how to replace the string value with data table:
        <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        workbook.LoadFromFile("Sample.xlsx");
        Worksheet worksheet = workbook.Worksheets[0];
        //Replace the oldValue by data table
        string oldValue = "Find";
        System.Data.DataTable table = new System.Data.DataTable();
        table.Columns.Add("Dosage", typeof(int));
        table.Rows.Add(1);
        worksheet.Replace(oldValue, table, true);
        //Save to file
        workbook.SaveToFile("Replace.xlsx");
        </code>
        </example>
    </summary>
    <param name="oldValue">String value to replace.</param>
    <param name="newValues">Data table with new data.</param>
    <param name="columnHeaders">Indicates whether to import field names.</param>
    <remarks>
        This can be long operation (needs iteration through all cells
        in the worksheet). Better use named ranges instead and call
        Import function instead of placeholders.
    </remarks>
    */
    //virtual void Replace (LPCWSTR_S oldValue,System.Data.DataTable newValues,bool columnHeaders);
    /*
    <summary>
         Replaces cells' values with new data.
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
    <remarks>
             This can be long operation (needs iteration through all cells
             in the worksheet). Better use named ranges instead and call
             Import function instead of placeholders.
    </remarks>
    */
    virtual void Replace (LPCWSTR_S oldValue,intrusive_ptr<DateTime> newValue);
    /*
    <summary>
         Replaces cells' values with new data.
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
    virtual void Replace (LPCWSTR_S oldValue,double newValue);
    /*
    <summary>
         Replaces cells' values with new data.
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
    <remarks>
             This can be long operation (needs iteration through all cells
             in the worksheet). Better use named ranges instead and call
             Import function instead of placeholders.
    </remarks>
    */
    virtual void Replace (LPCWSTR_S oldValue,std::vector<double> newValues,bool isVertical);
    /*
    <summary>
         Replaces cells' values with new data.
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
    <remarks>
             This can be long operation (needs iteration through all cells
             in the worksheet). Better use named ranges instead and call
             Import function instead of placeholders.
    </remarks>
    */
    virtual void Replace (LPCWSTR_S oldValue,std::vector<int> newValues,bool isVertical);
    /*
    <summary>
         Replaces cells' values with new data.
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
    <remarks>
             This can be long operation (needs iteration through all cells
             in the worksheet). Better use named ranges instead and call
             Import function instead of placeholders.
    </remarks>
    */
    virtual void Replace (LPCWSTR_S oldValue,LPCWSTR_S newValue);
    int ReplaceAll (LPCWSTR_S oldValue,LPCWSTR_S newValue,bool matchCase);
    /*
    <summary>
         Replaces cells' values with new data.
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
    <remarks>
             This can be long operation (needs iteration through all cells
             in the worksheet). Better use named ranges instead and call
             Import function instead of placeholders.
    </remarks>
    */
    virtual void Replace (LPCWSTR_S oldValue,std::vector<LPCWSTR_S> newValues,bool isVertical);
    //virtual intrusive_ptr<Image> SaveToImage (int firstRow,int firstColumn,int lastRow,int lastColumn);
    /*
    <summary>
        Save worksheet to image.
    </summary>
    <param name="fileName">file Name</param>
    <param name="firstRow"></param>
    <param name="firstColumn"></param>
    <param name="lastRow"></param>
    <param name="lastColumn"></param>
    <returns></returns>
    */
    //void SaveToImage (LPCWSTR_S fileName,int firstRow,int firstColumn,int lastRow,int lastColumn);
    /*
    <summary>
        Save worksheet to image.
    </summary>
    <param name="fileName">file Name</param>
    <returns></returns>
    */
    //void SaveToImage (LPCWSTR_S fileName);
    /*
    <summary></summary>
    <param name="fileName">file name</param>
    <param name="format">file format</param>
    */
    //void SaveToImage (LPCWSTR_S fileName,intrusive_ptr<ImageFormat> format);
    /*
    <summary></summary>
    <param name="firstRow">One-based index of the first row to convert.</param>
    <param name="firstColumn">One-based index of the first column to convert.</param>
    <param name="lastRow">One-based index of the last row to convert.</param>
    <param name="lastColumn">One-based index of the last column to convert.</param>
    */
    intrusive_ptr<Image> ToImage (int firstRow,int firstColumn,int lastRow,int lastColumn);
    //virtual void SaveToImage (intrusive_ptr<Stream> stream,int firstRow,int firstColumn,int lastRow,int lastColumn,ImageType imageType);
    //virtual void SaveToImage (intrusive_ptr<Stream> stream,int firstRow,int firstColumn,int lastRow,int lastColumn,EmfType emfType);
    //virtual void SaveToImage (intrusive_ptr<Stream> stream,int firstRow,int firstColumn,int lastRow,int lastColumn,ImageType imageType,EmfType emfType);
    //void SaveToEMFImage (LPCWSTR_S FilePath,int firstRow,int firstColumn,int lastRow,int lastColumn,EmfType emfType);
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
    <param name="stream">Stream object</param>
    */
    virtual void SaveToHtml (intrusive_ptr<Stream> stream);
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
    <param name="stream">The stream</param>
    <param name="saveOption">The option</param>
    */
    virtual void SaveToHtml (intrusive_ptr<Stream> stream,intrusive_ptr<HTMLOptions> saveOption);
    /*
    <summary>
        Save to HTML file.
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
    <param name="filename">File name</param>
    */
    virtual void SaveToHtml (LPCWSTR_S filename);
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
    <param name="fileName">The filename</param>
    <param name="saveOption">The option</param>
    */
    virtual void SaveToHtml (LPCWSTR_S fileName,intrusive_ptr<HTMLOptions> saveOption);
    /*
    <summary>
        Save worksheet to file.
            <example>The following code illustrates how to saves the worksheet in a different file with separator:
            <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        workbook.LoadFromFile("Sample.xlsx");
        Worksheet worksheet = workbook.Worksheets[0];
        //Save to file
        worksheet.SaveToFile("SaveToFile.csv" , ",");
        </code>
        </example>
    </summary>
    <param name="fileName">File name.</param>
    <param name="separator">Seperator.</param>
    */
    virtual void SaveToFile (LPCWSTR_S fileName,LPCWSTR_S separator);
    /*
    <summary>
        Save worksheet to file.
    </summary>
    <param name="fileName">File name.</param>
    <param name="separator">Seperator.</param>
    <param name="retainHiddenData">retain hidden data</param>
    */
    void SaveToFile (LPCWSTR_S fileName,LPCWSTR_S separator,bool retainHiddenData);
    /*
    <summary>
        Save worksheet to file..
    </summary>
    <param name="fileName">File name.</param>
    <param name="separator">Seperator.</param>
    <param name="encoding">Encoding to use.</param>
    */
    void SaveToFile (LPCWSTR_S fileName,LPCWSTR_S separator,intrusive_ptr<Encoding> encoding);
    /*
    <summary>
        Save worksheet to stream.
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
    <param name="stream">Stream object.</param>
    <param name="separator">Seperator.</param>
    */
    virtual void SaveToStream (intrusive_ptr<Stream> stream,LPCWSTR_S separator);
    /*
    <summary>
        Save worksheet to stream.
    </summary>
    <param name="stream">Stream object.</param>
    <param name="separator">Seperator.</param>
    <param name="retainHiddenData">retain hidden data</param>
    */
    void SaveToStream (intrusive_ptr<Stream> stream,LPCWSTR_S separator,bool retainHiddenData);
    /*
    <summary>
        Save worksheet to stream.
    </summary>
    <param name="stream">Stream to save.</param>
    <param name="separator">Current seperator.</param>
    <param name="encoding">Encoding to use.</param>
    */
    void SaveToStream (intrusive_ptr<Stream> stream,LPCWSTR_S separator,intrusive_ptr<Encoding> encoding);
    /*
    <summary>
        Save worksheet to pdf.
    </summary>
    <param name="fileName">File name.</param>
    */
    //void SaveToPdf (LPCWSTR_S fileName,FileFormat fileFormat);
    /*
    <summary>
        Save worksheet to pdf.
    </summary>
    <param name="fileName">File name.</param>
    */
    void SaveToPdf (LPCWSTR_S fileName);
    //void SaveToPdfStream (intrusive_ptr<Stream> stream,FileFormat fileFormat);
    /*
    <summary>
        Save worksheet to pdf Stream.
    </summary>
    <param name="stream">Stream.</param>
    */
    void SaveToPdfStream (intrusive_ptr<Stream> stream);
    /*
    <summary>
        Convert CellRange to Svg stream
    </summary>
    <param name="stream">stream.</param>
    <param name="firstRow">One-based index of the first row to convert.</param>
    <param name="firstColumn">One-based index of the first column to convert.</param>
    <param name="lastRow">One-based index of the last row to convert.</param>
    <param name="lastColumn">One-based index of the last column to convert.</param>
    */
    void ToSVGStream (intrusive_ptr<Stream> stream,int firstRow,int firstColumn,int lastRow,int lastColumn);
    /*
    <summary>
        Sets blank in specified cell.
    </summary>
    <param name="iRow">One-based row index  of the cell to set value.</param>
    <param name="iColumn">One-based column index of the cell to set value.</param>
    */
    virtual void SetBlank (int iRow,int iColumn);
    /*
    <summary>
        Sets value in the specified cell.
    </summary>
    <param name="iRow">One-based row index  of the cell to set value.</param>
    <param name="iColumn">One-based column index of the cell to set value.</param>
    <param name="value">Value to set.</param>
    */
    virtual void SetBoolean (int iRow,int iColumn,bool value);
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
    <param name="iColumn">One-based column index.</param>
    <param name="value">Width in pixels to set.</param>
    */
    virtual void SetColumnWidthInPixels (int iColumn,int value);
    /*
    <summary>
        Set solumn width
    </summary>
    <param name="columnIndex">Column index.</param>
    <param name="width">Width to set.</param>
    */
    void SetColumnWidth (int columnIndex,double width);
    /*
    <summary>
        Sets the width of the specified columns. 
    </summary>
    <param name="columnIndex">Column index</param>
    <param name="count">count</param>
    <param name="value">Value</param>
    */
    void SetColumnWidthInPixels (int columnIndex,int count,int value);
    /*
    <summary>
        Sets default style for column.
    </summary>
    <param name="columnIndex">Column index.</param>
    <param name="defaultStyle">Default style.</param>
    */
    virtual void SetDefaultColumnStyle (int columnIndex,intrusive_ptr<IStyle> defaultStyle);
    virtual void SetDefaultColumnStyle (int firstColumnIndex,int lastColumnIndex,intrusive_ptr<IStyle> defaultStyle);
    virtual void SetDefaultRowStyle (int rowIndex,intrusive_ptr<IStyle> defaultStyle);
    virtual void SetDefaultRowStyle (int firstRowIndex,int lastRowIndex,intrusive_ptr<IStyle> defaultStyle);
    /*
    <summary>
        Sets error in the specified cell.
    </summary>
    <param name="iRow">One-based row index  of the cell to set value.</param>
    <param name="iColumn">One-based column index of the cell to set value.</param>
    <param name="value">Error to set.</param>
    */
    virtual void SetError (int iRow,int iColumn,LPCWSTR_S value);
    /*
    <summary></summary>
    <param name="iRow"></param>
    <param name="iColumn"></param>
    <param name="value"></param>
    <param name="isSetText"></param>
    */
    void SetError (int iRow,int iColumn,LPCWSTR_S value,bool isSetText);
    /*
    <summary>
        Sets formula in the specified cell.
    </summary>
    <param name="iRow">One-based row index  of the cell to set value.</param>
    <param name="iColumn">One-based column index of the cell to set value.</param>
    <param name="value">Formula to set.</param>
    */
    virtual void SetFormula (int iRow,int iColumn,LPCWSTR_S value);
    /*
    <summary>
        Sets formula in the specified cell.
    </summary>
    <param name="iRow">One-based row index  of the cell to set value.</param>
    <param name="iColumn">One-based column index of the cell to set value.</param>
    <param name="value">Formula to set.</param>
    <param name="bIsR1C1">Indicates is formula in R1C1 notation.</param>
    */
    void SetFormula (int iRow,int iColumn,LPCWSTR_S value,bool bIsR1C1);
    /*
    <summary>
        Sets formula bool value.
    </summary>
    <param name="iRow">One based row index.</param>
    <param name="iColumn">One based column index.</param>
    <param name="value">Represents formula bool value for set.</param>
    */
    virtual void SetFormulaBoolValue (int iRow,int iColumn,bool value);
    /*
    <summary>
        Sets formula error value.
    </summary>
    <param name="iRow">One based row index.</param>
    <param name="iColumn">One based column index.</param>
    <param name="value">Represents formula error value for set.</param>
    */
    virtual void SetFormulaErrorValue (int iRow,int iColumn,LPCWSTR_S value);
    /*
    <summary>
        Sets formula number value.
    </summary>
    <param name="iRow">One based row index.</param>
    <param name="iColumn">One based column index.</param>
    <param name="value">Represents formula number value for set.</param>
    */
    virtual void SetFormulaNumberValue (int iRow,int iColumn,double value);
    /*
    <summary>
        Sets formula string value.
    </summary>
    <param name="iRow">One based row index.</param>
    <param name="iColumn">One based column index.</param>
    <param name="value">Represents formula string value for set.</param>
    */
    virtual void SetFormulaStringValue (int iRow,int iColumn,LPCWSTR_S value);
    /*
    <summary>
        Sets value in the specified cell.
    </summary>
    <param name="iRow">One-based row index  of the cell to set value.</param>
    <param name="iColumn">One-based column index of the cell to set value.</param>
    <param name="value">Value to set.</param>
    */
    virtual void SetNumber (int iRow,int iColumn,double value);
    /*
    <summary>
        Set Row height from Start Row index
    </summary>
    <param name="rowIndex">Row index</param>
    <param name="Count">count</param>
    <param name="value">Value</param>
    */
    void SetRowHeightInPixels (int rowIndex,int count,double value);
    /*
    <summary>
        Sets the height of the specified row. 
    </summary>
    <param name="rowIndex">Row index.</param>
    <param name="height">Height.</param>
    */
    void SetRowHeight (int rowIndex,double height);
    /*
    <summary>
         Sets the height of the specified row. 
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
    <param name="rowIndex">Row index.</param>
    <param name="height">Height.</param>
    */
    virtual void SetRowHeightPixels (int rowIndex,double height);
    /*
    <summary>
        Sets text in the specified cell.
    </summary>
    <param name="iRow">One-based row index  of the cell to set value.</param>
    <param name="iColumn">One-based column index of the cell to set value.</param>
    <param name="value">Text to set.</param>
    */
    virtual void SetText (int iRow,int iColumn,LPCWSTR_S value);
    virtual void SetValue (int rowIndex,int columnIndex,LPCWSTR_S stringValue);
    /*
    <summary>
        Sets value in the specified cell.
    </summary>
    <param name="rowIndex">Row index.</param>
    <param name="columnIndex">Column index.</param>
    <param name="boolValue">Value to set.</param>
    */
    void SetCellValue (int rowIndex,int columnIndex,bool boolValue);
    /*
    <summary>
        Sets value in the specified cell.
    </summary>
    <param name="rowIndex">Row index</param>
    <param name="columnIndex">Column index.</param>
    <param name="stringValue">Value to set.</param>
    */
    void SetCellValue (int rowIndex,int columnIndex,LPCWSTR_S stringValue);
    virtual void SetGridLinesVisible (bool value);
    /*
    <summary>
        Indicates whether worksheet has merged cells.
    </summary>
    */
    bool GetHasMergedCells ();
    /*
    <summary>
         Indicats whether there is OLE object.
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
    virtual bool GetHasOleObjects ();
    virtual int GetHorizontalSplit ();
    virtual void SetHorizontalSplit (int value);
    virtual intrusive_ptr<IHPageBreaks> GetHPageBreaks ();
    virtual intrusive_ptr<IHyperLinks> GetHyperLinks ();
    /*
    <summary>
        Indicates whether zero values to be displayed
    </summary>
    */
    virtual bool GetIsDisplayZeros ();
    virtual void SetIsDisplayZeros (bool value);
    /*
    <summary>
        Indicates whether worksheet is empty. Read-only.
    </summary>
    */
    bool GetIsEmpty ();
    /*
    <summary>
        Indicates whether freezed panes are applied.
    </summary>
    */
    bool GetIsFreezePanes ();
    /*
    <summary>
        Indicates if all values in the workbook are preserved as strings.
    </summary>
    */
    virtual bool GetIsStringsPreserved ();
    virtual void SetIsStringsPreserved (bool value);
    /*
    <summary>
        AddAllowEditRange : add a range of cells that allow editing
    </summary>
    <param name="title">title</param>
    <param name="range">range</param>
    <param name="password">password</param>
    */
    bool AddAllowEditRange (LPCWSTR_S title,intrusive_ptr<CellRange> range,LPCWSTR_S password);
    /*
    <summary>
        AddAllowEditRange : add a range of cells that allow editing
    </summary>
    <param name="title">title</param>
    <param name="range">range</param>
    */
    bool AddAllowEditRange (LPCWSTR_S title,intrusive_ptr<CellRange> range);
    /*
    <summary>
        Returns all list objects in the worksheet.
    </summary>
    */
    virtual intrusive_ptr<IListObjects> GetListObjects ();
    virtual bool GetFormulasVisible ();
    virtual void SetFormulasVisible (bool value);
    /*
    <summary>
        True if row and column headers are visible.
            False otherwise.
    </summary>
    */
    virtual bool GetRowColumnHeadersVisible ();
    virtual void SetRowColumnHeadersVisible (bool value);
    /*
    <summary>
        Indicates whether current sheet is protected.
    </summary>
    */
    virtual bool GetProtectContents ();
    /*
    <summary>
        Returns charts collection. Read-only.
    </summary>
    */
    virtual intrusive_ptr<PivotTablesCollection> GetPivotTables ();
    /*
    <summary>
        Returns quoted name of the worksheet.
    </summary>
    */
    LPCWSTR_S GetQuotedName ();
    intrusive_ptr<IDataValidationTable> GetDVTable ();
    /*
    <summary>
        Caculate all formula for the specified worksheet
    </summary>
    */
    void CalculateAllValue ();
    LPCWSTR_S GetCaculateValue (int row,int col);
    void SetCaculateValue (LPCWSTR_S value,int row,int col);
    /*
    <summary>
         Imports an array of datetimes into worksheet.
        <example>The following code illustrates how to Imports an array of DateTime values into a worksheet with the specified row and colum:
        <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        Worksheet worksheet = workbook.Worksheets[0];
        //Initialize the DateTime Array
        DateTime[] arrayDate = new DateTime[4] { DateTime.Parse("06:45"), DateTime.Parse("08:30"), DateTime.Parse("09:40"), DateTime.Parse("10:30") };
        //Insert the DateTime Array to Sheet
        worksheet.InsertArray(arrayDate, 1, 1, true);
        //Save to file
        workbook.SaveToFile(InsertArray.xlsx");
        </code>
        </example>
    </summary>
    <param name="dateTimeArray">Datetime array.</param>
    <param name="firstRow">The row number of the first cell to import in.</param>
    <param name="firstColumn">The column number of the first cell to import in.</param>
    <param name="isVertical">Specifies to import data vertically or horizontally.</param>
    <returns></returns>
    */
    //virtual int InsertArray (std::vector<System.DateTime> dateTimeArray,int firstRow,int firstColumn,bool isVertical);
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
    <param name="doubleArray">Double array</param>
    <param name="firstRow">The row number of the first cell to import in.</param>
    <param name="firstColumn">The column number of the first cell to import in.</param>
    <param name="isVertical">Specifies to import data vertically or horizontally.</param>
    <returns></returns>
    */
    virtual int InsertArray (std::vector<double> doubleArray,int firstRow,int firstColumn,bool isVertical);
    //int InsertArray (T objects,int firstRow,int firstColumn,bool isVertical);
    /*
    <summary>
         Imports an array of integer into a worksheet. 
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
    <param name="intArray">Integer array.</param>
    <param name="firstRow">The row number of the first cell to import in.</param>
    <param name="firstColumn">The column number of the first cell to import in.</param>
    <param name="isVertical">Specifies to import data vertically or horizontally.</param>
    <returns></returns>
    */
    virtual int InsertArray (std::vector<int> intArray,int firstRow,int firstColumn,bool isVertical);
    //virtual int InsertArray (std::vector<<#=mi.TypeName#>> objectArray,int firstRow,int firstColumn);
    /*
    <summary>
         Imports an array of objects into a worksheet.
        <example>The following code illustrates how to Imports an array of Object into a worksheet with specified alignment:
        <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        Worksheet worksheet = workbook.Worksheets[0];
        //Initialize the Object Array
        object[] array = new object[4] { "Total Income", "Actual Expense", "Expected Expenses", "Profit" };
        //Insert the Object Array to Sheet
        worksheet.InsertArray(array, 1, 1, true);
        //Save to file
        workbook.SaveToFile(InsertArray.xlsx");
        </code>
        </example>
    </summary>
    <param name="arrObject">Array to import.</param>
    <param name="firstRow">The row number of the first cell to import in.</param>
    <param name="firstColumn">The column number of the first cell to import in.</param>
    <param name="isVertical">TRUE if array should be imported vertically; FALSE - horizontally.</param>
    <returns>Number of imported elements.</returns>
    */
    //int InsertArray (std::vector<<#=mi.TypeName#>> objectArray,int firstRow,int firstColumn,bool needConvert);
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
    <param name="stringArray">String array.</param>
    <param name="firstRow">The row number of the first cell to import in.</param>
    <param name="firstColumn">The column number of the first cell to import in.</param>
    <param name="isVertical">Specifies to import data vertically or horizontally.</param>
    <returns></returns>
    */
    virtual int InsertArray (std::vector<LPCWSTR_S> stringArray,int firstRow,int firstColumn,bool isVertical);
    /*
    <summary>
         Imports an array of objects into a worksheet.
        <example>The following code illustrates how to Imports an array of Object into a worksheet with specified alignment:
        <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        Worksheet worksheet = workbook.Worksheets[0];
        //Initialize the Object Array
        object[] array = new object[4] { "Total Income", "Actual Expense", "Expected Expenses", "Profit" };
        //Insert the Object Array to Sheet
        worksheet.InsertArray(array, 1, 1, true);
        //Save to file
        workbook.SaveToFile(InsertArray.xlsx");
        </code>
        </example>
    </summary>
    <param name="arrObject">Array to import.</param>
    <param name="firstRow">The row number of the first cell to import in.</param>
    <param name="firstColumn">The column number of the first cell to import in.</param>
    <param name="isVertical">TRUE if array should be imported vertically; FALSE - horizontally.</param>
    <returns>Number of imported elements.</returns>
    */
    //virtual int InsertArray (std::vector<System.Object> arrObject,int firstRow,int firstColumn,bool isVertical);
    /*
    <summary>
        Imports an arraylist of data into a worksheet. 
    </summary>
    <param name="arrayList">Data arraylist.</param>
    <param name="firstRow">The row number of the first cell to import in.</param>
    <param name="firstColumn">The column number of the first cell to import in.</param>
    <param name="isVertical">Specifies to import data vertically or horizontally.</param>
    <returns></returns>
    */
    //int InsertArrayList (System.Collections.ArrayList arrayList,int firstRow,int firstColumn,bool isVertical);
    /*
    <summary>
         Imports data column.
        <example>The following code illustrates how to Imports data from a DataColumn into a worksheet with the specified row and column:
        <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        Worksheet worksheet = workbook.Worksheets[0];
        //Create a DataTable
        System.Data.DataTable table = new System.Data.DataTable();
        table.Columns.Add("ID", typeof(int));
                 table.Columns.Add("Item", typeof(string));
                 table.Columns.Add("Name", typeof(string));
        table.Rows.Add(1, "Soap", "David");
                 table.Rows.Add(2, "Paste", "Sam");
                 table.Rows.Add(3, "Cream", "Christoff");
        //Insert the DataColumn to worksheet
        System.Data.DataColumn column = table.Columns[2];
        worksheet.InsertDataColumn(column, true, 1, 1);
        //Save to file
        workbook.SaveToFile(InsertDataColumn.xlsx");
        </code>
        </example>
    </summary>
    <param name="dataColumn">Data column to import.</param>
    <param name="columnHeaders">Indicates whether to import field names.</param>
    <param name="firstRow">Index of the first row.</param>
    <param name="firstColumn">Index of the first column</param>
    <returns></returns>
    */
    //virtual int InsertDataColumn (System.Data.DataColumn dataColumn,bool columnHeaders,int firstRow,int firstColumn);
    /*
    <summary>
        Imports array of data columns.
    </summary>
    <param name="dataColumns">Data columns to import.</param>
    <param name="columnHeaders">Indicates whether to import field names.</param>
    <param name="firstRow">Index to the first row.</param>
    <param name="firstColumn">Index to the first column.</param>
    <returns></returns>
    */
    //int InsertDataColumns (std::vector<System.Data.DataColumn> dataColumns,bool columnHeaders,int firstRow,int firstColumn);
    /*
    <summary>
         Imports data from a DataTable into worksheet.
        <example>The following code illustrates how to Imports data from a DataTable into a worksheet with the specified row and column:
        <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        Worksheet worksheet = workbook.Worksheets[0];
        //Create a DataTable
        System.Data.DataTable table = new System.Data.DataTable();
        table.Columns.Add("ID", typeof(int));
                 table.Columns.Add("Item", typeof(string));
                 table.Columns.Add("Name", typeof(string));
        table.Rows.Add(1, "Soap", "David");
                 table.Rows.Add(2, "Paste", "Sam");
                 table.Rows.Add(3, "Cream", "Christoff");
        //Insert the DataTable to worksheet
        worksheet.InsertDataTable(table, true, 1, 1);
        //Save to file
        workbook.SaveToFile(InsertDataTable.xlsx");
        </code>
        </example>
    </summary>
    <param name="dataTable">DataTable</param>
    <param name="columnHeaders">Indicates whether to import field names.</param>
    <param name="firstRow">The row number of the first cell to import in.</param>
    <param name="firstColumn">The column number of the first cell to import in.</param>
    <returns></returns>
    */
    //virtual int InsertDataTable (System.Data.DataTable dataTable,bool columnHeaders,int firstRow,int firstColumn);
    /*
    <summary>
         Imports data from a DataTable into worksheet.
        <example>The following code illustrates how to Imports data from a DataTable into a worksheet with the specified row and column along with the preserve type:
        <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        Worksheet worksheet = workbook.Worksheets[0];
        //Create a DataTable
        System.Data.DataTable table = new System.Data.DataTable();
        table.Columns.Add("ID", typeof(int));
                 table.Columns.Add("Item", typeof(string));
                 table.Columns.Add("Name", typeof(string));
        table.Rows.Add(1, "Soap", "David");
                 table.Rows.Add(2, "Paste", "Sam");
                 table.Rows.Add(3, "Cream", "Christoff");
        //Insert the DataTable to worksheet
        worksheet.InsertDataTable(table, true, 1, 1 , true);
        //Save to file
        workbook.SaveToFile(InsertDataTable.xlsx");
        </code>
        </example>
    </summary>
    <param name="dataTable">DataTable</param>
    <param name="columnHeaders">Indicates whether to import field names.</param>
    <param name="firstRow">The row number of the first cell to import in.</param>
    <param name="firstColumn">The column number of the first cell to import in.</param>
    <param name="transTypes">Indicates if preserve types when insert data into worksheet </param>
    <returns></returns>
    */
    //virtual int InsertDataTable (System.Data.DataTable dataTable,bool columnHeaders,int firstRow,int firstColumn,bool transTypes);
    /*
    <summary>
         Imports data from a DataTable into worksheet.
        <example>The following code illustrates how to Imports data from a DataTable into a worksheet with the specified range:
        <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        Worksheet worksheet = workbook.Worksheets[0];
        //Create a DataTable
        System.Data.DataTable table = new System.Data.DataTable();
        table.Columns.Add("ID", typeof(int));
                 table.Columns.Add("Item", typeof(string));
                 table.Columns.Add("Name", typeof(string));
        table.Rows.Add(1, "Soap", "David");
                 table.Rows.Add(2, "Paste", "Sam");
                 table.Rows.Add(3, "Cream", "Christoff");
        //Insert the DataTable to worksheet
        worksheet.InsertDataTable(table, true, 1 , 1 , 2 , 2);
        //Save to file
        workbook.SaveToFile(InsertDataTable.xlsx");
        </code>
        </example>
    </summary>
    <param name="dataTable">DataTable</param>
    <param name="columnHeaders">Indicates whether to import field names.</param>
    <param name="firstRow">The row number of the first cell to import in.</param>
    <param name="firstColumn">The column number of the first cell to import in.</param>
    <param name="maxRows">Maximum number of rows to import</param>
    <param name="maxColumns">Maximum number of columns to import</param>
    <returns></returns>
    */
    //virtual int InsertDataTable (System.Data.DataTable dataTable,bool columnHeaders,int firstRow,int firstColumn,int maxRows,int maxColumns);
    /*
    <summary>
         Imports data from a DataTable into worksheet.
        <example>The following code illustrates how to Imports data from a DataTable into a worksheet with specified range along with preserve type:
        <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        Worksheet worksheet = workbook.Worksheets[0];
        //Create a DataTable
        System.Data.DataTable table = new System.Data.DataTable();
        table.Columns.Add("ID", typeof(int));
                 table.Columns.Add("Item", typeof(string));
                 table.Columns.Add("Name", typeof(string));
        table.Rows.Add(1, "Soap", "David");
                 table.Rows.Add(2, "Paste", "Sam");
                 table.Rows.Add(3, "Cream", "Christoff");
        //Insert the DataTable to worksheet
        worksheet.InsertDataTable(table, true, 1 , 1 , 2 , 2 , true);
        //Save to file
        workbook.SaveToFile(InsertDataTable.xlsx");
        </code>
        </example>
    </summary>
    <param name="dataTable">Datatable</param>
    <param name="columnHeaders">Indicates whether to import field names.</param>
    <param name="firstRow">The row number of the first cell to import in.</param>
    <param name="firstColumn">The column number of the first cell to import in.</param>
    <param name="maxRows">Maximum number of rows to import</param>
    <param name="maxColumns">Maximum number of columns to import</param>
    <param name="transTypes">Indicates if preserve types when insert data into worksheet </param>
    <returns></returns>
    */
    //virtual int InsertDataTable (System.Data.DataTable dataTable,bool columnHeaders,int firstRow,int firstColumn,int maxRows,int maxColumns,bool transTypes);
    /*
    <summary>
        Imports data from a DataTable into worksheet
    </summary>
    <param name="dataTable">DataTable</param>
    <param name="columnHeaders">Indicates whether to import field names.</param>
    <param name="firstRow">The row number of the first cell to import in.</param>
    <param name="firstColumn">The column number of the first cell to import in.</param>
    <param name="maxRows">Maximum number of rows to import</param>
    <param name="maxColumns">Maximum number of columns to import</param>
    <param name="columnsArray">Array of columns to import.</param>
    <param name="transTypes">Indicates if preserve types when insert data into worksheet.true is default</param>
    <returns></returns>
    */
    //int InsertDataTable (System.Data.DataTable dataTable,bool columnHeaders,int firstRow,int firstColumn,int maxRows,int maxColumns,std::vector<System.Data.DataColumn> columnsArray,bool transTypes);
    /*
    <summary>
         Imports data from a DataView into worksheet.
        <example>The following code illustrates how to Imports data from a DataView into a worksheet with the specified row and column:
        <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        Worksheet worksheet = workbook.Worksheets[0];
        //Create a DataTable
        System.Data.DataTable table = new System.Data.DataTable();
        table.Columns.Add("ID", typeof(int));
                 table.Columns.Add("Item", typeof(string));
                 table.Columns.Add("Name", typeof(string));
        table.Rows.Add(1, "Soap", "David");
                 table.Rows.Add(2, "Paste", "Sam");
                 table.Rows.Add(3, "Cream", "Christoff");
        //Initialize dataview of datatable
        System.Data.DataView view = table.DefaultView;
        //Import data from DataView
        worksheet.InsertDataView(view, true, 1, 1);
        //Save to file
        workbook.SaveToFile(InsertDataView.xlsx");
        </code>
        </example>
    </summary>
    <param name="dataView">Data view object</param>
    <param name="columnHeaders">Indicates whether to import field names.</param>
    <param name="firstRow">The row number of the first cell to import in.</param>
    <param name="firstColumn">The column number of the first cell to import in.</param>
    <returns></returns>
    */
    //virtual int InsertDataView (System.Data.DataView dataView,bool columnHeaders,int firstRow,int firstColumn);
    /*
    <summary>
         Imports data from a DataView into worksheet.
        <example>The following code illustrates how to Imports data from a DataView into a worksheet with the specified row and column along with preserve type:
        <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        Worksheet worksheet = workbook.Worksheets[0];
        //Create a DataTable
        System.Data.DataTable table = new System.Data.DataTable();
        table.Columns.Add("ID", typeof(int));
                 table.Columns.Add("Item", typeof(string));
                 table.Columns.Add("Name", typeof(string));
        table.Rows.Add(1, "Soap", "David");
                 table.Rows.Add(2, "Paste", "Sam");
                 table.Rows.Add(3, "Cream", "Christoff");
        //Initialize dataview of datatable
        System.Data.DataView view = table.DefaultView;
        //Import data from DataView
        worksheet.InsertDataView(view, true, 1, 1 , true);
        //Save to file
        workbook.SaveToFile(InsertDataView.xlsx");
        </code>
        </example>
    </summary>
    <param name="dataView">Dataview object.</param>
    <param name="columnHeaders">Indicates whether to import field names.</param>
    <param name="firstRow">The row number of the first cell to import in.</param>
    <param name="firstColumn">The column number of the first cell to import in.</param>
    <param name="transTypes">Indicates if preserve types when insert data into worksheet.</param>
    <returns></returns>
    */
    //virtual int InsertDataView (System.Data.DataView dataView,bool columnHeaders,int firstRow,int firstColumn,bool transTypes);
    /*
    <summary>
         Imports data from a DataView into worksheet.
        <example>The following code illustrates how to Imports data from a DataView into a worksheet with the specified range:
        <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        Worksheet worksheet = workbook.Worksheets[0];
        //Create a DataTable
        System.Data.DataTable table = new System.Data.DataTable();
        table.Columns.Add("ID", typeof(int));
                 table.Columns.Add("Item", typeof(string));
                 table.Columns.Add("Name", typeof(string));
        table.Rows.Add(1, "Soap", "David");
                 table.Rows.Add(2, "Paste", "Sam");
                 table.Rows.Add(3, "Cream", "Christoff");
        //Initialize dataview of datatable
        System.Data.DataView view = table.DefaultView;
        //Import data from DataView
        worksheet.InsertDataView(view, true, 1, 1 , 2 , 2);
        //Save to file
        workbook.SaveToFile(InsertDataView.xlsx");
        </code>
        </example>
    </summary>
    <param name="dataView">Dataview object.</param>
    <param name="columnHeaders">Indicates whether to import field names.</param>
    <param name="firstRow">The row number of the first cell to import in.</param>
    <param name="firstColumn">The column number of the first cell to import in.</param>
    <param name="maxRows">Maximum number of rows to import.</param>
    <param name="maxColumns">Maximum number of columns to import.</param>
    <returns></returns>
    */
    //virtual int InsertDataView (System.Data.DataView dataView,bool columnHeaders,int firstRow,int firstColumn,int maxRows,int maxColumns);
    /*
    <summary>
         Imports data from a DataView into worksheet.
        <example>The following code illustrates how to Imports data from a DataView into a worksheet with the specified range along with preserve type:
        <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        Worksheet worksheet = workbook.Worksheets[0];
        //Create a DataTable
        System.Data.DataTable table = new System.Data.DataTable();
        table.Columns.Add("ID", typeof(int));
                 table.Columns.Add("Item", typeof(string));
                 table.Columns.Add("Name", typeof(string));
        table.Rows.Add(1, "Soap", "David");
                 table.Rows.Add(2, "Paste", "Sam");
                 table.Rows.Add(3, "Cream", "Christoff");
        //Initialize dataview of datatable
        System.Data.DataView view = table.DefaultView;
        //Import data from DataView
        worksheet.InsertDataView(view, true, 1, 1 , 2 , 2 , true);
        //Save to file
        workbook.SaveToFile(InsertDataView.xlsx");
        </code>
        </example>
    </summary>
    <param name="dataView">Dataview object.</param>
    <param name="columnHeaders">Indicates whether to import field names.</param>
    <param name="firstRow">The row number of the first cell to import in.</param>
    <param name="firstColumn">The column number of the first cell to import in.</param>
    <param name="maxRows">Maximum number of rows to import.</param>
    <param name="maxColumns">Maximum number of columns to import.</param>
    <param name="transTypes">Indicates if preserve types when insert data into worksheet.</param>
    <returns></returns>
    */
    //virtual int InsertDataView (System.Data.DataView dataView,bool columnHeaders,int firstRow,int firstColumn,int maxRows,int maxColumns,bool transTypes);
    //int ImportCustomObjects (System.Collections.ICollection list,int firstRow,int firstColumn,intrusive_ptr<ImportObjectOptions> options);
    //int ImportCustomObjects (System.Collections.ICollection list,std::vector<LPCWSTR_S> propertyNames,bool isPropertyNameShown,int firstRow,int firstColumn,int rowNumber,bool insertRows,LPCWSTR_S dateFormatString,bool convertStringToNumber);
    /*
    <summary>
        Indicates whether column is visible.
    </summary>
    <param name="columnIndex">Column index.</param>
    <returns>true - visible, otherwise false.</returns>
    */
    virtual bool IsColumnVisible (int columnIndex);
    /*
    <summary>
        Indicates is formula in cell is formula to external workbook.
    </summary>
    <param name="row">Represents row index.</param>
    <param name="column">Represents column index.</param>
    <returns>If contain extern formula returns true; otherwise false.</returns>
    */
    bool IsExternalFormula (int row,int column);
    /*
    <summary>
        Indicates whether row is visible.
    </summary>
    <param name="rowIndex">Row index.</param>
    <returns>true - visible, otherwise false.</returns>
    */
    virtual bool IsRowVisible (int rowIndex);
    /*
    <summary>
         Autofit the column width.
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
    <param name="columnIndex">Column index.</param>
    */
    virtual void AutoFitColumn (int columnIndex);
    /*
    <summary>
        Autofit the column width.
    </summary>
    <param name="columnIndex">Column index.</param>
    <param name="options">auto fit options</param>
    */
    void AutoFitColumn (int columnIndex,intrusive_ptr<AutoFitterOptions> options);
    /*
    <summary>
        Autofit the column width.
    </summary>
    <param name="columnIndex">Column index.</param>
    <param name="firstRow">One-based index of the first row to be used for autofit operation.</param>
    <param name="lastRow">One-based index of the last row to be used for autofit operation.</param>
    */
    void AutoFitColumn (int columnIndex,int firstRow,int lastRow);
    /*
    <summary>
        Autofit the column width.
    </summary>
    <param name="columnIndex">Column index.</param>
    <param name="firstRow">One-based index of the first row to be used for autofit operation.</param>
    <param name="lastRow">One-based index of the last row to be used for autofit operation.</param>
    <param name="options">auto fit options</param>
    */
    void AutoFitColumn (int columnIndex,int firstRow,int lastRow,intrusive_ptr<AutoFitterOptions> options);
    /*
    <summary>
         Autofit the row height.
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
    <param name="rowIndex">Row index</param>
    */
    virtual void AutoFitRow (int rowIndex);
    /*
    <summary>
        Autofit the row height.
    </summary>
    <param name="rowIndex">Row index</param>
    <param name="firstColumn">One-based index of the first column to be used for autofit operation.</param>
    <param name="lastColumn">One-based index of the last column to be used for autofit operation.</param>
    <param name="options">auto fit options</param>
    */
    void AutoFitRow (int rowIndex,int firstColumn,int lastColumn,intrusive_ptr<AutoFitterOptions> options);
    /*
    <summary>
        Autofit the row height.
    </summary>
    <param name="rowIndex">Row index</param>
    <param name="firstColumn">One-based index of the first column to be used for autofit operation.</param>
    <param name="lastColumn">One-based index of the last column to be used for autofit operation.</param>
    <param name="bRaiseEvents">If true then raise events.</param>
    */
    void AutoFitRow (int rowIndex,int firstColumn,int lastColumn,bool bRaiseEvents);
    /*
    <summary>
        Autofit the row height.
    </summary>
    <param name="rowIndex">Row index</param>
    <param name="firstColumn">One-based index of the first column to be used for autofit operation.</param>
    <param name="lastColumn">One-based index of the last column to be used for autofit operation.</param>
    <param name="bRaiseEvents">If true then raise events.</param>
    <param name="options">auto fit options</param>
    */
    void AutoFitRow (int rowIndex,int firstColumn,int lastColumn,bool bRaiseEvents,intrusive_ptr<AutoFitterOptions> options);
    /*
    <summary>
         Indicates whether cell has been initialized.
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
    <param name="row">Row index.</param>
    <param name="column">Column index.</param>
    <returns>Value indicating whether the cell was initialized or accessed by the user.</returns>
    */
    virtual bool CheckExistence (int row,int column);
    /*
    <summary>
        Clears data the worksheet.
    </summary>
    */
    virtual void Clear ();
    /*
    <summary>
        Clears contents of a range. 
    </summary>
    */
    virtual void ClearData ();
    virtual int ColumnWidthToPixels (double widthInChars);
    //void CopyFrom (intrusive_ptr<XlsWorksheet> worksheet,System.Collections.Generic.Dictionary`2[[System.String, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089],[System.String, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089]] hashStyleNames,System.Collections.Generic.Dictionary`2[[System.String, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089],[System.String, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089]] hashWorksheetNames,System.Collections.Generic.Dictionary`2[[System.Int32, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089],[System.Int32, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089]] dicFontIndexes,WorksheetCopyType flags,System.Collections.Generic.Dictionary`2[[System.Int32, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089],[System.Int32, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089]] hashExtFormatIndexes,System.Collections.Generic.Dictionary`2[[System.Int32, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089],[System.Int32, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089]] hashNameIndexes,System.Collections.Generic.Dictionary`2[[System.Int32, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089],[System.Int32, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089]] hashExternSheets);
    /*
    <summary>
        Gets cell type from current column.
    </summary>
    <param name="row">Indicates row.</param>
    <param name="column">Indicates column.</param>
    <param name="bNeedFormulaSubType">Indicates is need to indified formula sub type.</param>
    <returns>Returns cell type.</returns>
    */
    TRangeValueType GetCellType (int row,int column,bool bNeedFormulaSubType);
    //virtual intrusive_ptr<IInternalWorksheet> GetClonedObject (System.Collections.Generic.Dictionary`2[[System.String, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089],[System.String, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089]] hashNewNames,intrusive_ptr<XlsWorkbook> book);
    /*
    <summary>
        Returns string value corresponding to the cell.
    </summary>
    <param name="iCellIndex">Cell index to get value from.</param>
    <returns>String contained by the cell.</returns>
    */
    LPCWSTR_S GetStringValue (long cellIndex);
    /*
    <summary>
        Returns TextWithFormat object corresponding to the specified cell.
    </summary>
    <param name="cellIndex">Cell index.</param>
    <returns>Object corresponding to the specified cell.</returns>
    */
    //System.Object GetTextObject (long cellIndex);
    /*
    <summary>
        Indicates whether cell contains array-entered formula.
    </summary>
    <param name="cellIndex">cell index.</param>
    <returns></returns>
    */
    bool HasArrayFormula (long cellIndex);
    /*
    <summary>
        Indicates is has array formula.
    </summary>
    <param name="row">Represents row index.</param>
    <param name="column">Represents column index.</param>
    <returns>Indicates is contain array formula record.</returns>
    */
    bool HasArrayFormulaRecord (int row,int column);
    /*
    <summary>
        Insert a cell range into worksheet
    </summary>
    <param name="rowIndex">the cell range first row index</param>
    <param name="columnIndex">the cell range first column index</param>
    <param name="rowCount">the number of rows</param>
    <param name="columnCount">the number of columns</param>
    <param name="moveOptions">Insert options.</param>
    <param name="insertOptions">Move the cell on the right to right or Move the cell below down</param>
    <returns>return the range that insert into worksheet</returns>
    */
    intrusive_ptr<IXLSRange> InsertRange (int rowIndex,int columnIndex,int rowCount,int columnCount,InsertMoveOption moveOptions,InsertOptionsType insertOptions);
    /*
    <summary>
        Insert cut range into worksheet at specified position.
    </summary>
    <param name="cutRange">the cut range</param>
    <param name="rowIndex">the dest range first row index</param>
    <param name="colIndex">the dest range first column index</param>
    <param name="moveOptions">insert options.</param>
    */
    void InsertCutRange (intrusive_ptr<IXLSRange> cutRange,int rowIndex,int colIndex,InsertMoveOption moveOptions);
    virtual bool IsArrayFormula (long cellIndex);
    void ReparseFormula ();
    virtual void CopyToClipboard ();
    intrusive_ptr<XlsRangesCollection> CreateRanges (std::vector<intrusive_ptr<CellRange>> ranges);
    virtual void CreateNamedRanges (LPCWSTR_S namedRange,LPCWSTR_S referRange,bool vertical);
    /*
    <summary>
        Deletes a column.
    </summary>
    <param name="columnIndex">Column index to remove..</param>
    */
    virtual void DeleteColumn (int index);
    /*
    <summary>
        Removes specified column.
    </summary>
    <param name="index">One-based column index to remove.</param>
    <param name="count">Number of columns to remove.</param>
    */
    void DeleteColumn (int index,int count);
    /*
    <summary>
        Delete a row.
    </summary>
    <param name="index">Row index to remove</param>
    */
    virtual void DeleteRow (int index);
    /*
    <summary>
        Removes specified row.
    </summary>
    <param name="index">One-based row index to remove</param>
    <param name="count">Number of rows to delete.</param>
    */
    void DeleteRow (int index,int count);
    /*
    <summary>
        Inserts a new column into the worksheet. 
    </summary>
    <param name="columnIndex">Column index</param>
    */
    void InsertColumn (int columnIndex);
    void InsertColumn (int columnIndex,int columnCount,InsertOptionsType insertOptions);
    /*
    <summary>
         Inserts specified number column into the worksheet. 
    </summary>
    <param name="columnIndex">Column index</param>
    <param name="columnCount">Number of columns to insert.</param>
    */
    void InsertColumn (int columnIndex,int columnCount);
    /*
    <summary>
        Inserts a new row into the worksheet. 
    </summary>
    <param name="rowIndex">Index at which new row should be inserted</param>
    */
    void InsertRow (int rowIndex);
    //System.Data.DataTable ExportDataTable ();
    void InsertRow (int rowIndex,int rowCount,InsertOptionsType insertOptions);
    /*
    <summary>
        Inserts multiple rows into the worksheet. 
    </summary>
    <param name="rowIndex">Index at which new row should be inserted</param>
    <param name="rowCount">Number of rows to be inserted. </param>
    */
    void InsertRow (int rowIndex,int rowCount);
    /*
    <summary>
        Gets bool value from cell.
    </summary>
    <param name="row">Represents row index.</param>
    <param name="column">Represents column index.</param>
    <returns>Returns found bool value. If cannot found returns false.</returns>
    */
    virtual bool GetBoolean (int row,int column);
    /*
    <summary>
        Gets the width of the specified column 
    </summary>
    <param name="columnIndex">Column index</param>
    <returns>Width of column</returns>
    */
    double GetColumnWidth (int columnIndex);
    /*
    <summary>
         Gets the width of the specified column, in units of pixel. 
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
    <param name="columnIndex">Column index.</param>
    <returns>Width of column</returns>
    */
    virtual int GetColumnWidthPixels (int columnIndex);
    virtual intrusive_ptr<IStyle> GetDefaultColumnStyle (int columnIndex);
    virtual intrusive_ptr<IStyle> GetDefaultRowStyle (int rowIndex);
    virtual LPCWSTR_S GetError (int row,int column);
    virtual LPCWSTR_S GetFormulaErrorValue (int row,int column);
    virtual double GetFormulaNumberValue (int row,int column);
    virtual void add_CellValueChanged (intrusive_ptr<CellValueChangedEventHandler> value);
    virtual void remove_CellValueChanged (intrusive_ptr<CellValueChangedEventHandler> value);
    bool GetCopying ();
    void SetCopying (bool value);
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
    virtual intrusive_ptr<IOleObjects> GetOleObjects ();
    virtual intrusive_ptr<IAutoFilters> GetAutoFilters ();
    virtual intrusive_ptr<IList<XlsRange>> GetCells ();
    //System.Collections.Generic.List`1[[Spire.Xls.CellRange, Spire.XLS, Version=12.7.7.0, Culture=neutral, PublicKeyToken=null]] GetCellList ();
    /*
    <summary>
        True if page breaks (both automatic and manual) on the specified
            worksheet are displayed.
    </summary>
    */
    virtual bool GetDisplayPageBreaks ();
    virtual void SetDisplayPageBreaks (bool value);
    virtual intrusive_ptr<IList<XlsRange>> GetMergedCells ();
    /*
    <summary>
        Name range used by macros to access to workbook items.
    </summary>
    */
    virtual intrusive_ptr<INameRanges> GetNames ();
    virtual intrusive_ptr<IPageSetup> GetPageSetup ();
    intrusive_ptr<IXLSRange> GetMaxDisplayRange ();
    virtual intrusive_ptr<IXLSRange> GetAllocatedRange ();
    bool GetAllocatedRangeIncludesFormatting ();
    void SetAllocatedRangeIncludesFormatting (bool value);
    virtual intrusive_ptr<IList<XlsRange>> GetRows ();
    virtual intrusive_ptr<IList<XlsRange>> GetColumns ();
    /*
    <summary>
        Returns collection with all conditional formats in the worksheet. Read-only.
    </summary>
    */
    intrusive_ptr<IConditionalFormatsCollection> GetConditionalFormats ();
    /*
    <summary>
         Gets or sets default height of all the rows in the worksheet,
             in points.Read/write Double.
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
    virtual double GetDefaultRowHeight ();
    virtual void SetDefaultRowHeight (double value);
    /*
    <summary>
        Return default row height.
    </summary>
    */
    virtual int GetDefaultPrintRowHeight ();
    void SetDefaultPrintRowHeight (int value);
    /*
    <summary>
        Gets or sets the view mode of the sheet.
    </summary>
    <value></value>
    */
    ViewMode GetViewMode ();
    void SetViewMode (ViewMode value);
    /*
    <summary>
         Returns or sets the default  width of all the columns in the worksheet. Read/write Double.
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
    virtual double GetDefaultColumnWidth ();
    virtual void SetDefaultColumnWidth (double value);
    /*
    <summary>
         Zoom factor of document.
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
    <remarks> Value of zoom should be between 10 and 400.</remarks>
    */
    virtual int GetZoom ();
    virtual void SetZoom (int value);
    /*
    <summary>
        Gets or sets the zoom scale of normal view of the sheet.
    </summary>
    <value></value>
    */
    int GetZoomScaleNormal ();
    void SetZoomScaleNormal (int value);
    /*
    <summary>
        Gets or sets the zoom scale of page break preview of the sheet.
    </summary>
    <value></value>
    */
    int GetZoomScalePageBreakView ();
    void SetZoomScalePageBreakView (int value);
    /*
    <summary>
        Gets or sets the zoom scale of page layout view of the sheet.
    </summary>
    <value></value>
    */
    int GetZoomScalePageLayoutView ();
    void SetZoomScalePageLayoutView (int value);
    int GetSelectionCount ();
    /*
    <summary>
        Gets or sets excel file version.
    </summary>
    */
    virtual ExcelVersion GetVersion ();
    void SetVersion (ExcelVersion value);
    intrusive_ptr<SparklineGroupCollection> GetSparklineGroups ();
    /*
    <summary>
        Gets or sets the standard (default) height option flag, which defines that
            standard (default) row height and book default font height do not match. Bool.
    </summary>
    */
    bool GetStandardHeightFlag ();
    void SetStandardHeightFlag (bool value);
    virtual ExcelSheetType GetType ();
    virtual intrusive_ptr<XlsRange> GetRange ();
    virtual intrusive_ptr<IXLSRange> Get (int row,int column);
    virtual intrusive_ptr<IXLSRange> Get (int row,int column,int lastRow,int lastColumn);
    virtual intrusive_ptr<IXLSRange> Get (LPCWSTR_S name);
    /*
    <summary>
        Gets top left cell of the worksheet.
    </summary>
    <returns></returns>
    */
    intrusive_ptr<CellRange> GetTopLeftCell ();
    void SetTopLeftCell (intrusive_ptr<CellRange> value);
    /*
    <summary>
        Indicates whether all created range objects should be cached. Default value is true.
    </summary>
    */
    virtual bool GetUseRangesCache ();
    virtual void SetUseRangesCache (bool value);
    virtual int GetVerticalSplit ();
    virtual void SetVerticalSplit (int value);
    virtual intrusive_ptr<IVPageBreaks> GetVPageBreaks ();
    /*
    <summary>
        Gets or sets index of the active pane.
    </summary>
    */
    virtual int GetActivePane ();
    virtual void SetActivePane (int value);
    void SetFirstColumn (int columnIndex);
    /*
    <summary>
        Updates last column index.
    </summary>
    <param name="columnIndex">Column index.</param>
    */
    void SetLastColumn (int columnIndex);
    /*
    <summary>
        Updates first row index.
    </summary>
    <param name="rowIndex">Row index.</param>
    */
    void SetFirstRow (int rowIndex);
    /*
    <summary>
        Updates last row index.
    </summary>
    <param name="rowIndex">Row index.</param>
    */
    void SetLastRow (int rowIndex);
    /*
    <summary>
        Shows a column.
    </summary>
    <param name="columnIndex">Column index.</param>
    */
    void ShowColumn (int columnIndex);
    void ShowRow (int rowIndex);
    //void ToEMFStream (intrusive_ptr<Stream> stream,int firstRow,int firstColumn,int lastRow,int lastColumn,EmfType emfType);
    ///*
    //<summary></summary>
    //<param name="stream">stream.</param>
    //<param name="firstRow">One-based index of the first row to convert.</param>
    //<param name="firstColumn">One-based index of the first column to convert.</param>
    //<param name="lastRow">One-based index of the last row to convert.</param>
    //<param name="lastColumn">One-based index of the last column to convert.</param>
    //*/
    //void ToEMFStream (intrusive_ptr<Stream> stream,int firstRow,int firstColumn,int lastRow,int lastColumn);
    void SetActiveCell (intrusive_ptr<IXLSRange> range);
    void SetActiveCell (intrusive_ptr<IXLSRange> range,bool updateApplication);
    virtual int GetFirstVisibleColumn ();
    virtual void SetFirstVisibleColumn (int value);
    virtual int GetFirstVisibleRow ();
    virtual void SetFirstVisibleRow (int value);
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
    virtual bool GetGridLinesVisible ();
    virtual LPCWSTR_S GetCodeName() { return XlsWorksheetBase::GetCodeName(); }
    virtual void SetCodeName(LPCWSTR_S value) { XlsWorksheetBase::SetCodeName(value); }
    virtual void Protect(LPCWSTR_S password) { XlsWorksheetBase::Protect(password); }
    virtual void Unprotect(LPCWSTR_S password) { XlsWorksheetBase::Unprotect(password); }

    virtual ExcelColors GetGridLineColor()
    {
        return XlsWorksheetBase::GetGridLineColor();
    }
    virtual void SetGridLineColor(ExcelColors value)
    {
        XlsWorksheetBase::SetGridLineColor(value);
    }
    virtual int GetIndex()
    {
        return XlsWorksheetBase::GetIndex();
    }
    virtual intrusive_ptr<IComments> GetComments()
    {
        return XlsWorksheetBase::GetComments();
    }
    virtual int GetTopVisibleRow()
    {
        return XlsWorksheetBase::GetTopVisibleRow();
    }
    virtual void SetTopVisibleRow(int value)
    {
        XlsWorksheetBase::SetTopVisibleRow(value);
    }
    virtual int GetLeftVisibleColumn()
    {
        return XlsWorksheetBase::GetLeftVisibleColumn();
    }
    virtual void SetLeftVisibleColumn(int value)
    {
        XlsWorksheetBase::SetLeftVisibleColumn(value);
    }
    virtual int GetFirstRow()
    {
        return XlsWorksheetBase::GetFirstRow();
    }
    virtual int GetFirstColumn()
    {
        return XlsWorksheetBase::GetFirstColumn();
    }
    virtual int GetLastRow()
    {
        return XlsWorksheetBase::GetLastRow();
    }
    virtual int GetLastColumn()
    {
        return XlsWorksheetBase::GetLastColumn();
    }
    virtual intrusive_ptr<XlsWorkbook> GetParentWorkbook()
    {
        return XlsWorksheetBase::GetParentWorkbook();
    }
private:
};
}}
