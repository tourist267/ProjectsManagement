#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "ICloneParent.h"
#include "IChartBorder.h"
#include "XlsObject.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS XlsChartBorder : public virtual XlsObject,public virtual IChartBorder,public virtual ICloneParent
{
public:
    /*
    <summary>
        Color of line.
    </summary>
    */
    virtual intrusive_ptr<Color> GetColor ();
    virtual void SetColor (intrusive_ptr<Color> value);
    /*
    <summary>
        Line pattern.
    </summary>
    */
    virtual ChartLinePatternType GetPattern ();
    virtual void SetPattern (ChartLinePatternType value);
    /*
    <summary>
        Weight of line.
    </summary>
    */
    virtual ChartLineWeightType GetWeight ();
    virtual void SetWeight (ChartLineWeightType value);
    virtual bool GetUseDefaultFormat ();
    virtual void SetUseDefaultFormat (bool value);
    /*
    <summary>
        Indicates if custom line color.
    </summary>
    */
    virtual bool GetUseDefaultLineColor ();
    virtual void SetUseDefaultLineColor (bool value);
    /*
    <summary>
        Line  excel color.
    </summary>
    */
    virtual ExcelColors GetKnownColor ();
    virtual void SetKnownColor (ExcelColors value);
    virtual double GetTransparency ();
    virtual void SetTransparency (double value);
    float GetCustomLineWeight ();
    void SetCustomLineWeight (float value);
    //intrusive_ptr<XlsChartBorder> Clone (System.Object parent);
private:
};
}}
