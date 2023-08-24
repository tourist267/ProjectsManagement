#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "XlsPivotTable.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS PivotTable : public virtual XlsPivotTable
{
    friend class IPivotTables;
    friend class IChart;
    friend class XlsChart;
    friend class XlsChartShape;
    friend class XlsPivotTablesCollection;
public:
private:
};
}}
