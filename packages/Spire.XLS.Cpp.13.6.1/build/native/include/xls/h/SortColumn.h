#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "ISortColumn.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS SortColumn : public virtual Object,public virtual ISortColumn
{
    friend class ISortColumns;
    friend class SortColumns;
public:
    /*
    <summary>
        Represents the column to be sorted on.
    </summary>
    */
    virtual int GetKey ();
    virtual void SetKey (int value);
    /*
    <summary>
        Represents the sort by in the range.
    </summary>
    */
    virtual SortComparsionType GetComparsionType ();
    virtual void SetComparsionType (SortComparsionType value);
    /*
    <summary>
        Represents the sort order.
    </summary>
    */
    virtual OrderBy GetOrder ();
    virtual void SetOrder (OrderBy value);
    /*
    <summary>
        Represents the custom sort order data.
    </summary>
    */
    std::vector<LPCWSTR_S> GetCustomSortOrder ();
    void SetCustomSortOrder (std::vector<LPCWSTR_S> value);
    /*
    <summary>
        Represents the color to sort. Throws exception when SortOn type is Values.
    </summary>
    */
    virtual intrusive_ptr<Color> GetColor ();
    virtual void SetColor (intrusive_ptr<Color> value);
    virtual void SetLevel (int level);
private:
};
}}
