#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Xls{
/*
    <summary>
        Represents ChartTrendLine interface.
    </summary>
*/
class EXPORTS IChartTrendLine : public virtual Object
{
public:
    /*
    <summary>
        Gets the IThreeDFormat object. Read-only.[Deprecated]
    </summary>
    */
    virtual intrusive_ptr<IFormat3D> GetChart3DOptions ();
    /*
    <summary>
        Gets the shadow.Read-only.
            <example>The following code illustrates how to access and format the IShadow for IChartTrendLine:
            <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        workbook.LoadFromFile("Sample.xlsx");
        Worksheet worksheet = workbook.Worksheets[0];
        //Create chart
        Chart chart = worksheet.Charts.Add(ExcelChartType.ScatterMarkers);
        //Add serie and set serie Y and X Values
        IChartSerie serie = chart.Series.Add();
        serie.Values = worksheet.Range["A2:C2"];
        serie.CategoryLabels = worksheet.Range["A1:C1"];
        //Get chart trendlines collection and Add trendline
        IChartTrendLines trendLines = serie.TrendLines;
        IChartTrendLine trendline = trendLines.Add();
        //Set trendline shadow color
        trendline.Shadow.Color = Color.Red;
        //Set trendline shadow outer presets
        trendline.Shadow.ShadowOuterType = XLSXChartShadowOuterType.OffsetDiagonalTopRight;
        //Save to file
        workbook.SaveToFile("Chart.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual intrusive_ptr<IShadow> GetShadow ();
    /*
    <summary>
        Represents border object. Read only.
            <example>The following code illustrates how to access and format the IChartBorder for IChartTrendLine:
            <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        workbook.LoadFromFile("Sample.xlsx");
        Worksheet worksheet = workbook.Worksheets[0];
        //Create chart
        IChart chart = worksheet.Charts.Add();
        //Add serie and set serie Y and X Values
        IChartSerie serie = chart.Series.Add();
        serie.Values = worksheet.Range["A2:C2"];
        serie.CategoryLabels = worksheet.Range["A1:C1"];
        //Get chart trendlines collection
        IChartTrendLines trendLines = serie.TrendLines;
        //Add trendline
        IChartTrendLine trendline = trendLines.Add();
        //Set trendline broder properties
        trendline.Border.Color = Color.Red;
        //Save to file
        workbook.SaveToFile("Chart.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual intrusive_ptr<IChartBorder> GetBorder ();
    /*
    <summary>
        Represents number of periods that the trendline extends backward.
            <example>The following code illustrates how to set backward forecast value for IChartTrendLine object:
            <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        workbook.LoadFromFile("Sample.xlsx");
        Worksheet worksheet = workbook.Worksheets[0];
        //Create chart
        Chart chart = worksheet.Charts.Add(ExcelChartType.ScatterMarkers);
        //Add serie and set serie Y and X Values
        IChartSerie serie = chart.Series.Add();
        serie.Values = worksheet.Range["A2:C2"];
        serie.CategoryLabels = worksheet.Range["A1:C1"];
        //Set X axis minimum and maximum values
        chart.PrimaryCategoryAxis.MinValue = -2;
        chart.PrimaryCategoryAxis.MaxValue = 2;
        //Get chart trendlines collection and Add trendline
        IChartTrendLines trendLines = serie.TrendLines;
        IChartTrendLine trendline = trendLines.Add();
        //Set backward forecast value
        trendline.Backward = 3;
        //Save to file
        workbook.SaveToFile("Chart.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual double GetBackward ();
    /*

    */
    virtual void SetBackward (double value);
    /*
    <summary>
        Represents number of periods that the trendline extends forward.
            <example>The following code illustrates how to set Forward forecast value for IChartTrendLine object:
            <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        workbook.LoadFromFile("Sample.xlsx");
        Worksheet worksheet = workbook.Worksheets[0];
        //Create chart
        Chart chart = worksheet.Charts.Add(ExcelChartType.ScatterMarkers);
        //Add serie and set serie Y and X Values
        IChartSerie serie = chart.Series.Add();
        serie.Values = worksheet.Range["A2:C2"];
        serie.CategoryLabels = worksheet.Range["A1:C1"];
        //Set X axis minimum and maximum values
        chart.PrimaryCategoryAxis.MinValue = -2;
        chart.PrimaryCategoryAxis.MaxValue = 2;
        //Get chart trendlines collection and Add trendline
        IChartTrendLines trendLines = serie.TrendLines;
        IChartTrendLine trendline = trendLines.Add();
        //Set backward forecast value
        trendline.Forward = 3;
        //Save to file
        workbook.SaveToFile("Chart.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual double GetForward ();
    /*

    */
    virtual void SetForward (double value);
    /*
    <summary>
        True if the equation for the trendline is displayed on the chart.
            <example>The following code illustrates how to display equation for IChartTrendLine object:
            <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        workbook.LoadFromFile("Sample.xlsx");
        Worksheet worksheet = workbook.Worksheets[0];
        //Create chart and Get chart serie
        Chart chart = worksheet.Charts.Add(ExcelChartType.ColumnClustered);
        chart.DataRange = worksheet.Range["A1:C3"];
        IChartSerie serie = chart.Series[0];
        //Get chart trendlines collection and Add trendline
        IChartTrendLines trendLines = serie.TrendLines;
        IChartTrendLine trendline = trendLines.Add();
        //Set equation in trendline
        trendline.DisplayEquation = true;
        //Save to file
        workbook.SaveToFile("Chart.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual bool GetDisplayEquation ();
    /*

    */
    virtual void SetDisplayEquation (bool value);
    /*
    <summary>
        True if the R-squared value of the trendline is displayed on the chart.
            <example>The following code illustrates how to display RSquared for IChartTrendLine object:
            <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        workbook.LoadFromFile("Sample.xlsx");
        Worksheet worksheet = workbook.Worksheets[0];
        //Create chart and Get chart serie
        Chart chart = worksheet.Charts.Add(ExcelChartType.ColumnClustered);
        chart.DataRange = worksheet.Range["A1:C3"];
        IChartSerie serie = chart.Series[0];
        //Get chart trendlines collection and Add trendline
        IChartTrendLines trendLines = serie.TrendLines;
        IChartTrendLine trendline = trendLines.Add();
        //Set RSquared value for trendline
        trendline.DisplayRSquared = true;
        //Save to file
        workbook.SaveToFile("Chart.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual bool GetDisplayRSquared ();
    /*

    */
    virtual void SetDisplayRSquared (bool value);
    /*
    <summary>
        Represents point where the trendline crosses the value axis.
            <example>The following code illustrates how to set intercept value for IChartTrendLine object:
            <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        workbook.LoadFromFile("Sample.xlsx");
        Worksheet worksheet = workbook.Worksheets[0];
        //Create chart
        Chart chart = worksheet.Charts.Add(ExcelChartType.ScatterMarkers);
        //Add serie and set serie Y and X Values
        IChartSerie serie = chart.Series.Add();
        serie.Values = worksheet.Range["A2:C2"];
        serie.CategoryLabels = worksheet.Range["A1:C1"];
        //Get chart trendlines collection and Add trendline
        IChartTrendLines trendLines = serie.TrendLines;
        IChartTrendLine trendline = trendLines.Add();
        //Set intercept value
        trendline.Intercept = 10;
        //Save to file
        workbook.SaveToFile("Chart.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual double GetIntercept ();
    /*

    */
    virtual void SetIntercept (double value);
    /*
    <summary>
        True if the point where the trendline crosses the value
             axis is automatically determined by the regression.
            <example>The following code illustrates how to check whether the IChartTrendLine object 
            intercept value is automatic or not:
            <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        workbook.LoadFromFile("Sample.xlsx");
        Worksheet worksheet = workbook.Worksheets[0];
        //Create chart
        Chart chart = worksheet.Charts.Add(ExcelChartType.ScatterMarkers);
        //Add serie and set serie Y and X Values
        IChartSerie serie = chart.Series.Add();
        serie.Values = worksheet.Range["A2:C2"];
        serie.CategoryLabels = worksheet.Range["A1:C1"];
        //Get chart trendlines collection and Add trendline
        IChartTrendLines trendLines = serie.TrendLines;
        IChartTrendLine trendline = trendLines.Add();
        //Set intercept value
        trendline.Intercept = 10;
        //Check trendline intercept is automatic
        Console.WriteLine("Is Trendline Intercept value is automatic:" + trendline.InterceptIsAuto.ToString());
        //Save to file
        workbook.SaveToFile("Chart.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual bool GetInterceptIsAuto ();
    /*
    <summary>
        Represents trend line type.
            <example>The following code illustrates how to set TrendLineType for IChartTrendLine object:
            <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        workbook.LoadFromFile("Sample.xlsx");
        Worksheet worksheet = workbook.Worksheets[0];
        //Create chart and Get chart serie
        Chart chart = worksheet.Charts.Add(ExcelChartType.ColumnClustered);
        chart.DataRange = worksheet.Range["A1:C3"];
        IChartSerie serie = chart.Series[0];
        //Get chart trendlines collection and Add trendline
        IChartTrendLines trendLines = serie.TrendLines;
        IChartTrendLine trendline = trendLines.Add();
        //Set trendline type
        trendline.Type = TrendLineType.Polynomial;
        //Save to file
        workbook.SaveToFile("Chart.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual TrendLineType GetType ();
    /*

    */
    virtual void SetType (TrendLineType value);
    /*
    <summary>
        Represents for Moving Averange and Polynomial trend line type order value.
            <example>The following code illustrates how to set order value for IChartTrendLine object:
            <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        workbook.LoadFromFile("Sample.xlsx");
        Worksheet worksheet = workbook.Worksheets[0];
        //Create chart
        Chart chart = worksheet.Charts.Add(ExcelChartType.ColumnClustered);
        //Add serie and set serie Y and X Values
        IChartSerie serie = chart.Series.Add();
        serie.Values = worksheet.Range["A2:C2"];
        serie.CategoryLabels = worksheet.Range["A1:C1"];
        //Get chart trendlines collection and Add trendline
        IChartTrendLines trendLines = serie.TrendLines;
        IChartTrendLine trendline = trendLines.Add();
        //Set trendline type
        trendline.Type = TrendLineType.Polynomial;
        //Set trendline order
        trendline.Order = 6;
        //Save to file
        workbook.SaveToFile("Chart.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual int GetOrder ();
    /*

    */
    virtual void SetOrder (int value);
    /*
    <summary>
        Indicates if name is default.
            <example>The following code illustrates how to check whether the IChartTrendLine object name is default or not:
            <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        workbook.LoadFromFile("Sample.xlsx");
        Worksheet worksheet = workbook.Worksheets[0];
        //Create chart and Get chart serie
        Chart chart = worksheet.Charts.Add(ExcelChartType.ColumnClustered);
        chart.DataRange = worksheet.Range["A1:C3"];
        IChartSerie serie = chart.Series[0];
        //Get chart trendlines collection and Add trendline
        IChartTrendLines trendLines = serie.TrendLines;
        IChartTrendLine trendline = trendLines.Add(TrendLineType.Logarithmic);
        //Set trendline name
        trendline.Name = "Trendline 1";
        //Check trendline name is automatic
        Console.WriteLine(trendline.NameIsAuto);
        //Save to file
        workbook.SaveToFile("Chart.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual bool GetNameIsAuto ();
    /*

    */
    virtual void SetNameIsAuto (bool value);
    /*
    <summary>
        Represents trendline name.
            <example>The following code illustrates how to access name from IChartTrendLine object:
            <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        workbook.LoadFromFile("Sample.xlsx");
        Worksheet worksheet = workbook.Worksheets[0];
        //Create chart and Get chart serie
        Chart chart = worksheet.Charts.Add(ExcelChartType.ColumnClustered);
        chart.DataRange = worksheet.Range["A1:C3"];
        IChartSerie serie = chart.Series[0];
        //Get chart trendlines collection and Add trendline
        IChartTrendLines trendLines = serie.TrendLines;
        IChartTrendLine trendline = trendLines.Add(TrendLineType.Logarithmic);
        //Get trendline Name
        Console.WriteLine(trendline.Name);
        //Save to file
        workbook.SaveToFile("Chart.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual LPCWSTR_S GetName ();
    /*

    */
    virtual void SetName (LPCWSTR_S value);
    /*
    <summary>
        Returns data label. Read only.
            <example>The following code illustrates how to enable and set IChartTextArea text for 
            IChartTrendLine object:
            <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        workbook.LoadFromFile("Sample.xlsx");
        Worksheet worksheet = workbook.Worksheets[0];
        //Create chart and Get chart serie
        Chart chart = worksheet.Charts.Add(ExcelChartType.ColumnClustered);
        chart.DataRange = worksheet.Range["A1:C3"];
        IChartSerie serie = chart.Series[0];
        //Get chart trendlines collection and Add trendline
        IChartTrendLines trendLines = serie.TrendLines;
        IChartTrendLine trendline = trendLines.Add();
        //Enable trendline data label by DisplayRSquared
        trendline.DisplayRSquared = true;
        //Set data label text
        trendline.DataLabel.Text = "y=10*x";
        //Save to file
        workbook.SaveToFile("Chart.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual intrusive_ptr<IChartDataLabels> GetDataLabel ();
    /*
    <summary>
        Return trendline formula. Read only.
    </summary>
    */
    virtual LPCWSTR_S GetFormula ();
    /*
    <summary>
        Clears current trend line.
    </summary>
    */
    virtual void ClearFormats ();
private:
};
}}
