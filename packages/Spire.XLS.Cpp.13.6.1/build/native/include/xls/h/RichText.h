#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "RichTextObject.h"
#include "ExcelFont.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS RichText : public virtual RichTextObject
{
    friend class ExcelComment;
    friend class CellRange;
    friend class RangesCollection;
public:
    /*
    <summary>
        Returns font for character at specified position.
    </summary>
    <param name="Position">Position</param>
    */
    intrusive_ptr<IFont> GetFont (int position);
    /*
    <summary>
        Sets font for specified range of characters.
    </summary>
    <param name="startPos">Position of first character.</param>
    <param name="endPos">Position of last character.</param>
    <param name="font">Font to set.</param>
    */
    void SetFont (int startPos,int endPos,intrusive_ptr<ExcelFont> font);
private:
};
}}
