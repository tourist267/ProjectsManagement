#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "XlsPivotCachesCollection.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS PivotCachesCollection : public virtual XlsPivotCachesCollection
{
    friend class Workbook;
public:
private:
};
}}
