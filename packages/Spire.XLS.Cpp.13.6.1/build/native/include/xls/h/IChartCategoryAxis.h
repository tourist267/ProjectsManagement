#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
//#include "CategoryType.h"
//#include "ChartBaseUnitType.h"
//#include "IXLSRange.h"
#include "IChartAxis.h"
#include "IChartValueAxis.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
/*
    <summary>
        Represents category axis of the chart.
    </summary>
*/
class EXPORTS IChartCategoryAxis : public virtual IChartValueAxis,public virtual IChartAxis
{
    friend class IChart;
    friend class XlsChart;
    friend class XlsChartShape;
public:
    /*
    <summary>
        Value axis / category crossing point (2D charts only).
    </summary>
    */
    virtual double GetCrossingPoint ()=0;
    virtual void SetCrossingPoint (double value)=0;
    /*
    <summary>
        Frequency of labels.
    </summary>
    */
    virtual int GetLabelFrequency ()=0;
    virtual void SetLabelFrequency (int value)=0;
    /*
    <summary>
        Frequency of tick marks.
    </summary>
    */
    virtual int GetTickMarksFrequency ()=0;
    virtual void SetTickMarksFrequency (int value)=0;
    /*
    <summary>
        Represents the number of categories or series between tick-mark labels.
            <example>The following code illustrates how to set TickLabelSpacing for chart axis:
            <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        workbook.LoadFromFile("Sample.xlsx");
        Worksheet worksheet = workbook.Worksheets[0];
        //Create chart and set range
        IChart chart = worksheet.Charts.Add();
        chart.DataRange = worksheet.Range["A1:F2"];
        //Set chart category axis
        IChartCategoryAxis categoryAxis = chart.PrimaryCategoryAxis;
        //Set tick label spacing
        categoryAxis.TickLabelSpacing = 2;
        //Save to file
        workbook.SaveToFile("Chart.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual int GetTickLabelSpacing ()=0;
    virtual void SetTickLabelSpacing (int value)=0;
    /*
    <summary>
        Represents the number of categories or series between tick marks.
            <example>The following code illustrates how to set TickMarkSpacing for chart axis:
            <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        workbook.LoadFromFile("Sample.xlsx");
        Worksheet worksheet = workbook.Worksheets[0];
        //Create chart and set range
        IChart chart = worksheet.Charts.Add();
        chart.DataRange = worksheet.Range["A1:F2"];
        //Set chart category axis
        IChartCategoryAxis categoryAxis = chart.PrimaryCategoryAxis;
        //Set tick mark spacing
        categoryAxis.TickMarkSpacing = 2;
        //Save to file
        workbook.SaveToFile("Chart.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual int GetTickMarkSpacing ()=0;
    virtual void SetTickMarkSpacing (int value)=0;
    /*
    <summary>
        If true - cuts unused plot area. Default for area, surface charts.
            <example>The following code illustrates how to set AxisBetweenCategories to "false" so 
            that chart serie would be plotted on the tick marks:
            <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        workbook.LoadFromFile("Sample.xlsx");
        Worksheet worksheet = workbook.Worksheets[0];
        //Create chart and set range
        IChart chart = worksheet.Charts.Add();
        chart.DataRange = worksheet.Range["A1:C2"];
        //Set chart category axis
        IChartCategoryAxis categoryAxis = chart.PrimaryCategoryAxis;
        //Set category axis IsBetween
        categoryAxis.AxisBetweenCategories = false;
        //Save to file
        workbook.SaveToFile("Chart.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual bool GetAxisBetweenCategories ()=0;
    virtual void SetAxisBetweenCategories (bool value)=0;
    /*
    <summary>
        Category labels for the chart.
            <example>The following code illustrates how to access the category labels range:
            <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        workbook.LoadFromFile("Sample.xlsx");
        Worksheet worksheet = workbook.Worksheets[0];
        //Create chart and set range
        IChart chart = worksheet.Charts.Add();
        chart.DataRange = worksheet.Range["A1:C2"];
        //Set chart category axis
        IChartCategoryAxis categoryAxis = chart.PrimaryCategoryAxis;
        //Get category label range . Output will be A1:C1
        Console.WriteLine(categoryAxis.CategoryLabels.RangeAddressLocal);
        //Save to file
        workbook.SaveToFile("Chart.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual intrusive_ptr<IXLSRange> GetCategoryLabels ()=0;
    virtual void SetCategoryLabels (intrusive_ptr<IXLSRange> value)=0;
    //virtual std::vector<System.Object> GetEnteredDirectlyCategoryLabels ()=0;
    //virtual void SetEnteredDirectlyCategoryLabels (std::vector<System.Object> value)=0;
    /*
    <summary>
        Represents axis category type.
            <example>The following code illustrates how to set CategoryType.Time to CategoryType:
            <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        workbook.LoadFromFile("Sample.xlsx");
        Worksheet worksheet = workbook.Worksheets[0];
        //Create chart and set range
        IChart chart = worksheet.Charts.Add();
        chart.DataRange = worksheet.Range["A1:C2"];
        //Set chart category axis
        IChartCategoryAxis categoryAxis = chart.PrimaryCategoryAxis;
        //Set category type
        categoryAxis.CategoryType = CategoryType.Time;
        //Set base unit
        categoryAxis.BaseUnit = ChartBaseUnitType.Year;
        //Save to file
        workbook.SaveToFile("Chart.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual CategoryType GetCategoryType ()=0;
    virtual void SetCategoryType (CategoryType value)=0;
    /*
    <summary>
        Represents distance between the labels and axis line.
            The value can be from 0 through 1000.
    </summary>
    */
    virtual int GetOffset ()=0;
    virtual void SetOffset (int value)=0;
    /*
    <summary>
        Represents base unit for the specified category axis.
            <example>The following code illustrates how to set BaseUnit for IChartCategoryAxis:
            <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        workbook.LoadFromFile("Sample.xlsx");
        Worksheet worksheet = workbook.Worksheets[0];
        //Create chart and set range
        IChart chart = worksheet.Charts.Add();
        chart.DataRange = worksheet.Range["A1:C2"];
        //Set chart category axis
        IChartCategoryAxis categoryAxis = chart.PrimaryCategoryAxis;
        //Set category type
        categoryAxis.CategoryType = CategoryType.Time;
        //Set base unit
        categoryAxis.BaseUnit = ChartBaseUnitType.Year;
        //Save to file
        workbook.SaveToFile("Chart.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual ChartBaseUnitType GetBaseUnit ()=0;
    virtual void SetBaseUnit (ChartBaseUnitType value)=0;
    /*
    <summary>
        True if use automatic base units for the specified category axis.
    </summary>
    */
    virtual bool GetBaseUnitIsAuto ()=0;
    virtual void SetBaseUnitIsAuto (bool value)=0;
    /*
    <summary>
        Represens the major unit scale value for the category axis
             when the CategoryType property is set to TimeScale.
    </summary>
    */
    virtual ChartBaseUnitType GetMajorUnitScale ()=0;
    virtual void SetMajorUnitScale (ChartBaseUnitType value)=0;
    /*
    <summary>
        Represens the minor unit scale value for the category axis
             when the CategoryType property is set to TimeScale.
    </summary>
    */
    virtual ChartBaseUnitType GetMinorUnitScale ()=0;
    virtual void SetMinorUnitScale (ChartBaseUnitType value)=0;
private:
};
}}
