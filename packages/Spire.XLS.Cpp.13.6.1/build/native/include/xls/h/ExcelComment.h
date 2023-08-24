#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "ExcelCommentObject.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS ExcelComment : public virtual ExcelCommentObject
{
    friend class CellRange;
    friend class RangesCollection;
    friend class CommentsCollection;
public:
    /*
    <summary>
        Comment rich text.
    </summary>
    */
    intrusive_ptr<IRichTextString> GetRichText ();
private:
};
}}
