#pragma once
#include "pch.h"

//#pragma warning(push)
//#pragma warning(disable:4250)
//#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS IOptimizedUpdate 
{
public:
    virtual void BeginUpdate ()=0;
    virtual void EndUpdate ()=0;
private:
};
}}
