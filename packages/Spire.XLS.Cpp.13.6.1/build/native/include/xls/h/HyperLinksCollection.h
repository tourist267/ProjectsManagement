#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "XlsHyperLinksCollection.h"
#include "HyperLink.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS HyperLinksCollection : public virtual XlsHyperLinksCollection
{
    friend class Worksheet;
public:
    intrusive_ptr<HyperLink> Get (int index);
    intrusive_ptr<HyperLink> Add (intrusive_ptr<CellRange> range);
    int Add (intrusive_ptr<HyperLink> link);
    /*
    <summary>
        Gets hyperlinks for the specified range.
    </summary>
    <param name="range">range object.</param>
    <returns></returns>
    */
    intrusive_ptr<HyperLinksCollection> GetRangeHyperlinks (intrusive_ptr<CellRange> range);
private:
};
}}
