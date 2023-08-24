#pragma once
#include "pch.h"

//#pragma warning(push)
//#pragma warning(disable:4250)
//#include "IChartLegendEntry.h"
//#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS IChartLegendEntries : public virtual Object
{
    friend class IChartLegend;
    friend class XlsChartLegend;
public:
    virtual int GetCount ()=0;
    virtual intrusive_ptr<IChartLegendEntry> Get (int iIndex)=0;
private:
};
}}
