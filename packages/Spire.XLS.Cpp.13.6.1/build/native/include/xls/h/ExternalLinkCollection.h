#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS ExternalLinkCollection : public virtual Object
{
    friend class Workbook;
    friend class XlsWorkbook;
public:
    intrusive_ptr<ExternalLink> Get (int index);
private:
};
}}
