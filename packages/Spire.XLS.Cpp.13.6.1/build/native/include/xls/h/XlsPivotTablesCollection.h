#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IPivotTables.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS XlsPivotTablesCollection : public virtual Object,public virtual IPivotTables
{
    friend class XlsPivotTable;
public:
    virtual int GetCount ();
    virtual intrusive_ptr<IPivotTable> Get (int index);
    virtual intrusive_ptr<IPivotTable> Get (LPCWSTR_S name);
    virtual intrusive_ptr<PivotTable> Add (LPCWSTR_S name,intrusive_ptr<CellRange> location,intrusive_ptr<PivotCache> cache);
    virtual void Remove (LPCWSTR_S name);
    virtual void RemoveAt (int index);
    void Remove (intrusive_ptr<IPivotTable> pivotTable);
    void Clear ();
    intrusive_ptr<XlsWorksheetBase> GetParentWorksheet ();
    //intrusive_ptr<PivotTablesCollection> Clone (intrusive_ptr<XlsWorksheet> worksheet,System.Collections.Generic.Dictionary`2[[System.String, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089],[System.String, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089]] hashWorksheetNames);
private:
};
}}
