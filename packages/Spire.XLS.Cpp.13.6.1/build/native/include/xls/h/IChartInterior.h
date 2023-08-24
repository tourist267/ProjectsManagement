#pragma once
#include "pch.h"

//#pragma warning(push)
//#pragma warning(disable:4250)
//#include "ExcelColors.h"
//#include "ExcelPatternType.h"
//#pragma warning(pop)

namespace Spire{
namespace Xls{
/*
    <summary>
        Represents the chart interior. Interior of chart is supported in Chart area and Plot area only.
    </summary>
*/
class EXPORTS IChartInterior : public virtual Object
{
    friend class IChartFillBorder;
    friend class IChartGridLine;
    friend class IChartSerieDataFormat;
    friend class XlsChartDropBar;
    friend class XlsChartFrameFormat;
    friend class XlsChartGridLine;
    friend class XlsChartSerieDataFormat;
    friend class XlsChartWallOrFloor;
public:
    /*
    <summary>
        Foreground color (RGB).
            <example>The following code illustrates the use of ForegroundColor property:
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
        //Set the foreground color of the chart
        chart.ChartArea.Interior.ForegroundColor = Color.Blue;
        //Save to file
        workbook.SaveToFile("Chart.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual intrusive_ptr<Color> GetForegroundColor ()=0;
    virtual void SetForegroundColor (intrusive_ptr<Color> value)=0;
    /*
    <summary>
        Background color (RGB).
            <example>The following code illustrates the use of BackgroundColor property:
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
        //Set the backgroundColor color of the chart
        chart.ChartArea.Interior.BackgroundColor = Color.Pink;
        //Save to file
        workbook.SaveToFile("Chart.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual intrusive_ptr<Color> GetBackgroundColor ()=0;
    virtual void SetBackgroundColor (intrusive_ptr<Color> value)=0;
    /*
    <summary>
        Area pattern.
            <example>The following code illustrates the use of Pattern property:
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
        //Set the pattern of the chart
        chart.ChartArea.Interior.Pattern = ExcelPatternType.Angle;
        //Save to file
        workbook.SaveToFile("Chart.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual ExcelPatternType GetPattern ()=0;
    virtual void SetPattern (ExcelPatternType value)=0;
    /*
    <summary>
        Index of foreground color.
            <example>The following code illustrates the use of ForegroundKnownColor property:
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
        //Set the index of foreground color
        chart.ChartArea.Interior.ForegroundKnownColor = ExcelColors.Red;
        //Save to file
        workbook.SaveToFile("Chart.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual ExcelColors GetForegroundKnownColor ()=0;
    virtual void SetForegroundKnownColor (ExcelColors value)=0;
    /*
    <summary>
        Background color index.
            <example>The following code illustrates the use of BackgroundKnownColor property:
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
        //Set the index of background color
        chart.ChartArea.Interior.BackgroundKnownColor = ExcelColors.Red;
        //Save to file
        workbook.SaveToFile("Chart.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual ExcelColors GetBackgroundKnownColor ()=0;
    virtual void SetBackgroundKnownColor (ExcelColors value)=0;
    /*
    <summary>
        If true - use automatic format; otherwise custom.
            <example>The following code illustrates the use of UseDefaultFormat property:
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
        //True to use default format for interior
        chart.ChartArea.Interior.UseDefaultFormat = true;
        //Save to file
        workbook.SaveToFile("Chart.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual bool GetUseDefaultFormat ()=0;
    virtual void SetUseDefaultFormat (bool value)=0;
    /*
    <summary>
        Foreground and background are swapped when the data value is negative.
            <example>The following code illustrates the use of SwapColorsOnNegative property:
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
        //True if foreground and background colors are swapped when the data value is negative
        chart.Series[0].Format.Interior.SwapColorsOnNegative = true;
        //Save to file
        workbook.SaveToFile("Chart.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual bool GetSwapColorsOnNegative ()=0;
    virtual void SetSwapColorsOnNegative (bool value)=0;
private:
};
}}
