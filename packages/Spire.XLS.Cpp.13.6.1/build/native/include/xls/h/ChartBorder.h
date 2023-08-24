#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "XlsChartBorder.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS ChartBorder : public virtual XlsChartBorder
{
    friend class ChartArea;
    friend class ChartFormat;
    friend class ChartGridLine;
    friend class ChartPlotArea;
    friend class ChartSerieDataFormat;
    friend class IChartAxis;
    friend class IChartFillBorder;
    friend class IChartGridLine;
    friend class IChartWallOrFloor;
    friend class XlsChartAxis;
    friend class XlsChartDropBar;
    friend class XlsChartFrameFormat;
    friend class XlsChartGridLine;
    friend class XlsChartSerieDataFormat;
    friend class XlsChartWallOrFloor;
public:
private:
};
}}
