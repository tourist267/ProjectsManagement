#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS AutoSortScope : public virtual Object
{
    friend class XlsPivotField;
public:
    intrusive_ptr<PivotField> GetParent ();
private:
};
}}
