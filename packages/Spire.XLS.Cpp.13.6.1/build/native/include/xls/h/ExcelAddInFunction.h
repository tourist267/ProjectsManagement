#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "XlsAddInFunction.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS ExcelAddInFunction : public virtual XlsAddInFunction
{
    friend class AddInFunctionsCollection;
public:
private:
};
}}
