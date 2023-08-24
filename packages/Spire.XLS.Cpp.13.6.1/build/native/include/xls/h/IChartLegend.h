#pragma once
#include "pch.h"

//#pragma warning(push)
//#pragma warning(disable:4250)
//#include "LegendPositionType.h"
//#include "IChartTextArea.h"
//#include "IChartLegendEntries.h"
//#pragma warning(pop)

namespace Spire{
namespace Xls{
/*
    <summary>
        Represents the legend of the chart.
    </summary>
*/
class EXPORTS IChartLegend : public virtual Object
{
    friend class IChart;
    friend class XlsChart;
    friend class XlsChartShape;
public:
    /*
    <summary>
        Return text area of legend.
            <example>The following code illustrates use of TextArea property:
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
        //Set text area for the legend
        chart.Legend.TextArea.Color = Color.Gray;
        chart.Legend.TextArea.Size = 10;
        chart.Legend.TextArea.FontName = "Bernard MT Condensed";
        //Save to file
        workbook.SaveToFile("Chart.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual intrusive_ptr<IChartTextArea> GetTextArea ()=0;
    /*
    <summary>
        X-position of upper-left corner. 1/4000 of chart plot.
            <example>The following code illustrates use of X co-ordinate of upper-left corner of the legend:
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
        //X co-ordinate of upper-left corner of the legend
        chart.Legend.X = -80;
        //Save to file
        workbook.SaveToFile("Chart.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual int GetX ()=0;
    virtual void SetX (int value)=0;
    /*
    <summary>
        Y-position of upper-left corner. 1/4000 of chart plot.
            <example>The following code illustrates use of Y co-ordinate of upper-left corner of the legend:
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
        //Y co-ordinate of upper-left corner of the legend
        chart.Legend.Y = 30;
        //Save to file
        workbook.SaveToFile("Chart.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual int GetY ()=0;
    virtual void SetY (int value)=0;
    /*
    <summary>
        Type:
            0 = bottom
            1 = corner
            2 = top
            3 = right
            4 = left
            7 = not docked or inside the plot area.
            <example>The following code illustrates use of Position property:
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
        //Set the position of legend on the chart
        chart.Legend.Position = LegendPositionType.Top;
        //Save to file
        workbook.SaveToFile("Chart.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual LegendPositionType GetPosition ()=0;
    virtual void SetPosition (LegendPositionType value)=0;
    /*
    <summary>
        True if vertical legend (a single column of entries);
            False if horizontal legend (multiple columns of entries).
            Manual-sized legends always have this bit set to False.
            <example>The following code illustrates use of IsVerticalLegend property:
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
        //True if the legend is vertical
        if(chart.Legend.IsVerticalLegend){ //Your code here }
        //Save to file
        workbook.SaveToFile("Chart.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual bool GetIsVerticalLegend ()=0;
    virtual void SetIsVerticalLegend (bool value)=0;
    /*
    <summary>
        Represents legend entries collection. Read only.
            <example>The following code illustrates use of LegendEntries property:
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
        //Get the count of legend entries
        int legendEntriesCount = chart.Legend.LegendEntries.Count;
        if(legendEntriesCount != 0){ //Your code here }
        //Save to file
        workbook.SaveToFile("Chart.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual intrusive_ptr<IChartLegendEntries> GetLegendEntries ()=0;
    /*
    <summary>
        Show legend without overlapping. Default is True.
            <example>The following code illustrates use of IncludeInLayout property:
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
        //True to show legend without overlapping the chart
        IChartLegend chartLegend = chart.Legend;
        chartLegend.IncludeInLayout = true;
        //Save to file
        workbook.SaveToFile("Chart.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual bool GetIncludeInLayout ()=0;
    virtual void SetIncludeInLayout (bool value)=0;
    virtual bool GetInnerLayoutTarget ()=0;
    virtual void SetInnerLayoutTarget (bool value)=0;
    /*
    <summary>
        false value Specifies that the Width shall be interpreted
            as the Right of the chart element.
    </summary>
    */
    virtual bool GetIsWMode ()=0;
    virtual void SetIsWMode (bool value)=0;
    /*
    <summary>
        false value Specifies that the Height shall be interpreted
            as the Bottom of the chart element.
    </summary>
    */
    virtual bool GetIsHMode ()=0;
    virtual void SetIsHMode (bool value)=0;
    /*
    <summary>
        true value Specifies that the X shall be interpreted
            as the Left of the chart element.
    </summary>
    */
    virtual bool GetIsXMode ()=0;
    virtual void SetIsXMode (bool value)=0;
    /*
    <summary>
        true value Specifies that the Y shall be interpreted
            as the Top of the chart element.
    </summary>
    */
    virtual bool GetIsYMode ()=0;
    virtual void SetIsYMode (bool value)=0;
    /*
    <summary>
        X-size. 1/4000 of chart plot. IsWMode Shall set to True
    </summary>
    */
    virtual int GetWidth ()=0;
    virtual void SetWidth (int value)=0;
    /*
    <summary>
        Y-size. 1/4000 of chart plot. IsHMode Shall set to True
    </summary>
    */
    virtual int GetHeight ()=0;
    virtual void SetHeight (int value)=0;
    /*
    <summary>
        X positioning is automatic.
    </summary>
    */
    virtual bool GetAutoPositionX ()=0;
    virtual void SetAutoPositionX (bool value)=0;
    /*
    <summary>
        Y positioning is automatic.
    </summary>
    */
    virtual bool GetAutoPositionY ()=0;
    virtual void SetAutoPositionY (bool value)=0;
    /*
    <summary>
        Clears chart legend.
            <example>The following code illustrates how to use the Clear method for legend of chart:
            <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        workbook.LoadFromFile("Sample.xlsx");
        Worksheet worksheet = workbook.Worksheets[0];
        //Clears the legend of chart
        worksheet.Charts[0].Legend.Clear();
        //Save to file
        workbook.SaveToFile("Chart.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual void Clear ()=0;
    /*
    <summary>
        Deletes chart legend.
            <example>The following code illustrates how to use the Delete method for legend of chart:
            <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        workbook.LoadFromFile("Sample.xlsx");
        Worksheet worksheet = workbook.Worksheets[0];
        //Create chart and set range
        IChart chart = worksheet.Charts.Add();
        chart.DataRange = worksheet.Range["B2:C6"];
        //Clears the legend of chart
        worksheet.Charts[0].Legend.Delete();
        //Save to file
        workbook.SaveToFile("Chart.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual void Delete ()=0;
private:
};
}}
