#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IListBoxes.h"
#include "CollectionBase.h"
#include "XlsListBoxShape.h"
#pragma warning(pop)
namespace Spire{namespace Xls{
class EXPORTS ListBoxCollection : public virtual CollectionBase<XlsListBoxShape>,public virtual IListBoxes
{
    friend class XlsWorksheetBase;
public:
    virtual intrusive_ptr<IListBox> Get (int index);
    virtual intrusive_ptr<IListBox> Get (LPCWSTR_S name);
    virtual intrusive_ptr<IListBox> AddListBox (int row,int column,int height,int width);
    void AddCopy (intrusive_ptr<IListBox> source);
    void Clear ();

    virtual int GetCount();
private:
};
}}
