#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IOvalShapes.h"
#include "CollectionBase.h"
#include "XlsOvalShape.h"
#pragma warning(pop)

namespace Spire{namespace Xls{
class EXPORTS OvalShapeCollection : public virtual CollectionBase<XlsOvalShape>,public virtual IOvalShapes
{
    friend class XlsWorksheetBase;
public:
    virtual intrusive_ptr<IOvalShape> Get (int index);
    virtual intrusive_ptr<IOvalShape> Get (LPCWSTR_S name);
    virtual intrusive_ptr<IOvalShape> AddOval (int row,int column,int height,int width);
    void AddCopy (intrusive_ptr<IOvalShape> source);
    void Clear ();

    virtual int GetCount();
private:
};
}}
