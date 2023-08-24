#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "XlsHPageBreak.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS HPageBreak : public virtual XlsHPageBreak
{
    friend class HPageBreaksCollection;
public:
    /*
    <summary>
        Location of the page break.
    </summary>
    */
    intrusive_ptr<CellRange> GetLocation ();
    void SetLocation (intrusive_ptr<CellRange> value);
private:
};
}}
