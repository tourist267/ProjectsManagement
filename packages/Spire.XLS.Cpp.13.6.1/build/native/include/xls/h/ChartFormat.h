#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "XlsChartFormat.h"
#include "ChartBorder.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS ChartFormat : public virtual XlsChartFormat
{
    friend class ChartFormatCollection;
public:
    /*
    <summary>
        Returns dataformat or null; Read-only.
    </summary>
    */
    intrusive_ptr<ChartSerieDataFormat> GetDataFormatOrNull ();
    /*
    <summary>
        Gets first drop bar.
    </summary>
    */
    intrusive_ptr<IChartDropBar> GetFirstDropBar ();
    /*
    <summary>
        Represents series line properties. ( For pie of pie or pie of bar chart types only. ) Read only.
    </summary>
    */
    intrusive_ptr<IChartBorder> GetPieSeriesLine ();
    /*
    <summary>
        Returns object that represents second drop bar.
    </summary>
    */
    intrusive_ptr<IChartDropBar> GetSecondDropBar ();
private:
};
}}
