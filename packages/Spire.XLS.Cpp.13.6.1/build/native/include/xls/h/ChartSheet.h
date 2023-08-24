#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "XlsChart.h"
#include "XlsChartFrameFormat.h"
#include "CellRange.h"
#include "XlsChartDataTable.h"
#include "XlsChartWallOrFloor.h"
#include "XlsChartLegend.h"
#include "XlsChartPageSetup.h"
#include "XlsChartCategoryAxis.h"
#include "XlsChartSeriesAxis.h"
#include "XlsChartValueAxis.h"
#include "XlsCommentsCollection.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS ChartSheet : public virtual XlsChart
{
    friend class Workbook;
    friend class ChartsCollection;
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
        Returns an object that represents the complete chart area for the chart.
    </summary>
    */
    intrusive_ptr<IChartFrameFormat> GetChartArea ();
    /*
    <summary>
        DataRange for the chart series.
    </summary>
    */
    intrusive_ptr<IXLSRange> GetDataRange ();
    void SetDataRange (intrusive_ptr<CellRange> value);
    /*
    <summary>
        Returns a DataTable object that represents the chart data table.
    </summary>
    */
    intrusive_ptr<IChartDataTable> GetDataTable ();
    /*
    <summary>
        Returns a Floor object that represents the floor of the 3-D chart
    </summary>
    */
    intrusive_ptr<IChartWallOrFloor> GetFloor ();
    /*
    <summary>
        Represents chart legend.
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
        Returns primary series axis.
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
        Returns secondary value axis.
    </summary>
    */
    intrusive_ptr<IChartValueAxis> GetSecondaryValueAxis ();
    /*
    <summary>
        Workbook which contains the chart.
    </summary>
    */
    //intrusive_ptr<Workbook> GetWorkbook ();
    /*
    <summary>
        Represents chart walls.
    </summary>
    */
    intrusive_ptr<IChartWallOrFloor> GetWalls ();
    /*
    <summary>
        Represents comments collection for the worksheet. Read-only.
    </summary>
    */
    intrusive_ptr<IComments> GetComments ();
    /*
    <summary>
        Convert chart to Svg stream
    </summary>
    <param name="stream">stream.</param>
    */
    void ToSVGStream (intrusive_ptr<Stream> stream);
private:
};
}}
