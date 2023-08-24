#pragma once
#include "pch.h"

//#pragma warning(push)
//#pragma warning(disable:4250)
//#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS IExtendIndex 
{
public:
    virtual int GetExtendedFormatIndex ()=0;
private:
};
}}
