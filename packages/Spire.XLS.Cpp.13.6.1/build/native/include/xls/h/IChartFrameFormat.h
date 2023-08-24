#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IChartFillBorder.h"
//#include "IChartBorder.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
/*
    <summary>
        Represent the borders and layout options of the chart elements.
    </summary>
*/
class EXPORTS IChartFrameFormat : public virtual IChartFillBorder
{
    friend class ChartTextArea;
    friend class IChart;
    friend class IChartTextArea;
    friend class XlsChart;
    friend class XlsChartAxis;
    friend class XlsChartDataLabelArea;
    friend class XlsChartDataLabels;
    friend class XlsChartLegend;
    friend class XlsChartLegendArea;
    friend class XlsChartSerie;
    friend class XlsChartTitleArea;
    friend class XlsChartShape;
public:
    /*
    <summary>
        Gets or sets flag if border corners is round.
            <example>The following code illustrates use of IsBorderCornersRound property:
            <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        workbook.LoadFromFile("Sample.xlsx");
        Worksheet worksheet = workbook.Worksheets[0];
        //Create chart and set range
        IChart chart = worksheet.Charts.Add();
        chart.DataRange = worksheet.Range["B2:C6"];
        //Set chart type
        chart.ChartType = ExcelChartType.Cone3DClustered;
        //True if the chart area has rounded corners
        IChartFrameFormat chartArea = chart.ChartArea;
        chartArea.IsBorderCornersRound = true;
        //Save to file
        workbook.SaveToFile("Chart.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual bool GetIsBorderCornersRound ()=0;
    virtual void SetIsBorderCornersRound (bool value)=0;
    /*
    <summary>
        Represents chart border. Read only.
            <example>The following code illustrates use of Border property:
            <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        workbook.LoadFromFile("Sample.xlsx");
        Worksheet worksheet = workbook.Worksheets[0];
        //Create chart and set range
        IChart chart = worksheet.Charts.Add();
        chart.DataRange = worksheet.Range["B2:C6"];
        //Set chart type
        chart.ChartType = ExcelChartType.Cone3DClustered;
        //border of the chart element
        chart.ChartTitleArea.Text = "Sample Chart";
        chart.ChartTitleArea.FrameFormat.Border.Color = Color.Red;
        chart.ChartTitleArea.FrameFormat.Border.Pattern = ChartLinePatternType.DashDotDot;
        //Save to file
        workbook.SaveToFile("Chart.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual intrusive_ptr<IChartBorder> GetBorder ()=0;
    /*
    <summary>
        Clear curent plot area.
    </summary>
    */
    virtual void Clear ()=0;
private:
};
}}
