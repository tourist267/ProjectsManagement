#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS PivotConditionalFormatCollection : public virtual Object
{
    friend class XlsPivotTable;
public:
    intrusive_ptr<PivotConditionalFormat> AddPivotConditionalFormat ();
    intrusive_ptr<PivotConditionalFormat> Get (int index);
private:
};
}}
