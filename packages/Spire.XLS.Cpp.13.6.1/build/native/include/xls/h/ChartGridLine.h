#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "XlsChartGridLine.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS ChartGridLine : public virtual XlsChartGridLine
{
    friend class ChartCategoryAxis;
    friend class ChartSeriesAxis;
    friend class ChartValueAxis;
public:
    /*
    <summary>
        Gets line border. Read only.
    </summary>
    */
    intrusive_ptr<ChartBorder> GetBorder ();
private:
};
}}
