#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "XlsChartDataPointsCollection.h"
#include "ChartDataPoint.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS ChartDataPointsCollection : public virtual XlsChartDataPointsCollection
{
    friend class ChartSerie;
public:
    void Add (intrusive_ptr<ChartDataPoint> point);
    void ClearDataFormats (intrusive_ptr<ChartSerieDataFormat> format);
    /*
    <summary>
        Returns default data point. Read-only.
    </summary>
    */
    intrusive_ptr<IChartDataPoint> GetDefaultDataPoint ();
    /*
    <summary>
        Gets default data format .
    </summary>
    */
    intrusive_ptr<ChartSerieDataFormat> GetDefaultPointFormat ();
    /*
    <summary>
        Gets chart point.
    </summary>
    */
    intrusive_ptr<IChartDataPoint> Get (int index);
private:
};
}}
