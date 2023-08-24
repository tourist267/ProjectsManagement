#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IScrollBarShapes.h"
#include "CollectionBase.h"
#include "XlsScrollBarShape.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS ScrollBarCollection : public virtual CollectionBase<XlsScrollBarShape>,public virtual IScrollBarShapes
{
    friend class XlsWorksheetBase;
public:
    virtual intrusive_ptr<IScrollBarShape> Get (int index);
    virtual intrusive_ptr<IScrollBarShape> Get (LPCWSTR_S name);
    virtual intrusive_ptr<IScrollBarShape> AddScrollBar (int row,int column,int height,int width);
    void AddCopy (intrusive_ptr<IScrollBarShape> source);
    void Clear ();

    virtual int GetCount();
private:
};
}}
