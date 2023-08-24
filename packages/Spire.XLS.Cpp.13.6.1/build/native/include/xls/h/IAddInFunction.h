#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IExcelApplication.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS IAddInFunction : public virtual IExcelApplication
{
    friend class IAddInFunctions;
    friend class XlsAddInFunctionsCollection;
public:
    virtual LPCWSTR_S GetName ()=0;
private:
};
}}
