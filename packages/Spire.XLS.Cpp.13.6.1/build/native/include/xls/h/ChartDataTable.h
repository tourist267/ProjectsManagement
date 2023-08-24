#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "XlsChartDataTable.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS ChartDataTable : public virtual XlsChartDataTable
{
    friend class Chart;
    friend class ChartSheet;
public:
private:
};
}}
