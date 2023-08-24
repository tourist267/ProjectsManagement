#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IDataSort.h"
#pragma warning(pop)
namespace Spire{namespace Xls{
class EXPORTS DataSorter : public virtual Object,public virtual IDataSort
{
    friend class Workbook;
    friend class XlsAutoFiltersCollection;
public:
    /*
    <summary>
        Indicates whether to perform case sensitive sort.
    </summary>
    */
    virtual bool GetIsCaseSensitive ();
    virtual void SetIsCaseSensitive (bool value);
    /*
    <summary>
        Indicates whether the cell range has title.
    </summary>
    */
    virtual bool GetIsIncludeTitle ();
    virtual void SetIsIncludeTitle (bool value);
    virtual SortOrientationType GetOrientation ();
    virtual void SetOrientation (SortOrientationType value);
    virtual intrusive_ptr<SortColumns> GetSortColumns ();
    virtual void SetSortColumns (intrusive_ptr<SortColumns> value);
    SortedWayType GetSortedWay ();
    void SetSortedWay (SortedWayType value);
    bool GetSortLeftToRight ();
    void SetSortLeftToRight (bool value);
    virtual void Sort (intrusive_ptr<CellRange> range);
    //void SortBy (std::vector<int> iColumns,std::vector<intrusive_ptr<OrderBy>> orderBy,std::vector<intrusive_ptr<Color>> colors);
private:
};
}}
