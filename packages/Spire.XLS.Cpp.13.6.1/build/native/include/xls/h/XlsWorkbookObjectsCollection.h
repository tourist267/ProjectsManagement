#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "ITabSheets.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS XlsWorkbookObjectsCollection : public virtual Object,public virtual ITabSheets
{
public:
    intrusive_ptr<IWorkbook> GetWorkbook ();
    virtual int GetCount ();
    virtual intrusive_ptr<ITabSheet> Get (int index);
    //intrusive_ptr<INamedObject> Get (LPCWSTR_S name);
    virtual void Move (int iOldIndex,int iNewIndex);
    virtual void MoveBefore (intrusive_ptr<ITabSheet> sheetToMove,intrusive_ptr<ITabSheet> sheetForPlacement);
    virtual void MoveAfter (intrusive_ptr<ITabSheet> sheetToMove,intrusive_ptr<ITabSheet> sheetForPlacement);
private:
};
}}
