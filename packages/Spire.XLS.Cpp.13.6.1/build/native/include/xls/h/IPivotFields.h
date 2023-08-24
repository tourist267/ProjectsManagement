#pragma once
#include "pch.h"

//#pragma warning(push)
//#pragma warning(disable:4250)
//#include "IPivotField.h"
//#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS IPivotFields : public virtual Object
{
    friend class IPivotTable;
    friend class XlsPivotTable;
public:
    virtual int GetCount ()=0;
    virtual intrusive_ptr<IPivotField> Get (int index)=0;
    virtual intrusive_ptr<IPivotField> Get (LPCWSTR_S name)=0;
private:
};
}}
