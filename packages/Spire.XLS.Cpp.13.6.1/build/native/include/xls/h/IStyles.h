#pragma once
#include "pch.h"

//#pragma warning(push)
//#pragma warning(disable:4250)
//#include "IStyle.h"
//#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS IStyles : public virtual Object
{
    friend class IWorkbook;
    friend class XlsWorkbook;
public:
    virtual int GetCount ()=0;
    virtual intrusive_ptr<CellStyleObject> Get (int Index)=0;
    virtual intrusive_ptr<CellStyleObject> Get (LPCWSTR_S name)=0;
    //virtual System.Object GetParent ()=0;
    virtual bool Contains (LPCWSTR_S name)=0;
    virtual void Remove (LPCWSTR_S styleName)=0;
private:
};
}}
