#pragma once
#include "pch.h"

//#pragma warning(push)
//#pragma warning(disable:4250)
//#include "ExcelTotalsCalculation.h"
//#pragma warning(pop)

namespace Spire{
namespace Xls{
/*
    <summary>
        Represents a column in the table.
    </summary>
*/
class EXPORTS IListObjectColumn : public virtual Object
{
public:
    /*
    <summary>
        Gets or sets name of the column.
            <example>The following code illustrates how create table using the data in the range 
            "A1:C6" and print first column's name,id and index:
            <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        workbook.LoadFromFile("Sample.xlsx");
        Worksheet worksheet = workbook.Worksheets[0];
        //Create table
        IListObject table1 = worksheet.ListObjects.Create("Table1", worksheet["A1:C6"]);
        //Print Column Name, ID, Index
        Console.WriteLine("Column Name " + table1.Columns[0].Name);
        Console.WriteLine("Column ID " + table1.Columns[0].Id);
        Console.WriteLine("Column Index " + table1.Columns[0].Index);
        //Save to file
        workbook.SaveToFile("Table.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual LPCWSTR_S GetName ();
    virtual void SetName (LPCWSTR_S value);
    /*
    <summary>
        Gets column index.
            <example>The following code illustrates how create table using the data in the range 
            "A1:C6" and print first column's name,id and index:
            <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        workbook.LoadFromFile("Sample.xlsx");
        Worksheet worksheet = workbook.Worksheets[0];
        //Create table
        IListObject table1 = worksheet.ListObjects.Create("Table1", worksheet["A1:C6"]);
        //Print Column Name, ID, Index
        Console.WriteLine("Column Name " + table1.Columns[0].Name);
        Console.WriteLine("Column ID " + table1.Columns[0].Id);
        Console.WriteLine("Column Index " + table1.Columns[0].Index);
        //Save to file
        workbook.SaveToFile("Table.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual int GetIndex ();
    /*
    <summary>
        Gets column id of current column. Read-only.
            <example>The following code illustrates how create table using the data in the range 
            "A1:C6" and print first column's name,id and index:
            <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        workbook.LoadFromFile("Sample.xlsx");
        Worksheet worksheet = workbook.Worksheets[0];
        //Create table
        IListObject table1 = worksheet.ListObjects.Create("Table1", worksheet["A1:C6"]);
        //Print Column Name, ID, Index
        Console.WriteLine("Column Name " + table1.Columns[0].Name);
        Console.WriteLine("Column ID " + table1.Columns[0].Id);
        Console.WriteLine("Column Index " + table1.Columns[0].Index);
        //Save to file
        workbook.SaveToFile("Table.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual int GetId ();
    /*
    <summary>
        Gets or sets function used for totals calculation.
            <example>The following code illustrates how to set IListObject.ShowTotals to "True" to 
            enable totals and set ExcelTotalsCalculation.Sum for second and third columns to get sum 
            of values in the respective columns:
            <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        workbook.LoadFromFile("Sample.xlsx");
        Worksheet worksheet = workbook.Worksheets[0];
        //Create table
        IListObject table1 = worksheet.ListObjects.Create("Table1", worksheet["A1:C6"]);
        //Total row
        table1.ShowTotals = true;
        table1.Columns[0].TotalsRowLabel = "Total";
        table1.Columns[1].TotalsCalculation = ExcelTotalsCalculation.Sum;
        table1.Columns[2].TotalsCalculation = ExcelTotalsCalculation.Sum;
        //Save to file
        workbook.SaveToFile("Table.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual ExcelTotalsCalculation GetTotalsCalculation ();
    virtual void SetTotalsCalculation (ExcelTotalsCalculation value);
    /*
    <summary>
        Gets or sets label of the totals row.
            <example>The following code illustrates how to set a string "Total" to the first column's 
            TotalsRowLabel property to indicate that it's adjacent cell holds sum of the values of it's column:
            <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        workbook.LoadFromFile("Sample.xlsx");
        Worksheet worksheet = workbook.Worksheets[0];
        //Create table
        IListObject table1 = worksheet.ListObjects.Create("Table1", worksheet["A1:C6"]);
        //Total row
        table1.ShowTotals = true;
        table1.Columns[0].TotalsRowLabel = "Total";
        table1.Columns[1].TotalsCalculation = ExcelTotalsCalculation.Sum;
        table1.Columns[2].TotalsCalculation = ExcelTotalsCalculation.Sum;
        //Save to file
        workbook.SaveToFile("Table.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual LPCWSTR_S GetTotalsRowLabel ();
    virtual void SetTotalsRowLabel (LPCWSTR_S value);
    /*
    <summary>
        Gets or sets calculated formula value.
            <example>The following code illustrates how to set a formula to third column to hold the 
            sum of first and second column's data:
            <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        workbook.LoadFromFile("Sample.xlsx");
        Worksheet worksheet = workbook.Worksheets[0];
        //Create table
        IListObject table1 = worksheet.ListObjects.Create("Table1", worksheet["A1:C6"]);
        //Total row
        table1.ShowTotals = true;
        table1.Columns[0].TotalsRowLabel = "Total";
        table1.Columns[1].TotalsCalculation = ExcelTotalsCalculation.Sum;
        table1.Columns[2].TotalsCalculation = ExcelTotalsCalculation.Sum;
        //Save to file
        workbook.SaveToFile("Table.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual LPCWSTR_S GetCalculatedFormula ();
    virtual void SetCalculatedFormula (LPCWSTR_S value);
private:
};
}}
