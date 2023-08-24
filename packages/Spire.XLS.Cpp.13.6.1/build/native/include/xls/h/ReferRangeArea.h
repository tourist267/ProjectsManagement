#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS ReferRangeArea : public virtual Object
{
public:
    bool GetIsExternalLink ();
    LPCWSTR_S GetExternalFileName ();
    LPCWSTR_S GetSheetName ();
    int GetEndColumn ();
    int GetStartColumn ();
    int GetEndRow ();
    int GetStartRow ();
private:
};
}}
