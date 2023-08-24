#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IChartAxis.h"
#include "XlsObject.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS XlsChartAxis : public virtual XlsObject,public virtual IChartAxis
{
    friend class XlsChartCategoryAxis;
    friend class XlsChartSeriesAxis;
    friend class XlsChartValueAxis;
public:
    /*
    <summary>
        Type of the axis.
    </summary>
    */
    virtual AxisType GetAxisType ();
    void SetAxisType (AxisType value);
    /*
    <summary>
        True if this is primary axis.
    </summary>
    */
    bool GetIsPrimary ();
    /*
    <summary>
        Title of the axis.
    </summary>
    */
    virtual LPCWSTR_S GetTitle ();
    virtual void SetTitle (LPCWSTR_S value);
    virtual int GetTextRotationAngle ();
    virtual void SetTextRotationAngle (int value);
    bool GetIsAutoTextRotation ();
    /*
    <summary>
        Returns text area for the axis title. Read-only.
    </summary>
    */
    virtual intrusive_ptr<IChartTextArea> GetTitleArea ();
    virtual intrusive_ptr<IFont> GetFont ();
    /*
    <summary>
        Return frame format of Axis. Read-only.
    </summary>
    */
    intrusive_ptr<IChartFrameFormat> GetFrameFormat ();
    bool GetHas3dProperties ();
    /*
    <summary>
        Indicates wheather the axis has title
    </summary>
    */
    bool GetHasAxisTitle ();
    virtual intrusive_ptr<IChartGridLine> GetMajorGridLines ();
    virtual intrusive_ptr<IChartGridLine> GetMinorGridLines ();
    /*
    <summary>
        True if the axis has minor gridlines. Only axes in the primary axis group can have gridlines.
    </summary>
    */
    virtual bool GetHasMinorGridLines ();
    virtual void SetHasMinorGridLines (bool value);
    /*
    <summary>
        True if the axis has major gridlines. Only axes in the primary axis group can have gridlines.
    </summary>
    */
    virtual bool GetHasMajorGridLines ();
    virtual void SetHasMajorGridLines (bool value);
    /*
    <summary>
        Gets or sets format index.
    </summary>
    */
    int GetNumberFormatIndex ();
    void SetNumberFormatIndex (int value);
    /*
    <summary>
        Gets or sets number format string.
    </summary>
    */
    virtual LPCWSTR_S GetNumberFormat ();
    virtual void SetNumberFormat (LPCWSTR_S value);
    virtual TickMarkType GetMinorTickMark ();
    virtual void SetMinorTickMark (TickMarkType value);
    virtual TickMarkType GetMajorTickMark ();
    virtual void SetMajorTickMark (TickMarkType value);
    virtual intrusive_ptr<ChartBorder> GetBorder ();
    /*
    <summary>
        Represents tick label position.
    </summary>
    */
    virtual TickLabelPositionType GetTickLabelPosition ();
    virtual void SetTickLabelPosition (TickLabelPositionType value);
    /*
    <summary>
        Axis is show Multi-level category lables.
    </summary>
    */
    bool GetMultiLevelLable ();
    void SetMultiLevelLable (bool value);
    /*
    <summary>
        Indicates is axis is visible.
    </summary>
    */
    virtual bool GetVisible ();
    virtual void SetVisible (bool value);
    /*
    <summary>
        Represents alignment for the tick label.
    </summary>
    */
    virtual AxisTextDirectionType GetAlignment ();
    virtual void SetAlignment (AxisTextDirectionType value);
    /*
    <summary>
        True if plots data points from last to first.
    </summary>
    */
    virtual bool GetIsReversed ();
    virtual void SetIsReversed (bool value);
    /*
    <summary>
        Gets axis id.
    </summary>
    */
    int GetAxisId ();
    virtual intrusive_ptr<IFormat3D> GetChart3DOptions ();
    intrusive_ptr<IFormat3D> GetChart3DProperties ();
    bool GetDeleted ();
    void SetDeleted (bool value);
    ChartParagraphType GetParagraphType ();
    void SetParagraphType (ChartParagraphType value);
    /*
    <summary>
        Represents the Shadow.Read-only
    </summary>
    */
    virtual intrusive_ptr<ChartShadow> GetShadow ();
    intrusive_ptr<IShadow> GetShadowProperties ();
    bool GetAutoTickLabelSpacing ();
    void SetAutoTickLabelSpacing (bool value);
    bool GetAutoTickMarkSpacing ();
    void SetAutoTickMarkSpacing (bool value);
    virtual bool GetIsSourceLinked ();
    virtual void SetIsSourceLinked (bool value);
    //virtual intrusive_ptr<XlsChartAxis> Clone (System.Object parent,System.Collections.Generic.Dictionary`2[[System.Int32, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089],[System.Int32, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089]] dicFontIndexes,System.Collections.Generic.Dictionary`2[[System.String, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089],[System.String, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089]] dicNewSheetNames);
private:
};
}}
