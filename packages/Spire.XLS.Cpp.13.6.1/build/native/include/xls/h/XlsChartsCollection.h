#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "ICharts.h"
#include "CollectionBase.h"
#include "XlsChart.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS XlsChartsCollection : public virtual CollectionBase<XlsChart>,public virtual ICharts
{
public:
    virtual intrusive_ptr<IChart> Get (LPCWSTR_S name);
    virtual intrusive_ptr<IChart> Add ();
    virtual intrusive_ptr<IChart> Add (LPCWSTR_S name);
    virtual intrusive_ptr<IChart> Remove (LPCWSTR_S name);
    void Move (int oldIndex,int newIndex);
    intrusive_ptr<IChart> Add (intrusive_ptr<IChart> chartToAdd);
    virtual int GetCount();
    virtual intrusive_ptr<IChart> Get(int index);
private:
};
}}
