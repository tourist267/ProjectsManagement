#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
//#include "ErrorBarIncludeType.h"
//#include "ErrorBarType.h"
//#include "ExcelChartType.h"
#include "IExcelApplication.h"
//#include "IXLSRange.h"
//#include "IChartSerieDataFormat.h"
//#include "IChartDataLabels.h"
//#include "IChartDataPoints.h"
//#include "IChartTrendLines.h"
//#include "IChartErrorBars.h"
//#include "CellRange.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
/*
    <summary>
        Represents a series in the chart.
    </summary>
*/
class EXPORTS IChartSerie : public virtual IExcelApplication
{
public:
    /*
    <summary>
        Values range for the series.
            <example>The following code illustrates how to set values for IChartSerie in charts:
            <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        workbook.LoadFromFile("Sample.xlsx");
        Worksheet worksheet = workbook.Worksheets[0];
        //Create chart
        IChart chart = worksheet.Charts.Add();
        //Set serie
        IChartSerie serie = chart.Series.Add();
        //Set category labels and values
        serie.CategoryLabels = worksheet.Range["A1:C1"];
        serie.Values = worksheet.Range["A2:C2"];
        //Save to file
        workbook.SaveToFile("Chart.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual intrusive_ptr<IXLSRange> GetValues ()=0;
    virtual void SetValues (intrusive_ptr<IXLSRange> value)=0;
    /*
    <summary>
        Category labels for the series.
            <example>The following code illustrates how to set category labels for IChartSerie in charts:
            <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        workbook.LoadFromFile("Sample.xlsx");
        Worksheet worksheet = workbook.Worksheets[0];
        //Create chart
        IChart chart = worksheet.Charts.Add();
        //Set serie
        IChartSerie serie = chart.Series.Add();
        //Set category labels and values
        serie.CategoryLabels = worksheet.Range["A1:C1"];
        serie.Values = worksheet.Range["A2:C2"];
        //Save to file
        workbook.SaveToFile("Chart.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual intrusive_ptr<IXLSRange> GetCategoryLabels ()=0;
    virtual void SetCategoryLabels (intrusive_ptr<IXLSRange> value)=0;
    /*
    <summary>
        Bubble sizes for the series.
            <example>The following code illustrates how to set Bubbles for IChartSerie in charts:
            <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        workbook.LoadFromFile("Sample.xlsx");
        Worksheet worksheet = workbook.Worksheets[0];
        //Create chart
        IChart chart = worksheet.Charts.Add();
        //Set serie
        IChartSerie serie = chart.Series.Add(ExcelChartType.Bubble);
        //Set values and bubble chart range
        serie.Values = worksheet.Range["A1:C1"];;
        serie.Bubbles = worksheet.Range["A2:C2"];
        //Save to file
        workbook.SaveToFile("Chart.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual intrusive_ptr<IXLSRange> GetBubbles ()=0;
    virtual void SetBubbles (intrusive_ptr<IXLSRange> value)=0;
    /*
    <summary>
        Name of the series.
            <example>The following code illustrates how to access the name of the IChartSerie:
            <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        workbook.LoadFromFile("Sample.xlsx");
        Worksheet worksheet = workbook.Worksheets[0];
        //Create chart
        IChart chart = worksheet.Charts.Add();
        //Set serie
        IChartSerie serie = chart.Series.Add("BarSerie");
        //Set category labels and values
        serie.CategoryLabels = worksheet.Range["A1:C1"];
        serie.Values = worksheet.Range["A2:C2"];
        //Get Serie name
        Console.Write(serie.Name);
        //Save to file
        workbook.SaveToFile("Chart.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual LPCWSTR_S GetName ()=0;
    virtual void SetName (LPCWSTR_S value)=0;
    /*
    <summary>
        Series Name range for the series.
    </summary>
    */
    virtual intrusive_ptr<CellRange> GetNamedRange ()=0;
    /*
    <summary>
        Indicates whether to use primary axis for series drawing.
            <example>The following code illustrates how the secondary axis can be used by disabling primary axis:
            <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        workbook.LoadFromFile("Sample.xlsx");
        Worksheet worksheet = workbook.Worksheets[0];
        //Create chart
        IChart chart = worksheet.Charts.Add();
        //Set range
        chart.DataRange = worksheet["A1:C3"];
        //Set secondary axis
        IChartSerie serie = chart.Series[1];
        serie.UsePrimaryAxis = false;
        chart.SecondaryCategoryAxis.Visible = true;
        //Save to file
        workbook.SaveToFile("Chart.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual bool GetUsePrimaryAxis ()=0;
    virtual void SetUsePrimaryAxis (bool value)=0;
    /*
    <summary>
        Returns collection of data points. Read-only.
            <example>The following code illustrates how to access the IChartDataPoints collection from IChartSerie:
            <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        workbook.LoadFromFile("Sample.xlsx");
        Worksheet worksheet = workbook.Worksheets[0];
        //Create chart
        IChart chart = worksheet.Charts.Add();
        //Set range
        chart.DataRange = worksheet["A1:C3"];
        //Set data points
        IChartDataPoints dataPoints = chart.Series[0].DataPoints;
        //Set data labels value visibility
        dataPoints.DefaultDataPoint.DataLabels.HasValue = true;
        //Save to file
        workbook.SaveToFile("Chart.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual intrusive_ptr<IChartDataPoints> GetDataPoints ()=0;
    /*
    <summary>
        Returns format of current serie.
            <example>The following code illustrates how to access the IChartSerieDataFormat from IChartSerie:
            <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        workbook.LoadFromFile("Sample.xlsx");
        Worksheet worksheet = workbook.Worksheets[0];
        //Create chart
        IChart chart = worksheet.Charts.Add();
        //Set range
        chart.DataRange = worksheet["A1:C2"];
        //Set chart type
        chart.ChartType = ExcelChartType.Line;
        //Set serie format
        IChartSerieDataFormat format = chart.Series[0].Format;
        //Set marker style
        format.MarkerStyle = ChartMarkerType.Star;
        //Save to file
        workbook.SaveToFile("Chart.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual intrusive_ptr<IChartSerieDataFormat> GetFormat ()=0;
    /*
    <summary>
        Represents serie type.
            <example>The following code illustrates how to set SerieType for charts:
            <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        workbook.LoadFromFile("Sample.xlsx");
        Worksheet worksheet = workbook.Worksheets[0];
        //Create chart
        IChart chart = worksheet.Charts.Add();
        //Set range
        chart.DataRange = worksheet["A1:C2"];
        //Set chart type
        chart.Series[0].SerieType = ExcelChartType.Line;
        //Save to file
        workbook.SaveToFile("Chart.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual ExcelChartType GetSerieType ()=0;
    virtual void SetSerieType (ExcelChartType value)=0;
    /*
    <summary>
        Represents value as entered directly.
            <example>The following code illustrates how series data can be directly given for charts:
            <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        Worksheet worksheet = workbook.Worksheets[0];
        //Create chart
        IChart chart = worksheet.Charts.Add();
        //Set serie
        IChartSerie serie = chart.Series.Add(ExcelChartType.Pie);
        //Set direct values
        serie.EnteredDirectlyValues = new object[] { 2000, 1000, 1000 };
        //Set direct category label
        serie.EnteredDirectlyCategoryLabels = new object[] { "Total Income", "Expenses", "Profit" };
        //Save to file
        workbook.SaveToFile("Chart.xlsx");
        </code>
        </example>
    </summary>
    */
    //virtual std::vector<System.Object> GetEnteredDirectlyValues ()=0;
    //virtual void SetEnteredDirectlyValues (std::vector<System.Object> value)=0;
    /*
    <summary>
        Represents category values as entered directly.
            <example>The following code illustrates how series category labels can be directly given for charts:
            <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        Worksheet worksheet = workbook.Worksheets[0];
        //Create chart
        IChart chart = worksheet.Charts.Add();
        //Set serie
        IChartSerie serie = chart.Series.Add(ExcelChartType.Pie);
        //Set direct values
        serie.EnteredDirectlyValues = new object[] { 2000, 1000, 1000 };
        //Set direct category label
        serie.EnteredDirectlyCategoryLabels = new object[] { "Total Income", "Expenses", "Profit" };
        //Save to file
        workbook.SaveToFile("Chart.xlsx");
        </code>
        </example>
    </summary>
    */
    //virtual std::vector<System.Object> GetEnteredDirectlyCategoryLabels ()=0;
    //virtual void SetEnteredDirectlyCategoryLabels (std::vector<System.Object> value)=0;
    //virtual std::vector<System.Object> GetEnteredDirectlyBubbles ()=0;
    //virtual void SetEnteredDirectlyBubbles (std::vector<System.Object> value)=0;
    //virtual intrusive_ptr<IChartErrorBars> GetErrorBarsY ()=0;
    /*
    <summary>
        Indicates if serie contains Y error bars.
            <example>The following code illustrates how HasErrorBarsY property can be used:
            <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        workbook.LoadFromFile("Sample.xlsx");
        Worksheet worksheet = workbook.Worksheets[0];
        //Create chart
        IChart chart = worksheet.Charts.Add();
        //Set chart type
        chart.ChartType = ExcelChartType.ScatterLine;
        //Set range
        chart.DataRange = worksheet.Range["A1:C2"];
        //Set error bar
        chart.Series[0].HasErrorBarsY = true;
        //Save to file
        workbook.SaveToFile("Chart.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual bool GetHasErrorBarsY ()=0;
    virtual void SetHasErrorBarsY (bool value)=0;
    //virtual intrusive_ptr<IChartErrorBars> GetErrorBarsX ()=0;
    /*
    <summary>
        Indicates if serie contains X error bars.
            <example>The following code illustrates how HasErrorBarsX property can be used:
            <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        workbook.LoadFromFile("Sample.xlsx");
        Worksheet worksheet = workbook.Worksheets[0];
        //Create chart
        IChart chart = worksheet.Charts.Add();
        //Set chart type
        chart.ChartType = ExcelChartType.ScatterLine;
        //Set range
        chart.DataRange = worksheet.Range["A1:C2"];
        //Set error bar
        chart.Series[0].HasErrorBarsX = true;
        //Save to file
        workbook.SaveToFile("Chart.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual bool GetHasErrorBarsX ()=0;
    virtual void SetHasErrorBarsX (bool value)=0;
    //virtual intrusive_ptr<IChartTrendLines> GetTrendLines ()=0;
    virtual intrusive_ptr<IChartDataLabels> GetDataLabels ()=0;
    //virtual intrusive_ptr<IChartErrorBars> ErrorBar (bool bIsY)=0;
    //virtual intrusive_ptr<IChartErrorBars> ErrorBar (bool bIsY,ErrorBarIncludeType include)=0;
    //virtual intrusive_ptr<IChartErrorBars> ErrorBar (bool bIsY,ErrorBarIncludeType include,ErrorBarType type)=0;
    //virtual intrusive_ptr<IChartErrorBars> ErrorBar (bool bIsY,ErrorBarIncludeType include,ErrorBarType type,double numberValue)=0;
    //virtual intrusive_ptr<IChartErrorBars> ErrorBar (bool bIsY,intrusive_ptr<IXLSRange> plusRange,intrusive_ptr<IXLSRange> minusRange)=0;
private:
};
}}
