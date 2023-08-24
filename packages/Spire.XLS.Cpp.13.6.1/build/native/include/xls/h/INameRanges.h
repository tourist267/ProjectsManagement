#pragma once
#include "pch.h"

//#pragma warning(push)
//#pragma warning(disable:4250)
//#include "IXLSRange.h"
//#include "IWorksheet.h"
//#include "INamedRange.h"
//#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS INameRanges : public virtual Object
{
    friend class Workbook;
    friend class IWorkbook;
    friend class IWorksheet;
    friend class XlsWorkbook;
    friend class XlsWorksheet;
public:
    virtual int GetCount ();
    //virtual System.Object GetParent ();
    virtual intrusive_ptr<INamedRange> Get (int index);
    virtual intrusive_ptr<INamedRange> Get (LPCWSTR_S name);
    virtual intrusive_ptr<INamedRange> GetByName (LPCWSTR_S name);
    virtual intrusive_ptr<IWorksheet> GetParentWorksheet ();
    virtual intrusive_ptr<INamedRange> Add (LPCWSTR_S name);
    virtual intrusive_ptr<INamedRange> Add (LPCWSTR_S name,intrusive_ptr<IXLSRange> namedObject);
    virtual intrusive_ptr<INamedRange> Add (intrusive_ptr<INamedRange> name);
    virtual void Remove (LPCWSTR_S name);
    virtual void RemoveAt (int index);
    virtual bool Contains (LPCWSTR_S name);
private:
};
}}
