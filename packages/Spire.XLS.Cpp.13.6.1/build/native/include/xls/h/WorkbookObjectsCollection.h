#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "XlsWorkbookObjectsCollection.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS WorkbookObjectsCollection : public virtual XlsWorkbookObjectsCollection
{
public:
    intrusive_ptr<Workbook> GetWorkbook ();
private:
};
}}
