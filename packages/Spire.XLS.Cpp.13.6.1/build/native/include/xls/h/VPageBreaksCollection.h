#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "XlsVPageBreaksCollection.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS VPageBreaksCollection : public virtual XlsVPageBreaksCollection
{
    friend class Worksheet;
public:
    /*
    <summary>
        Gets a object from collection
    </summary>
    */
    intrusive_ptr<VPageBreak> Get (int index);
    /*
    <summary>
        Adds a horizontal page break.
    </summary>
    <param name="range">Range which a page break need inserted.</param>
    <returns></returns>
    */
    intrusive_ptr<VPageBreak> Add (intrusive_ptr<CellRange> range);
    /*
    <summary>
        Remove page break with specified range.
    </summary>
    <param name="range">range object.</param>
    <returns></returns>
    */
    void Remove (intrusive_ptr<CellRange> range);
    /*
    <summary>
        Returns page break at the specified Column index.
    </summary>
    <param name="rowIndex">Column index.</param>
    <returns></returns>
    */
    intrusive_ptr<VPageBreak> GetPageBreak (int columnIndex);
    /*
    <summary>
        Returns page break at the specified range.
    </summary>
    <param name="range">range object.</param>
    <returns></returns>
    */
    intrusive_ptr<VPageBreak> GetPageBreak (intrusive_ptr<CellRange> range);
private:
};
}}
