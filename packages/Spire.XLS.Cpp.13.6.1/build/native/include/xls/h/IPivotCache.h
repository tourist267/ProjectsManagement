#pragma once
#include "pch.h"

//#pragma warning(push)
//#pragma warning(disable:4250)
//#include "DataSourceType.h"
//#include "IXLSRange.h"
//#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS IPivotCache : public virtual Object
{
    friend class IPivotCaches;
public:
    virtual int GetIndex ()=0;
    virtual DataSourceType GetSourceType ()=0;
    virtual intrusive_ptr<IXLSRange> GetSourceRange ()=0;
private:
};
}}
