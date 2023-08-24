#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IExcelApplication.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS IChartSeries : public virtual IExcelApplication
{
public:
    virtual int GetCount ()=0;
    virtual void RemoveAt (int index)=0;
    virtual void Remove (LPCWSTR_S serieName)=0;
private:
};
}}
