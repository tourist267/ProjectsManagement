#pragma once
#include "pch.h"

//#pragma warning(push)
//#pragma warning(disable:4250)
#include "IChartAxis.h"
//#pragma warning(pop)

namespace Spire{
namespace Xls{
/*
    <summary>
        Represents the chart series Axis.
    </summary>
*/
class EXPORTS IChartSeriesAxis : public virtual IChartAxis
{
    friend class IChart;
    friend class XlsChart;
    friend class XlsChartShape;
public:
    /*
    <summary>
        Frequency of labels.
            <example>The following code illustrates how to set LabelsFrequency for IChartSeriesAxis:
            <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        workbook.LoadFromFile("Sample.xlsx");
        Worksheet worksheet = workbook.Worksheets[0];
        //Create chart
        IChart chart = worksheet.Charts.Add();
        //Set range
        chart.DataRange = worksheet.Range["A1:C3"];
        //Set chart type
        chart.ChartType = ExcelChartType.Column3D;
        //Set LabelsFrequency
        chart.PrimarySerieAxis.LabelsFrequency = 2;
        //Save to file
        workbook.SaveToFile("Chart.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual int GetLabelsFrequency ()=0;
    virtual void SetLabelsFrequency (int value)=0;
    /*
    <summary>
        Represents the number of categories or series between tick-mark labels.
            <example>The following code illustrates how to set TickLabelSpacing for IChartSeriesAxis:
            <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        workbook.LoadFromFile("Sample.xlsx");
        Worksheet worksheet = workbook.Worksheets[0];
        //Create chart
        IChart chart = worksheet.Charts.Add();
        //Set range
        chart.DataRange = worksheet.Range["A1:C3"];
        //Set chart type
        chart.ChartType = ExcelChartType.Column3D;
        //Set tick label spacing
        chart.PrimarySerieAxis.TickLabelSpacing = 2;
        //Save to file
        workbook.SaveToFile("Chart.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual int GetTickLabelSpacing ()=0;
    virtual void SetTickLabelSpacing (int value)=0;
    /*
    <summary>
        Frequency of tick marks.
            <example>The following code illustrates how to set TickMarksFrequency for IChartSeriesAxis:
            <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        workbook.LoadFromFile("Sample.xlsx");
        Worksheet worksheet = workbook.Worksheets[0];
        //Create chart
        IChart chart = worksheet.Charts.Add();
        //Set range
        chart.DataRange = worksheet.Range["A1:C3"];
        //Set chart type
        chart.ChartType = ExcelChartType.Column3D;
        //Set tick mark frequency
        chart.PrimarySerieAxis.TickMarksFrequency = 2;
        //Save to file
        workbook.SaveToFile("Chart.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual int GetTickMarksFrequency ()=0;
    virtual void SetTickMarksFrequency (int value)=0;
private:
};
}}
