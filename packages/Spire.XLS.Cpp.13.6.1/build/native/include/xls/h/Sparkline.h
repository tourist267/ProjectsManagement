#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "ISparkline.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
/*
    <summary>
        A sparkline represents a tiny chart or graphic in a worksheet cell that provides a visual representation of data. 
    </summary>
*/
class EXPORTS Sparkline : public virtual Object,public virtual ISparkline
{
    friend class SparklineCollection;
    friend class ISparklines;
public:
    virtual intrusive_ptr<CellRange> GetDataRange ();
    virtual void SetDataRange (intrusive_ptr<CellRange> value);
    virtual intrusive_ptr<CellRange> GetRefRange ();
    virtual void SetRefRange (intrusive_ptr<CellRange> value);
    virtual int GetColumn ();
    virtual int GetRow ();
private:
};
}}
