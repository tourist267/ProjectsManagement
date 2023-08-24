#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "ISortColumns.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
/*
    <summary>
        Represents the sort column collection.
    </summary>
*/
class EXPORTS SortColumns : public virtual Object,public virtual ISortColumns
{
    friend class IDataSort;
    friend class DataSorter;
public:
    /*
    <summary>
        Adds the item in the collection.
    </summary>
    <param name="key">Column Index to sort the data.</param>
    <param name="sortComparsionType">Compare value type.</param>
    <param name="orderBy">To order the sorted data.</param>
    <returns>Added sort column.</returns>
    */
    virtual intrusive_ptr<SortColumn> Add (int key,SortComparsionType sortComparsionType,OrderBy orderBy);
    /*
    <summary>
         Adds the item in the collection.
    </summary>
    <param name="key">Column Index to sort the data.</param>
    <param name="orderBy">To order the sorted data.</param>
    <returns>Added sort column.</returns>
    */
    virtual intrusive_ptr<SortColumn> Add (int key,OrderBy orderBy);
    /*
    <summary>
         Adds the item in the collection.
    </summary>
    <param name="key">Column Index to sort the data.</param>
    <param name="customSortOrder">Custom order to order the sorted data.</param>
    <returns>Added sort column.</returns>
    */
    intrusive_ptr<SortColumn> Add (int key,std::vector<LPCWSTR_S> customSortOrder);
    virtual void Remove (intrusive_ptr<SortColumn> sortColumn);
    /*
    <summary>
        Remvoes the Sort item in the collection.
    </summary>
    <param name="fieldIndex">Field index to remove.</param>
    */
    virtual void Remove (int key);
    void RemoveAt (int index);
    intrusive_ptr<SortColumn> GetByIndex (int index);
    virtual intrusive_ptr<SortColumn> Get (int fieldIndex);
    //virtual System.Collections.IEnumerator GetEnumerator ();
    void Clear ();
    int GetCapacity ();
    void SetCapacity (int value);
    virtual int GetCount ();
private:
};
}}
