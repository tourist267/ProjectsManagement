#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IChartFillBorder.h"
#pragma warning(pop)

namespace Spire{namespace Xls{
class EXPORTS IChartDropBar : public virtual IChartFillBorder
{
    friend class IChartFormat;
    friend class XlsChartFormat;
public:
private:
};
}}
