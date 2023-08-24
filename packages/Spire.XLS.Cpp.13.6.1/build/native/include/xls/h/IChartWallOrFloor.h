#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IChartFillBorder.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
/*
    <summary>
        Interface that represents chart wall or floor.
    </summary>
*/
class EXPORTS IChartWallOrFloor : public virtual IChartFillBorder
{
    friend class IChart;
    friend class XlsChart;
    friend class XlsChartShape;
public:
    virtual intrusive_ptr<ChartBorder> GetBorder ()=0;
    virtual void Delete ()=0;
private:
};
}}
