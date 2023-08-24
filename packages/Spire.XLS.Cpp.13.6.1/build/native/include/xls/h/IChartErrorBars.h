#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Xls{
/*
    <summary>
        Represent error bars on the chart series.
            Error bars indicate the degree of uncertainty for chart data. Only series in area, bar, column, line, 
            and scatter groups on a 2-D chart can have error bars. 
            Only series in scatter groups can have x and y error bars.
    </summary>
*/
class EXPORTS IChartErrorBars : public virtual Object
{
public:
    /*
    <summary>
        Represents border object. Read only.
            <example>The following code illustrates how to access and format the IChartBorder for IChartErrorBars:
            <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        workbook.LoadFromFile("Sample.xlsx");
        Worksheet worksheet = workbook.Worksheets[0];
        //Create chart and set range
        IChart chart = worksheet.Charts.Add();
        chart.DataRange = worksheet.Range["A1:C3"];
        //Set chart type
        chart.ChartType = ExcelChartType.ColumnClustered;
        //Get chart serie
        IChartSerie serie = chart.Series[0];
        //Enabling the Y Error bars
        serie.ErrorBar(true,ErrorBarIncludeType.Both,ErrorBarType.Percentage,10);
        IChartErrorBars errorBars = serie.ErrorBarsY;
        //Set Error bars border color
        errorBars.Border.Color = Color.Red;
        //Save to file
        workbook.SaveToFile("Chart.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual intrusive_ptr<IChartBorder> GetBorder ();
    /*
    <summary>
        Reprsents error bar include type.
            <example>The following code illustrates how to set include type for IChartErrorBars:
            <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        workbook.LoadFromFile("Sample.xlsx");
        Worksheet worksheet = workbook.Worksheets[0];
        //Create chart and set range
        IChart chart = worksheet.Charts.Add();
        chart.DataRange = worksheet.Range["A1:C3"];
        //Set chart type
        chart.ChartType = ExcelChartType.ColumnClustered;
        //Get chart serie
        IChartSerie serie = chart.Series[0];
        //Enabling the Y Error bars
        serie.ErrorBar(true,ErrorBarIncludeType.Both,ErrorBarType.Percentage,10);
        IChartErrorBars errorBars = serie.ErrorBarsY;
        //Set negative error only to include
        errorBars.Include = ErrorBarIncludeType.Minus;
        //Save to file
        workbook.SaveToFile("Chart.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual ErrorBarIncludeType GetInclude ();
    /*

    */
    virtual void SetInclude (ErrorBarIncludeType value);
    /*
    <summary>
        Indicates if error bar has cap.
            <example>The following code illustrates how to remove end style for IChartErrorBars:
            <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        workbook.LoadFromFile("Sample.xlsx");
        Worksheet worksheet = workbook.Worksheets[0];
        //Create chart and set range
        IChart chart = worksheet.Charts.Add();
        chart.DataRange = worksheet.Range["A1:C3"];
        //Set chart type
        chart.ChartType = ExcelChartType.ColumnClustered;
        //Get chart serie
        IChartSerie serie = chart.Series[0];
        //Enabling the Y Error bars
        serie.ErrorBar(true,ErrorBarIncludeType.Both,ErrorBarType.Percentage,10);
        IChartErrorBars errorBars = serie.ErrorBarsY;
        //Set false to remove the end style
        errorBars.HasCap = false;
        //Save to file
        workbook.SaveToFile("Chart.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual bool GetHasCap ();
    /*

    */
    virtual void SetHasCap (bool value);
    /*
    <summary>
        Represents excel error bar type.
            <example>The following code illustrates how to set the error bar type for IChartErrorBars:
            <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        workbook.LoadFromFile("Sample.xlsx");
        Worksheet worksheet = workbook.Worksheets[0];
        //Create chart and set range
        IChart chart = worksheet.Charts.Add();
        chart.DataRange = worksheet.Range["A1:C3"];
        //Set chart type
        chart.ChartType = ExcelChartType.ColumnClustered;
        //Get chart serie
        IChartSerie serie = chart.Series[0];
        //Enabling the Y Error bars
        serie.ErrorBar(true,ErrorBarIncludeType.Both,ErrorBarType.Percentage,10);
        IChartErrorBars errorBars = serie.ErrorBarsY;
        //Set error amount to standard deviation
        errorBars.Type = ErrorBarType.StandardDeviation;
        //Save to file
        workbook.SaveToFile("Chart.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual ErrorBarType GetType ();
    /*

    */
    virtual void SetType (ErrorBarType value);
    /*
    <summary>
        Represents number value.
            <example>The following code illustrates how to set the error value for IChartErrorBars:
            <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        workbook.LoadFromFile("Sample.xlsx");
        Worksheet worksheet = workbook.Worksheets[0];
        //Create chart and set range
        IChart chart = worksheet.Charts.Add();
        chart.DataRange = worksheet.Range["A1:C3"];
        //Set chart type
        chart.ChartType = ExcelChartType.ColumnClustered;
        //Get chart serie
        IChartSerie serie = chart.Series[0];
        //Enabling the Y Error bars
        serie.ErrorBar(true,ErrorBarIncludeType.Both,ErrorBarType.Percentage,10);
        IChartErrorBars errorBars = serie.ErrorBarsY;
        //Set error value
        errorBars.NumberValue = 3.0;
        //Save to file
        workbook.SaveToFile("Chart.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual double GetNumberValue ();
    /*

    */
    virtual void SetNumberValue (double value);
    /*
    <summary>
        Represents custom plus value.
            <example>The following code illustrates how to set the plus range for IChartErrorBars:
            <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        workbook.LoadFromFile("Sample.xlsx");
        Worksheet worksheet = workbook.Worksheets[0];
        //Create chart and set range
        IChart chart = worksheet.Charts.Add();
        chart.DataRange = worksheet.Range["A1:C3"];
        //Set chart type
        chart.ChartType = ExcelChartType.ColumnClustered;
        //Get chart serie
        IChartSerie serie = chart.Series[0];
        //Enabling the Y Error bars
        serie.ErrorBar(true,ErrorBarIncludeType.Both,ErrorBarType.Percentage,10);
        IChartErrorBars errorBars = serie.ErrorBarsY;
        //Set plus range
        errorBars.PlusRange = worksheet["D2"];
        //Save to file
        workbook.SaveToFile("Chart.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual intrusive_ptr<IXLSRange> GetPlusRange ();
    /*

    */
    virtual void SetPlusRange (intrusive_ptr<IXLSRange> value);
    /*
    <summary>
        Represents custom minus value.
            <example>The following code illustrates how to set the minus range for IChartErrorBars:
            <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        workbook.LoadFromFile("Sample.xlsx");
        Worksheet worksheet = workbook.Worksheets[0];
        //Create chart and set range
        IChart chart = worksheet.Charts.Add();
        chart.DataRange = worksheet.Range["A1:C3"];
        //Set chart type
        chart.ChartType = ExcelChartType.ColumnClustered;
        //Get chart serie
        IChartSerie serie = chart.Series[0];
        //Enabling the Y Error bars
        serie.ErrorBar(true,ErrorBarIncludeType.Both,ErrorBarType.Percentage,10);
        IChartErrorBars errorBars = serie.ErrorBarsY;
        //Set minus range
        errorBars.MinusRange = worksheet["D2"];
        //Save to file
        workbook.SaveToFile("Chart.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual intrusive_ptr<IXLSRange> GetMinusRange ();
    /*

    */
    virtual void SetMinusRange (intrusive_ptr<IXLSRange> value);
    /*
    <summary>
        Gets the shadow.
            <example>The following code illustrates how to access and format the IShadow for IChartErrorBars:
            <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        workbook.LoadFromFile("Sample.xlsx");
        Worksheet worksheet = workbook.Worksheets[0];
        //Create chart and set range
        IChart chart = worksheet.Charts.Add();
        chart.DataRange = worksheet.Range["A1:C3"];
        //Set chart type
        chart.ChartType = ExcelChartType.ColumnClustered;
        //Get chart serie
        IChartSerie serie = chart.Series[0];
        //Enabling the Y Error bars
        serie.ErrorBar(true,ErrorBarIncludeType.Both,ErrorBarType.Percentage,10);
        IChartErrorBars errorBars = serie.ErrorBarsY;
        //Set Error bars shadow color
        errorBars.Shadow.Color = Color.Red;
        //Set Error bars shadow outer presets
        errorBars.Shadow.ShadowOuterType = XLSXChartShadowOuterType.OffsetDiagonalTopRight;
        //Save to file
        workbook.SaveToFile("Chart.xlsx");
        </code>
        </example>
    </summary>
<value>The shadow.</value>
    */
    virtual intrusive_ptr<IShadow> GetShadow ();
    /*
    <summary>
        Gets the chart3 D options.
    </summary>
<value>The chart3 D options.</value>
    */
    virtual intrusive_ptr<IFormat3D> GetChart3DOptions ();
    /*
    <summary>
        Clears current error bar.
    </summary>
    */
    virtual void ClearFormats ();
    /*
    <summary>
        Delete current error bar.
    </summary>
    */
    virtual void Delete ();
private:
};
}}
