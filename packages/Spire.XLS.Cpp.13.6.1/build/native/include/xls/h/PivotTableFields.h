#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "ICloneParent.h"
#include "IPivotFields.h"
#include "CollectionBase.h"
#include "XlsPivotField.h"
#pragma warning(pop)
namespace Spire{namespace Xls{
class EXPORTS PivotTableFields : public virtual CollectionBase<XlsPivotField>,public virtual ICloneParent,public virtual IPivotFields
{
    friend class IPivotTable;
    friend class XlsPivotField;
    friend class XlsPivotTable;
public:
    virtual intrusive_ptr<IPivotField> Get (LPCWSTR_S name);
    //virtual System.Object Clone (System.Object parent);
    void RemoveAt (int index);
    bool Remove (intrusive_ptr<PivotField> item);
    void Clear ();
    void Add (intrusive_ptr<PivotField> item);
    virtual int GetCount();
    virtual intrusive_ptr<IPivotField> Get(int value);
private:
};
}}
