#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IExcelApplication.h"
#pragma warning(pop)

namespace Spire{namespace Xls{
/*
    <summary>
        Represents data point in the chart.
    </summary>
*/
class EXPORTS IChartDataPoint : public virtual IExcelApplication
{
    friend class IChartDataPoints;
    friend class XlsChartDataPointsCollection;
public:
    /*
    <summary>
        Returns data labels object for the data point. Read-only.
            <example>The following code illustrates how to access the IChartDataLabels for a 
            particular IChartDataPoint:
            <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        workbook.LoadFromFile("Sample.xlsx");
        Worksheet worksheet = workbook.Worksheets[0];
        //Create chart and set range
        Chart chart = worksheet.Charts.Add();
        chart.DataRange = worksheet.Range["A1:C2"];
        //Get the chart serie
        IChartSerie serie = chart.Series[0];
        //Set data labels value visibility
        serie.DataPoints.DefaultDataPoint.DataLabels.HasValue = true;
        //Save to file
        workbook.SaveToFile("Chart.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual intrusive_ptr<IChartDataLabels> GetDataLabels ()=0;
    /*
    <summary>
        Gets index of the point in the points collection.
            <example>The following code illustrates how to access the Index of a IChartDataPoint in 
            the IChartDataPoints collection:
            <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        workbook.LoadFromFile("Sample.xlsx");
        Worksheet worksheet = workbook.Worksheets[0];
        //Create chart and set range
        Chart chart = worksheet.Charts.Add();
        chart.DataRange = worksheet.Range["A1:C2"];
        //Set serie
        IChartSerie serie = chart.Series[0];
        //Get index
        Console.WriteLine(serie.DataPoints[0].Index);
        </code>
        </example>
    </summary>
    */
    virtual int GetIndex ()=0;
    /*
    <summary>
        Gets / sets data format.
            <example>The following code illustrates how to access DataFormat and set ChartMarkerType.star 
            to IChartSerieDataFormat.MarkerStyle:
            <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        workbook.LoadFromFile("Sample.xlsx");
        Worksheet worksheet = workbook.Worksheets[0];
        //Create chart and set range
        Chart chart = worksheet.Charts.Add();
        chart.DataRange = worksheet.Range["A1:C2"];
        //Set chart type
        chart.ChartType = ExcelChartType.Line;
        //Set serie format
        IChartSerieDataFormat format = chart.Series[0].DataFormat;
        //Set marker style
        format.MarkerStyle = ChartMarkerType.Star;
        //Save to file
        workbook.SaveToFile("Chart.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual intrusive_ptr<IChartSerieDataFormat> GetDataFormat ()=0;
    /*
    <summary>
        Indicates whether this data point is default data point. Read-only.
            <example>The following code illustrates how to access the IChartDataLabels for a 
            particular IChartDataPoint:
            <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        workbook.LoadFromFile("Sample.xlsx");
        Worksheet worksheet = workbook.Worksheets[0];
        //Create chart and set range
        Chart chart = worksheet.Charts.Add();
        chart.DataRange = worksheet.Range["A1:C2"];
        //Set serie format
        IChartDataPoints dataPoints = chart.Series[0].DataPoints;
        //Check default Datapoint
        Console.WriteLine(dataPoints.DefaultDataPoint.IsDefault);
        Console.WriteLine(dataPoints[0].IsDefault);
        </code>
        </example>
    </summary>
    */
    virtual bool GetIsDefault ()=0;
private:
};
}}
