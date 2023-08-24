#pragma once
#include "pch.h"
#pragma warning(push)
#pragma warning(disable:4250)
#include "IOptimizedUpdate.h"
#include "IInternalAddtionalFormat.h"
#include "AddtionalFormatWrapper.h"
#pragma warning(pop)
namespace Spire{namespace Xls{
class EXPORTS CellBaseStyle : public virtual AddtionalFormatWrapper
{
public:
    virtual void BeginUpdate ();
    virtual void EndUpdate ();
private:
};
}}
