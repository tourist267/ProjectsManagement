#pragma once
#include "pch.h"
#pragma warning(push)
#pragma warning(disable:4250)
#include "IComboBoxes.h"
#include "CollectionBase.h"
#include "XlsComboBoxShape.h"
#pragma warning(pop)

namespace Spire{namespace Xls{
class EXPORTS ComboBoxCollection : public virtual CollectionBase<XlsComboBoxShape>,public virtual IComboBoxes
{
    friend class XlsWorksheetBase;
public:
    virtual intrusive_ptr<IComboBoxShape> Get (int index);
    virtual intrusive_ptr<IComboBoxShape> Get (LPCWSTR_S name);
    void AddCopy (intrusive_ptr<IComboBoxShape> comboboxsource);
    virtual intrusive_ptr<IComboBoxShape> AddComboBox (int row,int column,int height,int width);
    void Clear ();
    virtual int GetCount();
private:
};
}}
