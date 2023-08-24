#pragma once
#include "pch.h"

//#pragma warning(push)
//#pragma warning(disable:4250)
//#include "CellRange.h"
//#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS ISparkline 
{
public:
    virtual intrusive_ptr<CellRange> GetDataRange ()=0;
    virtual void SetDataRange (intrusive_ptr<CellRange> value)=0;
    virtual intrusive_ptr<CellRange> GetRefRange ()=0;
    virtual void SetRefRange (intrusive_ptr<CellRange> value)=0;
    virtual int GetColumn ()=0;
    virtual int GetRow ()=0;
private:
};
}}
