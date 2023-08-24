#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IChartGridLine.h"
#include "XlsObject.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS XlsChartGridLine : public virtual XlsObject,public virtual IChartGridLine
{
public:
    /*
    <summary>
        Gets or sets axis line type.
    </summary>
    */
    AxisLineIdentifierType GetAxisLineType ();
    /*
    <summary>
        Gets line border. 
    </summary>
    */
    virtual intrusive_ptr<ChartBorder> GetBorder ();
    virtual intrusive_ptr<Format3D> GetFormat3D ();
    bool GetHasFormat3D ();
    virtual bool GetHasInterior ();
    /*
    <summary>
        Indicates whether line formatting object was created.
    </summary>
    */
    bool GetHasLineProperties ();
    bool GetHasShadow ();
    virtual intrusive_ptr<ChartShadow> GetShadow ();
    /*
    <summary>
        Gets line border.
    </summary>
    */
    virtual intrusive_ptr<ChartBorder> GetLineProperties ();
    virtual intrusive_ptr<IChartInterior> GetInterior ();
    virtual intrusive_ptr<IShapeFill> GetFill ();
    //virtual System.Object Clone (System.Object parent);
    virtual void Delete ();
private:
};
}}
