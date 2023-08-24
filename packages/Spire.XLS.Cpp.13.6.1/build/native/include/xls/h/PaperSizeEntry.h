#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS PaperSizeEntry : public virtual Object
{
public:
    double Width ();
    double Height ();
private:
};
}}
