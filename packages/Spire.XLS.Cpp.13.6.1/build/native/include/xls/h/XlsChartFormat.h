#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "ICloneParent.h"
#include "IChartFormat.h"
#include "XlsObject.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS XlsChartFormat : public virtual XlsObject,public virtual IChartFormat,public virtual ICloneParent
{
    friend class XlsChartSerie;
    friend class XlsChartFormatCollection;
public:
    bool GetIsPrimaryAxis ();
    bool GetIsSeriesName ();
    void SetIsSeriesName (bool value);
    bool GetIsShowLeaderLines ();
    void SetIsShowLeaderLines (bool value);
    /*
    <summary>
        If true - format has smothed line; otherwise false. Read-only.
    </summary>
    */
    bool GetIsSmoothed ();
    bool GetIsStacked ();
    void SetIsStacked (bool value);
    DropLineStyleType GetLineStyle ();
    void SetLineStyle (DropLineStyleType value);
    int GetNumSplitValue ();
    void SetNumSplitValue (int value);
    /*
    <summary>
        Returns or sets the perspective for the 3-D chart view.( 0 - 100 )
    </summary>
    */
    int GetPerspective ();
    void SetPerspective (int value);
    ChartPieType GetPieChartType ();
    void SetPieChartType (ChartPieType value);
    /*
    <summary>
        True if the chart axes are at right angles, independent of chart rotation or elevation.
    </summary>
    */
    bool GetRightAngleAxes ();
    void SetRightAngleAxes (bool value);
    /*
    <summary>
        Returns or sets the rotation of the 3-D chart view
            (the rotation of the plot area around the z-axis, in degrees).(0 to 360 degrees).
    </summary>
    */
    int GetRotation ();
    void SetRotation (int value);
    bool GetShowAsPercentsBar ();
    void SetShowAsPercentsBar (bool value);
    bool GetShowAsPercentsLine ();
    void SetShowAsPercentsLine (bool value);
    int GetSplitPercent ();
    void SetSplitPercent (int value);
    bool GetStackValuesBar ();
    void SetStackValuesBar (bool value);
    bool GetStackValuesLine ();
    void SetStackValuesLine (bool value);
    bool GetUseDefaultSplitValue ();
    void SetUseDefaultSplitValue (bool value);
    bool GetWallsAndGridlines2D ();
    void SetWallsAndGridlines2D (bool value);
    //virtual System.Object Clone (System.Object parent);
    virtual bool GetIsVaryColor ();
    virtual void SetIsVaryColor (bool value);
    bool GetIsVeryColor ();
    void SetIsVeryColor (bool value);
    virtual int GetOverlap ();
    virtual void SetOverlap (int value);
    virtual int GetGapWidth ();
    virtual void SetGapWidth (int value);
    virtual int GetFirstSliceAngle ();
    virtual void SetFirstSliceAngle (int value);
    virtual int GetDoughnutHoleSize ();
    virtual void SetDoughnutHoleSize (int value);
    virtual int GetBubbleScale ();
    virtual void SetBubbleScale (int value);
    virtual BubbleSizeType GetSizeRepresents ();
    virtual void SetSizeRepresents (BubbleSizeType value);
    virtual bool GetShowNegativeBubbles ();
    virtual void SetShowNegativeBubbles (bool value);
    virtual bool GetHasRadarAxisLabels ();
    virtual void SetHasRadarAxisLabels (bool value);
    virtual SplitType GetSplitType ();
    virtual void SetSplitType (SplitType value);
    virtual int GetSplitValue ();
    virtual void SetSplitValue (int value);
    virtual int GetPieSecondSize ();
    virtual void SetPieSecondSize (int value);
    virtual intrusive_ptr<IChartDropBar> GetFirstDropBar ();
    virtual intrusive_ptr<IChartDropBar> GetSecondDropBar ();
    virtual intrusive_ptr<IChartBorder> GetPieSeriesLine ();
    intrusive_ptr<XlsChartSerieDataFormat> GetDataFormatOrNull ();
    LPCWSTR_S GetDelimiter ();
    void SetDelimiter (LPCWSTR_S value);
    int GetDelimiterLength ();
    /*
    <summary>
        Returns or sets the depth of a 3-D chart as a percentage of the chart width
            (between 20 and 2000 percent).
    </summary>
    */
    int GetDepthPercent ();
    void SetDepthPercent (int value);
    /*
    <summary>
        Drawing order (0 = bottom of the z-order).
    </summary>
    */
    int GetDrawingZOrder ();
    void SetDrawingZOrder (int value);
    /*
    <summary>
        Gets or sets the elevation of the 3-D chart view, in degrees (0 to +90 degrees).
    </summary>
    */
    int GetElevation ();
    void SetElevation (int value);
    /*
    <summary>
        True if Microsoft Excel scales a 3-D chart so that it's closer in size to the equivalent 2-D chart..
    </summary>
    */
    bool GetAutoScaling ();
    void SetAutoScaling (bool value);
    int GetGap ();
    void SetGap (int value);
    /*
    <summary>
        Returns or sets the distance between the data series in a 3-D chart, as a percentage of the marker width.( 0 - 500 )
    </summary>
    */
    int GetGapDepth ();
    void SetGapDepth (int value);
    bool GetHasShadowBar ();
    void SetHasShadowBar (bool value);
    bool GetHasShadowBoppop ();
    void SetHasShadowBoppop (bool value);
    /*
    <summary>
        True if this line has a shadow.
    </summary>
    */
    bool GetHasShadowLine ();
    void SetHasShadowLine (bool value);
    /*
    <summary>
        True if this pie has a shadow.
    </summary>
    */
    bool GetHasShadowPie ();
    void SetHasShadowPie (bool value);
    /*
    <summary>
        True if this radar series has a shadow.
    </summary>
    */
    bool GetHasShadowRadar ();
    void SetHasShadowRadar (bool value);
    /*
    <summary>
        True if bubble series has a shadow.
    </summary>
    */
    bool GetHasShadowScatter ();
    void SetHasShadowScatter (bool value);
    bool GetHasValue ();
    void SetHasValue (bool value);
    bool GetHasWedgeCallout ();
    void SetHasWedgeCallout (bool value);
    /*
    <summary>
        Returns or sets the height of a 3-D chart as a percentage of the chart width
    </summary>
    */
    int GetHeightPercent ();
    void SetHeightPercent (int value);
    /*
    <summary>
        If true - serie 3D; otherwise serie 2D. Read-only.
    </summary>
    */
    bool GetIs3D ();
    /*
    <summary>
        True if this surface chart has shading.
    </summary>
    */
    bool GetIs3DPhongShade ();
    void SetIs3DPhongShade (bool value);
    /*
    <summary>
        This area has a shadow.
    </summary>
    */
    bool GetIsAreaShadowed ();
    void SetIsAreaShadowed (bool value);
    bool GetIsBubbles ();
    void SetIsBubbles (bool value);
    bool GetIsBubbleSize ();
    void SetIsBubbleSize (bool value);
    bool GetIsCategoryBrokenDown ();
    void SetIsCategoryBrokenDown (bool value);
    bool GetIsCategoryName ();
    void SetIsCategoryName (bool value);
    bool GetIsChartChartLine ();
    /*
    <summary>
        If true - format contains series line. Read-only.
    </summary>
    */
    bool GetIsChartLineFormat ();
    bool GetIsClustered ();
    void SetIsClustered (bool value);
    /*
    <summary>
        Indicates whether elevation has default value.
    </summary>
    */
    bool GetIsDefaultElevation ();
    /*
    <summary>
        Indicates whether rotation has default value.
    </summary>
    */
    bool GetIsDefaultRotation ();
    /*
    <summary>
        If true - format contains drop bar record. Read-only.
    </summary>
    */
    bool GetIsDropBar ();
    bool GetIsFillSurface ();
    void SetIsFillSurface (bool value);
    bool GetIsHorizontalBar ();
    void SetIsHorizontalBar (bool value);
    bool GetIsLine ();
    /*
    <summary>
        If true - format has marker; otherwise false. Read-only.
    </summary>
    */
    bool GetIsMarker ();
    bool GetIsPercentage ();
    void SetIsPercentage (bool value);
private:
};
}}
