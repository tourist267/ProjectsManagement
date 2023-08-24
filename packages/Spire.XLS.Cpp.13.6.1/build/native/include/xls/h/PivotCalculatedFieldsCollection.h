#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IPivotCalculatedFields.h"
#include "CollectionBase.h"
#include "XlsPivotField.h"
#include "XlsPivotTable.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS PivotCalculatedFieldsCollection : public virtual CollectionBase<XlsPivotField>,public virtual IPivotCalculatedFields
{
public:
    intrusive_ptr<XlsPivotTable> GetParent ();
    virtual intrusive_ptr<IPivotField> Add (LPCWSTR_S name,LPCWSTR_S formula);
    virtual intrusive_ptr<IPivotField> Get(int index);
    virtual intrusive_ptr<IPivotField> Get(LPCWSTR_S name);
    virtual int GetCount();
private:
};
}}
