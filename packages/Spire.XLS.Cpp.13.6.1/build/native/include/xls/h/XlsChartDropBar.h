#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IChartFillBorder.h"
#include "IChartDropBar.h"
#include "XlsObject.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS XlsChartDropBar : public virtual XlsObject, public virtual IChartDropBar
{
public:
    virtual bool GetHasInterior ();
    virtual bool GetHasLineProperties ();
    virtual bool GetHasFormat3D ();
    virtual bool GetHasShadow ();
    virtual intrusive_ptr<ChartBorder> GetLineProperties ();
    virtual intrusive_ptr<IChartInterior> GetInterior ();
    virtual intrusive_ptr<IShapeFill> GetFill ();
    virtual intrusive_ptr<Format3D> GetFormat3D ();
    int GetGapWidth ();
    void SetGapWidth (int value);
    virtual intrusive_ptr<ChartShadow> GetShadow ();
    /*
    <summary>
        Gets or sets foreground color.
    </summary>
    */
    virtual intrusive_ptr<OColor> GetForeGroundColorObject ();
    virtual intrusive_ptr<Color> GetForeGroundColor ();
    virtual void SetForeGroundColor (intrusive_ptr<Color> value);
    virtual ExcelColors GetForeGroundKnownColor ();
    virtual void SetForeGroundKnownColor (ExcelColors value);
    /*
    <summary>
        Gets or sets background color.
    </summary>
    */
    virtual intrusive_ptr<Color> GetBackGroundColor ();
    virtual void SetBackGroundColor (intrusive_ptr<Color> value);
    /*
    <summary>
        Gets or sets background color.
    </summary>
    */
    virtual ExcelColors GetBackGroundKnownColor ();
    virtual void SetBackGroundKnownColor (ExcelColors value);
    virtual intrusive_ptr<OColor> GetBackGroundColorObject ();
    /*
    <summary>
        Gets pattern.
    </summary>
    */
    virtual ExcelPatternType GetPattern ();
    virtual void SetPattern (ExcelPatternType value);
    /*
    <summary>
        Gets if use automatic format.
    </summary>
    */
    virtual bool GetIsAutomaticFormat ();
    virtual void SetIsAutomaticFormat (bool value);
    /*
    <summary>
        Gets or sets visiblity.
    </summary>
    */
    virtual bool GetVisible ();
    virtual void SetVisible (bool value);
    //intrusive_ptr<XlsChartDropBar> Clone (System.Object parent);
private:
};
}}
