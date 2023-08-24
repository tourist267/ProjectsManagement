#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "XlsChartPlotArea.h"
#include "ChartBorder.h"
#include "ChartInterior.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS ChartPlotArea : public virtual XlsChartPlotArea
{
    friend class Chart;
    friend class ChartSheet;
public:
    intrusive_ptr<IChartBorder> GetBorder ();
    /*
    <summary>
        Represents frame interior. Read only
    </summary>
    */
    intrusive_ptr<IChartInterior> GetInterior ();
    intrusive_ptr<Workbook> GetWorkbook ();
private:
};
}}
