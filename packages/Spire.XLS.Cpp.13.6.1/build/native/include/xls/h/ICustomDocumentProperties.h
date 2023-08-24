#pragma once
#include "pch.h"

//#pragma warning(push)
//#pragma warning(disable:4250)
//#include "IDocumentProperty.h"
//#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS ICustomDocumentProperties : public virtual Object
{
    friend class Workbook;
    friend class IWorkbook;
    friend class XlsWorkbook;
public:
    virtual intrusive_ptr<IDocumentProperty> Get (LPCWSTR_S strName);
    virtual intrusive_ptr<IDocumentProperty> Get (int iIndex);
    virtual int GetCount ();
    virtual void Remove (LPCWSTR_S strName);
    virtual bool Contains (LPCWSTR_S strName);
    virtual void Clear ();
    virtual void Add (LPCWSTR_S strName,LPCWSTR_S value);
    virtual void Add (LPCWSTR_S strName,bool value);
    virtual void Add (LPCWSTR_S strName,intrusive_ptr<DateTime> value);
    virtual void Add (LPCWSTR_S strName,int value);
    virtual void Add (LPCWSTR_S strName,double value);
private:
};
}}
