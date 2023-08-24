#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS UtilityMethods : public virtual Object
{
public:
    //static void SetPdfLogFile (LPCWSTR_S path);
    //static void SetLogFile (LPCWSTR_S path);
    static LPCWSTR_S SpecialSymbolConvertForStyleName (LPCWSTR_S s);
    //static float StandardResolution ();
private:
};
}}
