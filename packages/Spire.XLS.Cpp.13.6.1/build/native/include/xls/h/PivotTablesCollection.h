#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "XlsPivotTablesCollection.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS PivotTablesCollection : public virtual XlsPivotTablesCollection
{
    friend class IWorksheet;
    friend class XlsWorksheet;
    friend class XlsPivotTablesCollection;
public:
private:
};
}}
