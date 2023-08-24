#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "XlsHyperLink.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS HyperLink : public virtual XlsHyperLink
{
    friend class HyperLinksCollection;
public:
    /*
    <summary>
        Returns a Range object that represents the range the specified hyperlink is attached to.
    </summary>
    */
    intrusive_ptr<IXLSRange> GetRange ();
    void SetRange (intrusive_ptr<CellRange> value);
private:
};
}}
