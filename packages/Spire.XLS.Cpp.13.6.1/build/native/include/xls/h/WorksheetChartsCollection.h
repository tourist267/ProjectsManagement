#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "XlsWorksheetChartsCollection.h"
#include "Chart.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS WorksheetChartsCollection : public virtual XlsWorksheetChartsCollection
{
    friend class Worksheet;
public:
    intrusive_ptr<Chart> Add ();
    intrusive_ptr<Chart> Add (ExcelChartType chartType);
    intrusive_ptr<Chart> AddCopy (intrusive_ptr<Chart> chart,int upperLeftRow,int upperLeftColumn,int lowerRightRow,int lowerRightColumn);
    intrusive_ptr<Chart> Add (ExcelChartType pivotChartType,intrusive_ptr<IPivotTable> pivotTable);
    intrusive_ptr<XlsChartShape> Get (int index);
private:
};
}}
