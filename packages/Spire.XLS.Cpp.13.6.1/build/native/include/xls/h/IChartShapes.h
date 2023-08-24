#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IExcelApplication.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS IChartShapes : public virtual IExcelApplication
{
    friend class XlsWorksheetBase;
public:
    virtual int GetCount ()=0;
    virtual intrusive_ptr<XlsChartShape> Get (int index)=0;
    virtual void RemoveAt (int index)=0;
private:
};
}}
