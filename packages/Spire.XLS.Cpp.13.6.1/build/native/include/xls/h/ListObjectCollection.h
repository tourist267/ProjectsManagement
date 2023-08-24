#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IListObjects.h"
#include "IListObject.h"
#include "CollectionBase.h"
#pragma warning(pop)
namespace Spire{namespace Xls{
class EXPORTS ListObjectCollection : public virtual IListObjects, public virtual CollectionBase<IListObject>
{
public:
    ListObjectCollection();
    virtual intrusive_ptr<IListObject> Create (LPCWSTR_S name,intrusive_ptr<IXLSRange> range);
    intrusive_ptr<IListObject> Get (LPCWSTR_S name);
private:
};
}}
