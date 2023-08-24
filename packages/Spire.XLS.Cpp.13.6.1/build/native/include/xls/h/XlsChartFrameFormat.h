#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IChartFillBorder.h"
#include "IChartFrameFormat.h"
#include "XlsObject.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS XlsChartFrameFormat : public virtual XlsObject,public virtual IChartFrameFormat
{
public:
    /*
    <summary>
        Gets or sets if border corners is round.
    </summary>
    */
    virtual bool GetIsBorderCornersRound ();
    virtual void SetIsBorderCornersRound (bool value);
    /*
    <summary>
        Gets chart border. Read only.
    </summary>
    */
    virtual intrusive_ptr<IChartBorder> GetBorder ();
    /*
    <summary>
        Indicates whether interior object was created. Read-only.
    </summary>
    */
    virtual bool GetHasInterior ();
    /*
    <summary>
        Indicates whether border formatting object was created. Read-only.
    </summary>
    */
    virtual bool GetHasLineProperties ();
    bool GetHasManualLayout ();
    bool GetInnerLayoutTarget ();
    void SetInnerLayoutTarget (bool value);
    virtual intrusive_ptr<IChartInterior> GetInterior ();
    /*
    <summary>
        Gets the chart3 D properties.
            <example>The following code illustrates the use of Shadow property:
            <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        workbook.LoadFromFile("Sample.xlsx");
        Worksheet worksheet = workbook.Worksheets[0];
        //Create chart and set range
        IChart chart = worksheet.Charts.Add();
        chart.DataRange = worksheet.Range["B2:C6"];
        //Set chart type
        chart.ChartType = ExcelChartType.Column3DClustered;
        //Gets shadow formatting properties for the chart element
        ChartShadow shadowChart = chart.ChartArea.Shadow;
        shadowChart.ShadowPrespectiveType = XLSXChartPrespectiveType.Below;
        shadowChart.Color = Color.Aqua;
        shadowChart.Blur = 22;
        //Save to file
        workbook.SaveToFile("Chart.xlsx");
        </code>
        </example>
    </summary>
    <value>The chart3 D properties.</value>
    */
    virtual intrusive_ptr<Format3D> GetFormat3D ();
    /*
    <summary>
        Represents XlsFill gradient format. Read only.
            <example>The following code illustrates the use of Fill property:
            <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        workbook.LoadFromFile("Sample.xlsx");
        Worksheet worksheet = workbook.Worksheets[0];
        //Create chart and set range
        IChart chart = worksheet.Charts.Add();
        chart.DataRange = worksheet.Range["B2:C6"];
        //Set chart type
        chart.ChartType = ExcelChartType.Column3DClustered;
        //Gets fill options for the chart element
        IShapeFill fillChart = chart.ChartArea.Fill;
        fillChart.FillType = ShapeFillType.Gradient;
        fillChart.BackColor = Color.FromArgb(205, 217, 234);
        fillChart.ForeColor = Color.White;
        //Save to file
        workbook.SaveToFile("Chart.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual intrusive_ptr<IShapeFill> GetFill ();
    virtual bool GetHasShadow ();
    virtual bool GetHasFormat3D ();
    /*
    <summary>
        Gets the shadow properties.
            <example>The following code illustrates the use of Shadow property:
            <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        workbook.LoadFromFile("Sample.xlsx");
        Worksheet worksheet = workbook.Worksheets[0];
        //Create chart and set range
        IChart chart = worksheet.Charts.Add();
        chart.DataRange = worksheet.Range["B2:C6"];
        //Set chart type
        chart.ChartType = ExcelChartType.Column3DClustered;
        //Gets shadow formatting properties for the chart element
        ChartShadow shadowChart = chart.ChartArea.Shadow;
        shadowChart.ShadowPrespectiveType = XLSXChartPrespectiveType.Below;
        shadowChart.Color = Color.Aqua;
        shadowChart.Blur = 22;
        //Save to file
        workbook.SaveToFile("Chart.xlsx");
        </code>
        </example>
    </summary>
    <value>The shadow properties.</value>
    */
    virtual intrusive_ptr<ChartShadow> GetShadow ();
    /*
    <summary>
        Gets chart border. Read-only.
    </summary>
    */
    virtual intrusive_ptr<ChartBorder> GetLineProperties ();
    /*
    <summary>
        Calculates size automatically.
    </summary>
    */
    bool GetIsAutoSize ();
    void SetIsAutoSize (bool value);
    /*
    <summary>
        Calculates position automatically.
    </summary>
    */
    bool GetIsAutoPosition ();
    void SetIsAutoPosition (bool value);
    /*
    <summary>
        X-position of upper-left corner. 1/4000 of chart plot.
            IsXMode Shall set to True
    </summary>
    */
    int GetX ();
    void SetX (int value);
    /*
    <summary>
        Y-position of upper-left corner. 1/4000 of chart plot. 
            IsYMode Shall set to True
    </summary>
    */
    int GetY ();
    void SetY (int value);
    /*
    <summary>
        X-size. 1/4000 of chart plot. IsWMode Shall set to True
    </summary>
    */
    int GetWidth ();
    void SetWidth (int value);
    /*
    <summary>
        Y-size. 1/4000 of chart plot. IsHMode Shall set to True
    </summary>
    */
    int GetHeight ();
    void SetHeight (int value);
    /*
    <summary>
        false value Specifies that the Width shall be interpreted
            as the Right of the chart element..
    </summary>
    */
    bool GetIsWMode ();
    void SetIsWMode (bool value);
    /*
    <summary>
        false value Specifies that the Height shall be interpreted
            as the Bottom of the chart element..
    </summary>
    */
    bool GetIsHMode ();
    void SetIsHMode (bool value);
    /*
    <summary>
        true value Specifies that the X shall be interpreted
            as the Left of the chart element..
    </summary>
    */
    bool GetIsXMode ();
    void SetIsXMode (bool value);
    /*
    <summary>
        true value Specifies that the Y shall be interpreted
            as the Top of the chart element..
    </summary>
    */
    bool GetIsYMode ();
    void SetIsYMode (bool value);
    virtual ExcelColors GetForeGroundKnownColor ();
    virtual void SetForeGroundKnownColor (ExcelColors value);
    virtual intrusive_ptr<Color> GetForeGroundColor ();
    virtual void SetForeGroundColor (intrusive_ptr<Color> value);
    virtual intrusive_ptr<OColor> GetForeGroundColorObject ();
    virtual ExcelColors GetBackGroundKnownColor ();
    virtual void SetBackGroundKnownColor (ExcelColors value);
    virtual intrusive_ptr<Color> GetBackGroundColor ();
    virtual void SetBackGroundColor (intrusive_ptr<Color> value);
    virtual intrusive_ptr<OColor> GetBackGroundColorObject ();
    virtual ExcelPatternType GetPattern ();
    virtual void SetPattern (ExcelPatternType value);
    RectangleStyleType GetRectangleStyle ();
    void SetRectangleStyle (RectangleStyleType value);
    virtual bool GetIsAutomaticFormat ();
    virtual void SetIsAutomaticFormat (bool value);
    virtual bool GetVisible ();
    virtual void SetVisible (bool value);
    virtual void Clear ();
    //intrusive_ptr<XlsChartFrameFormat> Clone (System.Object parent);
    void SetDefaultValues (bool bAutoSize,bool bIsInteriorGray);
private:
};
}}
