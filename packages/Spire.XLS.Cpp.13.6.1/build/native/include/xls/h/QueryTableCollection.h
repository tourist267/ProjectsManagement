#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS QueryTableCollection : public virtual Object
{
    friend class Worksheet;
    friend class XlsWorksheetBase;
public:
    intrusive_ptr<QueryTableXls> Get (int index);
private:
};
}}
