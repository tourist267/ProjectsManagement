#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "XlsFontsCollection.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS FontsCollection : public virtual XlsFontsCollection
{
public:
    void Add (intrusive_ptr<XlsFontStyle> font);
    void Add (intrusive_ptr<ExcelFont> font);
    //System.Collections.IDictionary AddFonts (intrusive_ptr<FontsCollection> fonts);
    bool Contains (intrusive_ptr<XlsFontStyle> font);
    bool Contains (intrusive_ptr<ExcelFont> font);
    intrusive_ptr<ExcelFont> Get (int index);
private:
};
}}
