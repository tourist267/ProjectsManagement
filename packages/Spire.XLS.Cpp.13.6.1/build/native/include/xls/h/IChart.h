#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Xls{
/*
    <summary>
        Represents a chart sheet in the workbook.
    </summary>
*/
class EXPORTS IChart : public virtual Object
{
    friend class ICharts;
    friend class XlsChartsCollection;
public:
    /*
    <summary>
         Type of the chart.
        <example>The following code illustrates how to set  ExcelChartType.PyramidBarStacked to ChartType property:
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
        //Create chart and set chart type
        IChart chart = workbook.Charts.Add();
        chart.DataRange = worksheet.Range["A1:C2"];
        chart.ChartType = ExcelChartType.PyramidBarStacked;
        //Save to file
        workbook.SaveToFile("Chart.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual ExcelChartType GetChartType ()=0;
    virtual void SetChartType (ExcelChartType value)=0;
    /*
    <summary>
         DataRange for the chart series.
        <example>The following code illustrates how to set the data range for the chart:
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
        //Create chart and set range
        IChart chart = workbook.Charts.Add();
        chart.DataRange = worksheet.Range["A1:C2"];
        //Save to file
        workbook.SaveToFile("Chart.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual intrusive_ptr<IXLSRange> GetDataRange ()=0;
    virtual void SetDataRange (intrusive_ptr<IXLSRange> value)=0;
    /*
    <summary>
         True if series are in rows in DataRange;False otherwise.
        <example>The following code illustrates how to set SeriesDataFromRange property for charts:
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
        //Create chart and set SeriesDataFromRange
        IChart chart = workbook.Charts.Add();
        chart.DataRange = worksheet.Range["A1:C2"];
        chart.SeriesDataFromRange = false;
        //Save to file
        workbook.SaveToFile("Chart.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual bool GetSeriesDataFromRange ()=0;
    virtual void SetSeriesDataFromRange (bool value)=0;
    /*
    <summary>
         Page setup for the chart. Read-only.
        <example>The following code illustrates how to set paper size:
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
        IChart chart = workbook.Charts.Add();
        chart.DataRange = worksheet.Range["A1:C2"];
        //Set chart page setup and paper size
        IChartPageSetup pageSetup = chart.PageSetup;
        pageSetup.PaperSize = PaperSizeType.A3TransversePaper;
        //Save to file
        workbook.SaveToFile("Chart.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual intrusive_ptr<IChartPageSetup> GetPageSetup ()=0;
    /*
    <summary>
        X coordinate of the upper-left corner of the chart in points (1/72 inch).
    </summary>
    */
    virtual double GetXPos ()=0;
    virtual void SetXPos (double value)=0;
    /*
    <summary>
        Y coordinate of the upper-left corner of the chart in points (1/72 inch).
    </summary>
    */
    virtual double GetYPos ()=0;
    virtual void SetYPos (double value)=0;
    /*
    <summary>
        Width of the chart in points (1/72 inch).
    </summary>
    */
    //virtual double GetWidth ()=0;
    //virtual void SetWidth(double value)=0;
    /*
    <summary>
        Height of the chart in points (1/72 inch).
    </summary>
    */
    //virtual double GetHeight()=0;
    //virtual void SetHeight(double value)=0;
    /*
    <summary>
        Name of the chart's worksheet.
    </summary>
    */
    //virtual LPCWSTR_S GetName ()=0;
    //virtual void SetName (LPCWSTR_S value)=0;
    /*
    <summary>
         Primary category axis. Read-only.
        <example>The following code illustrates how to set the visibility of PrimaryCategoryAxis:
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
        IChart chart = workbook.Charts.Add();
        chart.DataRange = worksheet.Range["A1:C2"];
        //Chart category axis
        IChartCategoryAxis categoryAxis = chart.PrimaryCategoryAxis;
        //Set visibility
        categoryAxis.Visible = false;
        //Save to file
        workbook.SaveToFile("Chart.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual intrusive_ptr<IChartCategoryAxis> GetPrimaryCategoryAxis ()=0;
    /*
    <summary>
         Primary value axis. Read-only.
        <example>The following code illustrates how to set the visibility of PrimaryValueAxis:
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
        IChart chart = workbook.Charts.Add();
        chart.DataRange = worksheet.Range["A1:C2"];
        //Chart value axis
        IChartValueAxis valueAxis = chart.PrimaryValueAxis;
        //Set visibility
        valueAxis.Visible = false;
        //Save to file
        workbook.SaveToFile("Chart.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual intrusive_ptr<IChartValueAxis> GetPrimaryValueAxis ()=0;
    /*
    <summary>
         Primary serie axis. Read-only.
        <example>The following code illustrates how to set the visibility of PrimarySerieAxis:
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
        IChart chart = workbook.Charts.Add();
        chart.DataRange = worksheet.Range["A1:C2"];
        //Set chart type
        chart.ChartType = ExcelChartType.Surface3D;
        //Chart series axis
        IChartSeriesAxis seriesAxis = chart.PrimarySerieAxis;
        //Set visibility
        seriesAxis.Visible = false;
        //Save to file
        workbook.SaveToFile("Chart.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual intrusive_ptr<IChartSeriesAxis> GetPrimarySerieAxis ()=0;
    /*
    <summary>
         Secondary category axis. Read-only.
        <example>The following code illustrates how to disable PrimaryCategoryAxis and set 
             SecondaryCategoryAxis for charts:
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
                       worksheet.Range["A3"].Value = "100";
                       worksheet.Range["B3"].Value = "200";
                       worksheet.Range["C3"].Value = "300";
        //Create chart and range
        Chart chart = worksheet.Charts.Add();
        chart.DataRange = worksheet.Range["A1:C3"];
        //Set secondary axis
        IChartSerie serie = chart.Series[1];
        serie.UsePrimaryAxis = false;
        chart.SecondaryCategoryAxis.Visible = true;
        //Save to file
        workbook.SaveToFile("Chart.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual intrusive_ptr<IChartCategoryAxis> GetSecondaryCategoryAxis ()=0;
    /*
    <summary>
         Secondary value axis. Read-only.
        <example>The following code illustrates how to disable PrimaryValueAxis and set 
             SecondaryValueAxis for charts:
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
                       worksheet.Range["A3"].Value = "100";
                       worksheet.Range["B3"].Value = "200";
                       worksheet.Range["C3"].Value = "300";
        //Create chart and range
        Chart chart = worksheet.Charts.Add();
        chart.DataRange = worksheet.Range["A1:C3"];
        //Set secondary axis
        IChartSerie serie = chart.Series[1];
        serie.UsePrimaryAxis = false;
        chart.SecondaryValueAxis.Visible = true;
        //Save to file
        workbook.SaveToFile("Chart.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual intrusive_ptr<IChartValueAxis> GetSecondaryValueAxis ()=0;
    /*
    <summary>
         Returns an object that represents the complete chart area for the chart. Read-only.
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
    virtual intrusive_ptr<IChartFrameFormat> GetChartArea ()=0;
    /*
    <summary>
         Returns plot area frame format. Read-only.
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
    virtual intrusive_ptr<IChartFrameFormat> GetPlotArea ()=0;
    /*
    <summary>
        Represents chart walls. Read-only.
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
    virtual intrusive_ptr<IChartWallOrFloor> GetWalls ()=0;
    /*
    <summary>
        Represents chart floor. Read-only.
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
    virtual intrusive_ptr<IChartWallOrFloor> GetFloor ()=0;
    /*
    <summary>
         Represents charts dataTable object.
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
    virtual intrusive_ptr<IChartDataTable> GetDataTable ()=0;
    /*
    <summary>
         True if the chart has a data table.
        <example>The following code illustrates how data table can be set for charts:
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
        //Save to file
        workbook.SaveToFile("Chart.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual bool GetHasDataTable ()=0;
    virtual void SetHasDataTable (bool value)=0;
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
    virtual intrusive_ptr<IChartLegend> GetLegend ()=0;
    /*
    <summary>
         True if the chart has a legend object.
        <example>The following code illustrates how to set HasLegend property:
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
        //Set hasLegend
        chart.HasLegend = false;
        //Save to file
        workbook.SaveToFile("Chart.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual bool GetHasLegend ()=0;
    virtual void SetHasLegend (bool value)=0;
    /*
    <summary>
         Returns or sets the rotation of the 3-D chart view
             (the rotation of the plot area around the z-axis, in degrees).(0 to 360 degrees).
        <example>The following code illustrates how to set Rotation for 3-D charts:
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
        //Set Chart rotation
        chart.ChartType = ExcelChartType.Column3DClustered;
        chart.Rotation = 50;
        //Save to file
        workbook.SaveToFile("Chart.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual int GetRotation ()=0;
    virtual void SetRotation (int value)=0;
    /*
    <summary>
         Returns or sets the elevation of the 3-D chart view, in degrees (?0 to +90 degrees).
        <example>The following code illustrates how to set Rotation for 3-D charts:
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
        //Set Chart elevation
        chart.ChartType = ExcelChartType.Column3DClustered;
        chart.Elevation = 50;
        //Save to file
        workbook.SaveToFile("Chart.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual int GetElevation ()=0;
    virtual void SetElevation (int value)=0;
    /*
    <summary>
         Returns or sets the perspective for the 3-D chart view (0 to 100).
        <example>The following code illustrates how to set Perspective for the charts:
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
        //Set Chart perspective
        chart.ChartType = ExcelChartType.Column3DClustered;
        chart.Perspective = 70;
        //Save to file
        workbook.SaveToFile("Chart.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual int GetPerspective ()=0;
    virtual void SetPerspective (int value)=0;
    /*
    <summary>
        Returns or sets the height of a 3-D chart as a percentage of the chart width
             (between 5 and 500 percent).
        <example>The following code illustrates how to set HeightPercent to a Column 3D chart:
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
        //Set Chart height percent
        chart.ChartType = ExcelChartType.Column3DClustered;
        chart.AutoScaling = false;
        chart.HeightPercent = 50;
        //Save to file
        workbook.SaveToFile("Chart.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual int GetHeightPercent ()=0;
    virtual void SetHeightPercent (int value)=0;
    /*
    <summary>
         Returns or sets the depth of a 3-D chart as a percentage of the chart width
             (between 20 and 2000 percent).
        <example>The following code illustrates how to set DepthPercent to a Column 3D chart:
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
        //Set Chart depth percent
        chart.ChartType = ExcelChartType.Column3DClustered;
        chart.DepthPercent = 500;
        //Save to file
        workbook.SaveToFile("Chart.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual int GetDepthPercent ()=0;
    virtual void SetDepthPercent (int value)=0;
    /*
    <summary>
         Returns or sets the distance between the data series in a 3-D chart, as a percentage of 
             the marker width.( 0 - 500 )
        <example>The following code illustrates how to set GapDepth to a Column 3D chart:
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
        //Set gap depth
        chart.ChartType = ExcelChartType.Column3DClustered;
        chart.GapDepth = 450;
        //Save to file
        workbook.SaveToFile("Chart.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual int GetGapDepth ()=0;
    virtual void SetGapDepth (int value)=0;
    /*
    <summary>
         True if the chart axes are at right angles, independent of chart rotation or elevation.
        <example>The following code illustrates how RightAngleAxes can be set for charts:
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
        //Set Chart rotation and RightAngleAxes
        chart.ChartType = ExcelChartType.Column3DClustered;
        chart.Rotation = 50;
        chart.RightAngleAxes = true;
        //Save to file
        workbook.SaveToFile("Chart.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual bool GetRightAngleAxes ()=0;
    virtual void SetRightAngleAxes (bool value)=0;
    /*
    <summary>
         True if Microsoft Excel scales a 3-D chart so that it's closer in size to the equivalent 2-D chart.
        <example>The following code illustrates how to set auto scaling for charts:
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
        //Set auto scaling
        chart.ChartType = ExcelChartType.Column3DClustered;
        chart.HeightPercent = 50;
        chart.AutoScaling = true;
        //Save to file
        workbook.SaveToFile("Chart.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual bool GetAutoScaling ()=0;
    virtual void SetAutoScaling (bool value)=0;
    /*
    <summary>
        True if gridlines are drawn two-dimensionally on a 3-D chart.
    </summary>
    */
    virtual bool GetWallsAndGridlines2D ()=0;
    virtual void SetWallsAndGridlines2D (bool value)=0;
    /*
    <summary>
        Indicates whether chart has plot area.
    </summary>
    */
    virtual bool GetHasPlotArea ()=0;
    virtual void SetHasPlotArea (bool value)=0;
    /*
    <summary>
        Represents the way that blank cells are plotted on a chart.
    </summary>
    */
    virtual ChartPlotEmptyType GetDisplayBlanksAs ()=0;
    virtual void SetDisplayBlanksAs (ChartPlotEmptyType value)=0;
    /*
    <summary>
         True if only visible cells are plotted. False if both visible and hidden cells are plotted.
        <example>The following code illustrates how to set PlotVisibleOnly to "true" so that 
             chart plots all the cells within the chart's DataRange:
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
        //Hide column and create chart
        worksheet.Columns[2].ColumnWidth = 0;
        Chart chart = worksheet.Charts.Add();
        chart.DataRange = worksheet.Range["A1:C2"];
        //Set Plot visible only
        chart.PlotVisibleOnly = true;
        //Save to file
        workbook.SaveToFile("Chart.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual bool GetPlotVisibleOnly ()=0;
    virtual void SetPlotVisibleOnly (bool value)=0;
    /*
    <summary>
        True if Microsoft Excel resizes the chart to match the size of the chart sheet window.
            False if the chart size isn't attached to the window size. Applies only to chart sheets.
    </summary>
    */
    virtual bool GetSizeWithWindow ()=0;
    virtual void SetSizeWithWindow (bool value)=0;
    /*
    <summary>
        Gets or sets the pivot source.
    </summary>
    <value>The pivot source.</value>
    */
    virtual intrusive_ptr<PivotTable> GetPivotTable ()=0;
    virtual void SetPivotTable (intrusive_ptr<PivotTable> value)=0;
    /*
    <summary>
        Gets or sets the type of the pivot chart.
    </summary>
    <value>The type of the pivot chart.</value>
    */
    virtual ExcelChartType GetPivotChartType ()=0;
    virtual void SetPivotChartType (ExcelChartType value)=0;
    /*
    <summary>
        Gets or sets a value indicating whether [show all field buttons].
    </summary>
    <value>
        <c>true</c> if [show all field buttons]; otherwise, <c>false</c>.
    </value>
    */
    virtual bool GetDisplayEntireFieldButtons ()=0;
    virtual void SetDisplayEntireFieldButtons (bool value)=0;
    /*
    <summary>
        Gets or sets a value indicating whether [show value field buttons].
    </summary>
    <value>
        <c>true</c> if [show value field buttons]; otherwise, <c>false</c>.
    </value>
    */
    virtual bool GetDisplayValueFieldButtons ()=0;
    virtual void SetDisplayValueFieldButtons (bool value)=0;
    /*
    <summary>
        Gets or sets a value indicating whether [show axis field buttons].
    </summary>
    <value>
        <c>true</c> if [show axis field buttons]; otherwise, <c>false</c>.
    </value>
    */
    virtual bool GetDisplayAxisFieldButtons ()=0;
    virtual void SetDisplayAxisFieldButtons (bool value)=0;
    /*
    <summary>
        Gets or sets a value indicating whether [show legend field buttons].
    </summary>
    <value>
        <c>true</c> if [show legend field buttons]; otherwise, <c>false</c>.
    </value>
    */
    virtual bool GetDisplayLegendFieldButtons ()=0;
    virtual void SetDisplayLegendFieldButtons (bool value)=0;
    /*
    <summary>
        Gets or sets a value indicating whether [show report filter field buttons].
    </summary>
    <value>
        <c>true</c> if [show report filter field buttons]; otherwise, <c>false</c>.
    </value>
    */
    virtual bool GetShowReportFilterFieldButtons ()=0;
    virtual void SetShowReportFilterFieldButtons (bool value)=0;
private:
};
}}
