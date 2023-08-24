#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "XlsChartSerieDataFormat.h"
#include "ChartInterior.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS ChartSerieDataFormat : public virtual XlsChartSerieDataFormat
{
    friend class ChartDataLabels;
    friend class ChartDataPoint;
    friend class ChartFormat;
    friend class ChartSerie;
    friend class ChartDataPointsCollection;
public:
    /*
    <summary>
        Returns object, that represents aera properties. Read only.
    </summary>
    */
    intrusive_ptr<IChartInterior> GetAreaProperties ();
    /*
    <summary>
        Returns object, that represents line properties. Read only.
    </summary>
    */
    intrusive_ptr<ChartBorder> GetLineProperties ();
    intrusive_ptr<ChartSerie> GetParentSerie ();
private:
};
}}
