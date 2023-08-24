#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IExcelApplication.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS IAutoFilters : public virtual IExcelApplication
{
    friend class IWorksheet;
    friend class XlsWorksheet;
public:
    virtual intrusive_ptr<IXLSRange> GetRange ()=0;
    virtual void SetRange (intrusive_ptr<IXLSRange> value)=0;
    virtual int GetCount ()=0;
    virtual intrusive_ptr<FilterColumn> Get (int columnIndex)=0;
private:
};
}}
