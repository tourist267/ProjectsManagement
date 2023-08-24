#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IExcelApplication.h"
//#include "IXLSRange.h"
//#include "IHyperLink.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS IHyperLinks : public virtual IExcelApplication
{
    friend class IXLSRange;
    friend class IWorksheet;
    friend class XlsName;
    friend class XlsRange;
    friend class XlsWorksheet;
    friend class XlsRangesCollection;
public:
    virtual int GetCount ()=0;
    virtual intrusive_ptr<HyperLink> Get (int index)=0;
    virtual intrusive_ptr<HyperLink> Add (intrusive_ptr<IXLSRange> range)=0;
    virtual void RemoveAt (int index)=0;
private:
};
}}
