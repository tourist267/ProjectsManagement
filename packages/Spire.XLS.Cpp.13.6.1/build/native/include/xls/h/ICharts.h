#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IExcelApplication.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS ICharts : public virtual IExcelApplication
{
    friend class IWorkbook;
    friend class XlsWorkbook;
public:
    virtual int GetCount ()=0;
    virtual intrusive_ptr<IChart> Get (int index)=0;
    virtual intrusive_ptr<IChart> Get (LPCWSTR_S name)=0;
    virtual intrusive_ptr<IChart> Add ()=0;
    virtual intrusive_ptr<IChart> Add (LPCWSTR_S name)=0;
    virtual intrusive_ptr<IChart> Remove (LPCWSTR_S name)=0;
private:
};
}}
