#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS PivotReportFilters : public virtual Object
{
    friend class XlsPivotTable;
public:
    intrusive_ptr<PivotReportFilter> Get (LPCWSTR_S name);
    void RemoveAt (int index);
    void Clear ();
    bool Remove (intrusive_ptr<PivotReportFilter> item);
    void Add (intrusive_ptr<PivotReportFilter> item);
private:
};
}}
