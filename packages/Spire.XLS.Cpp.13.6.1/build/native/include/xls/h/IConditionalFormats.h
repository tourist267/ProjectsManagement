#pragma once
#include "pch.h"
#pragma warning(push)
#pragma warning(disable:4250)
#include "IExcelApplication.h"
//#include "IConditionalFormat.h"
#pragma warning(pop)

namespace Spire{namespace Xls{
class EXPORTS IConditionalFormats : public virtual IExcelApplication
{
public:
    virtual int GetCount ()=0;
    virtual intrusive_ptr<IConditionalFormat> Get (int index)=0;
    virtual intrusive_ptr<IConditionalFormat> AddCondition ()=0;
    virtual void RemoveAt (int index)=0;
private:
};
}}
