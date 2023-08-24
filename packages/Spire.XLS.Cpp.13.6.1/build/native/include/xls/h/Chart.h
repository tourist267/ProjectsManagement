#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IXLSRange.h"
#include "XlsChartShape.h"
#include "ChartArea.h"
#include "ChartWallOrFloor.h"
#include "ChartPageSetup.h"
#include "ChartLegend.h"
#include "ChartCategoryAxis.h"
#include "ChartValueAxis.h"
#include "ChartDataTable.h"
#include "ChartPlotArea.h"
#include "ChartSeriesAxis.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS Chart : public virtual XlsChartShape
{
    friend class ChartsCollection;
    friend class WorksheetChartsCollection;
public:
    /*
    <summary>
        Returns an object that represents either a single series (a Series object) or a collection of all the series (a SeriesCollection collection) in the chart or chart group. 
    </summary>
    */
    intrusive_ptr<ChartSeries> GetSeries ();
    /*
    <summary>
        Gets title text area. Read-only.
    </summary>
    */
    intrusive_ptr<ChartTextArea> GetChartTitleArea ();
    /*
    <summary>
         Returns a ChartArea object that represents the complete chart area for the chart.
        <example>The following code illustrates how to access IChartFrameFormat using ChartArea 
             property and set foreground color for the ChartArea:
        <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        Worksheet worksheet = workbook.Worksheets[0];
        //Add data
        worksheet.Range["A1"].Text = "Jan";
                       worksheet.Range["B1"].Text = "Feb";
                       worksheet.Range["C1"].Text = "Mar";
                       worksheet.Range["A2"].Text = "10";
                       worksheet.Range["B2"].Text = "20";
                       worksheet.Range["C2"].Text = "30";
        //Create chart and range
        Chart chart = worksheet.Charts.Add();
        chart.DataRange = worksheet.Range["A1:C2"];
        //Set chart frame format
        IChartFrameFormat frameFormat = chart.ChartArea;
        //Set color
        frameFormat.Fill.ForeColor = System.Drawing.Color.Red;
        //Save to file
        workbook.SaveToFile("Chart.xlsx");
        </code>
        </example>
    </summary>
    */
    intrusive_ptr<IChartFrameFormat> GetChartArea ();
    /*
    <summary>
        DataRange for the chart series.
    </summary>
    */
    intrusive_ptr<IXLSRange> GetDataRange ();
    void SetDataRange (intrusive_ptr<IXLSRange> value);
    /*
    <summary>
         Returns a DataTable object that represents the chart data table.
        <example>The following code illustrates how to set HasDataTable to "true" to enable data table
             and set IChartDataTable.HasBorders to "false" to hide the borders of data table:
        <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        Worksheet worksheet = workbook.Worksheets[0];
        //Add data
        worksheet.Range["A1"].Text = "Jan";
                       worksheet.Range["B1"].Text = "Feb";
                       worksheet.Range["C1"].Text = "Mar";
                       worksheet.Range["A2"].Text = "10";
                       worksheet.Range["B2"].Text = "20";
                       worksheet.Range["C2"].Text = "30";
        //Create chart and range
        Chart chart = worksheet.Charts.Add();
        chart.DataRange = worksheet.Range["A1:C2"];
        //Set Chart data table
        chart.HasDataTable = true;
        IChartDataTable dataTable = chart.DataTable;
        //Set border
        dataTable.HasBorders = false;
        //Save to file
        workbook.SaveToFile("Chart.xlsx");
        </code>
        </example>
    </summary>
    */
    intrusive_ptr<IChartDataTable> GetDataTable ();
    /*
    <summary>
        Returns a Floor object that represents the floor of the 3-D chart.
            <example>The following code illustrates how to access IChartWallOrFloor using Floor 
            property and set foreground color for the chart's Floor:
            <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        workbook.LoadFromFile("Sample.xlsx");
        Worksheet worksheet = workbook.Worksheets[0];
        //Get chart
        Chart chart = worksheet.Charts[0];
        //Set chart wall
        IChartWallOrFloor floor = chart.Floor;
        //Set color
        floor.Fill.FillType = ShapeFillType.SolidColor;
        floor.Fill.ForeColor = System.Drawing.Color.Red;
        //Save to file
        workbook.SaveToFile("Chart.xlsx");
        </code>
        </example>
    </summary>
    */
    intrusive_ptr<IChartWallOrFloor> GetFloor ();
    /*
    <summary>
         Represents chart legend.
        <example>The following code illustrates how to access IChartLegend using IChart.Legend 
             property and set IChartLegend.Position to LegendPositionType.Left:
        <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        Worksheet worksheet = workbook.Worksheets[0];
        //Add data
        worksheet.Range["A1"].Text = "Jan";
                       worksheet.Range["B1"].Text = "Feb";
                       worksheet.Range["C1"].Text = "Mar";
                       worksheet.Range["A2"].Text = "10";
                       worksheet.Range["B2"].Text = "20";
                       worksheet.Range["C2"].Text = "30";
        //Create chart and range
        Chart chart = worksheet.Charts.Add();
        chart.DataRange = worksheet.Range["A1:C2"];
        //Set chart legend and legend position
        IChartLegend legend = chart.Legend;
        legend.Position = LegendPositionType.Left;
        //Save to file
        workbook.SaveToFile("Chart.xlsx");
        </code>
        </example>
    </summary>
    */
    intrusive_ptr<IChartLegend> GetLegend ();
    /*
    <summary>
        Page setup for the chart.
    </summary>
    */
    intrusive_ptr<IChartPageSetup> GetPageSetup ();
    /*
    <summary>
         Returns a PlotArea object that represents the plot area of a chart.
        <example>The following code illustrates how to access IChartFrameFormat using PlotArea 
             property and set foreground color for the chart's PlotArea:
        <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        Worksheet worksheet = workbook.Worksheets[0];
        //Add data
        worksheet.Range["A1"].Text = "Jan";
                       worksheet.Range["B1"].Text = "Feb";
                       worksheet.Range["C1"].Text = "Mar";
                       worksheet.Range["A2"].Text = "10";
                       worksheet.Range["B2"].Text = "20";
                       worksheet.Range["C2"].Text = "30";
        //Create chart and range
        Chart chart = worksheet.Charts.Add();
        chart.DataRange = worksheet.Range["A1:C2"];
        //Set chart frame format
        IChartFrameFormat frameFormat = chart.PlotArea;
        //Set color
        frameFormat.Fill.ForeColor = System.Drawing.Color.Red;
        //Save to file
        workbook.SaveToFile("Chart.xlsx");
        </code>
        </example>
    </summary>
    */
    intrusive_ptr<IChartFrameFormat> GetPlotArea ();
    /*
    <summary>
        Returns primary category axis.
    </summary>
    */
    intrusive_ptr<IChartCategoryAxis> GetPrimaryCategoryAxis ();
    /*
    <summary>
        Returns primary value axis.
    </summary>
    */
    intrusive_ptr<IChartValueAxis> GetPrimaryValueAxis ();
    /*
    <summary>
        Returns primary series axis. Read-only.
    </summary>
    */
    intrusive_ptr<IChartSeriesAxis> GetPrimarySerieAxis ();
    /*
    <summary>
        Returns secondary category axis.
    </summary>
    */
    intrusive_ptr<IChartCategoryAxis> GetSecondaryCategoryAxis ();
    /*
    <summary>
        Returns secondary value axis. Read-only.
    </summary>
    */
    intrusive_ptr<IChartValueAxis> GetSecondaryValueAxis ();
    /*
    <summary>
        Workbook contains the chart.
    </summary>
    */
    intrusive_ptr<Workbook> GetWorkbook ();
    /*
    <summary>
        Represents chart walls.
            <example>The following code illustrates how to access IChartWallOrFloor using Walls 
            property and set foreground color for the chart's Walls:
            <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        workbook.LoadFromFile("Sample.xlsx");
        Worksheet worksheet = workbook.Worksheets[0];
        //Get chart
        Chart chart = worksheet.Charts[0];
        //Set chart wall
        IChartWallOrFloor wall = chart.Walls;
        //Set color
        wall.Fill.FillType = ShapeFillType.SolidColor;
        wall.Fill.ForeColor = System.Drawing.Color.Red;
        //Save to file
        workbook.SaveToFile("Chart.xlsx");
        </code>
        </example>
    </summary>
    */
    intrusive_ptr<IChartWallOrFloor> GetWalls ();
    /*
    <summary>
        Worksheet which contains the chart.
    </summary>
    */
    intrusive_ptr<Worksheet> GetWorksheet ();
private:
};
}}
