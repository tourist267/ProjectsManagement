#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "ILines.h"
#include "CollectionBase.h"
#include "XlsLineShape.h"
#pragma warning(pop)

namespace Spire{namespace Xls{
class EXPORTS LineCollection : public virtual CollectionBase<XlsLineShape>,public virtual ILines
{
    friend class XlsWorksheetBase;
public:
    intrusive_ptr<ILineShape> AddLine ();
    virtual intrusive_ptr<ILineShape> AddLine (int row,int column,int width,int height,LineShapeType lineShapeType);
    void AddCopy (intrusive_ptr<ILineShape> source);
    virtual intrusive_ptr<ILineShape> Get (int index);
    virtual intrusive_ptr<ILineShape> Get (LPCWSTR_S name);
    void Clear ();

    virtual int GetCount();
private:
};
}}
