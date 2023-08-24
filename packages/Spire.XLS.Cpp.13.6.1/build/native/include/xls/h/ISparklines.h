#pragma once
#include "pch.h"

//#pragma warning(push)
//#pragma warning(disable:4250)
//#include "Sparkline.h"
//#include "CellRange.h"
//#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS ISparklines 
{
public:
    virtual intrusive_ptr<Sparkline> Add ()=0;
    virtual void Add (intrusive_ptr<CellRange> dataRange,intrusive_ptr<CellRange> referenceRange)=0;
    virtual void RefreshRanges (intrusive_ptr<CellRange> dataRange,intrusive_ptr<CellRange> referenceRange)=0;
    virtual void Add (intrusive_ptr<CellRange> dataRange,intrusive_ptr<CellRange> referenceRange,bool isVertical)=0;
    virtual void RefreshRanges (intrusive_ptr<CellRange> dataRange,intrusive_ptr<CellRange> referenceRange,bool isVertical)=0;
    virtual void Clear (intrusive_ptr<Sparkline> sparkline)=0;
private:
};
}}
