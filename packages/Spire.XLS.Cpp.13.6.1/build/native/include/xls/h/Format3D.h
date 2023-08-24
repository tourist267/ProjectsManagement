#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "ICloneParent.h"
#include "IFormat3D.h"
#include "XlsObject.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS Format3D : public virtual XlsObject,public virtual IFormat3D,public virtual ICloneParent
{
    friend class IChartFillBorder;
    friend class IChartGridLine;
    friend class XlsChartDropBar;
    friend class XlsChartFrameFormat;
    friend class XlsChartGridLine;
    friend class XlsChartSerieDataFormat;
    friend class XlsChartWallOrFloor;
public:
    virtual XLSXChartBevelType GetBevelTopType ();
    virtual void SetBevelTopType (XLSXChartBevelType value);
    virtual XLSXChartBevelType GetBevelBottomType ();
    virtual void SetBevelBottomType (XLSXChartBevelType value);
    virtual XLSXChartMaterialType GetMaterialType ();
    virtual void SetMaterialType (XLSXChartMaterialType value);
    virtual XLSXChartLightingType GetLightingType ();
    virtual void SetLightingType (XLSXChartLightingType value);
    virtual double GetBevelTopWidth ();
    virtual void SetBevelTopWidth (double value);
    virtual double GetBevelTopHeight ();
    virtual void SetBevelTopHeight (double value);
    virtual double GetBevelBottomWidth ();
    virtual void SetBevelBottomWidth (double value);
    virtual double GetBevelBottomHeight ();
    virtual void SetBevelBottomHeight (double value);
    virtual double GetExtrusionHeight ();
    virtual void SetExtrusionHeight (double value);
    virtual intrusive_ptr<Color> GetExtrusionColor ();
    virtual void SetExtrusionColor (intrusive_ptr<Color> value);
    virtual double GetContourWidth ();
    virtual void SetContourWidth (double value);
    virtual intrusive_ptr<Color> GetContourColor ();
    virtual void SetContourColor (intrusive_ptr<Color> value);
    virtual double GetLightingAngle ();
    virtual void SetLightingAngle (double value);
    //virtual System.Object Clone (System.Object parent);
private:
};
}}
