#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "XlsVPageBreak.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
/*
    <summary>
        Represents a vertical page break.
    </summary>
*/
class EXPORTS VPageBreak : public virtual XlsVPageBreak
{
    friend class VPageBreaksCollection;
public:
    /*
    <summary>
        Returns or sets the cell (a Range object) that defines the page-break location.
    </summary>
    */
    intrusive_ptr<CellRange> GetLocation ();
    void SetLocation (intrusive_ptr<CellRange> value);
private:
};
}}
