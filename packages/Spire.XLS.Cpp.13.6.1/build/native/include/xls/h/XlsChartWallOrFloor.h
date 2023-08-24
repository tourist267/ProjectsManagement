#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IChartFillBorder.h"
#include "IChartWallOrFloor.h"
#include "XlsObject.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS XlsChartWallOrFloor : public virtual XlsObject,public virtual IChartWallOrFloor
{
public:
    virtual intrusive_ptr<ChartBorder> GetBorder ();
    virtual bool GetHasInterior ();
    virtual bool GetHasLineProperties ();
    virtual bool GetHasFormat3D ();
    virtual bool GetHasShadow ();
    virtual intrusive_ptr<ChartBorder> GetLineProperties ();
    virtual intrusive_ptr<IChartInterior> GetInterior ();
    virtual intrusive_ptr<IShapeFill> GetFill ();
    virtual intrusive_ptr<Format3D> GetFormat3D ();
    virtual intrusive_ptr<ChartShadow> GetShadow ();
    virtual void Delete ();
    //System.Object Clone (System.Object parent);
    void SetToDefault ();
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
        Represents foreground color.
    </summary>
    */
    virtual intrusive_ptr<OColor> GetForeGroundColorObject ();
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
    virtual ExcelColors GetBackGroundKnownColor ();
    virtual void SetBackGroundKnownColor (ExcelColors value);
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
        Represents if use automatic format.
    </summary>
    */
    virtual bool GetIsAutomaticFormat ();
    virtual void SetIsAutomaticFormat (bool value);
    /*
    <summary>
        Represents visible.
    </summary>
    */
    virtual bool GetVisible ();
    virtual void SetVisible (bool value);
private:
};
}}
