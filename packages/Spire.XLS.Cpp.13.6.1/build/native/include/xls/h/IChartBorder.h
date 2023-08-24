#pragma once
#include "pch.h"

//#pragma warning(push)
//#pragma warning(disable:4250)
//#include "ChartLinePatternType.h"
//#include "ChartLineWeightType.h"
//#include "ExcelColors.h"
//#pragma warning(pop)

namespace Spire{
namespace Xls{
/*
    <summary>
        Represents chart border. Provides Border options for Chart Area and Plot Area.
    </summary>
*/
class EXPORTS IChartBorder : public virtual Object
{
    friend class IChartErrorBars;
    friend class IChartFormat;
    friend class IChartFrameFormat;
    friend class IChartTrendLine;
    friend class XlsChartFormat;
    friend class XlsChartFrameFormat;
public:
    /*
    <summary>
        Color of line.
            <example>The following code illustrates the use of Color property:
            <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        workbook.LoadFromFile("Sample.xlsx");
        Worksheet worksheet = workbook.Worksheets[0];
        //Create chart and set range
        IChart chart = worksheet.Charts.Add();
        chart.DataRange = worksheet.Range["B2:C6"];
        //Set line color for chart area border
        chart.ChartArea.Border.Color = Color.DarkOrange;
        //Save to file
        workbook.SaveToFile("Chart.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual intrusive_ptr<Color> GetColor ()=0;
    virtual void SetColor (intrusive_ptr<Color> value)=0;
    /*
    <summary>
        Line pattern.
            <example>The following code illustrates the use of LinePattern property:
            <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        workbook.LoadFromFile("Sample.xlsx");
        Worksheet worksheet = workbook.Worksheets[0];
        //Create chart and set range
        IChart chart = worksheet.Charts.Add();
        chart.DataRange = worksheet.Range["B2:C6"];
        //Set line pattern for plot area border
        chart.ChartArea.Border.Pattern = ChartLinePatternType.DashDotDot;
        //Save to file
        workbook.SaveToFile("Chart.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual ChartLinePatternType GetPattern ()=0;
    virtual void SetPattern (ChartLinePatternType value)=0;
    /*
    <summary>
        Weight of line.
            <example>The following code illustrates the use of Weight property:
            <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        workbook.LoadFromFile("Sample.xlsx");
        Worksheet worksheet = workbook.Worksheets[0];
        //Create chart and set range
        IChart chart = worksheet.Charts.Add();
        chart.DataRange = worksheet.Range["B2:C6"];
        //Set line weight for plot area border
        chart.ChartArea.Border.Weight = ChartLineWeightType.Wide;
        //Save to file
        workbook.SaveToFile("Chart.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual ChartLineWeightType GetWeight ()=0;
    virtual void SetWeight (ChartLineWeightType value)=0;
    /*
    <summary>
        If true - default format; otherwise custom.
    </summary>
    */
    virtual bool GetUseDefaultFormat ()=0;
    virtual void SetUseDefaultFormat (bool value)=0;
    /*
    <summary>
        Custom format for line color.
    </summary>
    */
    virtual bool GetUseDefaultLineColor ()=0;
    virtual void SetUseDefaultLineColor (bool value)=0;
    /*
    <summary>
        Line color index.
    </summary>
    */
    virtual ExcelColors GetKnownColor ()=0;
    virtual void SetKnownColor (ExcelColors value)=0;
    /*
    <summary>
        Returns the transparency level of the specified Solid color shaded XlsFill as a floating-point
            value from 0.0 (Clear) through 1.0(Opaque).
            <example>The following code illustrates the use of Weight property:
            <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        workbook.LoadFromFile("Sample.xlsx");
        Worksheet worksheet = workbook.Worksheets[0];
        //Create chart and set range
        IChart chart = worksheet.Charts.Add();
        chart.DataRange = worksheet.Range["B2:C6"];
        //Set the transparency level of the solid color
        chart.ChartArea.Border.Transparency =0.85;
        chart.ChartArea.Border.Color = Color.Red;
        //Save to file
        workbook.SaveToFile("Chart.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual double GetTransparency ()=0;
    virtual void SetTransparency (double value)=0;
private:
};
}}
