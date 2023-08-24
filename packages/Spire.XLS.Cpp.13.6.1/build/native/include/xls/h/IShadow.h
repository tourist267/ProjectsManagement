#pragma once
#include "pch.h"

//#pragma warning(push)
//#pragma warning(disable:4250)
//#include "XLSXChartPrespectiveType.h"
//#include "XLSXChartShadowInnerType.h"
//#include "XLSXChartShadowOuterType.h"
//#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS IShadow : public virtual Object
{
    friend class ExcelCommentObject;
    friend class IChartErrorBars;
    friend class IChartTrendLine;
    friend class IShape;
    friend class XlsChartAxis;
    friend class CommentsRange;
    friend class XlsShape;
public:
    virtual XLSXChartShadowOuterType GetShadowOuterType ()=0;
    virtual void SetShadowOuterType (XLSXChartShadowOuterType value)=0;
    virtual XLSXChartShadowInnerType GetShadowInnerType ()=0;
    virtual void SetShadowInnerType (XLSXChartShadowInnerType value)=0;
    virtual XLSXChartPrespectiveType GetShadowPrespectiveType ()=0;
    virtual void SetShadowPrespectiveType (XLSXChartPrespectiveType value)=0;
    virtual bool GetHasCustomStyle ()=0;
    virtual void SetHasCustomStyle (bool value)=0;
    virtual int GetTransparency ()=0;
    virtual void SetTransparency (int value)=0;
    virtual int GetSize ()=0;
    virtual void SetSize (int value)=0;
    virtual int GetBlur ()=0;
    virtual void SetBlur (int value)=0;
    virtual int GetAngle ()=0;
    virtual void SetAngle (int value)=0;
    virtual int GetDistance ()=0;
    virtual void SetDistance (int value)=0;
    virtual intrusive_ptr<Color> GetColor ()=0;
    virtual void SetColor (intrusive_ptr<Color> value)=0;
    virtual int GetSoftEdge ()=0;
    virtual void SetSoftEdge (int value)=0;
    virtual void CustomShadowStyles (XLSXChartShadowOuterType iOuter,int iTransparency,int iSize,int iBlur,int iAngle,int iDistance,bool iCustomShadowStyle)=0;
    virtual void CustomShadowStyles (XLSXChartShadowInnerType iInner,int iTransparency,int iBlur,int iAngle,int iDistance,bool iCustomShadowStyle)=0;
    virtual void CustomShadowStyles (XLSXChartPrespectiveType iPerspective,int iTransparency,int iSize,int iBlur,int iAngle,int iDistance,bool iCustomShadowStyle)=0;
private:
};
}}
