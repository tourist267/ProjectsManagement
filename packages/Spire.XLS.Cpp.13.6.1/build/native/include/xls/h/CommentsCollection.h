#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "XlsCommentsCollection.h"
#pragma warning(pop)

namespace Spire{namespace Xls{
class EXPORTS CommentsCollection : public virtual XlsCommentsCollection
{
    friend class ChartSheet;
    friend class Worksheet;
public:
    /*
    <summary>
        Adds comment to the specified range.
    </summary>
    <param name="range">Range that adds comment.</param>
    <returns>Created comment object..</returns>
    */
    intrusive_ptr<ExcelComment> AddComment (intrusive_ptr<CellRange> range);
    /*
    <summary>
        Adds comment to the specified row and column.
    </summary>
    <param name="rowIndex">Row index..</param>
    <param name="columnIndex">Column index.</param>
    <returns>Created comment object.</returns>
    */
    intrusive_ptr<ExcelComment> AddComment (int rowIndex,int columnIndex);
    /*
    <summary>
        Removes comment object from the collection.
    </summary>
    <param name="comment">Comment to remove.</param>
    */
    void Remove (intrusive_ptr<ExcelComment> comment);
    /*
    <summary>
        Gets a comment object.
    </summary>
    */
    intrusive_ptr<ExcelComment> GetExcelComment(int index);
    intrusive_ptr<ExcelComment> GetExcelComment(LPCWSTR_S name);
    /*
    <summary>
        Gets a comment object.
    </summary>
    */
    intrusive_ptr<ExcelComment> GetExcelComment(int Row,int Column);
private:
};
}}
