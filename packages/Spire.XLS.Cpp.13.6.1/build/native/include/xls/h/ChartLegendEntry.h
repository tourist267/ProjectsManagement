#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "XlsChartLegendEntry.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS ChartLegendEntry : public virtual XlsChartLegendEntry
{
public:
    /*
    <summary>
        Returns text area. Read-only.
    </summary>
    */
    intrusive_ptr<IChartTextArea> GetTextArea ();
private:
};
}}
