#pragma once
#include "pch.h"

//#pragma warning(push)
//#pragma warning(disable:4250)
//#include "IgnoreErrorType.h"
//#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS IErrorIndicator 
{
public:
    virtual IgnoreErrorType GetIgnoreOptions ()=0;
    virtual void SetIgnoreOptions (IgnoreErrorType value)=0;
private:
};
}}
