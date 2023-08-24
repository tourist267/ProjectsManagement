#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Xls{
/*
    <summary>
        The SparklineGroupCollection represents the collection of SparklineGroup objects.
    </summary>
*/
class EXPORTS SparklineGroupCollection : public virtual Object
{
    friend class XlsWorksheet;
public:
    intrusive_ptr<SparklineGroup> Get (int index);
    /*
    <summary>
        Clears the sparkline group.
    </summary>
    */
    virtual void Clear (intrusive_ptr<SparklineGroup> sparklineGroup);
    /*
    <summary>
        Adds the SparklineGroup instance.
    </summary>
    */
    intrusive_ptr<SparklineGroup> AddGroup (SparklineType sparklineType);
    /*
    <summary>
        Adds the SparklineGroup instance.
    </summary>
    */
    virtual intrusive_ptr<SparklineGroup> AddGroup ();
private:
};
}}
