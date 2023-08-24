#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
//#include "IExcelApplication.h"
//#include "IOptimizedUpdate.h"
#include "IFont.h"
//#include "XlsFont.h"
#pragma warning(pop)

namespace Spire{namespace Xls{
class EXPORTS IInternalFont : public virtual IFont
{
public:
    virtual int GetIndex ()=0;
    virtual intrusive_ptr<XlsFont> GetFont ()=0;
private:
};
}}
