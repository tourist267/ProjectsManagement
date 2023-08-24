#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
//#include "ChartBackgroundMode.h"
//#include "IExcelApplication.h"
//#include "IOptimizedUpdate.h"
#include "IFont.h"
//#include "IChartFrameFormat.h"
#pragma warning(pop)

namespace Spire{namespace Xls{
/*
    <summary>
        Represents the Text Area in a chart.
    </summary>
*/
class EXPORTS IChartTextArea : public virtual IFont
{
    friend class IChartAxis;
    friend class IChartLegend;
    friend class IChartLegendEntry;
    friend class XlsChartAxis;
    friend class XlsChartLegend;
    friend class XlsChartLegendEntry;
    friend class XlsChartShape;
public:
    /*
    <summary>
        Area's text.Some items(such as legend,axis...) maybe invalid.
            <example>The following code illustrates the use of Text property:
            <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        workbook.LoadFromFile("Sample.xlsx");
        Worksheet worksheet = workbook.Worksheets[0];
        //Create chart
        IChart chart = worksheet.Charts.Add();
        //Set range
        chart.DataRange = worksheet.Range["B2:C6"];
        //Set chart type
        chart.ChartType = ExcelChartType.Cone3DClustered;
        //Set the Area's text in the chart
        chart.ChartTitleArea.Text = "Student Chart";
        //Save to file
        workbook.SaveToFile("Chart.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual LPCWSTR_S GetText ()=0;
    virtual void SetText (LPCWSTR_S value)=0;
    /*
    <summary>
        Text rotation angle.
            <example>The following code illustrates the use of TextRotationAngle property:
            <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        workbook.LoadFromFile("Sample.xlsx");
        Worksheet worksheet = workbook.Worksheets[0];
        //Create chart
        IChart chart = worksheet.Charts.Add();
        //Set range
        chart.DataRange = worksheet.Range["B2:C6"];
        //Set chart type
        chart.ChartType = ExcelChartType.Cone3DClustered;
        //Set the Area's text in the chart
        chart.ChartTitleArea.Text = "Student Chart";
        //Set the Text rotation angle
        chart.ChartTitleArea.TextRotationAngle = 30;
        //Save to file
        workbook.SaveToFile("Chart.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual int GetTextRotationAngle ()=0;
    virtual void SetTextRotationAngle (int value)=0;
    /*
    <summary>
        Return format of the text area.
            <example>The following code illustrates the use of FrameFormat property:
            <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        workbook.LoadFromFile("Sample.xlsx");
        Worksheet worksheet = workbook.Worksheets[0];
        //Create chart
        IChart chart = worksheet.Charts.Add();
        //Set range
        chart.DataRange = worksheet.Range["B2:C6"];
        //Set chart type
        chart.ChartType = ExcelChartType.Cone3DClustered;
        //Get the formatting options of the chart for text area
        chart.ChartTitleArea.Text = "Student Chart";
        chart.ChartTitleArea.FrameFormat.Border.Color = Color.Brown;
        chart.ChartTitleArea.FrameFormat.Interior.Pattern = ExcelPatternType.Percent25;
        //Save to file
        workbook.SaveToFile("Chart.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual intrusive_ptr<IChartFrameFormat> GetFrameFormat ()=0;
    /*
    <summary>
        Display mode of the background.
            <example>The following code illustrates the use of BackgroundMode property:
            <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        workbook.LoadFromFile("Sample.xlsx");
        Worksheet worksheet = workbook.Worksheets[0];
        //Create chart
        IChart chart = worksheet.Charts.Add();
        //Set range
        chart.DataRange = worksheet.Range["B2:C6"];
        //Set chart type
        chart.ChartType = ExcelChartType.Cone3DClustered;
        //Set the Area's text in the chart
        chart.ChartTitleArea.Text = "Student Chart";
        //Set the Display mode of the background
        chart.ChartTitleArea.BackgroundMode = ChartBackgroundMode.Opaque;
        //Save to file
        workbook.SaveToFile("Chart.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual ChartBackgroundMode GetBackgroundMode ()=0;
    virtual void SetBackgroundMode (ChartBackgroundMode value)=0;
    /*
    <summary>
        True if background is set to automatic.
            <example>The following code illustrates the use of IsAutoMode property:
            <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        workbook.LoadFromFile("Sample.xlsx");
        Worksheet worksheet = workbook.Worksheets[0];
        //Create chart
        IChart chart = worksheet.Charts.Add();
        //Set range
        chart.DataRange = worksheet.Range["B2:C6"];
        //Set chart type
        chart.ChartType = ExcelChartType.Cone3DClustered;
        //Set the Area's text in the chart
        chart.ChartTitleArea.Text = "Student Chart";
        //True if background is set to automatic
        Console.WriteLine(chart.ChartTitleArea.IsAutoMode);
        //Save to file
        workbook.SaveToFile("Chart.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual bool GetIsAutoMode ()=0;
private:
};
}}
