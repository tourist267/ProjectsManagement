#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS XlsFontsCollection : public virtual Object
{
    friend class XlsWorkbook;
public:
    intrusive_ptr<IFont> Get (int index);
    bool Contains (intrusive_ptr<XlsFont> font);
    intrusive_ptr<XlsFontsCollection> Clone (intrusive_ptr<XlsWorkbook> parent);
private:
};
}}
