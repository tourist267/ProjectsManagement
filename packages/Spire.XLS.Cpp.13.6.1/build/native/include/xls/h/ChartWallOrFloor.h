#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "XlsChartWallOrFloor.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS ChartWallOrFloor : public virtual XlsChartWallOrFloor
{
    friend class Chart;
    friend class ChartSheet;
public:
private:
};
}}
