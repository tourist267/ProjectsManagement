#pragma once
#include "pch.h"
#pragma warning(push)
#pragma warning(disable:4250)
#include "XlsRange.h"
#include "BordersCollection.h"
#include "CellStyle.h"
#include "RichText.h"
#pragma warning(pop)
namespace Spire{namespace Xls{
class EXPORTS CellRange : public virtual XlsRange
{
    friend class Chart;
    friend class ChartSheet;
    friend class Sparkline;
    friend class SparklineGroup;
    friend class HPageBreak;
    friend class HyperLink;
    friend class Validation;
    friend class VPageBreak;
    friend class Worksheet;
    friend class Workbook;
    friend class RangesCollection;
    friend class WorksheetsCollection;
    friend class AutoFiltersCollection;
    friend class ChartCategoryAxis;
    friend class ChartSerie;
    friend class IPivotTable;
    friend class IChartSerie;
    friend class ISparkline;
    friend class ISparklineGroup;
    friend class XlsRange;
    friend class XlsWorksheet;
    friend class XlsPivotTable;
    friend class XlsChartDataLabels;
    friend class XlsChartSerie;
public:
    /*
    <summary>
        Active single cell in the worksheet
    </summary>
    <returns></returns>
    */
    intrusive_ptr<CellRange> Activate ();
    /*
    <summary>
        Adds a comment to the range.
    </summary>
    <param name="comment">Comment to add</param>
    */
    void AddComment (intrusive_ptr<ExcelComment> comment);
    /*
    <summary>
         Adds a comment to the range.
        <example>The following code illustrates how to insert Comments in the Range:
        <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        Worksheet worksheet = workbook.Worksheets[0];
        //Adding comments to a cell
        ICommentShape comment = worksheet.Range["A1"].AddComment();
        comment.Text= "Comments";
        //Save to file
        workbook.SaveToFile("AddComment.xlsx");
        </code>
        </example>
    </summary>
    <returns>Created comment or exists one.</returns>
    */
    intrusive_ptr<ExcelComment> AddExcelComment();
    intrusive_ptr<IComment> GetComment();
    /*
    <summary>
        Clones current IXLSRange.
    </summary>
    <param name="parent">Parent object.</param>
    <param name="rangeNames">new names.</param>
    <param name="book">Parent workbook.</param>
    <returns>Cloned instance.</returns>
    */
    //intrusive_ptr<CellRange> Clone (System.Object parent,System.Collections.Generic.Dictionary`2[[System.String, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089],[System.String, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089]] rangeNames,intrusive_ptr<Workbook> book);
    /*
    <summary>
        Moves the cells to the specified Range.
    </summary>
    <param name="destination">Destnation Range.</param>
    */
    void Move (intrusive_ptr<CellRange> destRange);
    /*
    <summary>
        Moves the cells to the specified Range.
    </summary>
    <param name="destination">Destination Range.</param>
    <param name="updateReference">Indicates whether to update reference range.</param>
    */
    void Move (intrusive_ptr<CellRange> destRange,bool copyStyle,bool updateReference);
    /*
    <summary>
        Copies the range to the specified range.
    </summary>
    <param name="destRange">Destination range</param>
    <returns>Destination range</returns>
    */
    intrusive_ptr<CellRange> Copy (intrusive_ptr<CellRange> destRange);
    /*
    <summary>
        Copies the range to the specified range.
    </summary>
    <param name="destination">Destination range.</param>
    <param name="updateReference">Indicates whether to update reference cells.</param>
    */
    intrusive_ptr<CellRange> Copy (intrusive_ptr<CellRange> destRange,bool updateReference);
    /*
    <summary>
        Copies the range to the specified range.
    </summary>
    <param name="destRange">Destination range.</param>
    <param name="updateReference">Indicates whether to update reference cells.</param>
    <param name="copyStyles">Indicates whether to copy styles.</param>
    <returns>Destination range</returns>
    */
    intrusive_ptr<CellRange> Copy (intrusive_ptr<CellRange> destRange,bool updateReference,bool copyStyles);
    /*
    <summary>
        Copies the range to the specified range.
    </summary>
    <param name="destRange">Destination range.</param>
    <param name="copyOptions">Copy options.</param>
    */
    intrusive_ptr<CellRange> Copy (intrusive_ptr<CellRange> destRange,CopyRangeOptions copyOptions);
    /*
    <summary>
        Finds the cell with the input double.
    </summary>
    <param name="doubleValue">Double value to search for</param>
    <param name="formulaValue">Indicates whether to find formula value</param>
    <returns>Found ranges</returns>
    */
    intrusive_ptr<IList<CellRange>> FindAllNumber (double doubleValue,bool formulaValue);
    /*
    <summary>
        Finds the cell with the input string.
    </summary>
    <param name="stringValue">String value to search for</param>
    <param name="formula">Indicates whether include formula</param>
    <param name="formulaValue">Indicates whether include formula value</param>
    <returns>Found ranges</returns>
    */
    intrusive_ptr<IList<CellRange>> FindAllString (LPCWSTR_S stringValue,bool formula,bool formulaValue);
    /*
    <summary>
        Finds the cell with the input datetime.
    </summary>
    <param name="dateTimeValue">DateTime value to search for</param>
    <returns>Found ranges</returns>
    */
    intrusive_ptr<IList<CellRange>> FindAllDateTime (intrusive_ptr<DateTime> dateTimeValue);
    /*
    <summary>
        Finds the cell with input timespan
    </summary>
    <param name="timeSpanValue">time span value to search for</param>
    <returns>Found ranges</returns>
    */
    intrusive_ptr<IList<CellRange>> FindAllTimeSpan (intrusive_ptr<TimeSpan> timeSpanValue);
    /*
    <summary>
        Finds the cell with the input bool. 
    </summary>
    <param name="boolValue">Bool value to search for</param>
    <returns>Found ranges</returns>
    */
    intrusive_ptr<IList<CellRange>> FindAllBool (bool boolValue);
    /*
    <summary>
        Finds the cell with the input bool. 
    </summary>
    <param name="boolValue">Bool value to search for</param>
    <returns>Found range</returns>
    */
    intrusive_ptr<CellRange> FindBool (bool boolValue);
    /*
    <summary>
        Finds the cell with the input double. 
    </summary>
    <param name="doubleValue">Double value to search for</param>
    <param name="formulaValue">Indicates whether includes formula value to search for</param>
    <returns>Found range</returns>
    */
    intrusive_ptr<CellRange> FindNumber (double doubleValue,bool formulaValue);
    /*
    <summary>
        Finds the cell with the input string. 
    </summary>
    <param name="stringValue">String value to search for</param>
    <param name="formula">Indicates whether includes formula to search for</param>
    <param name="formulaValue">Indicates whether includes formula value to search for</param>
    <returns>Found range</returns>
    */
    intrusive_ptr<CellRange> FindString (LPCWSTR_S stringValue,bool formula,bool formulaValue);
    /*
    <summary>
        Finds the cell with the input datetime. 
    </summary>
    <param name="dateTimeValue">Datetime value to search for</param>
    <returns>Found range</returns>
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
        Get intersection range with the specified range.
    </summary>
    <param name="range">Range which to intersect.</param>
    <returns>Range intersection.</returns>
    */
    intrusive_ptr<CellRange> Intersect (intrusive_ptr<CellRange> range);
    /*
    <summary>
         Creates a merged cell from the specified Range object.
        <example>The following code illustrates how to check whether two ranges are mergable or not:
        <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        Worksheet worksheet = workbook.Worksheets[0];
        //Merge range
        worksheet["A2:B2"].Merge();
        //Get mergable range
        IXLSRange mergableRange = worksheet["A2"].MergeArea.Merge(worksheet["C2"]);
        //Check mergable Area
        Console.Write(mergableRange.RangeAddressLocal);
        //Save to file
        workbook.SaveToFile("Intersect.xlsx");
        </code>
        </example>
    </summary>
    <param name="range">The Range to merge with.</param>
    <returns>Merged ranges.</returns>
    */
    intrusive_ptr<CellRange> Merge (intrusive_ptr<CellRange> range);
    /*
    <summary>
        Sets data validation for the range.
    </summary>
    <param name="dv">Data validation to set.</param>
    */
    void SetDataValidation (intrusive_ptr<Validation> dataValidation);
    /*
    <summary>
         Returns a Borders collection that represents the borders of a style or a range of cells (including a range defined as part of a conditional format).
        <example>The following code illustrates how to access Borders property of the Range:
        <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        Worksheet worksheet = workbook.Worksheets[0];
        //Set text
        worksheet["C2"].Text = "Sample";
        //Set borders
        IBorders borders = worksheet["C2"].Borders;
        //Set line style
        borders[BordersLineType.EdgeTop].LineStyle = LineStyleType.Thin;
        borders[BordersLineType.EdgeBottom].LineStyle = LineStyleType.Thin;
        //Set border color
        borders[BordersLineType.EdgeTop].Color = Color.Red;
        borders[BordersLineType.EdgeBottom].Color = Color.Red;
        //Save to file
        workbook.SaveToFile("CellFormats.xlsx");
        </code>
        </example>
    </summary>
    */
    intrusive_ptr<IBorders> GetBorders ();
    /*
    <summary>
         Returns a Style object that represents the style of the specified range.
        <example>The following code illustrates how to the style of the specified range:
        <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        Worksheet worksheet = workbook.Worksheets[0];
        //Set text
        worksheet["C2"].Text = "Sample";
        //Add and set style
        CellStyle style = workbook.Styles.Add("BorderStyle");
        style.Color = Color.Red;
        worksheet["C2"].Style = style;
        //Save to file
        workbook.SaveToFile("Style.xlsx");
        </code>
        </example>
    </summary>
    */
    intrusive_ptr<IStyle> GetStyle ();
    void SetStyle (intrusive_ptr<CellStyle> value);
    /*
    <summary>
        Returns a Range object that represents the cells in the specified range.
    </summary>
    */
    intrusive_ptr<IList<CellRange>> GetCells ();
    //System.Collections.Generic.List`1[[Spire.Xls.CellRange, Spire.XLS, Version=12.7.7.0, Culture=neutral, PublicKeyToken=null]] GetCellList ();
    /*
    <summary>
         Returns a Range object that represents the columns in the specified range.
        <example>The following code illustrates how to access columns:
        <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        Worksheet worksheet = workbook.Worksheets[0];
        //Set columns
        IXLSRange[] columns = worksheet["A1:E8"].Columns;
        //Do some manipulations
        foreach (IXLSRange column in columns)
          column.Text = column.RangeAddressLocal;
        //Save to file
        workbook.SaveToFile("Columns.xlsx");
        </code>
        </example>
    </summary>
    */
    intrusive_ptr<IList<XlsRange>> GetColumns ();
    /*
    <summary>
         Returns the number of the first row of the first area in the range.
        <example>The following code illustrates how to access rows:
        <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        Worksheet worksheet = workbook.Worksheets[0];
        //Set rows
        IXLSRange[] rows = worksheet["A1:E8"].Rows;
        //Do some manipulations
        foreach (IXLSRange row in rows)
          row.Text = row.RangeAddressLocal;
        //Save to file
        workbook.SaveToFile("Rows.xlsx");
        </code>
        </example>
    </summary>
    */
    intrusive_ptr<IList<XlsRange>> GetRows ();
    /*
    <summary>
        Gets cell range. Row and column indexes are one-based.
    </summary>
    <param name="row"></param>
    <param name="column"></param>
    <returns></returns>
    */
    intrusive_ptr<IXLSRange> Get (int row,int column);
    void SetItem (int row,int column,intrusive_ptr<CellRange> value);
    /*
    <summary>
        Gets cell range. Row and column indexes are one-based.
    </summary>
    <param name="row"></param>
    <param name="column"></param>
    <param name="lastRow"></param>
    <param name="lastColumn"></param>
    <returns></returns>
    */
    intrusive_ptr<IXLSRange> Get(int row, int column, int lastRow, int lastColumn);
    /*
    <summary>
        Gets cell range.
    </summary>
    <param name="name"></param>
    <returns></returns>
    */
    intrusive_ptr<IXLSRange> Get(LPCWSTR_S name);
    /*
    <summary>
        Gets cell range
    </summary>
    <param name="name"></param>
    <param name="IsR1C1Notation"></param>
    <returns></returns>
    */
    intrusive_ptr<IXLSRange> Get(LPCWSTR_S name, bool IsR1C1Notation);
    intrusive_ptr<IXLSRange> GetRange(int row, int column);
    intrusive_ptr<IXLSRange> GetRange(int row, int column, int lastRow, int lastColumn);
    intrusive_ptr<IXLSRange> GetRange(LPCWSTR_S name);
    intrusive_ptr<IXLSRange> GetRange(LPCWSTR_S name, bool IsR1C1Notation);
    /*
    <summary>
         Returns a Comment object that represents the comment associated with the cell in the upper-left corner of the range.
        <example>The following code illustrates how to access Comments property of the Range:
        <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        Worksheet worksheet = workbook.Worksheets[0];
        //Adding comments to a cell
        worksheet.Range["A1"].AddComment().Text = "Comments";
        //Add Rich Text Comments
        CellRange range = worksheet.Range["A6"];
        range.AddComment().RichText.Text = "RichText";
        IRichTextString rtf = range.Comment.RichText;
        //Formatting first 4 characters
        IFont redFont = workbook.CreateFont();
        redFont.IsBold = true;
        redFont.Color = Color.Red;
        rtf.SetFont(0, 3, redFont);
        //Save to file
        workbook.SaveToFile("DataValidation.xlsx");
        </code>
        </example>
    </summary>
    */
    intrusive_ptr<ExcelComment> GetExcelComment();
    /*
    <summary>
        Returns a worksheet object that represents the worksheet 
            containing the specified range.
    </summary>
    */
    intrusive_ptr<IWorksheet> GetWorksheet ();
    /*
    <summary>
         Returns a RichTextString object that represents the rich text style.
        <example>The following code illustrates how to set rich text formatting in the range:
        <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        Worksheet worksheet = workbook.Worksheets[0];
        //Create style
        IStyle style = workbook.Styles.Add("CustomStyle");
        //Set rich text
        IRichTextString richText = worksheet["C2"].RichText;
        richText.Text = "Sample text";
        //Set rich text font
        IFont font = style.Font;
        font.IsBold = true;
        richText.SetFont(0, 5, font);
        //Save to file
        workbook.SaveToFile("RichText.xlsx");
        </code>
        </example>
    </summary>
    */
    intrusive_ptr<IRichTextString> GetRichText ();
    /*
    <summary>
        Returns a Range object that represents the entire column (or 
            columns) that contains the specified range.
    </summary>
    */
    intrusive_ptr<IXLSRange> GetEntireColumn ();
    /*
    <summary>
        Returns a Range object that represents the cell at the end of the 
            region that contains the source range.
    </summary>
    */
    intrusive_ptr<IXLSRange> GetEndCell ();
    /*
    <summary>
         Returns a Range object that represents the merged range containing the specified cell.
        <example>The following code illustrates how to access MergeArea property:
        <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        Worksheet worksheet = workbook.Worksheets[0];
        //Set text
        worksheet["C2"].Text = "Sample text in cell";
        //Set merge
        worksheet["C2:D3"].Merge();
        //Check merge area
        Console.Write(worksheet["C2"].MergeArea.AddressLocal);
        </code>
        </example>
    </summary>
    */
    intrusive_ptr<IXLSRange> GetMergeArea ();
    /*
    <summary>
        Returns a Range object that represents the entire row (or rows) that contains the specified range.
    </summary>
    */
    intrusive_ptr<IXLSRange> GetEntireRow ();
    intrusive_ptr<IList<CellRange>> GetDependentRanges (bool isAll);
    intrusive_ptr<IList<ReferRangeArea>> GetReferRanges();
private:
};
}}
