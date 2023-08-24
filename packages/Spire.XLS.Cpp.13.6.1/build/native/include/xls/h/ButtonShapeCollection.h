#pragma once
#include "pch.h"
#pragma warning(push)
#pragma warning(disable:4250)
#include "IButtonShapes.h"
#include "CollectionBase.h"
#include "XlsButtonShape.h"
#pragma warning(pop)
namespace Spire{namespace Xls{
class EXPORTS ButtonShapeCollection : public virtual CollectionBase<XlsButtonShape>,public virtual IButtonShapes
{
    friend class XlsWorksheetBase;
public:
    virtual intrusive_ptr<IButtonShape> Get (int index);
    virtual intrusive_ptr<IButtonShape> Get (LPCWSTR_S name);
    virtual intrusive_ptr<IButtonShape> AddButton (int row,int column,int height,int width);
    void AddCopy (intrusive_ptr<IButtonShape> source);
    void Clear ();
    virtual int GetCount();

private:
};
}}
