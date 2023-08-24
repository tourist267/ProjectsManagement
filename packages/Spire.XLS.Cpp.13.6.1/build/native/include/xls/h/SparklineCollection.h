#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "ISparklines.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
/*
    <summary>
        Represents the SparklineCollection.
    </summary>
*/
class EXPORTS SparklineCollection : public virtual Object,public virtual ISparklines
{
    friend class SparklineGroup;
    friend class ISparklineGroup;
public:
    /*
    <summary>
        Adds Sparkline instance.
    </summary>
    */
    virtual intrusive_ptr<Sparkline> Add ();
    intrusive_ptr<Sparkline> Add (LPCWSTR_S dataRange,int row,int column);
    /*
    <summary>
        Adds the sparkline.
    </summary>
    */
    virtual void Add (intrusive_ptr<CellRange> dataRange,intrusive_ptr<CellRange> referenceRange);
    /*
    <summary>
        Adds the sparkline.
    </summary>
    */
    virtual void Add (intrusive_ptr<CellRange> dataRange,intrusive_ptr<CellRange> referenceRange,bool isVertical);
    /*
    <summary>
        Adds the sparkline.
    </summary>
    */
    virtual void RefreshRanges (intrusive_ptr<CellRange> dataRange,intrusive_ptr<CellRange> referenceRange);
    /*
    <summary>
        Refresh data range of the sparkline.
    </summary>
    */
    virtual void RefreshRanges (intrusive_ptr<CellRange> dataRange,intrusive_ptr<CellRange> referenceRange,bool isVertical);
    /*
    <summary>
        Clears the sparkline.
    </summary>
    <param name="sparklineRange">The sparkline range.<see cref="!: IRange" /></param>
    */
    virtual void Clear (intrusive_ptr<Sparkline> sparkline);
private:
};
}}
