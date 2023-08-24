#pragma once
#include "pch.h"

//#pragma warning(push)
//#pragma warning(disable:4250)
//#include "IPivotCache.h"
//#include "CellRange.h"
//#include "PivotCache.h"
//#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS IPivotCaches 
{
public:
    virtual int GetCount ()=0;
    //virtual intrusive_ptr<XlsPivotCache> Get (int index)=0;
    virtual intrusive_ptr<PivotCache> Add (intrusive_ptr<CellRange> range)=0;
private:
};
}}
