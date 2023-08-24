#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "XlsChartSeriesAxis.h"
#include "ChartGridLine.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS ChartSeriesAxis : public virtual XlsChartSeriesAxis
{
    friend class Chart;
    friend class ChartSheet;
public:
    /*
    <summary>
        Returns font used for axis text displaying. Read-only.
    </summary>
    */
    intrusive_ptr<IFont> GetFont ();
    /*
    <summary>
        Returns major gridLines. Read-only.
    </summary>
    */
    intrusive_ptr<IChartGridLine> GetMajorGridLines ();
    /*
    <summary>
        Returns minor gridLines. Read-only.
    </summary>
    */
    intrusive_ptr<IChartGridLine> GetMinorGridLines ();
    /*
    <summary>
        Returns text area for the axis title. Read-only.
    </summary>
    */
    intrusive_ptr<IChartTextArea> GetTitleArea ();
private:
};
}}
