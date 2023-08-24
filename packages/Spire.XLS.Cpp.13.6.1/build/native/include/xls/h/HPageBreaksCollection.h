#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "XlsHPageBreaksCollection.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS HPageBreaksCollection : public virtual XlsHPageBreaksCollection
{
    friend class Worksheet;
public:
    intrusive_ptr<HPageBreak> Get (int index);
    /*
    <summary>
        Gets page break object item.
    </summary>
    */
    intrusive_ptr<HPageBreak> Get (intrusive_ptr<CellRange> location);
    /*
    <summary>
        Adds a horizontal page break. 
    </summary>
    <param name="location">range which new page break inserted.</param>
    <returns>HPageBreak added.</returns>
    */
    intrusive_ptr<HPageBreak> Add (intrusive_ptr<CellRange> range);
    void Remove (intrusive_ptr<CellRange> range);
    /*
    <summary>
        Returns page break at the specified row.
    </summary>
    <param name="rowIndex">Row index.</param>
    <returns>Page break object.</returns>
    */
    intrusive_ptr<HPageBreak> GetPageBreak (int rowIndex);
    /*
    <summary>
        Returns page break at the specified range.
    </summary>
    <param name="range">Range object.</param>
    <returns>Page break object.</returns>
    */
    intrusive_ptr<HPageBreak> GetPageBreak (intrusive_ptr<CellRange> range);
private:
};
}}
