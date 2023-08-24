#pragma once
#include "pch.h"
//#pragma warning(push)
//#pragma warning(disable:4250)
//#include "ChartBackgroundMode.h"
//#include "IExcelApplication.h"
//#include "IOptimizedUpdate.h"
#include "IFont.h"
//#pragma warning(pop)

namespace Spire{namespace Xls{
/*
    <summary>
        Represents the chart data table.
    </summary>
*/
class EXPORTS IChartDataTable : public virtual IFont
{
    friend class IChart;
    friend class XlsChart;
    friend class XlsChartShape;
public:
    /*
    <summary>
        True if data table has horizontal border.
            <example>The following code illustrates how to remove horizontal border for IChartDataTable object:
            <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        workbook.LoadFromFile("Sample.xlsx");
        Worksheet worksheet = workbook.Worksheets[0];
        //Create chart and set range
        IChart chart = worksheet.Charts.Add();
        chart.DataRange = worksheet.Range["A1:F2"];
        //Set chart type
        chart.ChartType = ExcelChartType.ColumnClustered;
        //Enabling the data table
        chart.HasDataTable = true;
        //Get data table of the chart
        IChartDataTable dataTable = chart.DataTable;
        //Set false to remove the horizontal border in data table
        dataTable.HasHorzBorder = false;
        //Save to file
        workbook.SaveToFile("Chart.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual bool GetHasHorzBorder ()=0;
    virtual void SetHasHorzBorder (bool value)=0;
    /*
    <summary>
        True if data table has vertical border.
            <example>The following code illustrates how to remove vertical border for IChartDataTable object:
            <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        workbook.LoadFromFile("Sample.xlsx");
        Worksheet worksheet = workbook.Worksheets[0];
        //Create chart and set range
        IChart chart = worksheet.Charts.Add();
        chart.DataRange = worksheet.Range["A1:F2"];
        //Set chart type
        chart.ChartType = ExcelChartType.ColumnClustered;
        //Enabling the data table
        chart.HasDataTable = true;
        //Get data table of the chart
        IChartDataTable dataTable = chart.DataTable;
        //Set false to remove the vertical border in data table
        dataTable.HasVertBorder = false;
        //Save to file
        workbook.SaveToFile("Chart.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual bool GetHasVertBorder ()=0;
    virtual void SetHasVertBorder (bool value)=0;
    /*
    <summary>
        True if data table has borders.
            <example>The following code illustrates how to outline borders of IChartDataTable object:
            <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        workbook.LoadFromFile("Sample.xlsx");
        Worksheet worksheet = workbook.Worksheets[0];
        //Create chart and set range
        IChart chart = worksheet.Charts.Add();
        chart.DataRange = worksheet.Range["A1:F2"];
        //Set chart type
        chart.ChartType = ExcelChartType.ColumnClustered;
        //Enabling the data table
        chart.HasDataTable = true;
        //Get data table of the chart
        IChartDataTable dataTable = chart.DataTable;
        //Set false to remove the borders in data table
        dataTable.HasBorders = false;
        //Save to file
        workbook.SaveToFile("Chart.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual bool GetHasBorders ()=0;
    virtual void SetHasBorders (bool value)=0;
    /*
    <summary>
        True if there is series keys in the data table.
            <example>The following code illustrates how to show series keys in the IChartDataTable object:
            <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        workbook.LoadFromFile("Sample.xlsx");
        Worksheet worksheet = workbook.Worksheets[0];
        //Create chart and set range
        IChart chart = worksheet.Charts.Add();
        chart.DataRange = worksheet.Range["A1:F2"];
        //Set chart type
        chart.ChartType = ExcelChartType.ColumnClustered;
        //Enabling the data table
        chart.HasDataTable = true;
        //Get data table of the chart
        IChartDataTable dataTable = chart.DataTable;
        //Set true to show series keys in the data table
        dataTable.ShowSeriesKeys = true;
        //Save to file
        workbook.SaveToFile("Chart.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual bool GetShowSeriesKeys ()=0;
    virtual void SetShowSeriesKeys (bool value)=0;
    virtual ChartBackgroundMode GetBackgroundMode ()=0;
    virtual void SetBackgroundMode (ChartBackgroundMode value)=0;
private:
};
}}
