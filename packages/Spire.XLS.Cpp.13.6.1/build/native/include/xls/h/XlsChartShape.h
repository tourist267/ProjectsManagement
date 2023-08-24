#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IChart.h"
#include "IShape.h"
#include "IChartShape.h"
#include "XlsShape.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS XlsChartShape : public virtual XlsShape,public virtual IChartShape
{
public:
    void SetChartTitle (LPCWSTR_S value);
    /*
    <summary>
        Title of the category axis.
    </summary>
    */
    LPCWSTR_S GetCategoryAxisTitle ();
    void SetCategoryAxisTitle (LPCWSTR_S value);
    /*
    <summary>
        Title of the value axis.
    </summary>
    */
    LPCWSTR_S GetValueAxisTitle ();
    void SetValueAxisTitle (LPCWSTR_S value);
    LPCWSTR_S GetSecondaryCategoryAxisTitle ();
    void SetSecondaryCategoryAxisTitle (LPCWSTR_S value);
    /*
    <summary>
        Title of the secondary value axis.
    </summary>
    */
    LPCWSTR_S GetSecondaryValueAxisTitle ();
    void SetSecondaryValueAxisTitle (LPCWSTR_S value);
    /*
    <summary>
        Title of the series axis.
    </summary>
    */
    LPCWSTR_S GetSeriesAxisTitle ();
    void SetSeriesAxisTitle (LPCWSTR_S value);
    intrusive_ptr<IShapes> GetShapes ();
    intrusive_ptr<ITextBoxes> GetTextBoxes ();
    intrusive_ptr<ICheckBoxes> GetCheckBoxes ();
    intrusive_ptr<IComboBoxes> GetComboBoxes ();
    LPCWSTR_S GetCodeName ();
    /*
    <summary>
        Indicates whether chart is displayed right to left.
    </summary>
    */
    bool GetIsRightToLeft ();
    void SetIsRightToLeft (bool value);
    /*
    <summary>
        Returns chart format collection in primary axis.
    </summary>
    */
    intrusive_ptr<XlsChartFormatCollection> GetPrimaryFormats ();
    /*
    <summary>
        Returns chart format collection in secondary axis.
    </summary>
    */
    intrusive_ptr<XlsChartFormatCollection> GetSecondaryFormats ();
    intrusive_ptr<IShape> AddShapeInChart (ExcelShapeType type,ResizeBehaveType placement,int left,int top,int height,int width);
    void RefreshChart ();
    //virtual intrusive_ptr<IShape> Clone (System.Object parent,System.Collections.Generic.Dictionary`2[[System.String, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089],[System.String, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089]] hashNewNames,System.Collections.Generic.Dictionary`2[[System.Int32, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089],[System.Int32, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089]] dicFontIndexes,bool addToCollections);
    virtual ExcelChartType GetChartType ();
    virtual void SetChartType (ExcelChartType value);
    /*
    <summary>
        DataRange for the chart series.
    </summary>
    */
    virtual intrusive_ptr<IXLSRange> GetDataRange ();
    virtual void SetDataRange (intrusive_ptr<IXLSRange> value);
    virtual bool GetSeriesDataFromRange ();
    virtual void SetSeriesDataFromRange (bool value);
    virtual intrusive_ptr<IChartPageSetup> GetPageSetup ();
    virtual double GetXPos ();
    virtual void SetXPos (double value);
    virtual double GetYPos ();
    virtual void SetYPos (double value);
    virtual intrusive_ptr<IChartCategoryAxis> GetPrimaryCategoryAxis ();
    virtual intrusive_ptr<IChartValueAxis> GetPrimaryValueAxis ();
    virtual intrusive_ptr<IChartSeriesAxis> GetPrimarySerieAxis ();
    virtual intrusive_ptr<IChartCategoryAxis> GetSecondaryCategoryAxis ();
    virtual intrusive_ptr<IChartValueAxis> GetSecondaryValueAxis ();
    virtual intrusive_ptr<IChartFrameFormat> GetChartArea ();
    virtual intrusive_ptr<IChartFrameFormat> GetPlotArea ();
    virtual intrusive_ptr<IChartWallOrFloor> GetWalls ();
    /*
    <summary>
        Indicates whether this chart supports walls and floor. Read-only.
    </summary>
    */
    bool GetSupportWallsAndFloor ();
    virtual intrusive_ptr<IChartWallOrFloor> GetFloor ();
    virtual intrusive_ptr<IChartDataTable> GetDataTable ();
    /*
    <summary>
        Indicates wheather the chart has title
    </summary>
    */
    bool GetHasChartTitle ();
    void SetHasChartTitle (bool value);
    /*
    <summary>
        Indicates whether chart has chart area.
    </summary>
    */
    bool GetHasChartArea ();
    void SetHasChartArea (bool value);
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
    virtual bool GetHasDataTable ();
    virtual void SetHasDataTable (bool value);
    /*
    <summary>
        Gets value indicating whether floor object was created.
    </summary>
    */
    bool GetHasFloor ();
    /*
    <summary>
        Gets value indicating whether floor object was created.
    </summary>
    */
    bool GetHasWalls ();
    virtual intrusive_ptr<IChartLegend> GetLegend ();
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
    virtual bool GetHasLegend ();
    virtual void SetHasLegend (bool value);
    /*
    <summary>
        Indicates whether contains pivot table.
    </summary>
    */
    bool GetHasPivotTable ();
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
    virtual int GetRotation ();
    virtual void SetRotation (int value);
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
    virtual int GetElevation ();
    virtual void SetElevation (int value);
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
    virtual int GetPerspective ();
    virtual void SetPerspective (int value);
    virtual int GetHeightPercent ();
    virtual void SetHeightPercent (int value);
    virtual int GetDepthPercent ();
    virtual void SetDepthPercent (int value);
    virtual int GetGapDepth ();
    virtual void SetGapDepth (int value);
    virtual bool GetRightAngleAxes ();
    virtual void SetRightAngleAxes (bool value);
    virtual bool GetAutoScaling ();
    virtual void SetAutoScaling (bool value);
    virtual bool GetWallsAndGridlines2D ();
    virtual void SetWallsAndGridlines2D (bool value);
    virtual bool GetHasPlotArea ();
    virtual void SetHasPlotArea (bool value);
    virtual ChartPlotEmptyType GetDisplayBlanksAs ();
    virtual void SetDisplayBlanksAs (ChartPlotEmptyType value);
    virtual bool GetPlotVisibleOnly ();
    virtual void SetPlotVisibleOnly (bool value);
    virtual bool GetSizeWithWindow ();
    virtual void SetSizeWithWindow (bool value);
    virtual intrusive_ptr<PivotTable> GetPivotTable ();
    virtual void SetPivotTable (intrusive_ptr<PivotTable> value);
    virtual ExcelChartType GetPivotChartType ();
    virtual void SetPivotChartType (ExcelChartType value);
    virtual bool GetDisplayEntireFieldButtons ();
    virtual void SetDisplayEntireFieldButtons (bool value);
    virtual bool GetDisplayValueFieldButtons ();
    virtual void SetDisplayValueFieldButtons (bool value);
    virtual bool GetDisplayAxisFieldButtons ();
    virtual void SetDisplayAxisFieldButtons (bool value);
    virtual bool GetDisplayLegendFieldButtons ();
    virtual void SetDisplayLegendFieldButtons (bool value);
    virtual bool GetShowReportFilterFieldButtons ();
    virtual void SetShowReportFilterFieldButtons (bool value);
    virtual int GetTopRow ();
    virtual void SetTopRow (int value);
    virtual int GetBottomRow ();
    virtual void SetBottomRow (int value);
    virtual int GetLeftColumn ();
    virtual void SetLeftColumn (int value);
    virtual int GetRightColumn ();
    virtual void SetRightColumn (int value);
    intrusive_ptr<IChartTextArea> GetChartTitleArea ();
    /*
    <summary>
        Gets the chart's sub-title. Only for ODS format file. 
    </summary>
    */
    LPCWSTR_S GetChartSubTitle ();
    /*
    <summary>
        Represents the title of the specified chart.
    </summary>
    */
    LPCWSTR_S GetChartTitle ();
private:
};
}}
