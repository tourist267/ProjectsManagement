#pragma once
#include "pch.h"

//#pragma warning(push)
//#pragma warning(disable:4250)
//#include "TableBuiltInStyles.h"
//#include "IXLSRange.h"
//#include "IWorksheet.h"
//#include "AutoFiltersCollection.h"
//#include "../../common/h/IList.h"
//#pragma warning(pop)

namespace Spire{
namespace Xls{
/*
    <summary>
        Represents a table on a worksheet.
    </summary>
*/
class EXPORTS IListObject : public virtual Object
{
    friend class IListObjects;
    friend class ListObjectCollection;
public:
    /*
    <summary>
        Gets or sets name of the list object.
            <example>The following code illustrates how to access Name property of the table:
            <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        workbook.LoadFromFile("Sample.xlsx");
        Worksheet worksheet = workbook.Worksheets[0];
        //Create table
        IListObject table1 = worksheet.ListObjects.Create("Table1", worksheet["A1:C6"]);
        //Set Table Name
        table1.Name = "Products";
        //Get Table Name
        Console.WriteLine(table1.Name);
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
        Gets or sets list object's location.
            <example>The following code illustrates how table range can be set and accessed:
            <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        workbook.LoadFromFile("Sample.xlsx");
        Worksheet worksheet = workbook.Worksheets[0];
        //Create table
        IListObject table1 = worksheet.ListObjects.Create("Table1", worksheet["A1:C6"]);
        //Set Table Range
        table1.Location = worksheet.Range["A1:C7"];
        //Get Table Range
        Console.WriteLine(table1.Location.RangeAddressLocal.ToString());
        //Save to file
        workbook.SaveToFile("Table.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual intrusive_ptr<IXLSRange> GetLocation ();
    virtual void SetLocation (intrusive_ptr<IXLSRange> value);
    virtual intrusive_ptr<IList<IListObjectColumn>> GetColumns ();
    /*
    <summary>
        Gets index of the current list object.
            <example>The following code illustrates how to access the index of the table:
            <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        workbook.LoadFromFile("Sample.xlsx");
        Worksheet worksheet = workbook.Worksheets[0];
        //Create table
        IListObject table1 = worksheet.ListObjects.Create("Table1", worksheet["A1:C6"]);
        //Print Table index
        Console.WriteLine(table1.Index);
        //Save to file
        workbook.SaveToFile("Table.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual int GetIndex ();
    /*
    <summary>
        Gets or sets the built-in table style for the specified ListObject object.
            <example>The following code illustrates how to set TableBuiltInStyles.TableStyleMedium9 to
            BuiltInTableStyle property:
            <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        workbook.LoadFromFile("Sample.xlsx");
        Worksheet worksheet = workbook.Worksheets[0];
        //Create table
        IListObject table1 = worksheet.ListObjects.Create("Table1", worksheet["A1:C6"]);
        //Apply builtin style
        table1.BuiltInTableStyle = TableBuiltInStyles.TableStyleMedium9;
        //Save to file
        workbook.SaveToFile("Table.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual TableBuiltInStyles GetBuiltInTableStyle ();
    virtual void SetBuiltInTableStyle (TableBuiltInStyles value);
    /*
    <summary>
        Gets parent worksheet object.
            <example>The following code illustrates how the parent worksheet can be accessed:
            <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        workbook.LoadFromFile("Sample.xlsx");
        Worksheet worksheet = workbook.Worksheets[0];
        //Create table
        IListObject table1 = worksheet.ListObjects.Create("Table1", worksheet["A1:C6"]);
        //Get parent worksheet's name
        Console.WriteLine(table1.Worksheet.Name);
        //Save to file
        workbook.SaveToFile("Table.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual intrusive_ptr<IWorksheet> GetWorksheet ();
    /*
    <summary>
        Gets or sets list object name.
            <example>The following code illustrates how the get the DisplayName and print it to console:
            <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        workbook.LoadFromFile("Sample.xlsx");
        Worksheet worksheet = workbook.Worksheets[0];
        //Create table
        IListObject table1 = worksheet.ListObjects.Create("Table1", worksheet["A1:C6"]);
        //Get Table display name
        Console.WriteLine(table1.DisplayName);
        //Save to file
        workbook.SaveToFile("Table.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual LPCWSTR_S GetDisplayName ();
    virtual void SetDisplayName (LPCWSTR_S value);
    /*
    <summary>
        Gets number of totals rows.
            <example>The following code illustrates how to get the totals rows count:
            <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        workbook.LoadFromFile("Sample.xlsx");
        Worksheet worksheet = workbook.Worksheets[0];
        //Create table
        IListObject table1 = worksheet.ListObjects.Create("Table1", worksheet["A1:C6"]);
        //Check totals row count
        Console.WriteLine(table1.TotalsRowCount);
        //Save to file
        workbook.SaveToFile("Table.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual int GetTotalsRowCount ();
    /*
    <summary>
        Gets or sets a value indicating whether the Total row is visible.
            <example>The following code illustrates how to enable it by setting it to "True" and show 
            the sum of values in second and third columns in the totals row:
            <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        workbook.LoadFromFile("Sample.xlsx");
        Worksheet worksheet = workbook.Worksheets[0];
        //Create table
        IListObject table1 = worksheet.ListObjects.Create("Table1", worksheet["A1:C6"]);
        //Show total row
        table1.DisplayTotalRow = true;
        table1.Columns[0].TotalsRowLabel = "Total";
        table1.Columns[1].TotalsCalculation = ExcelTotalsCalculation.Sum;
        table1.Columns[2].TotalsCalculation = ExcelTotalsCalculation.Sum;
        //Save to file
        workbook.SaveToFile("Table.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual bool GetDisplayTotalRow ();
    virtual void SetDisplayTotalRow (bool value);
    /*
    <summary>
        Gets or sets a value indicating whether row stripes should be present.
            <example>The following code illustrates how to set ShowTableStyleRowStripes to "False" and
            set ShowTableStyleColumnStripes to "True" to enable table formatting in columns only:
            <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        workbook.LoadFromFile("Sample.xlsx");
        Worksheet worksheet = workbook.Worksheets[0];
        //Create table
        IListObject table1 = worksheet.ListObjects.Create("Table1", worksheet["A1:C6"]);
        //Set Row Column Stripe Visiblity
        table1.ShowTableStyleRowStripes = false;
        table1.ShowTableStyleColumnStripes = true;
        //Apply builtin style
        table1.BuiltInTableStyle = TableBuiltInStyles.TableStyleMedium9;
        //Create style for table number format
        IStyle style1 = workbook.Styles.Add("CurrencyFormat");
        style1.NumberFormat = "_($* #,##0.00_);_($* (#,##0.00);_($* \" - \"??_);_(@_)";
        //Apply number format
        worksheet["B2:C6"].CellStyleName = "CurrencyFormat";
        //Save to file
        workbook.SaveToFile("Table.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual bool GetShowTableStyleRowStripes ();
    virtual void SetShowTableStyleRowStripes (bool value);
    /*
    <summary>
        Gets or sets a value indicating whether column stripes should be present.
            <example>The following code illustrates how to set ShowTableStyleRowStripes to "False" and
            set ShowTableStyleColumnStripes to "True" to change the default formatting of the table:
            <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        workbook.LoadFromFile("Sample.xlsx");
        Worksheet worksheet = workbook.Worksheets[0];
        //Create table
        IListObject table1 = worksheet.ListObjects.Create("Table1", worksheet["A1:C6"]);
        //Set Row Column Stripe Visiblity
        table1.ShowTableStyleRowStripes = false;
        table1.ShowTableStyleColumnStripes = true;
        //Apply builtin style
        table1.BuiltInTableStyle = TableBuiltInStyles.TableStyleMedium9;
        //Create style for table number format
        IStyle style1 = workbook.Styles.Add("CurrencyFormat");
        style1.NumberFormat = "_($* #,##0.00_);_($* (#,##0.00);_($* \" - \"??_);_(@_)";
        //Apply number format
        worksheet["B2:C6"].CellStyleName = "CurrencyFormat";
        //Save to file
        workbook.SaveToFile("Table.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual bool GetShowTableStyleColumnStripes ();
    virtual void SetShowTableStyleColumnStripes (bool value);
    /*
    <summary>
        Gets or sets a value indicating whether last column is present.
            <example>The following code illustrates how to set DisplayLastColumn to "true" to enable the 
            format for the last column:
            <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        workbook.LoadFromFile("Sample.xlsx");
        Worksheet worksheet = workbook.Worksheets[0];
        //Create table
        IListObject table1 = worksheet.ListObjects.Create("Table1", worksheet["A1:C6"]);
        //Set Column Visiblity
        table1.DisplayFirstColumn = true;
        table1.DisplayLastColumn = true;
        //Save to file
        workbook.SaveToFile("Table.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual bool GetDisplayLastColumn ();
    virtual void SetDisplayLastColumn (bool value);
    /*
    <summary>
        Gets or sets a value indicating whether first column is present.
            <example>The following code illustrates how to set DisplayFirstColumn to "true" to enable the 
            format for the first column:
            <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        workbook.LoadFromFile("Sample.xlsx");
        Worksheet worksheet = workbook.Worksheets[0];
        //Create table
        IListObject table1 = worksheet.ListObjects.Create("Table1", worksheet["A1:C6"]);
        //Set Column Visiblity
        table1.DisplayFirstColumn = true;
        table1.DisplayLastColumn = true;
        //Save to file
        workbook.SaveToFile("Table.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual bool GetDisplayFirstColumn ();
    virtual void SetDisplayFirstColumn (bool value);
    /*
    <summary>
        Gets or sets a Boolean value indicating whether to hide/display header row.
            <example>The following code illustrates how to hide the header row of the table:
            <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        workbook.LoadFromFile("Sample.xlsx");
        Worksheet worksheet = workbook.Worksheets[0];
        //Create table
        IListObject table1 = worksheet.ListObjects.Create("Table1", worksheet["A1:C6"]);
        //Set Header Visiblity
        table1.DisplayHeaderRow = true;
        //Save to file
        workbook.SaveToFile("Table.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual bool GetDisplayHeaderRow ();
    virtual void SetDisplayHeaderRow (bool value);
    /*
    <summary>
        Gets the AutoFiltersCollection collection in the table. Read-only.
    </summary>
    */
    virtual intrusive_ptr<AutoFiltersCollection> GetAutoFilters ();
private:
};
}}
