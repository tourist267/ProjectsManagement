#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IExcelApplication.h"
#include "IOptimizedUpdate.h"
#include "IFont.h"
#include "IChartTextArea.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
/*
    <summary>
        Represents a collection of chart data labels.
    </summary>
*/
class EXPORTS IChartDataLabels : public virtual IChartTextArea,public virtual IExcelApplication,public virtual IFont,public virtual IOptimizedUpdate
{
    friend class IChartDataPoint;
    friend class IChartSerie;
    friend class IChartTrendLine;
    friend class XlsChartDataPoint;
    friend class XlsChartSerie;
public:
    /*
    <summary>
        Indicates whether series name is in data labels.
            <example>The following code illustrates how to access the IChartDataLabels and set to 
            shows the serie name:
            <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        workbook.LoadFromFile("Sample.xlsx");
        Worksheet worksheet = workbook.Worksheets[0];
        //Create chart and set range
        Chart chart = worksheet.Charts.Add();
        chart.DataRange = worksheet.Range["A1:C3"];
        //Set chart type
        chart.ChartType = ExcelChartType.ColumnClustered;
        //Get the chart serie
        IChartSerie serie = chart.Series[0];
        //Get serie data labels
        IChartDataLabels dataLabels = serie.DataPoints.DefaultDataPoint.DataLabels;
        //Set the data label to show the serie name
        dataLabels.HasSeriesName = true;
        //Save to file
        workbook.SaveToFile("Chart.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual bool GetHasSeriesName ()=0;
    virtual void SetHasSeriesName (bool value)=0;
    /*
    <summary>
        Indicates whether category name is in data labels.
            <example>The following code illustrates how to access the IChartDataLabels and set to 
            shows the categories:
            <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        workbook.LoadFromFile("Sample.xlsx");
        Worksheet worksheet = workbook.Worksheets[0];
        //Create chart and set range
        Chart chart = worksheet.Charts.Add();
        chart.DataRange = worksheet.Range["A1:C3"];
        //Set chart type
        chart.ChartType = ExcelChartType.ColumnClustered;
        //Get the chart serie
        IChartSerie serie = chart.Series[0];
        //Get serie data labels
        IChartDataLabels dataLabels = serie.DataPoints.DefaultDataPoint.DataLabels;
        //Set the data label to show the category names
        dataLabels.HasCategoryName = true;
        //Save to file
        workbook.SaveToFile("Chart.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual bool GetHasCategoryName ()=0;
    virtual void SetHasCategoryName (bool value)=0;
    /*
    <summary>
        Indicates whether value is in data labels.
            <example>The following code illustrates how to access the IChartDataLabels and set to 
            shows the values:
            <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        workbook.LoadFromFile("Sample.xlsx");
        Worksheet worksheet = workbook.Worksheets[0];
        //Create chart and set range
        Chart chart = worksheet.Charts.Add();
        chart.DataRange = worksheet.Range["A1:C3"];
        //Set chart type
        chart.ChartType = ExcelChartType.ColumnClustered;
        //Get the chart serie
        IChartSerie serie = chart.Series[0];
        //Get serie data labels
        IChartDataLabels dataLabels = serie.DataPoints.DefaultDataPoint.DataLabels;
        //Set the data label to show the values
        dataLabels.HasValue = true;
        //Save to file
        workbook.SaveToFile("Chart.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual bool GetHasValue ()=0;
    virtual void SetHasValue (bool value)=0;
    /*
    <summary>
        Indicates whether percentage is in data labels.
            <example>The following code illustrates how to access the IChartDataLabels and set to 
            shows the percentage values:
            <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        workbook.LoadFromFile("Sample.xlsx");
        Worksheet worksheet = workbook.Worksheets[0];
        //Create chart and set range
        Chart chart = worksheet.Charts.Add();
        chart.DataRange = worksheet.Range["A1:C2"];
        //Set chart type
        chart.ChartType = ExcelChartType.Pie;
        //Get the chart serie
        IChartSerie serie = chart.Series[0];
        //Get serie data labels
        IChartDataLabels dataLabels = serie.DataPoints.DefaultDataPoint.DataLabels;
        //Set the data label to show the percentage values
        dataLabels.HasPercentage = true;
        //Save to file
        workbook.SaveToFile("Chart.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual bool GetHasPercentage ()=0;
    virtual void SetHasPercentage (bool value)=0;
    /*
    <summary>
        Indicates whether bubble size is in data labels.
            <example>The following code illustrates how to access the IChartDataLabels and set to 
            shows the bubble sizes:
            <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        workbook.LoadFromFile("Sample.xlsx");
        Worksheet worksheet = workbook.Worksheets[0];
        //Create chart and set range
        Chart chart = worksheet.Charts.Add();
        chart.DataRange = worksheet.Range["A1:C3"];
        //Set chart type
        chart.ChartType = ExcelChartType.Bubble;
        //Get the chart serie
        IChartSerie serie = chart.Series[0];
        //Get serie data labels
        IChartDataLabels dataLabels = serie.DataPoints.DefaultDataPoint.DataLabels;
        //Set the data label to show the bubble sizes
        dataLabels.HasBubbleSize = true;
        //Save to file
        workbook.SaveToFile("Chart.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual bool GetHasBubbleSize ()=0;
    virtual void SetHasBubbleSize (bool value)=0;
    /*
    <summary>
        Delimeter.
            <example>The following code illustrates how to access the IChartDataLabels and set 
            delimiter for data labels:
            <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        workbook.LoadFromFile("Sample.xlsx");
        Worksheet worksheet = workbook.Worksheets[0];
        //Create chart and set range
        Chart chart = worksheet.Charts.Add();
        chart.DataRange = worksheet.Range["A1:C3"];
        //Set chart type
        chart.ChartType = ExcelChartType.ColumnClustered;
        //Get the chart serie
        IChartSerie serie = chart.Series[0];
        //Get serie data labels
        IChartDataLabels dataLabels = serie.DataPoints.DefaultDataPoint.DataLabels;
        //Set ' ' symbol as separator for data labels
        dataLabels.HasValue = true;
        dataLabels.HasSeriesName = true;
        dataLabels.Delimiter =" ";
        //Save to file
        workbook.SaveToFile("Chart.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual LPCWSTR_S GetDelimiter ()=0;
    virtual void SetDelimiter (LPCWSTR_S value)=0;
    /*
    <summary>
        Indicates whether legend key is in data labels.
            <example>The following code illustrates how to access the IChartDataLabels and set to 
            shows the legend keys:
            <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        workbook.LoadFromFile("Sample.xlsx");
        Worksheet worksheet = workbook.Worksheets[0];
        //Create chart and set range
        Chart chart = worksheet.Charts.Add();
        chart.DataRange = worksheet.Range["A1:C3"];
        //Set chart type
        chart.ChartType = ExcelChartType.ColumnClustered;
        //Get the chart serie
        IChartSerie serie = chart.Series[0];
        //Get serie data labels
        IChartDataLabels dataLabels = serie.DataPoints.DefaultDataPoint.DataLabels;
        //Set the data label to show the legend key
        dataLabels.HasValue = true;
        dataLabels.HasLegendKey = true;
        //Save to file
        workbook.SaveToFile("Chart.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual bool GetHasLegendKey ()=0;
    virtual void SetHasLegendKey (bool value)=0;
    /*
    <summary>
        Represents data labels position.
            <example>The following code illustrates how to access the IChartDataLabels and set to 
            the position for labels:
            <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        workbook.LoadFromFile("Sample.xlsx");
        Worksheet worksheet = workbook.Worksheets[0];
        //Create chart and set range
        Chart chart = worksheet.Charts.Add();
        chart.DataRange = worksheet.Range["A1:C2"];
        //Set chart type
        chart.ChartType = ExcelChartType.Pie;
        //Get the chart serie
        IChartSerie serie = chart.Series[0];
        //Get serie data labels
        IChartDataLabels dataLabels = serie.DataPoints.DefaultDataPoint.DataLabels;
        //Set the data label to show the leader lines
        dataLabels.HasValue = true;
        dataLabels.Position = DataLabelPositionType.Outside;
        //Save to file
        workbook.SaveToFile("Chart.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual DataLabelPositionType GetPosition ()=0;
    virtual void SetPosition (DataLabelPositionType value)=0;
    /*
    <summary>
        Indicates whether Leader Lines is in data labels.
            <example>The following code illustrates how to access the IChartDataLabels and set to 
            leader lines to show:
            <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        workbook.LoadFromFile("Sample.xlsx");
        Worksheet worksheet = workbook.Worksheets[0];
        //Create chart and set range
        Chart chart = worksheet.Charts.Add();
        chart.DataRange = worksheet.Range["A1:C2"];
        //Set chart type
        chart.ChartType = ExcelChartType.Pie;
        //Get the chart serie
        IChartSerie serie = chart.Series[0];
        //Get serie data labels
        IChartDataLabels dataLabels = serie.DataPoints.DefaultDataPoint.DataLabels;
        //Set the data label to show the leader lines
        dataLabels.HasValue = true;
        dataLabels.Position = DataLabelPositionType.Outside;
        dataLabels.ShowLeaderLines = true;
        //Save to file
        workbook.SaveToFile("Chart.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual bool GetShowLeaderLines ()=0;
    virtual void SetShowLeaderLines (bool value)=0;
    /*
    <summary>
        Represents trend line label number format.
    </summary>
    */
    virtual LPCWSTR_S GetNumberFormat ()=0;
    virtual void SetNumberFormat (LPCWSTR_S value)=0;
    virtual bool GetIsTextWrapped ()=0;
    virtual void SetIsTextWrapped (bool value)=0;
    virtual bool GetIsResizeShapeToFitText ()=0;
    virtual void SetIsResizeShapeToFitText (bool value)=0;
private:
};
}}
