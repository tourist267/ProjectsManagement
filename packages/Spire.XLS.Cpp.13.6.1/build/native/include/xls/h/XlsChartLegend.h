#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IChartLegend.h"
#include "XlsObject.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS XlsChartLegend : public virtual XlsObject,public virtual IChartLegend
{
public:
    /*
    <summary>
        Automatic positioning .
    </summary>
    */
    bool GetAutoPosition ();
    virtual intrusive_ptr<IChartTextArea> GetTextArea ();
    /*
    <summary>
        X-position of upper-left corner. 1/4000 of chart plot.
            IsXMode Shall set to True
    </summary>
    */
    virtual int GetX ();
    virtual void SetX (int value);
    /*
    <summary>
        Y-position of upper-left corner. 1/4000 of chart plot. 
            IsYMode Shall set to True
    </summary>
    */
    virtual int GetY ();
    virtual void SetY (int value);
    /*
    <summary>
        Legend position type.
    </summary>
    */
    virtual LegendPositionType GetPosition ();
    virtual void SetPosition (LegendPositionType value);
    /*
    <summary>
        Indicates whether if vertical legend.
    </summary>
    */
    virtual bool GetIsVerticalLegend ();
    virtual void SetIsVerticalLegend (bool value);
    /*
    <summary>
        Show legend without overlapping. Default is True.
    </summary>
    */
    virtual bool GetIncludeInLayout ();
    virtual void SetIncludeInLayout (bool value);
    virtual bool GetInnerLayoutTarget ();
    virtual void SetInnerLayoutTarget (bool value);
    /*
    <summary>
        false value Specifies that the Width shall be interpreted
            as the Right of the chart element..
    </summary>
    */
    virtual bool GetIsWMode ();
    virtual void SetIsWMode (bool value);
    /*
    <summary>
        false value Specifies that the Height shall be interpreted
            as the Bottom of the chart element..
    </summary>
    */
    virtual bool GetIsHMode ();
    virtual void SetIsHMode (bool value);
    /*
    <summary>
        true value Specifies that the X shall be interpreted
            as the Left of the chart element..
    </summary>
    */
    virtual bool GetIsXMode ();
    virtual void SetIsXMode (bool value);
    /*
    <summary>
        true value Specifies that the Y shall be interpreted
            as the Top of the chart element..
    </summary>
    */
    virtual bool GetIsYMode ();
    virtual void SetIsYMode (bool value);
    virtual intrusive_ptr<IChartLegendEntries> GetLegendEntries ();
    /*
    <summary>
        X-size. 1/4000 of chart plot. IsWMode Shall set to True
    </summary>
    */
    virtual int GetWidth ();
    virtual void SetWidth (int value);
    /*
    <summary>
        Y-size. 1/4000 of chart plot. IsHMode Shall set to True
    </summary>
    */
    virtual int GetHeight ();
    virtual void SetHeight (int value);
    /*
    <summary>
        X positioning is automatic.
    </summary>
    */
    virtual bool GetAutoPositionX ();
    virtual void SetAutoPositionX (bool value);
    /*
    <summary>
        Y positioning is automatic.
    </summary>
    */
    virtual bool GetAutoPositionY ();
    virtual void SetAutoPositionY (bool value);
    intrusive_ptr<IChartFrameFormat> GetFrameFormat ();
    /*
    <summary>
        True if chart contains data table.
    </summary>
    */
    bool GetHasDataTable ();
    void SetHasDataTable (bool value);
    virtual void Clear ();
    virtual void Delete ();
    //intrusive_ptr<XlsChartLegend> Clone (System.Object parent,System.Collections.Generic.Dictionary`2[[System.Int32, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089],[System.Int32, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089]] dicFontIndexes,System.Collections.Generic.Dictionary`2[[System.String, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089],[System.String, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089]] dicNewSheetNames);
private:
};
}}
