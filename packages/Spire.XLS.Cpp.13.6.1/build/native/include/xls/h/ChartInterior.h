#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "XlsChartInterior.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS ChartInterior : public virtual XlsChartInterior
{
    friend class ChartArea;
    friend class ChartPlotArea;
    friend class ChartSerieDataFormat;
public:
private:
};
}}
