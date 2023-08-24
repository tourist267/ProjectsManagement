#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "XlsChartDataLabels.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS ChartDataLabels : public virtual XlsChartDataLabels
{
    friend class ChartDataPoint;
    friend class ChartSerie;
public:
    /*
    <summary>
        Gets data format. Read-only.
    </summary>
    */
    intrusive_ptr<ChartSerieDataFormat> GetFormat ();
    /*
    <summary>
        Gets or sets text area.
    </summary>
    */
    intrusive_ptr<ChartTextArea> GetTextArea ();
private:
};
}}
