#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "ICheckBoxes.h"
#include "CollectionBase.h"
#include "XlsCheckBoxShape.h"
#pragma warning(pop)

namespace Spire{namespace Xls{
class EXPORTS CheckBoxCollection : public virtual CollectionBase<XlsCheckBoxShape>,public virtual ICheckBoxes
{
    friend class XlsWorksheetBase;
public:
    virtual intrusive_ptr<ICheckBox> Get (int index);
    virtual intrusive_ptr<ICheckBox> Get (LPCWSTR_S name);
    void AddCopy (intrusive_ptr<ICheckBox> checkboxsource);
    virtual intrusive_ptr<ICheckBox> AddCheckBox (int row,int column,int height,int width);
    void Clear ();
    virtual int GetCount();
private:
};
}}
