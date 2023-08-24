#pragma once
#include "pch.h"

//#pragma warning(push)
//#pragma warning(disable:4250)
//#include "SortOrientationType.h"
//#include "CellRange.h"
//#include "SortColumns.h"
//#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS IDataSort 
{
public:
    virtual bool GetIsCaseSensitive ()=0;
    virtual void SetIsCaseSensitive (bool value)=0;
    virtual bool GetIsIncludeTitle ()=0;
    virtual void SetIsIncludeTitle (bool value)=0;
    virtual SortOrientationType GetOrientation ()=0;
    virtual void SetOrientation (SortOrientationType value)=0;
    virtual intrusive_ptr<SortColumns> GetSortColumns ()=0;
    virtual void SetSortColumns (intrusive_ptr<SortColumns> value)=0;
    virtual void Sort (intrusive_ptr<CellRange> range)=0;
private:
};
}}
