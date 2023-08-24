#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IChartAxis.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
/*
    <summary>
        Represents the chart value axis.
    </summary>
*/
class EXPORTS IChartValueAxis : public virtual IChartAxis
{
    friend class IChart;
    friend class XlsChart;
    friend class XlsChartShape;
public:
    /*
    <summary>
        Maximum value on axis.
            <example>The following code illustrates how to set MinValue and MaxValue for charts:
            <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        workbook.LoadFromFile("Sample.xlsx");
        Worksheet worksheet = workbook.Worksheets[0];
        //Create chart
        Chart chart = worksheet.Charts.Add();
        chart.DataRange = worksheet.Range["A1:C2"];
        //Set chart value axis
        IChartValueAxis valueAxis = chart.PrimaryValueAxis;
        //Set min and max value
        valueAxis.MinValue = -20;
        valueAxis.MaxValue = 60;
        //Save to file
        workbook.SaveToFile("Chart.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual double GetMinValue ()=0;
    virtual void SetMinValue (double value)=0;
    /*
    <summary>
        Maximum value on axis.
            <example>The following code illustrates how to set MinValue and MaxValue for charts:
            <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        workbook.LoadFromFile("Sample.xlsx");
        Worksheet worksheet = workbook.Worksheets[0];
        //Create chart
        Chart chart = worksheet.Charts.Add();
        chart.DataRange = worksheet.Range["A1:C2"];
        //Set chart value axis
        IChartValueAxis valueAxis = chart.PrimaryValueAxis;
        //Set min and max value
        valueAxis.MinValue = -20;
        valueAxis.MaxValue = 60;
        //Save to file
        workbook.SaveToFile("Chart.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual double GetMaxValue ()=0;
    virtual void SetMaxValue (double value)=0;
    /*
    <summary>
        Value of major increment.
            <example>The following code illustrates how to set major axis increment unit for charts:
            <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        workbook.LoadFromFile("Sample.xlsx");
        Worksheet worksheet = workbook.Worksheets[0];
        //Create chart
        Chart chart = worksheet.Charts.Add();
        chart.DataRange = worksheet.Range["A1:C2"];
        //Set chart value axis
        IChartValueAxis valueAxis = chart.PrimaryValueAxis;
        //Set major unit
        valueAxis.MajorUnit = 20;
        //Save to file
        workbook.SaveToFile("Chart.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual double GetMajorUnit ()=0;
    virtual void SetMajorUnit (double value)=0;
    /*
    <summary>
        Value of minor increment.
            <example>The following code illustrates how to set minor axis increment unit for charts:
            <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        workbook.LoadFromFile("Sample.xlsx");
        Worksheet worksheet = workbook.Worksheets[0];
        //Create chart
        Chart chart = worksheet.Charts.Add();
        chart.DataRange = worksheet.Range["A1:C2"];
        //Set chart value axis
        IChartValueAxis valueAxis = chart.PrimaryValueAxis;
        //Set major unit
        valueAxis.MinorUnit = 8;
        //Save to file
        workbook.SaveToFile("Chart.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual double GetMinorUnit ()=0;
    virtual void SetMinorUnit (double value)=0;
    /*
    <summary>
        Value where category axis crosses.
            <example>The following code illustrates how to set CrossValue for charts:
            <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        workbook.LoadFromFile("Sample.xlsx");
        Worksheet worksheet = workbook.Worksheets[0];
        //Create chart
        Chart chart = worksheet.Charts.Add();
        chart.DataRange = worksheet.Range["A1:C2"];
        //Set chart value axis
        IChartValueAxis valueAxis = chart.PrimaryValueAxis;
        //Set CrossValue
        valueAxis.CrossValue = 15;
        //Save to file
        workbook.SaveToFile("Chart.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual double GetCrossValue ()=0;
    virtual void SetCrossValue (double value)=0;
    /*
    <summary>
        Represents the point on the axis another axis crosses it.
            <example>The following code illustrates how to set CrossesAt for charts:
            <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        workbook.LoadFromFile("Sample.xlsx");
        Worksheet worksheet = workbook.Worksheets[0];
        //Create chart
        Chart chart = worksheet.Charts.Add();
        chart.DataRange = worksheet.Range["A1:C2"];
        //Set chart value axis
        IChartValueAxis valueAxis = chart.PrimaryValueAxis;
        //Set CrossAt
        valueAxis.CrossesAt = 15;
        //Save to file
        workbook.SaveToFile("Chart.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual double GetCrossesAt ()=0;
    virtual void SetCrossesAt (double value)=0;
    /*
    <summary>
        Automatic minimum selected.
            <example>The following code illustrates how to access IsAutoMin:
            <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        workbook.LoadFromFile("Sample.xlsx");
        Worksheet worksheet = workbook.Worksheets[0];
        //Create chart
        Chart chart = worksheet.Charts.Add();
        chart.DataRange = worksheet.Range["A1:C2"];
        //Set chart value axis
        IChartValueAxis valueAxis = chart.PrimaryValueAxis;
        //Check IsAutoMin
        Console.WriteLine(valueAxis.IsAutoMin);
        //Save to file
        workbook.SaveToFile("Chart.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual bool GetIsAutoMin ()=0;
    virtual void SetIsAutoMin (bool value)=0;
    /*
    <summary>
        Automatic maximum selected.
            <example>The following code illustrates how to access IsAutoMax:
            <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        workbook.LoadFromFile("Sample.xlsx");
        Worksheet worksheet = workbook.Worksheets[0];
        //Create chart
        Chart chart = worksheet.Charts.Add();
        chart.DataRange = worksheet.Range["A1:C2"];
        //Set chart value axis
        IChartValueAxis valueAxis = chart.PrimaryValueAxis;
        //Check IsAutoMax
        Console.WriteLine(valueAxis.IsAutoMax);
        //Save to file
        workbook.SaveToFile("Chart.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual bool GetIsAutoMax ()=0;
    virtual void SetIsAutoMax (bool value)=0;
    /*
    <summary>
        Automatic major selected.
            <example>The following code illustrates how to access IsAutoMajor:
            <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        workbook.LoadFromFile("Sample.xlsx");
        Worksheet worksheet = workbook.Worksheets[0];
        //Create chart
        Chart chart = worksheet.Charts.Add();
        chart.DataRange = worksheet.Range["A1:C2"];
        //Set chart value axis
        IChartValueAxis valueAxis = chart.PrimaryValueAxis;
        //Check IsAutoMajor
        Console.WriteLine(valueAxis.IsAutoMajor);
        //Save to file
        workbook.SaveToFile("Chart.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual bool GetIsAutoMajor ()=0;
    virtual void SetIsAutoMajor (bool value)=0;
    /*
    <summary>
        Automatic minor selected.
            <example>The following code illustrates how to access IsAutoMinor:
            <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        workbook.LoadFromFile("Sample.xlsx");
        Worksheet worksheet = workbook.Worksheets[0];
        //Create chart
        Chart chart = worksheet.Charts.Add();
        chart.DataRange = worksheet.Range["A1:C2"];
        //Set chart value axis
        IChartValueAxis valueAxis = chart.PrimaryValueAxis;
        //Check IsAutoMinor
        Console.WriteLine(valueAxis.IsAutoMinor);
        //Save to file
        workbook.SaveToFile("Chart.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual bool GetIsAutoMinor ()=0;
    virtual void SetIsAutoMinor (bool value)=0;
    /*
    <summary>
        Automatic category crossing point selected.
            <example>The following code illustrates how to access IsAutoCross:
            <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        workbook.LoadFromFile("Sample.xlsx");
        Worksheet worksheet = workbook.Worksheets[0];
        //Create chart
        Chart chart = worksheet.Charts.Add();
        chart.DataRange = worksheet.Range["A1:C2"];
        //Set chart value axis
        IChartValueAxis valueAxis = chart.PrimaryValueAxis;
        //Set CrossAt
        valueAxis.CrossesAt = 15;
        //Check IsAutoCross
        Console.WriteLine(valueAxis.IsAutoCross);
        //Save to file
        workbook.SaveToFile("Chart.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual bool GetIsAutoCross ()=0;
    /*
    <summary>
        Logarithmic scale.
            <example>The following code illustrates how to set IsLogScale for charts:
            <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        workbook.LoadFromFile("Sample.xlsx");
        Worksheet worksheet = workbook.Worksheets[0];
        //Create chart
        Chart chart = worksheet.Charts.Add();
        chart.DataRange = worksheet.Range["A1:C2"];
        //Set chart value axis
        IChartValueAxis valueAxis = chart.PrimaryValueAxis;
        //Set IsLogScale
        valueAxis.IsLogScale = true;
        //Save to file
        workbook.SaveToFile("Chart.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual bool GetIsLogScale ()=0;
    virtual void SetIsLogScale (bool value)=0;
    /*
    <summary>
        Values in reverse order.
            <example>The following code illustrates how to set IsReverseOrder for charts:
            <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        workbook.LoadFromFile("Sample.xlsx");
        Worksheet worksheet = workbook.Worksheets[0];
        //Create chart
        Chart chart = worksheet.Charts.Add();
        chart.DataRange = worksheet.Range["A1:C2"];
        //Set chart value axis
        IChartValueAxis valueAxis = chart.PrimaryValueAxis;
        //Set IsReverseOrder
        valueAxis.IsReverseOrder = true;
        //Save to file
        workbook.SaveToFile("Chart.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual bool GetIsReverseOrder ()=0;
    virtual void SetIsReverseOrder (bool value)=0;
    /*
    <summary>
        Category axis to cross at maximum value.
            <example>The following code illustrates how to access IsMaxCross:
            <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        workbook.LoadFromFile("Sample.xlsx");
        Worksheet worksheet = workbook.Worksheets[0];
        //Create chart
        Chart chart = worksheet.Charts.Add();
        chart.DataRange = worksheet.Range["A1:C2"];
        //Set chart value axis
        IChartValueAxis valueAxis = chart.PrimaryValueAxis;
        //Get IsMaxCross
        Console.WriteLine(valueAxis.IsMaxCross);
        //Save to file
        workbook.SaveToFile("Chart.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual bool GetIsMaxCross ()=0;
private:
};
}}
