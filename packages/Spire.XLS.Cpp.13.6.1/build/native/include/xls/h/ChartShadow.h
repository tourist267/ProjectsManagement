#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "ICloneParent.h"
#include "IShadow.h"
#include "XlsObject.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS ChartShadow : public virtual XlsObject,public virtual IShadow,public virtual ICloneParent
{
    friend class IChartAxis;
    friend class IChartFillBorder;
    friend class IChartGridLine;
    friend class XlsChartAxis;
    friend class XlsChartDropBar;
    friend class XlsChartFrameFormat;
    friend class XlsChartGridLine;
    friend class XlsChartSerieDataFormat;
    friend class XlsChartWallOrFloor;
public:
    virtual XLSXChartShadowOuterType GetShadowOuterType ();
    virtual void SetShadowOuterType (XLSXChartShadowOuterType value);
    virtual XLSXChartShadowInnerType GetShadowInnerType ();
    virtual void SetShadowInnerType (XLSXChartShadowInnerType value);
    virtual XLSXChartPrespectiveType GetShadowPrespectiveType ();
    virtual void SetShadowPrespectiveType (XLSXChartPrespectiveType value);
    virtual bool GetHasCustomStyle ();
    virtual void SetHasCustomStyle (bool value);
    virtual int GetTransparency ();
    virtual void SetTransparency (int value);
    virtual int GetSize ();
    virtual void SetSize (int value);
    virtual int GetBlur ();
    virtual void SetBlur (int value);
    virtual int GetAngle ();
    virtual void SetAngle (int value);
    virtual int GetDistance ();
    virtual void SetDistance (int value);
    virtual intrusive_ptr<Color> GetColor ();
    virtual void SetColor (intrusive_ptr<Color> value);
    /*
    <summary>
        Gets or sets the radio of soft edge.
    </summary>
    */
    virtual int GetSoftEdge ();
    virtual void SetSoftEdge (int value);
    virtual void CustomShadowStyles (XLSXChartShadowOuterType iOuter,int iTransparency,int iSize,int iBlur,int iAngle,int iDistance,bool iCustomShadowStyle);
    virtual void CustomShadowStyles (XLSXChartShadowInnerType iInner,int iTransparency,int iBlur,int iAngle,int iDistance,bool iCustomShadowStyle);
    virtual void CustomShadowStyles (XLSXChartPrespectiveType iPerspective,int iTransparency,int iSize,int iBlur,int iAngle,int iDistance,bool iCustomShadowStyle);
    //virtual System.Object Clone (System.Object parent);
private:
};
}}
