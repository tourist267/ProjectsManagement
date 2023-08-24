#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "ILabelShapes.h"
#include "CollectionBase.h"
#include "XlsLabelShape.h"
#pragma warning(pop)

namespace Spire{namespace Xls{
class EXPORTS LabelShapeCollection : public virtual CollectionBase<XlsLabelShape>,public virtual ILabelShapes
{
    friend class XlsWorksheetBase;
public:
    virtual intrusive_ptr<ILabelShape> Get (int index);
    virtual intrusive_ptr<ILabelShape> Get (LPCWSTR_S name);
    virtual intrusive_ptr<ILabelShape> AddLabel (int row,int column,int height,int width);
    void AddCopy (intrusive_ptr<ILabelShape> source);
    void Clear ();

    virtual int GetCount();
private:
};
}}
