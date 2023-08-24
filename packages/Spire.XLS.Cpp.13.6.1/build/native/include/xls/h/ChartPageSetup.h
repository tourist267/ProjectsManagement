#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "XlsChartPageSetup.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS ChartPageSetup : public virtual XlsChartPageSetup
{
    friend class Chart;
    friend class ChartSheet;
public:
private:
};
}}
