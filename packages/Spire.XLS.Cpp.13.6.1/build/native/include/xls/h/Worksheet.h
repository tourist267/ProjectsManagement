#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "XlsWorksheet.h"
#include "CellRange.h"
#include "CellStyle.h"
#include "PageSetup.h"
#include "XlsCommentsCollection.h"
#include "XlsHPageBreaksCollection.h"
#include "XlsHyperLinksCollection.h"
#include "XlsPicturesCollection.h"
#include "XlsVPageBreaksCollection.h"
#include "AutoFiltersCollection.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS Worksheet : public virtual XlsWorksheet
{
    friend class CellRange;
    friend class Workbook;
    friend class RangesCollection;
    friend class WorksheetsCollection;
    friend class AutoFiltersCollection;
    friend class IDataValidationCollection;
    friend class IDataValidationTable;
    friend class XlsDataValidationTable;
    friend class XlsDataValidationCollection;
    friend class XlsAutoFiltersCollection;
public:
    /*
    <summary>
        Returns a Range object that represents the used range on the
            specified worksheet. Read-only.
    </summary>
    */
    intrusive_ptr<IXLSRange> GetAllocatedRange ();
    /*
    <summary>
        Get cell range.
    </summary>
    <param name="row"></param>
    <param name="column"></param>
    <param name="lastRow"></param>
    <param name="lastColumn"></param>
    <returns></returns>
    */
    intrusive_ptr<IXLSRange> Get (int row,int column,int lastRow,int lastColumn);
    /*
    <summary>
        Get cell range.
    </summary>
    <param name="row"></param>
    <param name="column"></param>
    <returns></returns>
    */
    intrusive_ptr<IXLSRange> Get (int row,int column);
    /*
    <summary>
        Get cell range.
    </summary>
    <param name="name"></param>
    <returns></returns>
    */
    intrusive_ptr<IXLSRange> Get (LPCWSTR_S name);
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
    intrusive_ptr<IList<XlsRange>> GetMergedCells ();
    /*
    <summary>
        Finds the all cells with specified string value.
    </summary>
    <param name="findValue">Value to search.</param>
    <param name="flags">Type of value to search.</param>
    <param name="findOptions">Way to search.</param>
    <returns>All found cells, or Null if value was not found.</returns>
    */
    intrusive_ptr<IList<CellRange>> FindAll (LPCWSTR_S findValue,FindType flags,ExcelFindOptions findOptions);
    /*
    <summary>
        Finds the cell with the input number.
    </summary>
    <param name="doubleValue">Double value to search for.</param>
    <param name="formulaValue">Indicates if includes formula value.</param>
    <returns>Found ranges.</returns>
    */
    intrusive_ptr<IList<CellRange>> FindAllNumber (double doubleValue,bool formulaValue);
    /*
    <summary>
        Finds the cell with the input string.
    </summary>
    <param name="stringValue">String value to search for.</param>
    <param name="formula">Indicates if includes formula.</param>
    <param name="formulaValue">Indicates if includes formula value.</param>
    <returns>Found ranges.</returns>
    */
    intrusive_ptr<IList<CellRange>> FindAllString (LPCWSTR_S stringValue,bool formula,bool formulaValue);
    /*
    <summary>
        Finds the cell with the input date time.
    </summary>
    <param name="dateTimeValue">Datetime value to search for.</param>
    <returns>Found ranges.</returns>
    */
    intrusive_ptr<IList<CellRange>> FindAllDateTime (intrusive_ptr<DateTime> dateTimeValue);
    /*
    <summary>
        Finds the cell with the input time span.
    </summary>
    <param name="timeSpanValue">Time span value to search for.</param>
    <returns>Found ranges.</returns>
    */
    intrusive_ptr<IList<CellRange>> FindAllTimeSpan (intrusive_ptr<TimeSpan> timeSpanValue);
    /*
    <summary>
        Finds the cell with the input bool.
    </summary>
    <param name="boolValue">Bool value to search for.</param>
    <returns>Found ranges.</returns>
    */
    intrusive_ptr<IList<CellRange>> FindAllBool (bool boolValue);
    /*
    <summary>
        Finds the cell with the input bool.
    </summary>
    <param name="boolValue">Bool value to search for.</param>
    <returns>Found range.</returns>
    */
    intrusive_ptr<CellRange> FindBool (bool boolValue);
    /*
    <summary>
        Finds the cell with the input double.
    </summary>
    <param name="doubleValue">Double value to search for.</param>
    <param name="formulaValue">Indicates if includes formula value.</param>
    <returns>Found range.</returns>
    */
    intrusive_ptr<CellRange> FindNumber (double doubleValue,bool formulaValue);
    /*
    <summary>
        Finds the cell with the input string.
    </summary>
    <param name="stringValue">String value to search for.</param>
    <param name="formula">Indicates whether includes formula.</param>
    <param name="formulaValue">Indicates whether includes formula value.</param>
    <returns>Found range.</returns>
    */
    intrusive_ptr<CellRange> FindString (LPCWSTR_S stringValue,bool formula,bool formulaValue);
    /*
    <summary>
        Finds the cell with the input date time.
    </summary>
    <param name="dateTimeValue">DateTime value to search for.</param>
    <returns>Found range.</returns>
    */
    intrusive_ptr<CellRange> FindDateTime (intrusive_ptr<DateTime> dateTimeValue);
    /*
    <summary>
        Finds the cell with the input time span.
    </summary>
    <param name="timeSpanValue">Time span value to search for.</param>
    <returns>Found range.</returns>
    */
    intrusive_ptr<CellRange> FindTimeSpan (intrusive_ptr<TimeSpan> timeSpanValue);
    /*
    <summary>
        Copy data from specified worksheet.
    </summary>
    <param name="worksheet">worksheet object</param>
    */
    void CopyFrom (intrusive_ptr<Worksheet> worksheet);
    /*
    <summary>
        Copys data from a source range to a destination range. 
    </summary>
    <param name="sourceRange">Source range.</param>
    <param name="destRange">Destination range.</param>
    */
    void Copy (intrusive_ptr<CellRange> sourceRange,intrusive_ptr<CellRange> destRange);
    /*
    <summary>
        Copys data from a source range to a destination range. 
    </summary>
    <param name="sourceRange">Source range.</param>
    <param name="destRange">Destination range.</param>
    <param name="copyStyle">Indicates whether copys styles.</param>
    */
    void Copy (intrusive_ptr<CellRange> sourceRange,intrusive_ptr<CellRange> destRange,bool copyStyle);
    /*
    <summary>
        Copys data from a source range to a destination range. 
    </summary>
    <param name="sourceRange">Source range.</param>
    <param name="destRange">Destination range</param>
    <param name="copyStyle">Indicates whether copy styles.</param>
    <param name="updateReference">Indicates whether update reference ranges.</param>
    <param name="ignoreSize">Indicates whether check range sizes.</param>
    */
    void Copy (intrusive_ptr<CellRange> sourceRange,intrusive_ptr<CellRange> destRange,bool copyStyle,bool updateReference,bool ignoreSize);
    /*
    <summary>
        Copy data from source range to destination worksheet.
    </summary>
    <param name="sourceRange">Source range.</param>
    <param name="worksheet">Destination worksheet</param>
    <param name="destRow">Row index of destination worksheet.</param>
    <param name="destColumn">Column index of destination worksheet.</param>
    */
    void Copy (intrusive_ptr<CellRange> sourceRange,intrusive_ptr<Worksheet> worksheet,int destRow,int destColumn);
    /*
    <summary>
        Copy data from source range to destination worksheet.
    </summary>
    <param name="sourceRange">Source range</param>
    <param name="worksheet">Destination worksheet.</param>
    <param name="destRow">Row index of destination worksheet.</param>
    <param name="destColumn">Column index of destination worksheet.</param>
    <param name="copyStyle">Indicates whehter copy styles.</param>
    */
    void Copy (intrusive_ptr<CellRange> sourceRange,intrusive_ptr<Worksheet> worksheet,int destRow,int destColumn,bool copyStyle);
    /*
    <summary>
        Copy data from source range to destination worksheet.
    </summary>
    <param name="sourceRange">Source range</param>
    <param name="worksheet">Destination worksheet.</param>
    <param name="destRow">Row index of destination worksheet.</param>
    <param name="destColumn">Column index of destination worksheet.</param>
    <param name="copyStyle">Indicates whehter copy styles.</param>
    <param name="updateRerence">Indicates whether update reference range.</param>
    */
    void Copy (intrusive_ptr<CellRange> sourceRange,intrusive_ptr<Worksheet> worksheet,int destRow,int destColumn,bool copyStyle,bool updateRerence);
    /*
    <summary>
        Copys data from a source range to a destination range. 
    </summary>
    <param name="sourceRange">Source range.</param>
    <param name="destRange">Destination range</param>
    <param name="copyStyle">Indicates whether copy styles.</param>
    <param name="updateReference">Indicates whether update reference ranges.</param>
    <param name="ignoreSize">Indicates whether check range sizes.</param>
    <param name="copyShape">Indicates whether copy shape.</param>
    */
    void Copy (intrusive_ptr<CellRange> sourceRange,intrusive_ptr<CellRange> destRange,bool copyStyle,bool updateReference,bool ignoreSize,bool copyShape);
    /*
    <summary>
        Copys data from a source range to a destination range. 
    </summary>
    <param name="sourceRange">Source range.</param>
    <param name="destRange">Destination range</param>
    <param name="copyOptions">Copy options.</param>
    */
    void Copy (intrusive_ptr<CellRange> sourceRange,intrusive_ptr<CellRange> destRange,CopyRangeOptions copyOptions);
    /*
    <summary>
        Copys data from a source row to a destination row. 
    </summary>
    <param name="sourceRow">Source row.</param>
    <param name="destSheet">Destination sheet</param>
    <param name="destRowIndex">Destination row index</param>
    <param name="copyOptions">Copy options.</param>
    */
    void CopyRow (intrusive_ptr<CellRange> sourceRow,intrusive_ptr<Worksheet> destSheet,int destRowIndex,CopyRangeOptions copyOptions);
    /*
    <summary>
        Copys data from a source column to a destination column. 
    </summary>
    <param name="sourceColumn">Source column.</param>
    <param name="destSheet">Destination sheet</param>
    <param name="destColIndex">Destination column index</param>
    <param name="copyOptions">Copy options.</param>
    */
    void CopyColumn (intrusive_ptr<CellRange> sourceColumn,intrusive_ptr<Worksheet> destSheet,int destColIndex,CopyRangeOptions copyOptions);
    /*
    <summary>
        Move data from source range to destination range.
    </summary>
    <param name="sourceRange">Source range.</param>
    <param name="destRange">Destination range.</param>
    */
    void Move (intrusive_ptr<CellRange> sourceRange,intrusive_ptr<CellRange> destRange);
    void Move (intrusive_ptr<CellRange> sourceRange,intrusive_ptr<CellRange> destRange,bool updateReference,bool copyStyle);
    //System.Data.DataTable ExportDataTable (intrusive_ptr<CellRange> range,bool exportColumnNames);
    //System.Data.DataTable ExportDataTable (intrusive_ptr<CellRange> range,intrusive_ptr<ExportTableOptions> options);
    //System.Data.DataTable ExportDataTable (int firstRow,int firstColumn,int maxRows,int maxColumns,intrusive_ptr<ExportTableOptions> options);
    //System.Data.DataTable ExportDataTable (intrusive_ptr<CellRange> range,bool exportColumnNames,bool computedFormulaValue);
    //System.Data.DataTable ExportDataTable (int firstRow,int firstColumn,int maxRows,int maxColumns,bool exportColumnNames);
    /*
    <summary>
        Intersects two ranges.
    </summary>
    <param name="range1">First range.</param>
    <param name="range2">Second range.</param>
    <returns>Intersection of two ranges</returns>
    */
    intrusive_ptr<CellRange> GetIntersectRanges (intrusive_ptr<CellRange> range1,intrusive_ptr<CellRange> range2);
    /*
    <summary>
        Combines a range of cells into a single cell. 
    </summary>
    <param name="range1">First range.</param>
    <param name="range2">Second range.</param>
    <returns>Merged ranges</returns>
    */
    intrusive_ptr<CellRange> Merge (intrusive_ptr<CellRange> range1,intrusive_ptr<CellRange> range2);
    /*
    <summary>
         Sets default style for column.
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
    <param name="columnIndex">Column index.</param>
    <param name="defaultStyle">Default style.</param>
    */
    void SetDefaultColumnStyle (int columnIndex,intrusive_ptr<CellStyle> defaultStyle);
    /*
    <summary>
         Sets default style for column.
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
    <param name="firstColumnIndex">First column index.</param>
    <param name="lastColumnIndex">Last column index.</param>
    <param name="defaultStyle">Default style.</param>
    */
    void SetDefaultColumnStyle (int firstColumnIndex,int lastColumnIndex,intrusive_ptr<CellStyle> defaultStyle);
    /*
    <summary>
         Sets default style for row.
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
    void SetDefaultRowStyle (int rowIndex,intrusive_ptr<CellStyle> defaultStyle);
    /*
    <summary>
         Sets default style for row.
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
    <param name="firstRowIndex">First row index.</param>
    <param name="lastRowIndex">Last row index.</param>
    <param name="defaultStyle">Default style.</param>
    */
    void SetDefaultRowStyle (int firstRowIndex,int lastRowIndex,intrusive_ptr<CellStyle> defaultStyle);
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
    <param name="columnIndex">Column index.</param>
    <returns>Default column style or null if default style is not exists.</returns>
    */
    intrusive_ptr<IStyle> GetDefaultColumnStyle (int columnIndex);
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
    <returns>Default row style or null if default style is not set.</returns>
    */
    intrusive_ptr<IStyle> GetDefaultRowStyle (int rowIndex);
    void RemoveMergedCells (intrusive_ptr<XlsRange> range);
    /*
    <summary>
        Removes range from list.
    </summary>
    <param name="range">Specified range.</param>
    */
    void RemoveRange (intrusive_ptr<CellRange> range);
    /*
    <summary>
        Removes range from list.
    </summary>
    <param name="rowIndex">Row index.</param>
    <param name="columnIndex">Column index.</param>
    */
    void RemoveRange (int rowIndex,int columnIndex);
    /*
    <summary>
        Remove picture from this worksheet.
    </summary>
    <param name="index">Picture ID</param>
    */
    void RemovePicture (int index);
    /*
    <summary>
        Remove picture from this worksheet.
    </summary>
    <param name="picturename">Picture name</param>
    */
    void RemovePicture (LPCWSTR_S picturename);
    /*
    <summary>
        Remove picture from this worksheet.
    </summary>
    <param name="picture">A pictureshape</param>
    */
    void RemovePicture (intrusive_ptr<IPictureShape> picture);
    /*
    <summary>
        Apply style to whole sheet.
    </summary>
    <param name="style">style to apply</param>
    */
    void ApplyStyle (intrusive_ptr<CellStyle> style);
    /*
    <summary>
        Freezes panes at the specified cell in the worksheet. 
    </summary>
    <param name="rowIndex">Row index.</param>
    <param name="columnIndex">Column index.</param>
    */
    void FreezePanes (int rowIndex,int columnIndex);
    std::vector<int> GetFreezePanes ();
    /*
    <summary>
        Sets active cell
    </summary>
    <param name="range">Cell to activate.</param>
    */
    void SetActiveCell (intrusive_ptr<CellRange> range);
    /*
    <summary>
        Returns all used cells in the worksheet. Read-only.
    </summary>
    */
    intrusive_ptr<IList<XlsRange>> GetCells ();
    /*
    <summary>
        Rrepresents all used columns on the specified worksheet. Read-only Range object.
    </summary>
    */
    intrusive_ptr<IList<XlsRange>> GetColumns ();
    /*
    <summary>
        Returns a PageSetup object that contains all the page setup settings
            for the specified object. Read-only.
    </summary>
    */
    intrusive_ptr<IPageSetup> GetPageSetup ();
    intrusive_ptr<IAutoFilters> GetAutoFilters ();
    /*
    <summary>
        Returns charts collection. Read-only.
    </summary>
    */
    intrusive_ptr<WorksheetChartsCollection> GetCharts ();
    intrusive_ptr<QueryTableCollection> GetQueryTables ();
    /*
    <summary>
         Returns comments collection for this worksheet. Read-only.
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
    intrusive_ptr<IComments> GetComments ();
    /*
    <summary>
        Returns an HPageBreaks collection that represents the horizontal
            page breaks on the sheet.
    </summary>
    */
    intrusive_ptr<IHPageBreaks> GetHPageBreaks ();
    /*
    <summary>
        Collection of all worksheet's hyperlinks.
    </summary>
    */
    intrusive_ptr<IHyperLinks> GetHyperLinks ();
    /*
    <summary>
        Pictures collection. Read-only.
    </summary>
    */
    intrusive_ptr<IPictures> GetPictures ();
    /*
    <summary>
        Print area of worksheet.
    </summary>
    */
    intrusive_ptr<CellRange> GetPrintRange ();
    /*
    <summary>
        Returns a VPageBreaks collection that represents the vertical page
            breaks on the sheet. Read-only.
    </summary>
    */
    intrusive_ptr<IVPageBreaks> GetVPageBreaks ();
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
    intrusive_ptr<IXLSRange> GetRange(LPCWSTR_S name);
    intrusive_ptr<IXLSRange> GetRange(int row, int column, int lastRow, int lastColumn);
    intrusive_ptr<IXLSRange> GetRange(int row, int column);
    double CalculateAndGetRowHeight (int rowIndex);
    /*
    <summary>
        Represents all the rows on the specified worksheet. Read-only Range object.
    </summary>
    */
    intrusive_ptr<IList<XlsRange>> GetRows ();
    intrusive_ptr<Workbook> GetWorkbookObj ();
    //intrusive_ptr<Workbook> GetParentWorkbook ();

    virtual int GetIndex() { return XlsWorksheetBase::GetIndex(); }
    virtual ExcelColors GetGridLineColor() { return XlsWorksheetBase::GetGridLineColor(); }
    virtual void SetGridLineColor(ExcelColors value) { XlsWorksheetBase::SetGridLineColor(value); }
    virtual int GetTopVisibleRow() { return XlsWorksheetBase::GetTopVisibleRow(); }
    virtual void SetTopVisibleRow(int value) { XlsWorksheetBase::SetTopVisibleRow(value); }
    virtual int GetLeftVisibleColumn() { return XlsWorksheetBase::GetLeftVisibleColumn(); }
    virtual void SetLeftVisibleColumn(int value) { XlsWorksheetBase::SetLeftVisibleColumn(value); }
    virtual int GetFirstRow() { return XlsWorksheetBase::GetFirstRow(); }
    virtual void SetFirstRow(int value) { XlsWorksheetBase::SetFirstRow(value); }
    virtual int GetFirstColumn() { return XlsWorksheetBase::GetFirstColumn(); }
    virtual void SetFirstColumn(int value) { XlsWorksheetBase::SetFirstColumn(value); }
    virtual int GetLastRow() { return XlsWorksheetBase::GetLastRow(); }
    virtual void SetLastRow(int value) { XlsWorksheetBase::SetLastRow(value); }
    virtual int GetLastColumn() { return XlsWorksheetBase::GetLastColumn(); }
    virtual void SetLastColumn(int value) { XlsWorksheetBase::SetLastColumn(value); }
    virtual intrusive_ptr<XlsWorkbook> GetParentWorkbook() { return XlsWorksheetBase::GetParentWorkbook(); }

private:
};
}}
