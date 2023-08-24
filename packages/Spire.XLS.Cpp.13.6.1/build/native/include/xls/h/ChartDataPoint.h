#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "XlsChartDataPoint.h"
#include "XlsChartSerieDataFormat.h"
#include "ChartDataLabels.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS ChartDataPoint : public virtual XlsChartDataPoint
{
    friend class ChartDataPointsCollection;
public:
    /*
    <summary>
        Gets data format. Read-only.
    </summary>
    */
    intrusive_ptr<IChartSerieDataFormat> GetDataFormat ();
    /*
    <summary>
        Gets data labels object for the data point. Read-only.
    </summary>
    */
    intrusive_ptr<IChartDataLabels> GetDataLabels ();
private:
};
}}
