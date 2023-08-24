#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "XlsChartSerie.h"
#include "XlsChartDataPointsCollection.h"
#include "XlsChartSerieDataFormat.h"
#include "ChartDataLabels.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS ChartSerie : public virtual XlsChartSerie
{
    friend class ChartSerieDataFormat;
    friend class ChartSeries;
public:
    /*
    <summary>
        Returns data points collection for the chart series. Read-only.
    </summary>
    */
    intrusive_ptr<IChartDataPoints> GetDataPoints ();
    /*
    <summary>
        Category labels for the series.
    </summary>
    */
    intrusive_ptr<IXLSRange> GetCategoryLabels ();
    void SetCategoryLabels (intrusive_ptr<IXLSRange> value);
    /*
    <summary>
        Bubble sizes for the series.
    </summary>
    */
    intrusive_ptr<IXLSRange> GetBubbles ();
    void SetBubbles (intrusive_ptr<IXLSRange> value);
    /*
    <summary>
        Values range for the series.
    </summary>
    */
    intrusive_ptr<IXLSRange> GetValues ();
    void SetValues (intrusive_ptr<IXLSRange> value);
    /*
    <summary>
        Returns serie format.
    </summary>
    */
    intrusive_ptr<IChartSerieDataFormat> GetFormat ();
    /*
    <summary>
        Returns data format. Read-only.
    </summary>
    */
    intrusive_ptr<ChartSerieDataFormat> GetDataFormat ();
    intrusive_ptr<CellRange> GetSerieNameRange ();
    intrusive_ptr<IChartDataLabels> GetDataLabels ();
private:
};
}}
