#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IChartShapes.h"
#include "CollectionBase.h"
#include "XlsChartShape.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS XlsWorksheetChartsCollection : public virtual CollectionBase<XlsChartShape>,public virtual IChartShapes
{
public:
    virtual intrusive_ptr<XlsChartShape> Get (int index);
    virtual int GetCount();
    virtual void RemoveAt(int index);
private:
};
}}
