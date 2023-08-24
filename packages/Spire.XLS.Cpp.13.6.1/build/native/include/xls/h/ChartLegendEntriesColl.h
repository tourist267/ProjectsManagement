#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IChartLegendEntries.h"
#include "XlsObject.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS ChartLegendEntriesColl : public virtual XlsObject,public virtual IChartLegendEntries
{
    friend class ChartLegend;
public:
    virtual int GetCount ();
    virtual intrusive_ptr<IChartLegendEntry> Get (int iIndex);
    intrusive_ptr<XlsChartLegendEntry> Add (int iIndex);
    intrusive_ptr<XlsChartLegendEntry> Add (int iIndex,intrusive_ptr<XlsChartLegendEntry> entry);
    bool Contains (int iIndex);
    bool CanDelete (int iIndex);
    void Remove (int iIndex);
    void Clear ();
    //intrusive_ptr<ChartLegendEntriesColl> Clone (System.Object parent,System.Collections.Generic.Dictionary`2[[System.Int32, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089],[System.Int32, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089]] dicIndexes,System.Collections.Generic.Dictionary`2[[System.String, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089],[System.String, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089]] dicNewSheetNames);
    void UpdateEntries (int entryIndex,int value);
private:
};
}}
