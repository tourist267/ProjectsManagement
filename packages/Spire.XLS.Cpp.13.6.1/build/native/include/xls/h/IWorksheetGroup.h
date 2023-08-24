#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
//#include "IExcelApplication.h"
//#include "ITabSheet.h"
#include "IWorksheet.h"
#pragma warning(pop)

namespace Spire{namespace Xls{
class EXPORTS IWorksheetGroup : public virtual IWorksheet
{
public:
    virtual intrusive_ptr<IWorksheet> Get (int index)=0;
    virtual bool GetIsEmpty ()=0;
    virtual int GetCount ()=0;
    virtual int Add (intrusive_ptr<ITabSheet> sheet)=0;
private:
};
}}
