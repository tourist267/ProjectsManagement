#pragma once
#include "pch.h"

//#pragma warning(push)
//#pragma warning(disable:4250)
//#include "ICommentShape.h"
//#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS IComments : public virtual Object
{
    friend class IWorksheet;
    friend class XlsWorksheetBase;
public:
    virtual int GetCount ()=0;
    //virtual System.Object GetParent ()=0;
    virtual intrusive_ptr<XlsComment> Get (int Index)=0;
    virtual intrusive_ptr<XlsComment> Get (int iRow,int iColumn)=0;
private:
};
}}
