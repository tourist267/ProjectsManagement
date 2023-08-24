#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Xls{
/*

*/
class EXPORTS IChartTrendLines : public virtual Object
{
public:
    /*

    */
    virtual intrusive_ptr<IChartTrendLine> GetItem (int iIndex);
    /*

    */
    virtual intrusive_ptr<IChartTrendLine> Add ();
    /*

    */
    virtual intrusive_ptr<IChartTrendLine> Add (TrendLineType type);
    /*

    */
    virtual void RemoveAt (int index);
    /*

    */
    virtual void Clear ();
    /*

    */
    virtual int GetCount ();
private:
};
}}
