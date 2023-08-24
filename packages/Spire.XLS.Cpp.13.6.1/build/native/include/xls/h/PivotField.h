#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "XlsPivotField.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS PivotField : public virtual XlsPivotField
{
    friend class AutoSortScope;
public:
private:
};
}}
