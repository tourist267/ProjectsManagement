#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IPivotCaches.h"
#include "CollectionBase.h"
#include "XlsPivotCache.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS XlsPivotCachesCollection : public virtual CollectionBase<XlsPivotCache>,public virtual IPivotCaches
{
    friend class IWorkbook;
    friend class XlsPivotCache;
public:
    intrusive_ptr<XlsWorkbook> GetParent ();
    intrusive_ptr<XlsWorkbook> GetWorkbook ();
    virtual int GetCount ();
    virtual intrusive_ptr<PivotCache> Add (intrusive_ptr<CellRange> range);
    void Add (intrusive_ptr<XlsPivotCache> cache);
    /*
    <summary>
        Clears collection
    </summary>
    */
    void Clear ();
    void RemoveAt (int index);
    void Remove (intrusive_ptr<IPivotCache> pivotCache);
    //System.Object Clone (System.Object parent);
private:
};
}}
