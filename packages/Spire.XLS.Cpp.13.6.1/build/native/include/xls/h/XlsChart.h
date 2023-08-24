#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "ICloneParent.h"
#include "IChart.h"
#include "XlsWorksheetBase.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS XlsChart : public virtual XlsWorksheetBase,public virtual IChart
{
public:
    /*
    <summary>
        Returns True if chart is a pyramid shape. Read-only.
    </summary>
    */
    bool GetIsChartPyramid ();
    /*
    <summary>
        Returns True if chart is a radar chart. Read-only.
    </summary>
    */
    bool GetIsChartRadar ();
    /*
    <summary>
        Returns True if chart is a scatter chart. Read-only.
    </summary>
    */
    bool GetIsChartScatter ();
    /*
    <summary>
        Returns True if chart has smoothed lines. Read-only.
    </summary>
    */
    bool GetIsChartSmoothedLine ();
    /*
    <summary>
        Returns True if this is a stock chart. Read-only.
    </summary>
    */
    bool GetIsChartStock ();
    /*
    <summary>
        Returns True if chart should have a different color for each series value. Read-only.
    </summary>
    */
    bool GetIsChartVeryColor ();
    /*
    <summary>
        Returns True if chart is a stock chart with volume. Read-only.
    </summary>
    */
    bool GetIsChartVolume ();
    /*
    <summary>
        Returns True if chart has walls. Read-only.
    </summary>
    */
    bool GetIsChartWalls ();
    /*
    <summary>
        Returns True if chart is a clustered chart. Read-only.
    </summary>
    */
    bool GetIsClustered ();
    /*
    <summary>
        Gets value indicating whether chart is embeded into worksheet.
    </summary>
    */
    bool GetIsEmbeded ();
    /*
    <summary>
        Returns True if chart has perspective. Read-only.
    </summary>
    */
    bool GetIsPerspective ();
    /*
    <summary>
        Gets a value indicating whether this instance is pivot 3D chart .
    </summary>
    */
    bool GetIsPivot3DChart ();
    bool GetIsSecondaryAxes ();
    void SetIsSecondaryAxes (bool value);
    bool GetIsSecondaryCategoryAxisAvail ();
    bool GetIsSecondaryValueAxisAvail ();
    bool GetIsSeriesAxisAvail ();
    /*
    <summary>
        Returns True if chart has series lines. Read-only.
    </summary>
    */
    bool GetIsSeriesLines ();
    /*
    <summary>
        Returns True if chart needs special data labels serialization.
            Read-only.
    </summary>
    */
    bool GetIsSpecialDataLabels ();
    /*
    <summary>
        Returns True if chart is stacked. Read-only.
    </summary>
    */
    bool GetIsStacked ();
    /*
    <summary>
        Indicates whehter chart has a value axis. Read-only.
    </summary>
    */
    bool GetIsValueAxisAvail ();
    /*
    <summary>
        Returns True if chart needs data format to be saved. Read-only.
    </summary>
    */
    bool GetNeedDataFormat ();
    /*
    <summary>
        Returns True if chart needs drop bars to be saved. Read-only.
    </summary>
    */
    bool GetNeedDropBar ();
    /*
    <summary>
        Returns True if chart needs marker format to be saved. Read-only.
    </summary>
    */
    bool GetNeedMarkerFormat ();
    /*
    <summary>
        Returns True if chart has no plot area. Read-only.
    </summary>
    */
    bool GetNoPlotArea ();
    /*
    <summary>
        Style index for Excel 2007 chart.
    </summary>
    */
    int GetStyle ();
    void SetStyle (int value);
    /*
    <summary>
        Indicates whether this chart supports walls and floor. Read-only.
    </summary>
    */
    bool GetSupportWallsAndFloor ();
    /*
    <summary>
        Gets or sets zoomToFit value.
    </summary>
    */
    bool GetZoomToFit ();
    void SetZoomToFit (bool value);
    /*
    <summary>
        Title of the secondary category axis.
    </summary>
    */
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
    /*
    <summary>
        Title of the value axis.
    </summary>
    */
    LPCWSTR_S GetValueAxisTitle ();
    void SetValueAxisTitle (LPCWSTR_S value);
    /*
    <summary>
        Indicates whether chart has chart area.
    </summary>
    */
    bool GetHasChartArea ();
    void SetHasChartArea (bool value);
    /*
    <summary>
        Indicates wheather the chart has title
    </summary>
    */
    bool GetHasChartTitle ();
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
    /*
    <summary>
        Indicates whether contains pivot table.
    </summary>
    */
    bool GetHasPivotTable ();
    static bool CheckDataTablePossibility (LPCWSTR_S startType,bool bThrowException);
    bool CheckForSupportGridLine ();
    //intrusive_ptr<XlsChart> Clone (System.Collections.Generic.Dictionary`2[[System.String, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089],[System.String, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089]] hashNewNames,System.Object parent,System.Collections.Generic.Dictionary`2[[System.Int32, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089],[System.Int32, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089]] dicFontIndexes);
    //virtual System.Object Clone (System.Object parent);
    void SetToDefaultGridlines (ExcelChartType type);
    virtual ExcelChartType GetChartType ();
    virtual void SetChartType (ExcelChartType value);
    virtual intrusive_ptr<IXLSRange> GetDataRange ();
    virtual void SetDataRange (intrusive_ptr<IXLSRange> value);
    /*
    <summary>
        True if series are in rows in DataRange;
            False otherwise.
    </summary>
    */
    virtual bool GetSeriesDataFromRange ();
    virtual void SetSeriesDataFromRange (bool value);
    virtual intrusive_ptr<IChartPageSetup> GetPageSetup ();
    virtual double GetXPos ();
    virtual void SetXPos (double value);
    virtual double GetYPos ();
    virtual void SetYPos (double value);
    virtual double GetWidth ();
    virtual void SetWidth (double value);
    virtual double GetHeight ();
    virtual void SetHeight (double value);
    virtual intrusive_ptr<IChartCategoryAxis> GetPrimaryCategoryAxis ();
    virtual intrusive_ptr<IChartValueAxis> GetPrimaryValueAxis ();
    virtual intrusive_ptr<IChartSeriesAxis> GetPrimarySerieAxis ();
    virtual intrusive_ptr<IChartCategoryAxis> GetSecondaryCategoryAxis ();
    virtual intrusive_ptr<IChartValueAxis> GetSecondaryValueAxis ();
    virtual intrusive_ptr<IChartFrameFormat> GetChartArea ();
    virtual intrusive_ptr<IChartFrameFormat> GetPlotArea ();
    virtual intrusive_ptr<IChartWallOrFloor> GetWalls ();
    virtual intrusive_ptr<IChartWallOrFloor> GetFloor ();
    virtual intrusive_ptr<IChartDataTable> GetDataTable ();
    virtual bool GetHasDataTable ();
    virtual void SetHasDataTable (bool value);
    virtual intrusive_ptr<IChartLegend> GetLegend ();
    virtual bool GetHasLegend ();
    virtual void SetHasLegend (bool value);
    virtual int GetRotation ();
    virtual void SetRotation (int value);
    virtual int GetElevation ();
    virtual void SetElevation (int value);
    virtual int GetPerspective ();
    virtual void SetPerspective (int value);
    virtual int GetHeightPercent ();
    virtual void SetHeightPercent (int value);
    virtual int GetDepthPercent ();
    virtual void SetDepthPercent (int value);
    /*
    <summary>
        Gets chart type after type change.
    </summary>
    */
    ExcelChartType GetDestinationType ();
    void SetDestinationType (ExcelChartType value);
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
    /*
    <summary>
        Returns True if chart can have bubble data labels. Read-only.
    </summary>
    */
    bool GetCanChartBubbleLabel ();
    /*
    <summary>
        Returns True if chart can have series lines. Read-only.
    </summary>
    */
    bool GetCanChartHaveSeriesLines ();
    /*
    <summary>
        Returns True if chart can have percentage data labels. Read-only.
    </summary>
    */
    bool GetCanChartPercentageLabel ();
    /*
    <summary>
        Title of the category axis.
    </summary>
    */
    LPCWSTR_S GetCategoryAxisTitle ();
    void SetCategoryAxisTitle (LPCWSTR_S value);
    /*
    <summary>
        Returns start type of chart type. Read-only.
    </summary>
    */
    LPCWSTR_S GetChartStartType ();
    /*
    <summary>
        Title of the chart.
    </summary>
    */
    LPCWSTR_S GetChartTitle ();
    void SetChartTitle (LPCWSTR_S value);
    intrusive_ptr<IFont> GetChartTitleFont ();
    /*
    <summary>
        Returns default line pattern for the chart. Read-only.
    </summary>
    */
    ChartLinePatternType GetDefaultLinePattern ();
    int GetDefaultTextIndex ();
    /*
    <summary>
        Gets font which used for displaying axis text .
    </summary>
    */
    intrusive_ptr<FontWrapper> GetFont ();
    /*
    <summary>
        Indicates whether chart has a category axis. Read-only.
    </summary>
    */
    bool GetIsCategoryAxisAvail ();
    /*
    <summary>
        Returns True if chart is 100%. Read-only.
    </summary>
    */
    bool GetIsChart_100 ();
    /*
    <summary>
        Returns True if chart is 3D. Read-only.
    </summary>
    */
    bool GetIsChart3D ();
    /*
    <summary>
        Returns True if chart is a bar chart. Read-only.
    </summary>
    */
    bool GetIsChartBar ();
    /*
    <summary>
        Returns True if chart is a bubble chart. Read-only.
    </summary>
    */
    bool GetIsChartBubble ();
    /*
    <summary>
        Returns True if chart is a conical shape. Read-only.
    </summary>
    */
    bool GetIsChartCone ();
    /*
    <summary>
        Returns True if chart is a cylinder shape. Read-only.
    </summary>
    */
    bool GetIsChartCylinder ();
    /*
    <summary>
        Returns True if chart is a doughnut chart. Read-only.
    </summary>
    */
    bool GetIsChartDoughnut ();
    /*
    <summary>
        Returns True if chart is exploded. Read-only.
    </summary>
    */
    bool GetIsChartExploded ();
    /*
    <summary>
        Returns True if chart has floor. Read-only.
    </summary>
    */
    bool GetIsChartFloor ();
    /*
    <summary>
        Returns True if chart is line. Read-only.
    </summary>
    */
    bool GetIsChartLine ();
    /*
    <summary>
        Returns True if chart is a pie chart. Read-only.
    </summary>
    */
    bool GetIsChartPie ();
    static std::vector<ExcelChartType> DEF_SUPPORT_SERIES_AXIS ();
    static std::vector<LPCWSTR_S> DEF_SUPPORT_ERROR_BARS ();
    static std::vector<ExcelChartType> DEF_SUPPORT_TREND_LINES ();
private:
};
}}
