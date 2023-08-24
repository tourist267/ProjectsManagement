#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "ICloneParent.h"
#include "IChartInterior.h"
#include "XlsObject.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS XlsChartInterior : public virtual XlsObject,public virtual IChartInterior,public virtual ICloneParent
{
public:
    /*
    <summary>
        Foreground color (RGB).
    </summary>
    */
    intrusive_ptr<OColor> GetForegroundColorObject ();
    /*
    <summary>
        Background color (RGB).
    </summary>
    */
    intrusive_ptr<OColor> GetBackgroundColorObject ();
    /*
    <summary>
        Foreground color.
    </summary>
    */
    virtual intrusive_ptr<Color> GetForegroundColor ();
    virtual void SetForegroundColor (intrusive_ptr<Color> value);
    /*
    <summary>
        Background color.
    </summary>
    */
    virtual intrusive_ptr<Color> GetBackgroundColor ();
    virtual void SetBackgroundColor (intrusive_ptr<Color> value);
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
    virtual ExcelPatternType GetPattern ();
    virtual void SetPattern (ExcelPatternType value);
    /*
    <summary>
        Foreground excel color.
    </summary>
    */
    virtual ExcelColors GetForegroundKnownColor ();
    virtual void SetForegroundKnownColor (ExcelColors value);
    /*
    <summary>
        Background excel color.
    </summary>
    */
    virtual ExcelColors GetBackgroundKnownColor ();
    virtual void SetBackgroundKnownColor (ExcelColors value);
    /*
    <summary>
        Indicates whether use default format.
    </summary>
    */
    virtual bool GetUseDefaultFormat ();
    virtual void SetUseDefaultFormat (bool value);
    /*
    <summary>
        Foreground and background are swapped when the data value is negative.
    </summary>
    */
    virtual bool GetSwapColorsOnNegative ();
    virtual void SetSwapColorsOnNegative (bool value);
    //intrusive_ptr<XlsChartInterior> Clone (System.Object parent,bool isFrameClone);
    //intrusive_ptr<XlsChartInterior> Clone (System.Object parent);
    void InitForFrameFormat (bool bIsAutoSize,bool bIs3DChart,bool bIsInteriorGray);
    void InitForFrameFormat (bool bIsAutoSize,bool bIs3DChart,bool bIsInteriorGray,bool bIsGray50);
private:
};
}}
