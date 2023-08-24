#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "RichTextString.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS RangeRichTextString : public virtual RichTextString
{
public:
    virtual void Dispose ();
    int GetIndex ();
    intrusive_ptr<XlsFont> GetDefaultFont ();
private:
};
}}
