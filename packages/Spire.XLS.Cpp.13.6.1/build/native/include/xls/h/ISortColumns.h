#pragma once
#include "pch.h"

//#pragma warning(push)
//#pragma warning(disable:4250)
//#include "OrderBy.h"
//#include "SortComparsionType.h"
//#include "SortColumn.h"
//#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS ISortColumns 
{
public:
    virtual int GetCount ()=0;
    virtual intrusive_ptr<SortColumn> Add (int key,SortComparsionType sortComparsionType,OrderBy orderBy)=0;
    virtual intrusive_ptr<SortColumn> Add (int key,OrderBy orderBy)=0;
    virtual void Remove (int key)=0;
    virtual void Remove (intrusive_ptr<SortColumn> sortField)=0;
    virtual intrusive_ptr<SortColumn> Get (int index)=0;
private:
};
}}
