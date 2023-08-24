#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IPivotDataFields.h"
#include "CollectionBase.h"
#include "PivotDataField.h"
#pragma warning(pop)
namespace Spire{namespace Xls{
class EXPORTS PivotDataFields : public virtual CollectionBase<PivotDataField>,public virtual IPivotDataFields
{
    friend class IPivotTable;
    friend class XlsPivotTable;
public:
    virtual intrusive_ptr<PivotDataField> Get (int index);
    virtual intrusive_ptr<IPivotDataField> Get (LPCWSTR_S name);
    intrusive_ptr<XlsPivotTable> GetParent ();
    virtual intrusive_ptr<IPivotDataField> Add (intrusive_ptr<IPivotField> iField,LPCWSTR_S name,SubtotalTypes subtotal);
    bool Remove (intrusive_ptr<PivotDataField> item);
    void RemoveAt (int index);
    void Clear ();
    virtual int GetCount();
private:
};
}}
