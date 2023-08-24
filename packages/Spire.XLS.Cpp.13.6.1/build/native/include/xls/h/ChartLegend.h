#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "XlsChartLegend.h"
#include "ChartLegendEntriesColl.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS ChartLegend : public virtual XlsChartLegend
{
    friend class Chart;
    friend class ChartSheet;
public:
    /*
    <summary>
        Return text area of legend.
    </summary>
    */
    intrusive_ptr<IChartTextArea> GetTextArea ();
    /*
    <summary>
        Represents legend entries collection. Read only.
    </summary>
    */
    intrusive_ptr<IChartLegendEntries> GetLegendEntries ();
private:
};
}}
