#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "ExcelFont.h"
#include "XlsChartCategoryAxis.h"
#include "XlsChartGridLine.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS ChartCategoryAxis : public virtual XlsChartCategoryAxis
{
    friend class Chart;
    friend class ChartSheet;
public:
    /*
    <summary>
        Category labels for the chart.
    </summary>
    */
    intrusive_ptr<IXLSRange> GetCategoryLabels ();
    void SetCategoryLabels (intrusive_ptr<IXLSRange> value);
    /*
    <summary>
        Gets font used for axis text displaying.
    </summary>
    */
    intrusive_ptr<IFont> GetFont ();
    /*
    <summary>
        Returns text area for the axis title. Read-only.
    </summary>
    */
    intrusive_ptr<IChartTextArea> GetTitleArea ();
    /*
    <summary>
        Returns a ChartGridLine object that represents the major gridlines for the specified axis. Only axes in the primary axis group can have gridlines
    </summary>
    */
    intrusive_ptr<IChartGridLine> GetMajorGridLines ();
    /*
    <summary>
        Returns a ChartGridLine object that represents the minor gridlines for the specified axis. Only axes in the primary axis group can have gridlines.
    </summary>
    */
    intrusive_ptr<IChartGridLine> GetMinorGridLines ();
private:
};
}}
