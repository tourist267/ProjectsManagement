#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IExcelApplication.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS IAddInFunctions : public virtual IExcelApplication
{
    friend class IWorkbook;
    friend class XlsWorkbook;
public:
    virtual intrusive_ptr<XlsAddInFunction> Get (int index)=0;
    virtual int GetCount ()=0;
    virtual int Add (LPCWSTR_S strFileName,LPCWSTR_S strFunctionName)=0;
    virtual int Add (LPCWSTR_S strFunctionName)=0;
private:
};
}}
