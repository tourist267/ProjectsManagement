#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IChartFillBorder.h"
#include "IChartSerieDataFormat.h"
#include "XlsObject.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS XlsChartSerieDataFormat : public virtual XlsObject,public virtual IChartSerieDataFormat
{
    friend class XlsChartDataLabels;
    friend class XlsChartFormat;
    friend class XlsChartDataPointsCollection;
public:
    /*
    <summary>
        Gets or sets a boolean value indicating whether to display
            Mean Marker in Box and Whisker chart
    </summary>
    */
    bool GetShowMeanMarkers ();
    void SetShowMeanMarkers (bool value);
    /*
    <summary>
        Gets or sets a boolean value indicating whether to display
            Inner Points in Box and Whisker chart
    </summary>
    */
    bool GetShowInnerPoints ();
    void SetShowInnerPoints (bool value);
    /*
    <summary>
        Gets or sets a boolean value indicating whether to display
            Outlier Points in Box and Whisker chart
    </summary>
    */
    bool GetShowOutlierPoints ();
    void SetShowOutlierPoints (bool value);
    /*
    <summary>
         Gets / Sets whether the Quartile calculation is Exclusive or Inclusive
    </summary>
    <remarks>Applies only to Box and Whisker Charts</remarks>
    */
    ExcelQuartileCalculation GetQuartileCalculationType ();
    void SetQuartileCalculationType (ExcelQuartileCalculation value);
    /*
    <summary>
        Gets object that holds marker background color.
    </summary>
    */
    intrusive_ptr<OColor> GetMarkerBackColorObject ();
    /*
    <summary>
        Gets object that holds marker foreground color.
    </summary>
    */
    intrusive_ptr<OColor> GetMarkerForeColorObject ();
    virtual intrusive_ptr<IChartInterior> GetAreaProperties ();
    virtual BaseFormatType GetBarType ();
    virtual void SetBarType (BaseFormatType value);
    virtual TopFormatType GetBarTopType ();
    virtual void SetBarTopType (TopFormatType value);
    virtual intrusive_ptr<Color> GetMarkerBackgroundColor ();
    virtual void SetMarkerBackgroundColor (intrusive_ptr<Color> value);
    virtual intrusive_ptr<Color> GetMarkerForegroundColor ();
    virtual void SetMarkerForegroundColor (intrusive_ptr<Color> value);
    virtual ChartMarkerType GetMarkerStyle ();
    virtual void SetMarkerStyle (ChartMarkerType value);
    virtual ExcelColors GetMarkerForegroundKnownColor ();
    virtual void SetMarkerForegroundKnownColor (ExcelColors value);
    virtual ExcelColors GetMarkerBackgroundKnownColor ();
    virtual void SetMarkerBackgroundKnownColor (ExcelColors value);
    virtual int GetMarkerSize ();
    virtual void SetMarkerSize (int value);
    virtual bool GetIsAutoMarker ();
    virtual void SetIsAutoMarker (bool value);
    virtual int GetPercent ();
    virtual void SetPercent (int value);
    virtual bool GetIs3DBubbles ();
    virtual void SetIs3DBubbles (bool value);
    virtual intrusive_ptr<IChartFormat> GetOptions ();
    virtual bool GetIsMarkerSupported ();
    bool GetIsShadow ();
    void SetIsShadow (bool value);
    /*
    <summary>
        True = "background = none".
    </summary>
    */
    bool GetIsShowBackground ();
    /*
    <summary>
        True = "foreground = none".
    </summary>
    */
    bool GetIsShowForeground ();
    /*
    <summary>
        If true - format has smothed line; otherwise false. Read-only.
    </summary>
    */
    bool GetIsSmoothed ();
    bool GetIsSmoothedLine ();
    void SetIsSmoothedLine (bool value);
    /*
    <summary>
        Indicats whether chart supports transparency.
    </summary>
    */
    bool GetIsSupportFill ();
    virtual bool GetHasInterior ();
    virtual bool GetHasLineProperties ();
    virtual bool GetHasFormat3D ();
    virtual bool GetHasShadow ();
    virtual intrusive_ptr<ChartBorder> GetLineProperties ();
    virtual intrusive_ptr<IChartInterior> GetInterior ();
    virtual intrusive_ptr<IShapeFill> GetFill ();
    /*
    <summary>
        Get fill object of the marker.
            <example><para>The following code illustrates how to fill a marker . </para><code>
        var markerFill = chart.Series[0].Format.MarkerFill;
        //fill by defined Texture
        markerFill.Texture = GradientTextureType.GreenMarble;
        
        //fill by defined Pattern
        markerFill.Pattern = GradientPatternType.PatLargeCheckerBoard;
        //Pattern need set fore/background color
        markerFill.ForeColor = Color.Blue;
        markerFill.BackColor = Color.Red;
        //fill by a picture
        markerFill.CustomPicture("type1.png")
        //set transparency: value from 0.0 (Clear) through 1.0(Opaque)
        markerFill.Transparency = 0.5;
        </code>
        </example>
    </summary>
    */
    intrusive_ptr<IShapeFill> GetMarkerFill ();
    virtual intrusive_ptr<Format3D> GetFormat3D ();
    virtual intrusive_ptr<ChartShadow> GetShadow ();
    /*
    <summary>
        Represents foreground color.
    </summary>
    */
    virtual intrusive_ptr<Color> GetForeGroundColor ();
    virtual void SetForeGroundColor (intrusive_ptr<Color> value);
    /*
    <summary>
        Represents foreground color.
    </summary>
    */
    virtual ExcelColors GetForeGroundKnownColor ();
    virtual void SetForeGroundKnownColor (ExcelColors value);
    /*
    <summary>
        Gets or sets the transparency of the line marker.
    </summary>
    <value>The transparency.</value>
    */
    double GetMarkerTransparencyValue ();
    void SetMarkerTransparencyValue (double value);
    /*
    <summary>
        Represents foreground color object.
    </summary>
    */
    virtual intrusive_ptr<OColor> GetForeGroundColorObject ();
    /*
    <summary>
        Represents background excel color.
    </summary>
    */
    virtual ExcelColors GetBackGroundKnownColor ();
    virtual void SetBackGroundKnownColor (ExcelColors value);
    /*
    <summary>
        Represents background color.
    </summary>
    */
    virtual intrusive_ptr<Color> GetBackGroundColor ();
    virtual void SetBackGroundColor (intrusive_ptr<Color> value);
    /*
    <summary>
        Represents background color.
    </summary>
    */
    virtual intrusive_ptr<OColor> GetBackGroundColorObject ();
    /*
    <summary>
        Represents pattern.
    </summary>
    */
    virtual ExcelPatternType GetPattern ();
    virtual void SetPattern (ExcelPatternType value);
    /*
    <summary>
        Indicates, if automatic format is used.
    </summary>
    */
    virtual bool GetIsAutomaticFormat ();
    virtual void SetIsAutomaticFormat (bool value);
    /*
    <summary>
        Represents visiblity.
    </summary>
    */
    virtual bool GetVisible ();
    virtual void SetVisible (bool value);
    bool GetShowActiveValue ();
    void SetShowActiveValue (bool value);
    /*
    <summary>
        Indicates whether dataformat has PieExplosion.
    </summary>
    */
    bool GetHas_dPtPieExplosion ();
    void SetHas_dPtPieExplosion (bool value);
    /*
    <summary>
        Indicates whether chart has border.
    </summary>
    */
    bool GetHasBorder ();
    /*
    <summary>
        Indicates whethers chart has border line.
    </summary>
    */
    bool GetHasBorderLine ();
    /*
    <summary>
        Indicates whether border object is supported. Read-only.
    </summary>
    */
    bool GetIsBorderSupported ();
    /*
    <summary>
        Indicate if data format is formatted.
    </summary>
    */
    bool GetIsFormatted ();
    /*
    <summary>
        Indicates whether interior object is supported. Read-only.
    </summary>
    */
    bool GetIsInteriorSupported ();
    /*
    <summary>
        If true - format has marker; otherwise false. Read-only.
    </summary>
    */
    bool GetIsMarker ();
    intrusive_ptr<XlsChartSerie> GetParentSerie ();
    int GetSeriesNumber ();
    void SetSeriesNumber (int value);
    bool GetShowBubble ();
    void SetShowBubble (bool value);
    bool GetShowCategoryLabel ();
    void SetShowCategoryLabel (bool value);
    bool GetShowPieInPercents ();
    void SetShowPieInPercents (bool value);
    bool GetShowPieCategoryLabel ();
    void SetShowPieCategoryLabel (bool value);
    bool GetSmoothLine ();
    void SetSmoothLine (bool value);
    /*
    <summary>
        Marker border weight(unit pt).
    </summary>
    */
    double GetMarkerBorderWidth ();
    void SetMarkerBorderWidth (double value);
    /*
    <summary>
        Gets or sets a boolean value indicating whether to display 
            Connector Lines between data points
    </summary>
    <remarks>Applies only to Waterfall Charts</remarks>
    */
    bool GetShowConnectorLines ();
    void SetShowConnectorLines (bool value);
    /*
    <summary>
        Gets / Sets the Display label position in Tree map chart
    </summary>
    <remarks>By Default the Label is overlapped</remarks>
    */
    ExcelTreeMapLabelOption GetTreeMapLabelOption ();
    void SetTreeMapLabelOption (ExcelTreeMapLabelOption value);
    /*
    <summary>
        Gets or sets a boolean value indicating whether to display
            Mean Line in Box and Whisker chart
    </summary>
    */
    bool GetShowMeanLine ();
    void SetShowMeanLine (bool value);
private:
};
}}
