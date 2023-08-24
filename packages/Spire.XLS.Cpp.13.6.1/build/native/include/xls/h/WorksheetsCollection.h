#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "XlsWorksheetsCollection.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS WorksheetsCollection : public virtual XlsWorksheetsCollection
{
    friend class Workbook;
public:
    /*
    <summary>
        Adds a new worksheet.
    </summary>
    <param name="sheetName">Worksheet name.</param>
    <returns>Added worksheet.</returns>
    */
    intrusive_ptr<Worksheet> Add (LPCWSTR_S name);
    /*
    <summary>
        Adds copy of worksheet.
    </summary>
    <param name="sheetIndex">Sheet index.</param>
    <returns>Added worksheet.</returns>
    */
    intrusive_ptr<Worksheet> AddCopy (int sheetIndex);
    /*
    <summary>
        Adds copy of worksheet.
    </summary>
    <param name="sheet">Worksheet to copy.</param>
    <returns>Added worksheet.</returns>
    */
    intrusive_ptr<Worksheet> AddCopy (intrusive_ptr<Worksheet> sheet);
    /*
    <summary>
        Adding worksheets collection to workbook.
    </summary>
    <param name="worksheets">Source worksheets collection.</param>
    */
    void AddCopy (intrusive_ptr<WorksheetsCollection> sheets);
    /*
    <summary>
        Create a new worksheet.
    </summary>
    <param name="name">Worksheet name</param>
    <returns></returns>
    */
    intrusive_ptr<IWorksheet> Create (LPCWSTR_S name);
    /*
    <summary>
        Creates a new worksheet.
    </summary>
    <returns></returns>
    */
    intrusive_ptr<IWorksheet> Create ();
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
        Remove worksheet from collection.
    </summary>
    <param name="sheet">Worksheet object.</param>
    */
    void Remove (intrusive_ptr<Worksheet> sheet);
    /*
    <summary>
        Returns a single object from a collection. Read-only.
    </summary>
    */
    intrusive_ptr<XlsWorksheet> Get (int Index);
    /*
    <summary>
        Returns a single object from a collection. Read-only.
    </summary>
    */
    intrusive_ptr<IWorksheet> Get (LPCWSTR_S sheetName);

    virtual int GetCount();
private:
};
}}
