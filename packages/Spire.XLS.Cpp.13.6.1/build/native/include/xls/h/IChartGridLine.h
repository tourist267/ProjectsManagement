#pragma once
#include "pch.h"

//#pragma warning(push)
//#pragma warning(disable:4250)
//#include "IChartInterior.h"
//#include "IShapeFill.h"
//#include "Format3D.h"
//#include "ChartShadow.h"
//#include "ChartBorder.h"
//#pragma warning(pop)

namespace Spire{
namespace Xls{
/*
    <summary>
        Represent grid lines of the chart.
    </summary>
*/
class EXPORTS IChartGridLine : public virtual Object
{
    friend class IChartAxis;
    friend class XlsChartAxis;
public:
    /*
    <summary>
        Gets line border. Read only.
            <example>The following code illustrates use of Border property:
            <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        workbook.LoadFromFile("Sample.xlsx");
        Worksheet worksheet = workbook.Worksheets[0];
        //Create chart and set range
        IChart chart = worksheet.Charts.Add();
        chart.DataRange = worksheet.Range["A1:C2"];
        //Set value axis minor gridLines to visible
        chart.PrimaryValueAxis.HasMinorGridLines = true;
        //Get value axis minor gridlines
        IChartGridLine gridLine = chart.PrimaryValueAxis.MinorGridLines;
        Set minor gridlines broder properties
        gridLine.Border.Color = Color.Red;
        //Save to file
        workbook.SaveToFile("Chart.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual intrusive_ptr<ChartBorder> GetBorder ()=0;
    /*
    <summary>
        Gets the chart3 D properties.
    </summary>
    <value>The chart3 D properties.</value>
    */
    virtual intrusive_ptr<Format3D> GetFormat3D ()=0;
    /*
    <summary>
        Gets the shadow properties.
    </summary>
    <value>The shadow properties.</value>
    */
    virtual intrusive_ptr<ChartShadow> GetShadow ()=0;
    /*
    <summary>
        Returns object, that represents line properties. Read-only.
    </summary>
    */
    virtual intrusive_ptr<ChartBorder> GetLineProperties ()=0;
    /*
    <summary>
        Returns object, that represents area properties. Read-only.
    </summary>
    */
    virtual intrusive_ptr<IChartInterior> GetInterior ()=0;
    /*
    <summary>
        Represents XlsFill options. Read-only.
    </summary>
    */
    virtual intrusive_ptr<IShapeFill> GetFill ()=0;
private:
};
}}
