#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS GeomertyAdjustValue : public virtual Object
{
    friend class GeomertyAdjustValuesCollection;
public:
    LPCWSTR_S GetName ();
    LPCWSTR_S GetFormula ();
    void SetFormulaParameter (std::vector<double> args);
    GeomertyAdjustValueFormulaType FormulaType ();
private:
};
}}
