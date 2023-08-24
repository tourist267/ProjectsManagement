#pragma once
#include "pch.h"

//#pragma warning(push)
//#pragma warning(disable:4250)
//#include "IWorksheet.h"
//#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS IWorksheets : public virtual Object
{
    friend class IWorkbook;
    friend class XlsWorkbook;
public:
    virtual int GetCount ()=0;
    virtual intrusive_ptr<XlsWorksheet> Get (int Index)=0;
    virtual intrusive_ptr<IWorksheet> Get (LPCWSTR_S sheetName)=0;
    //virtual System.Object GetParent ()=0;
    virtual bool GetUseRangesCache ()=0;
    virtual void SetUseRangesCache (bool value)=0;
    virtual intrusive_ptr<IWorksheet> Create (LPCWSTR_S name)=0;
    virtual intrusive_ptr<IWorksheet> Create ()=0;
    virtual void Remove (intrusive_ptr<IWorksheet> sheet)=0;
    virtual void Remove (LPCWSTR_S sheetName)=0;
    virtual void Remove (int index)=0;
    virtual intrusive_ptr<IWorksheet> AddCopyBefore (intrusive_ptr<IWorksheet> toCopy)=0;
    virtual intrusive_ptr<IWorksheet> AddCopyBefore (intrusive_ptr<IWorksheet> toCopy,intrusive_ptr<IWorksheet> sheetAfter)=0;
    virtual intrusive_ptr<IWorksheet> AddCopyAfter (intrusive_ptr<IWorksheet> toCopy)=0;
    virtual intrusive_ptr<IWorksheet> AddCopyAfter (intrusive_ptr<IWorksheet> toCopy,intrusive_ptr<IWorksheet> sheetBefore)=0;
private:
};
}}
