#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "XlsPivotCache.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS PivotCache : public virtual XlsPivotCache
{
    friend class IPivotCaches;
    friend class XlsPivotTable;
    friend class XlsPivotCachesCollection;
public:
private:
};
}}
