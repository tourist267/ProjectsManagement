#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IGroupBoxes.h"
#include "CollectionBase.h"
#include "XlsGroupBoxShape.h"
#pragma warning(pop)

namespace Spire{namespace Xls{
class EXPORTS GroupBoxCollection : public virtual CollectionBase<XlsGroupBoxShape>,public virtual IGroupBoxes
{
    friend class XlsWorksheetBase;
public:
    virtual intrusive_ptr<IGroupBox> Get (int index);
    virtual intrusive_ptr<IGroupBox> Get (LPCWSTR_S name);
    virtual intrusive_ptr<IGroupBox> AddGroupBox (int row,int column,int height,int width);
    void AddCopy (intrusive_ptr<IGroupBox> source);
    void Clear ();

    virtual int GetCount();
private:
};
}}
