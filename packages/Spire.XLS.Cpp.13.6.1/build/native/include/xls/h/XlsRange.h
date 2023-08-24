#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IExcelApplication.h"
#include "IXLSRange.h"
#include "ICombinedRange.h"
#include "XlsObject.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS XlsRange : public virtual XlsObject,public virtual ICombinedRange
{
    friend class IWorksheet;
    friend class XlsWorksheet;
public:
    bool IsIntersect (intrusive_ptr<IXLSRange> range);
    /*
    <summary>
        Measures size of the string.
    </summary>
    <param name="measureString">String to measure.</param>
    <returns>Size of the string.</returns>
    */
    intrusive_ptr<SizeF> MeasureString (LPCWSTR_S measureString);
    /*
    <summary>
         Creates a merged cell from the specified Range object.
        <example>The following code illustrates how to merge the Range:
        <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        Worksheet worksheet = workbook.Worksheets[0];
        //Set text
        worksheet["A1"].Text = "Merged cell";
        //Merge cells
        worksheet["A1:B1"].Merge();
        //Save to file
        workbook.SaveToFile("Merge.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual void Merge ();
    void RemoveMergeComment ();
    /*
    <summary>
         Creates a merged cell from the specified Range object.
        <example>The following code illustrates how to merge the Range with clear option:
        <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        Worksheet worksheet = workbook.Worksheets[0];
        //Set text
        worksheet["A1"].Text = "Merged cell";
        worksheet["B1"].Text = "sample";
        //Merge cells
        worksheet["A1:B1"].Merge(true);
        //Save to file
        workbook.SaveToFile("Merge.xlsx");
        </code>
        </example>
    </summary>
    <param name="clearCells">Indicates whether to clear unnecessary cells.</param>
    */
    virtual void Merge (bool clearCells);
    /*
    <summary>
        Partially clear range.
    </summary>
    */
    void PartialClear ();
    /*
    <summary>
        Replaces cell's part text and reserve text's format.
    </summary>
    <param name="oldPartValue">Part value of cell's text to search for.</param>
    <param name="newPartValue">The replacement value.</param>
    */
    void TextPartReplace (LPCWSTR_S oldPartValue,LPCWSTR_S newPartValue);
    void RemoveCombinedRange (intrusive_ptr<CellRange> cr);
    //System.Collections.Generic.List`1[[Spire.Xls.CellRange, Spire.XLS, Version=12.7.7.0, Culture=neutral, PublicKeyToken=null]] GetCombinedCells ();
    /*
    <summary>
        Returns the combined range reference in the language.
            Read-only String.
    </summary>
    */
    LPCWSTR_S GetCombinedAddress ();
    /*
    <summary>
         Separates a merged area into individual cells.
        <example>The following code illustrates how to UnMerge the merged cells:
        <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        Worksheet worksheet = workbook.Worksheets[0];
        //Set text
        worksheet["A1"].Text = "Merged cell";
        //Merge cells
        worksheet["A1:B1"].Merge(true);
        //Unmerge cells
        worksheet["A1:B1"].UnMerge();
        //Save to file
        workbook.SaveToFile("UnMerge.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual void UnMerge ();
    /*
    <summary>
        Reparses formula.
    </summary>
    */
    void ReparseFormulaString ();
    //virtual System.Collections.Generic.IEnumerator`1[[Spire.Xls.Core.IXLSRange, Spire.XLS, Version=12.7.7.0, Culture=neutral, PublicKeyToken=null]] GetEnumerator ();
    intrusive_ptr<ICommentShape> AddComment (bool bIsParseOptions);
    void SetAutoFormat (AutoFormatType format);
    void SetAutoFormat (AutoFormatType format,AutoFormatOptions options);
    void SetDataValidation (intrusive_ptr<XlsValidation> dv);
    /*
    <summary>
        Replaces cells' values with new data.
    </summary>
    <param name="oldValue">Value to search for.</param>
    <param name="newValues">The replacement value.</param>
    <param name="isVertical">Indicates whether to insert values vertically or horizontally.</param>
    */
    void Replace (LPCWSTR_S oldValue,std::vector<LPCWSTR_S> newValues,bool isVertical);
    /*
    <summary>
        Replaces cells' values with new data. 
    </summary>
    <param name="oldValue">Value to search for.</param>
    <param name="newValue">The replacement value.</param>
    */
    void Replace (LPCWSTR_S oldValue,LPCWSTR_S newValue);
    /*
    <summary>
        Replaces cells' values with new data.
    </summary>
    <param name="oldValue">Value to search for.</param>
    <param name="newValues">DataColumn to replace.</param>
    <param name="isFieldNamesShown">Indicates whether to insert values vertically or horizontally.</param>
    */
    void Replace (LPCWSTR_S oldValue,std::vector<double> newValues,bool isVertical);
    /*
    <summary>
        Replaces cells' values with new data.
    </summary>
    <param name="oldValue">Value to search for.</param>
    <param name="newValues">The replacement value.</param>
    <param name="isVertical">Indicates whether to insert values vertically or horizontally.</param>
    */
    void Replace (LPCWSTR_S oldValue,std::vector<int> newValues,bool isVertical);
    //void Replace (LPCWSTR_S oldValue,System.Data.DataTable newValues,bool isFieldNamesShown);
    /*
    <summary>
        Replaces cells' values with new data. 
    </summary>
    <param name="oldValue">Value to search for.</param>
    <param name="newValue">The replacement value.</param>
    */
    void Replace (LPCWSTR_S oldValue,intrusive_ptr<DateTime> newValue);
    /*
    <summary>
        Replaces cells' values with new data. 
    </summary>
    <param name="oldValue">Value to search for.</param>
    <param name="newValue">The replacement value.</param>
    */
    void Replace (LPCWSTR_S oldValue,double newValue);
    intrusive_ptr<RangesCollection> Union (intrusive_ptr<CellRange> range);
    //void Replace (LPCWSTR_S oldValue,System.Data.DataColumn newValues,bool isFieldNamesShown);
    //virtual System.Data.DataTable ExportDataTable (intrusive_ptr<ExportTableOptions> options);
    intrusive_ptr<CellRange> AddCombinedRange (intrusive_ptr<CellRange> cr);
    /*
    <summary>
        Update region of range
    </summary>
    <param name="startRow">first Row</param>
    <param name="startColumn">first Column</param>
    <param name="endRow">last Row</param>
    <param name="endColumn">last Column</param>
    */
    void UpdateRange (int startRow,int startColumn,int endRow,int endColumn);
    /*
    <summary>
        Convert number that stored as text to number
    </summary>
    */
    void ConvertToNumber ();
    void SetSharedFormula (LPCWSTR_S sharedFormula,int rowNumber,int columnNumber);
    /*
    <summary>
         Returns the range reference using R1C1 notation.
        <example>The following code illustrates how to access AddressR1C1Local property of the Range:
        <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        Worksheet worksheet = workbook.Worksheets[0];
        //Get RangeR1C1AddressLocal
        string address = worksheet.Range[3, 4].RangeR1C1Address;
        </code>
        </example>
    </summary>
    */
    virtual LPCWSTR_S GetRangeR1C1AddressLocal ();
    virtual intrusive_ptr<IRichTextString> GetRichText ();
    /*
    <summary>
        Gets and sets the html string which contains data and some formattings in this cell.
    </summary>
    */
    virtual LPCWSTR_S GetHtmlString ();
    virtual void SetHtmlString (LPCWSTR_S value);
    /*
    <summary>
        Returns the number of the first row of the first area in the range.
    </summary>
    */
    virtual int GetRow ();
    /*
    <summary>
        Row group level.
    </summary>
    <remarks>
        -1 - column group is not same.
        0 - Not group
        1 - 7 - group level.
    </remarks>
    */
    virtual int GetRowGroupLevel ();
    /*
    <summary>
         Returns the height of all the rows in the range specified, measured in points.
        <example>The following code illustrates how to set row height:
        <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        Worksheet worksheet = workbook.Worksheets[0];
        //Set text
        worksheet["A1"].Text = "Test";
        //Set row height
        worksheet["A1"].RowHeight = 30;
        //Save to file
        workbook.SaveToFile("RowHeight.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual double GetRowHeight ();
    virtual void SetRowHeight (double value);
    virtual intrusive_ptr<IList<XlsRange>> GetRows ();
    //System.UInt16 GetExtendedFormatIndex ();
    //void SetExtendedFormatIndex (System.UInt16 value);
    void SetExtendedFormatIndex (int index);
    void SetRowHeight (double rowHeight,bool bIsBadFontHeight);
    void ApplyStyle (intrusive_ptr<IStyle> style,intrusive_ptr<CellStyleFlag> flag);
    virtual intrusive_ptr<IStyle> GetStyle ();
    virtual void SetStyle (intrusive_ptr<IStyle> value);
    /*
    <summary>
        Gets / sets text of range.
    </summary>
    */
    virtual LPCWSTR_S GetText ();
    virtual void SetText (LPCWSTR_S value);
    virtual intrusive_ptr<IXLSRange> Get (int row,int column,int lastRow,int lastColumn);
    virtual intrusive_ptr<IXLSRange> Get (int row,int column);
    virtual void SetItem (int row,int column,intrusive_ptr<IXLSRange> value);
    virtual intrusive_ptr<IXLSRange> Get (LPCWSTR_S name,bool IsR1C1Notation);
    virtual intrusive_ptr<IXLSRange> Get (LPCWSTR_S name);
    /*
    <summary>
        Gets or sets timespan value of cell.
    </summary>
    */
    virtual intrusive_ptr<TimeSpan> GetTimeSpanValue ();
    virtual void SetTimeSpanValue (intrusive_ptr<TimeSpan> value);
    /*
    <summary>
         Returns or sets the value of the specified range.
        <example>The following code illustrates how to set Value of the specified range:
        <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        Worksheet worksheet = workbook.Worksheets[0];
        //Set value of the range
        CellRange range= worksheet.Range[3, 1];
        range.Value = "1/1/2015";
        //Save to file
        workbook.SaveToFile("Value.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual LPCWSTR_S GetValue ();
    virtual void SetValue (LPCWSTR_S value);
    //virtual System.Object GetValue2 ();
    //virtual void SetValue2 (System.Object value);
    /*
    <summary>
         Returns or sets the vertical alignment of the specified object.
        <example>The following code illustrates how to set vertical alignment type:
        <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        Worksheet worksheet = workbook.Worksheets[0];
        //Set text
        worksheet["A1"].Text = "Test";
        //Set alignment
        worksheet["A1"].VerticalAlignment = VerticalAlignType.Top;
        //Save to file
        workbook.SaveToFile("VerticalAlignment.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual VerticalAlignType GetVerticalAlignment ();
    virtual void SetVerticalAlignment (VerticalAlignType value);
    /*
    <summary>
        Returns a worksheet object that represents the worksheet 
            containing the specified range. 
    </summary>
    */
    virtual intrusive_ptr<IWorksheet> GetWorksheet ();
    //virtual LPCWSTR_S GetNewRangeLocation (System.Collections.Generic.Dictionary`2[[System.String, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089],[System.String, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089]] names,System.String& sheetName);
    //virtual intrusive_ptr<IXLSRange> Clone (System.Object parent,System.Collections.Generic.Dictionary`2[[System.String, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089],[System.String, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089]] rangeNames,intrusive_ptr<XlsWorkbook> book);
    /*
    <summary>
        Clears conditional formats.
    </summary>
    */
    virtual void ClearConditionalFormats ();
    /*
    <summary>
        Gets rectangle information of current range.
    </summary>
    <returns>Rectangles information</returns>
    */
    virtual std::vector<intrusive_ptr<Rectangle>> GetRectangles ();
    /*
    <summary>
        Returns number of rectangles..
    </summary>
    <returns>Number of rectangles.</returns>
    */
    virtual int GetRectanglesCount ();
    /*
    <summary>
        Returns name of the parent worksheet.
    </summary>
    */
    virtual LPCWSTR_S GetWorksheetName ();
    /*
    <summary>
        Gets number of cells.
    </summary>
    */
    virtual int GetCellsCount ();
    /*
    <summary>
        Gets address global in the format required by Excel 2007.
    </summary>
    */
    virtual LPCWSTR_S GetRangeGlobalAddress2007 ();
    /*
    <summary>
        Caculate all formula for the specified range
    </summary>
    */
    void CalculateAllValue ();
    /*
    <summary>
         Activates a single cell, scroll to it and activates the corresponding sheet.
             To select a range of cells, use the Select method.
        <example>The following code illustrates how to activate a Range with scroll flag:
        <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        Worksheet worksheet = workbook.Worksheets[0];
        //Activates 'F1' cell.
        worksheet.Range["F1"].Activate(true);
        //Save to file
        workbook.SaveToFile("Activate.xlsx");
        </code>
        </example>
    </summary>
    <param name="scroll">True to scroll to the cell</param>
    <returns>Returns the active cell.</returns>
    */
    virtual intrusive_ptr<IXLSRange> Activate (bool scroll);
    /*
    <summary>
        Active single cell in the worksheet
    </summary>
    <returns>Returns the active cell.</returns>
    */
    intrusive_ptr<IXLSRange> Activate ();
    /*
    <summary>
        Adds a comment to the range.
    </summary>
    <returns>Created comment or exists one.</returns>
    */
    virtual intrusive_ptr<ICommentShape> AddComment ();
    /*
    <summary>
         Changes the width of the columns in the range in the range to achieve the best fit.
        <example>The following code illustrates how to auto-size column width to its cell content:
        <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        Worksheet worksheet = workbook.Worksheets[0];
        //Auto-fit columns
        worksheet.Range["B4"].Text = "Fit the content to column";
        worksheet.Range["B4"].AutoFitColumns();
        //Save to file
        workbook.SaveToFile("AutoFitRows.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual void AutoFitColumns ();
    /*
    <summary>
         Changes the width of the height of the rows in the range to achieve the best fit.
        <example>The following code illustrates how to auto-size row height to its cell content:
        <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        Worksheet worksheet = workbook.Worksheets[0];
        //Auto-fit rows
        worksheet.Range["A2"].Text = "Fit the content to row";
        worksheet.Range["A2"].IsWrapText = true;
        worksheet.Range["A2"].AutoFitRows();
        //Save to file
        workbook.SaveToFile("AutoFitRows.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual void AutoFitRows ();
    /*
    <summary>
         Sets around border for current range.
        <example>The following code illustrates how to apply border around the Range:
        <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        Worksheet worksheet = workbook.Worksheets[0];
        //Set text
        worksheet["C2"].Text = "Sample";
        worksheet["D2"].Text = "text";
        worksheet["C3"].Text = "in";
        worksheet["D3"].Text = "cell";
        //Set border
        worksheet["C2:D3"].BorderAround();
        //Save to file
        workbook.SaveToFile("BorderAround.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual void BorderAround ();
    /*
    <summary>
         Sets around border for current range.
        <example>The following code illustrates how to apply border around the Range:
        <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        Worksheet worksheet = workbook.Worksheets[0];
        //Set text
        worksheet["C2"].Text = "Sample";
        worksheet["D2"].Text = "text";
        worksheet["C3"].Text = "in";
        worksheet["D3"].Text = "cell";
        //Set border
        worksheet["C2:D3"].BorderAround(LineStyleType.Thick);
        //Save to file
        workbook.SaveToFile("BorderAround.xlsx");
        </code>
        </example>
    </summary>
    <param name="borderLine">Represents border line.</param>
    */
    virtual void BorderAround (LineStyleType borderLine);
    /*
    <summary>
         Sets around border for current range.
        <example>The following code illustrates how to apply border around the Range  with color from System.Drawing.Color structure:
        <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        Worksheet worksheet = workbook.Worksheets[0];
        //Set text
        worksheet["C2"].Text = "Sample";
        worksheet["D2"].Text = "text";
        worksheet["C3"].Text = "in";
        worksheet["D3"].Text = "cell";
        //Set border
        worksheet["C2:D3"].BorderAround(LineStyleType.Thick , Color.Red);
        //Save to file
        workbook.SaveToFile("BorderAround.xlsx");
        </code>
        </example>
    </summary>
    <param name="borderLine">Represents border line.</param>
    <param name="borderColor">Represents border color.</param>
    */
    virtual void BorderAround (LineStyleType borderLine,intrusive_ptr<Color> borderColor);
    /*
    <summary>
         Sets around border for current range.
        <example>The following code illustrates how to apply border around the Range  with color from Spire.Xls.ExcelColors structure:
        <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        Worksheet worksheet = workbook.Worksheets[0];
        //Set text
        worksheet["C2"].Text = "Sample";
        worksheet["D2"].Text = "text";
        worksheet["C3"].Text = "in";
        worksheet["D3"].Text = "cell";
        //Set border
        worksheet["C2:D3"].BorderAround(LineStyleType.Thick , ExcelColors.Red);
        //Save to file
        workbook.SaveToFile("BorderAround.xlsx");
        </code>
        </example>
    </summary>
    <param name="borderLine">Represents border line.</param>
    <param name="borderColor">Represents border color as ExcelColors.</param>
    */
    virtual void BorderAround (LineStyleType borderLine,ExcelColors borderColor);
    /*
    <summary>
         Sets inside border for current range.
        <example>The following code illustrates how to apply border inside the Range:
        <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        Worksheet worksheet = workbook.Worksheets[0];
        //Set text
        worksheet["C2"].Text = "Sample";
        worksheet["D2"].Text = "text";
        worksheet["C3"].Text = "in";
        worksheet["D3"].Text = "cell";
        //Set border
        worksheet["C2:D3"].BorderInside();
        //Save to file
        workbook.SaveToFile("BorderInside.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual void BorderInside ();
    /*
    <summary>
         Sets inside border for current range.
        <example>The following code illustrates how to apply border inside the Range:
        <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        Worksheet worksheet = workbook.Worksheets[0];
        //Set text
        worksheet["C2"].Text = "Sample";
        worksheet["D2"].Text = "text";
        worksheet["C3"].Text = "in";
        worksheet["D3"].Text = "cell";
        //Set border
        worksheet["C2:D3"].BorderInside(LineStyleType.Thick);
        //Save to file
        workbook.SaveToFile("BorderInside.xlsx");
        </code>
        </example>
    </summary>
    <param name="borderLine">Represents border line.</param>
    */
    virtual void BorderInside (LineStyleType borderLine);
    /*
    <summary>
         Sets inside border for current range.
        <example>The following code illustrates how to apply border inside the Range with color from System.Drawing.Color structure:
        <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        Worksheet worksheet = workbook.Worksheets[0];
        //Set text
        worksheet["C2"].Text = "Sample";
        worksheet["D2"].Text = "text";
        worksheet["C3"].Text = "in";
        worksheet["D3"].Text = "cell";
        //Set border
        worksheet["C2:D3"].BorderInside(LineStyleType.Thick , Color.Red);
        //Save to file
        workbook.SaveToFile("BorderInside.xlsx");
        </code>
        </example>
    </summary>
    <param name="borderLine">Represents border line.</param>
    <param name="borderColor">Represents border color.</param>
    */
    virtual void BorderInside (LineStyleType borderLine,intrusive_ptr<Color> borderColor);
    /*
    <summary>
         Sets inside border for current range.
        <example>The following code illustrates how to apply border inside the Range with color from Spire.Xls.ExcelColors structure:
        <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        Worksheet worksheet = workbook.Worksheets[0];
        //Set text
        worksheet["C2"].Text = "Sample";
        worksheet["D2"].Text = "text";
        worksheet["C3"].Text = "in";
        worksheet["D3"].Text = "cell";
        //Set border
        worksheet["C2:D3"].BorderInside(LineStyleType.Thick , ExcelColors.Red);
        //Save to file
        workbook.SaveToFile("BorderInside.xlsx");
        </code>
        </example>
    </summary>
    <param name="borderLine">Represents border line.</param>
    <param name="borderColor">Represents border color as ExcelColors.</param>
    */
    virtual void BorderInside (LineStyleType borderLine,ExcelColors borderColor);
    /*
    <summary>
         Sets none border for current range.
        <example>The following code illustrates how to remove borders in the Range:
        <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        workbook.LoadFromFile("Sample.xlsx");
        Worksheet worksheet = workbook.Worksheets[0];
        //Remove borders
        worksheet["C2"].BorderNone();
        //Save to file
        workbook.SaveToFile("BorderNone.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual void BorderNone ();
    /*
    <summary>
         Clears the cell based on clear options.
        <example>The following code illustrates how to clear the Range with clear options:
        <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        workbook.LoadFromFile("Sample.xlsx");
        Worksheet worksheet = workbook.Worksheets[0];
        //Clears the Range C2 with its clear options
        worksheet.Range["C2"].Clear(ExcelClearOptions.ClearAll);
        //Save to file
        workbook.SaveToFile("ClearContents.xlsx");
        </code>
        </example>
    </summary>
    <param name="option">Represents the clear options.</param>
    */
    virtual void Clear (ExcelClearOptions option);
    /*
    <summary>
        Clears the entire object.
    </summary>
    */
    void ClearAll ();
    /*
    <summary>
         Clear the contents of the Range.
        <example>The following code illustrates how to clear the Range:
        <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        workbook.LoadFromFile("Sample.xlsx");
        Worksheet worksheet = workbook.Worksheets[0];
        //Clears the Range C2
        worksheet.Range["C2"].ClearContents();
        //Save to file
        workbook.SaveToFile("ClearContents.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual void ClearContents ();
    /*
    <summary>
        Groups columns. 
    </summary>
    <param name="isCollapsed">Indicates whether group should be collapsed.</param>
    <returns></returns>
    */
    intrusive_ptr<CellRange> GroupByColumns (bool isCollapsed);
    /*
    <summary>
        Groups row. 
    </summary>
    <param name="isCollapsed">Indicates whether group should be collapsed.</param>
    <returns></returns>
    */
    intrusive_ptr<CellRange> GroupByRows (bool isCollapsed);
    /*
    <summary>
        Ungroups column.
    </summary>
    <returns></returns>
    */
    intrusive_ptr<CellRange> UngroupByColumns ();
    /*
    <summary>
        Ungroups row.
    </summary>
    <returns></returns>
    */
    intrusive_ptr<CellRange> UngroupByRows ();
    /*
    <summary>
         Collapses current group.
        <example>The following code illustrates how to remove borders in the Range:
        <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        workbook.LoadFromFile("Sample.xlsx");
        Worksheet worksheet = workbook.Worksheets[0];
        //Collapse group
        worksheet.Range["A5:A15"].CollapseGroup(GroupByType.ByRows);
        //Save to file
        workbook.SaveToFile("CollapseGroup.xlsx");
        </code>
        </example>
    </summary>
    <param name="groupBy">
             This parameter specifies whether the grouping should be performed by rows or by columns. 
     </param>
    */
    virtual void CollapseGroup (GroupByType groupBy);
    void CopyToClipboard ();
    virtual void Dispose ();
    /*
    <summary>
         Expands current group.
        <example>The following code illustrates how to expand the group in the Range:
        <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        workbook.LoadFromFile("Sample.xlsx");
        Worksheet worksheet = workbook.Worksheets[0];
        //Expand group with flag set to expand parent
        worksheet.Range["A5:A15"].ExpandGroup(GroupByType.ByRows);
        //Save to file
        workbook.SaveToFile("ExpandGroup.xlsx");
        </code>
        </example>
    </summary>
    <param name="groupBy">
             This parameter specifies whether the grouping should be performed by rows or by columns. 
     </param>
    */
    virtual void ExpandGroup (GroupByType groupBy);
    /*
    <summary>
         Expands current group.
        <example>The following code illustrates how to perform ExpandGroup in the Range with collapse option:
        <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        workbook.LoadFromFile("Sample.xlsx");
        Worksheet worksheet = workbook.Worksheets[0];
        //Expand group with flag set to expand parent
        worksheet.Range["A5:A15"].ExpandGroup(GroupByType.ByRows, ExpandCollapseFlags.ExpandParent);
        //Save to file
        workbook.SaveToFile("ExpandGroup.xlsx");
        </code>
        </example>
    </summary>
    <param name="groupBy">
             This parameter specifies whether the grouping should be performed by rows or by columns. 
     </param>
    <param name="flags">Additional option flags.</param>
    */
    virtual void ExpandGroup (GroupByType groupBy,ExpandCollapseFlags flags);
    /*
    <summary>
         Freezes panes at the current range in the worksheet. current range should be single cell range.
        <example>The following code illustrates how to freeze a pane in the Range:
        <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        Worksheet worksheet = workbook.Worksheets[0];
        //Applying Freeze Pane to the sheet by specifying a cell
        worksheet.Range["B2"].FreezePanes();
        //Save to file
        workbook.SaveToFile("FreezePanes.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual void FreezePanes ();
    virtual intrusive_ptr<IXLSRange> Merge (intrusive_ptr<IXLSRange> range);
    virtual intrusive_ptr<IXLSRange> Intersect (intrusive_ptr<IXLSRange> range);
    /*
    <summary>
         Returns or sets the bool value of the specified range.
        <example>The following code illustrates how to access Boolean property of the Range:
        <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        Worksheet worksheet = workbook.Worksheets[0];
        //Set and get BooleanValue
        worksheet.Range[2, 4].BooleanValue = true;
        bool boolean = worksheet.Range[2, 4].BooleanValue;
        </code>
        </example>
    </summary>
    */
    virtual bool GetBooleanValue ();
    virtual void SetBooleanValue (bool value);
    virtual intrusive_ptr<IBorders> GetBorders ();
    //virtual System.Nullable`1[[Spire.Xls.BuiltInStyles, Spire.XLS, Version=12.7.7.0, Culture=neutral, PublicKeyToken=null]] GetBuiltInStyle ();
    //virtual void SetBuiltInStyle (System.Nullable`1[[Spire.Xls.BuiltInStyles, Spire.XLS, Version=12.7.7.0, Culture=neutral, PublicKeyToken=null]] value);
    virtual intrusive_ptr<IList<CellRange>> GetCells ();
    //virtual System.Collections.Generic.List`1[[Spire.Xls.CellRange, Spire.XLS, Version=12.7.7.0, Culture=neutral, PublicKeyToken=null]] GetCellList ();
    /*
    <summary>
         Gets/sets name of the style for the current range.
        <example>The following code illustrates how to access CellStyleName of the specified range:
        <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        Worksheet worksheet = workbook.Worksheets[0];
        //Add and set style
        CellStyle style = workbook.Styles.Add("CustomStyle");
        worksheet["C2"].Style = style;
        //Check Style name
        Console.Write(worksheet["C2"].CellStyleName);
        </code>
        </example>
    </summary>
    */
    virtual LPCWSTR_S GetCellStyleName ();
    virtual void SetCellStyleName (LPCWSTR_S value);
    /*
    <summary>
        Returns the number of the first column in the first area in the specified range.
            <example>The following code illustrates how to access Column property of the Range:
            <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        Worksheet worksheet = workbook.Worksheets[0];
        //Get specified column
        int firstColumn = worksheet["E1:R3"].Column;
        </code>
        </example>
    </summary>
    */
    virtual int GetColumn ();
    /*
    <summary>
        Column group level.
    </summary>
    <remarks>
        -1 - column group is not same.
        0 - Not group
        1 - 7 - group level.
    </remarks>
    */
    virtual int GetColumnGroupLevel ();
    virtual intrusive_ptr<IList<XlsRange>> GetColumns ();
    /*
    <summary>
        Returns or sets the width of all columns in the specified range. 
            <example>The following code illustrates how to set the width of all columns in the specified range:
            <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        Worksheet worksheet = workbook.Worksheets[0];
        //Set the ColumnWidth
        worksheet["A1"].Text = "This cell contains sample text";
        worksheet["A1"].ColumnWidth = 25;
        //Save to file
        workbook.SaveToFile("ColumnWidth.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual double GetColumnWidth ();
    virtual void SetColumnWidth (double value);
    /*
    <summary>
        Returns a Comment object that represents the comment associated with the cell in the upper-left corner of the range.
    </summary>
    */
    virtual intrusive_ptr<IComment> GetComment ();
    virtual intrusive_ptr<ConditionalFormats> GetConditionalFormats ();
    /*
    <summary>
        Returns the number of objects in the collection.
    </summary>
    */
    virtual int GetCount ();
    /*
    <summary>
         Get dataValidation of the sheet. Read Only.
        <example>The following code illustrates how to access DataValidation property of the Range:
        <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        Worksheet worksheet = workbook.Worksheets[0];
        //Data validation for number
        IDataValidation validation = worksheet.Range["A3"].DataValidation;
        validation.AllowType = CellDataType.Integer;
        //Value between 0 to 10
        validation.CompareOperator = ValidationComparisonOperator.Between;
        validation.Formula1 = "0";
        validation.Formula2 = "10";
        //Save to file
        workbook.SaveToFile("DataValidation.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual intrusive_ptr<Validation> GetDataValidation ();
    /*
    <summary>
        Gets/sets DateTime value of the range.
            <example>The following code illustrates how to set and access DateTimeValue property of the Range:
            <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        Worksheet worksheet = workbook.Worksheets[0];
        //Set and get the DateTimeValue of specified range
        worksheet.Range[2, 4].DateTimeValue = DateTime.Now;
        DateTime dateTime = worksheet.Range[2, 4].DateTimeValue;
        //Save to file
        workbook.SaveToFile("DateTimeValue.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual intrusive_ptr<DateTime> GetDateTimeValue ();
    virtual void SetDateTimeValue (intrusive_ptr<DateTime> value);
    virtual intrusive_ptr<IXLSRange> GetEndCell ();
    virtual intrusive_ptr<IXLSRange> GetEntireColumn ();
    /*
    <summary>
        Returns a Range object that represents the entire row (or 
            rows) that contains the specified range. Read-only.
    </summary>
    */
    virtual intrusive_ptr<IXLSRange> GetEntireRow ();
    /*
    <summary>
         Returns the calculated value of a formula.
        <example>The following code illustrates how to access a calculated value:
        <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        workbook.LoadFromFile("Sample.xlsx");
        Worksheet worksheet = workbook.Worksheets[0];
        //Returns the calculated value of a formula using the most current inputs
        string calculatedValue = worksheet["C1"].EnvalutedValue;
        Console.WriteLine(calculatedValue);
        </code>
        </example>
    </summary>
    */
    virtual LPCWSTR_S GetEnvalutedValue ();
    /*
    <summary>
        Gets or sets error value of this range.
    </summary>
    */
    virtual LPCWSTR_S GetErrorValue ();
    virtual void SetErrorValue (LPCWSTR_S value);
    /*
    <summary>
        Returns or sets the object's formula in A1-style notation and in 
            the language of the macro.
    </summary>
    */
    virtual LPCWSTR_S GetFormula ();
    virtual void SetFormula (LPCWSTR_S value);
    /*
    <summary>
         Returns or sets the array formula of a range.
        <example>The following code illustrates how to set and access FormulaArray property of the range:
        <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        Worksheet worksheet = workbook.Worksheets[0];
        //Assign array formula
        worksheet.Range["A1:D1"].FormulaArray = "{1,2,3,4}";
        //Adding a named range for the range A1 to D1
        worksheet.Names.Add("ArrayRange", worksheet.Range["A1:D1"]);
        //Assign formula array with named range
        worksheet.Range["A2:D2"].FormulaArray = "ArrayRange+100";
        //Save to file
        workbook.SaveToFile("FormulaArray.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual LPCWSTR_S GetFormulaArray ();
    virtual void SetFormulaArray (LPCWSTR_S value);
    /*
    <summary>
        Returns or sets the formula for the object, using R1C1-style notation in the language of the macro
    </summary>
    */
    virtual LPCWSTR_S GetFormulaArrayR1C1 ();
    virtual void SetFormulaArrayR1C1 (LPCWSTR_S value);
    virtual bool GetFormulaBoolValue ();
    virtual void SetFormulaBoolValue (bool value);
    /*
    <summary>
        Gets or sets bool value of the formula.
    </summary>
    */
    virtual intrusive_ptr<DateTime> GetFormulaDateTime ();
    virtual void SetFormulaDateTime (intrusive_ptr<DateTime> value);
    /*
    <summary>
        Gets or sets error value of the formula.
    </summary>
    */
    virtual LPCWSTR_S GetFormulaErrorValue ();
    virtual void SetFormulaErrorValue (LPCWSTR_S value);
    /*
    <summary>
        Gets or sets double value of the formula.
    </summary>
    */
    virtual double GetFormulaNumberValue ();
    virtual void SetFormulaNumberValue (double value);
    /*
    <summary>
        Returns or sets the formula for the object, using R1C1-style notation in the language of the macro
    </summary>
    */
    virtual LPCWSTR_S GetFormulaR1C1 ();
    virtual void SetFormulaR1C1 (LPCWSTR_S value);
    /*
    <summary>
        Gets or sets string value of the range.
    </summary>
    */
    virtual LPCWSTR_S GetFormulaStringValue ();
    virtual void SetFormulaStringValue (LPCWSTR_S value);
    //System.Object GetFormulaValue ();
    /*
    <summary>
         Indicates whether range contains bool value.
        <example>The following code illustrates how to set and access HasBoolean property of the Range:
        <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        Worksheet worksheet = workbook.Worksheets[0];
        //Assigning Value2 property of the Range
        worksheet["A3"].Value2 = false;
        //Checking Range types
        bool isboolean = worksheet["A3"].HasBoolean;
        //Save to file
        workbook.SaveToFile("HasBoolean.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual bool GetHasBoolean ();
    bool GetHasComment ();
    /*
    <summary>
        Gets number of columns.
    </summary>
    */
    int GetColumnCount ();
    /*
    <summary>
        Gets number of rows.
    </summary>
    */
    int GetRowCount ();
    /*
    <summary>
        Indicates whether specified range object has data validation.
            If Range is not single cell, then returns true only if all cells have data validation. Read-only.
    </summary>
    */
    virtual bool GetHasDataValidation ();
    /*
    <summary>
         Determines if all cells in the range contain datetime.
        <example>The following code illustrates how to set and access HasDateTime property of the Range:
        <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        Worksheet worksheet = workbook.Worksheets[0];
        //Assigning Value2 property of the Range
        worksheet["A1"].Value2 = DateTime.Now;
        //Checking Range types
        bool isDateTime =  worksheet["A1"].HasDateTime;
        //Save to file
        workbook.SaveToFile("HasDateTime.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual bool GetHasDateTime ();
    /*
    <summary>
        Indicates whether range contains error value.
    </summary>
    */
    virtual bool GetHasError ();
    /*
    <summary>
        Check if the formula in the range has external links. Read-only.
    </summary>
    */
    virtual bool GetHasExternalFormula ();
    /*
    <summary>
        True if all cells in the range contain formulas; 
    </summary>
    */
    virtual bool GetHasFormula ();
    /*
    <summary>
        Determines if all cells in the range contain array-entered formula.
    </summary>
    */
    virtual bool GetHasFormulaArray ();
    /*
    <summary>
        Determines if all cells in the range contain formula bool value..
    </summary>
    */
    virtual bool GetHasFormulaBoolValue ();
    /*
    <summary>
        Indicates if current range has formula value formatted as DateTime. Read-only.
    </summary>
    */
    virtual bool GetHasFormulaDateTime ();
    /*
    <summary>
        Determines if all cells in the range contain error value.
    </summary>
    */
    virtual bool GetHasFormulaErrorValue ();
    /*
    <summary>
        Indicates whether current range has formula number value.
    </summary>
    */
    virtual bool GetHasFormulaNumberValue ();
    virtual bool GetHasFormulaStringValue ();
    /*
    <summary>
         Indicates whether this range is part of merged range.
        <example>The following code illustrates how to access HasMerged property:
        <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        Worksheet worksheet = workbook.Worksheets[0];
        //Set text
        worksheet["A1"].Text = "Sample text in cell";
        //Set merge
        worksheet["A1:B1"].Merge();
        //Check merge
        Console.Write(worksheet["A1:B1"].HasMerged);
        </code>
        </example>
    </summary>
    */
    virtual bool GetHasMerged ();
    /*
    <summary>
         Determines if any one cell in the range contain number.
        <example>The following code illustrates how to set and access Value2 property of the Range:
        <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        Worksheet worksheet = workbook.Worksheets[0];
        //Assigning Value2 property of the Range
        worksheet["A2"].Value2 = 45;
        //Checking Range types
        bool isNumber =  worksheet["A2"].HasNumber;
        //Save to file
        workbook.SaveToFile("HasNumber.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual bool GetHasNumber ();
    /*
    <summary>
        Indicates whether the range is blank.
    </summary>
    */
    bool GetHasPictures ();
    /*
    <summary>
         Determines if all cells in the range contain rich text string.
        <example>The following code illustrates how to access HasRichText property:
        <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        Worksheet worksheet = workbook.Worksheets[0];
        //Create style
        IStyle style = workbook.Styles.Add("CustomStyle");
        //Set rich text
        IRichTextString richText = worksheet["C2"].RichText;
        richText.Text = "Sample";
        IFont font = style.Font;
        font.Color = Color.Red;
        richText.SetFont(0, 5, font);
        //Check HasRichText
        Console.Write(worksheet["C2"].HasRichText);
        //Save to file
        workbook.SaveToFile("HasRichText.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual bool GetHasRichText ();
    /*
    <summary>
        Determines if all cells in the range contain string.
    </summary>
    */
    virtual bool GetHasString ();
    /*
    <summary>
         Determines if all cells in the range contain  differs from default style.
        <example>The following code illustrates how to access HasStyle property:
        <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        Worksheet worksheet = workbook.Worksheets[0];
        //Add style
        CellStyle style = workbook.Styles.Add("CustomStyle");
        //Set color and style
        style.Color = Color.Red;
        worksheet["C2"].Style = style;
        //Check HasStyle
        Console.Write(worksheet["C2"].HasStyle);
        //Save to file
        workbook.SaveToFile("HasStyle.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual bool GetHasStyle ();
    /*
    <summary>
         Returns or sets the horizontal alignment for the specified object.
        <example>The following code illustrates how to set and access HasStyle property:
        <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        Worksheet worksheet = workbook.Worksheets[0];
        //Set text
        worksheet["A1"].Text = "Test";
        //Set alignment
        worksheet["A1"].HorizontalAlignment = HorizontalAlignType.Right;
        //Save to file
        workbook.SaveToFile("HorizontalAlignment.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual HorizontalAlignType GetHorizontalAlignment ();
    virtual void SetHorizontalAlignment (HorizontalAlignType value);
    /*
    <summary>
        Returns hyperlinks for this range.
    </summary>
    */
    virtual intrusive_ptr<IHyperLinks> GetHyperlinks ();
    /*
    <summary>
        Represents ignore error options. If not single cell returs concatenateed flags.
    </summary>
    */
    virtual IgnoreErrorType GetIgnoreErrorOptions ();
    virtual void SetIgnoreErrorOptions (IgnoreErrorType value);
    /*
    <summary>
         Returns or sets the indent level for the cell or range. value should be 0 between 15.
        <example>The following code illustrates how to set indent level for a cell:
        <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        Worksheet worksheet = workbook.Worksheets[0];
        //Set text
        worksheet["C2"].Text = "Sample";
        //Set indent level
        worksheet["C2"].IndentLevel = 2;
        //Save to file
        workbook.SaveToFile("IndentLevel.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual int GetIndentLevel ();
    virtual void SetIndentLevel (int value);
    /*
    <summary>
        Determines if all cells in the range contain number.
    </summary>
    */
    bool GetIsAllNumber ();
    /*
    <summary>
        Indicates whether the range is blank.
    </summary>
    */
    virtual bool GetIsBlank ();
    /*
    <summary>
        Determines if the formula will be hidden when the worksheet is protected.
    </summary>
    */
    virtual bool GetIsFormulaHidden ();
    virtual void SetIsFormulaHidden (bool value);
    /*
    <summary>
        Indicates whether this range is grouped by column.
    </summary>
    */
    virtual bool GetIsGroupedByColumn ();
    /*
    <summary>
        Indicates whether this range is grouped by row.
    </summary>
    */
    virtual bool GetIsGroupedByRow ();
    /*
    <summary>
        Indicates whether range has been initialized.
    </summary>
    */
    virtual bool GetIsInitialized ();
    //virtual System.Nullable`1[[System.Boolean, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089]] GetIsStringsPreserved ();
    //virtual void SetIsStringsPreserved (System.Nullable`1[[System.Boolean, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089]] value);
    /*
    <summary>
         Determines if Microsoft Excel wraps the text in the object.
        <example>The following code illustrates how to access WrapText property:
        <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        Worksheet worksheet = workbook.Worksheets[0];
        //Set text
        worksheet["A1"].Text = "This cell contains sample text";
        //Set wrap text
        worksheet["A1"].IsWrapText = true;
        //Save to file
        workbook.SaveToFile("IsWrapText.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual bool GetIsWrapText ();
    virtual void SetIsWrapText (bool value);
    /*
    <summary>
        Gets or sets last column of the range.
    </summary>
    */
    virtual int GetLastColumn ();
    virtual void SetLastColumn (int value);
    /*
    <summary>
        Gets or sets last row of the range.
    </summary>
    */
    virtual int GetLastRow ();
    virtual void SetLastRow (int value);
    virtual intrusive_ptr<IXLSRange> GetMergeArea ();
    /*
    <summary>
        Gets cell displayed text.
    </summary>
    */
    LPCWSTR_S GetDisplayedText ();
    /*
    <summary>
        Indicates whether each cell of the range has some conditional formatting. 
    </summary>
    */
    bool GetHasConditionFormats ();
    /*
    <summary>
         Returns or sets the format code for the object.
        <example>The following code illustrates how to set NumberFormat property:
        <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        Worksheet worksheet = workbook.Worksheets[0];
        //Set data
        worksheet["C2"].Value = "3100.23";
        //Set number format
        worksheet["C2"].NumberFormat = "#,##1.##";
        //Save to file
        workbook.SaveToFile("NumberFormat.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual LPCWSTR_S GetNumberFormat ();
    virtual void SetNumberFormat (LPCWSTR_S value);
    /*
    <summary>
        Returns cell text for number format.
            <example>The following code illustrates how to access NumberText property of the Range:
            <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        Worksheet worksheet = workbook.Worksheets[0];
        //Gets cell value with its number format
        CellRange range= worksheet.Range[3, 1];
        range.Value = "1/1/2015";
        range.NumberFormat = "dd-MMM-yyyy";
        string numberText = range.NumberText;
        //Save to file
        workbook.SaveToFile("NumberText.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual LPCWSTR_S GetNumberText ();
    /*
    <summary>
        Gets or sets number value of the range.
    </summary>
    */
    virtual double GetNumberValue ();
    virtual void SetNumberValue (double value);
    //virtual System.Object GetParent ();
    /*
    <summary>
         Returns the range reference in the language of the macro. 
             Read-only String.
        <example>The following code illustrates how to access Address property of the Range:
        <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        Worksheet worksheet = workbook.Worksheets[0];
        //Get RangeAddress
        string address = worksheet.Range[3, 4].RangeAddress;
        </code>
        </example>
    </summary>
    */
    virtual LPCWSTR_S GetRangeAddress ();
    /*
    <summary>
         Returns the range reference for the specified range in the language of the user.
        <example>The following code illustrates how to access AddressLocal property of the Range:
        <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        Worksheet worksheet = workbook.Worksheets[0];
        //Get RangeAddressLocal
        string address = worksheet.Range[3, 4].RangeAddressLocal;
        </code>
        </example>
    </summary>
    */
    virtual LPCWSTR_S GetRangeAddressLocal ();
    /*
    <summary>
        Return global address without worksheet name.
    </summary>
    */
    LPCWSTR_S GetRangeGlobalAddressWithoutSheetName ();
    /*
    <summary>
         Returns the range reference in the language of the macro. 
        <example>The following code illustrates how to access AddressGlobal property of the Range:
        <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        Worksheet worksheet = workbook.Worksheets[0];
        //Get RangeAddress
        string address = worksheet.Range[3, 4].RangeGlobalAddress;
        </code>
        </example>
    </summary>
    */
    virtual LPCWSTR_S GetRangeGlobalAddress ();
    virtual LPCWSTR_S GetRangeR1C1Address ();
    static double DEF_MAX_HEIGHT ();
private:
};
}}
