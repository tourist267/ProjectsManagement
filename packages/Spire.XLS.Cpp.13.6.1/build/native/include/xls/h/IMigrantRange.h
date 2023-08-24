#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
//#include "IExcelApplication.h"
#include "IXLSRange.h"
#pragma warning(pop)

namespace Spire{namespace Xls{
class EXPORTS IMigrantRange : public virtual IXLSRange
{
public:
    virtual void ResetRowColumn (int iRow,int iColumn)=0;
private:
};
}}
