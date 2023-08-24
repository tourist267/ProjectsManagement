#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "XlsRangesCollection.h"
#include "CellRange.h"
#include "XlsRangesCollection.h"
#include "Worksheet.h"
#include "BordersCollection.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS RangesCollection : public virtual XlsRangesCollection
{
    friend class XlsRange;
public:
    /*
    <summary>
        Adds a range to the collection.
    </summary>
    <param name="range">Range to add.</param>
    */
    void Add (intrusive_ptr<CellRange> range);
    /*
    <summary>
        Adds a comment to the range.
    </summary>
    <returns>Added comment.</returns>
    */
    intrusive_ptr<ExcelComment> AddExcelComment();
    /*
    <summary>
        Adds a range to the collection.
    </summary>
    <param name="range">Range to add.</param>
    */
    void AddRange (intrusive_ptr<CellRange> range);
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
    void Move (intrusive_ptr<CellRange> destRange,bool updateReference);
    /*
    <summary>
        Removes range from the collection.
    </summary>
    <param name="range">Range to remove.</param>
    */
    void Remove (intrusive_ptr<CellRange> range);
    /*
    <summary>
        Returns a Range object that represents the entire row (or rows) that contains the specified range.
    </summary>
    */
    intrusive_ptr<IXLSRange> GetEntireRow ();
    /*
    <summary>
        Returns a Range object that represents the entire column (or 
            columns) that contains the specified range.
    </summary>
    */
    intrusive_ptr<IXLSRange> GetEntireColumn ();
    /*
    <summary>
        Returns a Range object that represents the cells in the specified range.
    </summary>
    */
    intrusive_ptr<IList<CellRange>> GetCells ();
    /*
    <summary>
        Returns the number of the first row of the first area in the range.
    </summary>
    */
    intrusive_ptr<IList<XlsRange>> GetRows ();
    /*
    <summary>
        Returns a Range object that represents the columns in the specified range
    </summary>
    */
    intrusive_ptr<IList<XlsRange>> GetColumns ();
    /*
    <summary>
        Returns a Comment object that represents the comment associated with the cell in the upper-left corner of the range.
    </summary>
    */
    intrusive_ptr<ExcelComment> GetExcelComment();
    /*
    <summary>
        Returns a Range object that represents the cell at the end of the 
            region that contains the source range.
    </summary>
    */
    intrusive_ptr<IXLSRange> GetEndCell ();
    /*
    <summary>
        Returns a Borders collection that represents the borders of a style or a range of cells (including a range defined as part of a conditional format).
    </summary>
    */
    intrusive_ptr<IBorders> GetBorders ();
    /*
    <summary>
        Returns a Range object that represents the merged range containing the specified cell.
    </summary>
    */
    intrusive_ptr<IXLSRange> GetMergeArea ();
    /*
    <summary>
        Returns a RichTextString object that represents the rich text style.
    </summary>
    */
    intrusive_ptr<IRichTextString> GetRichText ();
    /*
    <summary>
        Returns a Style object that represents the style of the specified range
    </summary>
    */
    intrusive_ptr<IStyle> GetStyle ();
    void SetStyle (intrusive_ptr<CellStyle> value);
    intrusive_ptr<IWorksheet> GetWorksheet ();
private:
};
}}
