#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "XlsChartFrameFormat.h"
#include "ChartBorder.h"
#include "XlsChartInterior.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS ChartArea : public virtual XlsChartFrameFormat
{
    friend class Chart;
    friend class ChartSheet;
public:
    /*
    <summary>
        Represents chart border. Read only.
    </summary>
    */
    intrusive_ptr<IChartBorder> GetBorder ();
    /*
    <summary>
        Represents chart interior. Read only.
            <example>The following code illustrates the use of Interior property:
            <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        workbook.LoadFromFile("Sample.xlsx");
        Worksheet worksheet = workbook.Worksheets[0];
        //Create chart and set range
        IChart chart = worksheet.Charts.Add();
        chart.DataRange = worksheet.Range["B2:C6"];
        //Set chart type
        chart.ChartType = ExcelChartType.Column3DClustered;
        //Gets interior formatting properties for the chart element
        IChartInterior chartInterior = chart.ChartArea.Interior;
        chartInterior.BackgroundColor = Color.Beige;
        chartInterior.Pattern = ExcelPatternType.DarkDownwardDiagonal;
        //Save to file
        workbook.SaveToFile("Chart.xlsx");
        </code>
        </example>
    </summary>
    */
    intrusive_ptr<IChartInterior> GetInterior ();
private:
};
}}
