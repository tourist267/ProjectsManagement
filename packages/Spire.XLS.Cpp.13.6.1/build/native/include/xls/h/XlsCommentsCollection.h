#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IComments.h"
#include "CollectionBase.h"
#include "XlsComment.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS XlsCommentsCollection : public virtual CollectionBase<XlsComment>,public virtual IComments
{
public:
    virtual intrusive_ptr<XlsComment> Get (int index);
    virtual intrusive_ptr<XlsComment> Get (int iRow,int iColumn);
    intrusive_ptr<XlsComment> Get (LPCWSTR_S name);
    /*
    <summary>
        Adds comment to the specified range.
    </summary>
    <param name="iRow">Row of the cell to add comment to.</param>
    <param name="iColumn">Column of the cell to add comment to.</param>
    <returns>Newly created comment shape.</returns>
    */
    intrusive_ptr<XlsComment> AddComment (int iRow,int iColumn);
    intrusive_ptr<XlsComment> AddComment (int iRow,int iColumn,bool bIsParseOptions);
    virtual int GetCount();
private:
};
}}
