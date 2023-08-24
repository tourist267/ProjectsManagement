#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS PageColRow : public virtual Object
{
public:
    int StartRow ();
    int EndRow ();
    int StartCol ();
    int EndCol ();
private:
};
}}
