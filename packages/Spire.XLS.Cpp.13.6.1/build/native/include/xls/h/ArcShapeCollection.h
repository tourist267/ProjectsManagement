#pragma once
#include "pch.h"
#pragma warning(push)
#pragma warning(disable:4250)
#include "IArcShapes.h"
#include "CollectionBase.h"
#include "XlsArcShape.h"
#pragma warning(pop)
namespace Spire{namespace Xls{
class EXPORTS ArcShapeCollection : public virtual CollectionBase<XlsArcShape>,public virtual IArcShapes
{
    friend class XlsWorksheetBase;
public:
    virtual intrusive_ptr<IArcShape> Get (int index);
    virtual intrusive_ptr<IArcShape> Get (LPCWSTR_S name);
    virtual intrusive_ptr<IArcShape> AddArc (int row,int column,int height,int width);
    void AddCopy (intrusive_ptr<IArcShape> source);
    void Clear ();

    virtual int GetCount();

private:
};
}}
