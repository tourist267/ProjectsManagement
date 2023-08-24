#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IExcelApplication.h"
#pragma warning(pop)

namespace Spire{namespace Xls{
class EXPORTS IChartDataPoints : public virtual IExcelApplication
{
    friend class IChartSerie;
    friend class XlsChartSerie;
public:
    virtual intrusive_ptr<IChartDataPoint> GetDefaultDataPoint ()=0;
    virtual intrusive_ptr<IChartDataPoint> Get (int index)=0;
private:
};
}}
