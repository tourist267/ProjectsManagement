#pragma once
#include "pch.h"

//#pragma warning(push)
//#pragma warning(disable:4250)
//#include "ITabSheet.h"
//#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS ITabSheets 
{
    friend class IWorkbook;
    friend class XlsWorkbook;
public:
    virtual int GetCount ()=0;
    virtual intrusive_ptr<ITabSheet> Get (int index)=0;
    virtual void Move (int iOldIndex,int iNewIndex)=0;
    virtual void MoveBefore (intrusive_ptr<ITabSheet> sheetToMove,intrusive_ptr<ITabSheet> sheetForPlacement)=0;
    virtual void MoveAfter (intrusive_ptr<ITabSheet> sheetToCopy,intrusive_ptr<ITabSheet> sheetForPlacement)=0;
private:
};
}}
