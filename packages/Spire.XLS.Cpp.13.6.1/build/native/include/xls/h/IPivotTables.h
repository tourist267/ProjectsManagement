#pragma once
#include "pch.h"

//#pragma warning(push)
//#pragma warning(disable:4250)
//#include "IPivotTable.h"
//#include "CellRange.h"
//#include "PivotCache.h"
//#include "PivotTable.h"
//#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS IPivotTables 
{
public:
    virtual int GetCount ()=0;
    virtual intrusive_ptr<IPivotTable> Get (int index)=0;
    virtual intrusive_ptr<IPivotTable> Get (LPCWSTR_S name)=0;
    virtual intrusive_ptr<PivotTable> Add (LPCWSTR_S name,intrusive_ptr<CellRange> location,intrusive_ptr<PivotCache> cache)=0;
    virtual void Remove (LPCWSTR_S name)=0;
    virtual void RemoveAt (int index)=0;
private:
};
}}
