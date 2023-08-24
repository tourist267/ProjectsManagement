#pragma once
#include "pch.h"

//#pragma warning(push)
//#pragma warning(disable:4250)
//#include "XLSXChartBevelType.h"
//#include "XLSXChartLightingType.h"
//#include "XLSXChartMaterialType.h"
//#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS IFormat3D : public virtual Object
{
    friend class ExcelCommentObject;
    friend class IChartAxis;
    friend class IChartErrorBars;
    friend class IChartTrendLine;
    friend class IShape;
    friend class XlsChartAxis;
    friend class CommentsRange;
    friend class XlsShape;
public:
    virtual XLSXChartBevelType GetBevelTopType ()=0;
    virtual void SetBevelTopType (XLSXChartBevelType value)=0;
    virtual XLSXChartBevelType GetBevelBottomType ()=0;
    virtual void SetBevelBottomType (XLSXChartBevelType value)=0;
    virtual XLSXChartMaterialType GetMaterialType ()=0;
    virtual void SetMaterialType (XLSXChartMaterialType value)=0;
    virtual XLSXChartLightingType GetLightingType ()=0;
    virtual void SetLightingType (XLSXChartLightingType value)=0;
    virtual double GetBevelTopWidth ()=0;
    virtual void SetBevelTopWidth (double value)=0;
    virtual double GetBevelTopHeight ()=0;
    virtual void SetBevelTopHeight (double value)=0;
    virtual double GetBevelBottomWidth ()=0;
    virtual void SetBevelBottomWidth (double value)=0;
    virtual double GetBevelBottomHeight ()=0;
    virtual void SetBevelBottomHeight (double value)=0;
    virtual double GetContourWidth ()=0;
    virtual void SetContourWidth (double value)=0;
    virtual double GetExtrusionHeight ()=0;
    virtual void SetExtrusionHeight (double value)=0;
    virtual intrusive_ptr<Color> GetContourColor ()=0;
    virtual void SetContourColor (intrusive_ptr<Color> value)=0;
    virtual intrusive_ptr<Color> GetExtrusionColor ()=0;
    virtual void SetExtrusionColor (intrusive_ptr<Color> value)=0;
    virtual double GetLightingAngle ()=0;
    virtual void SetLightingAngle (double value)=0;
private:
};
}}
