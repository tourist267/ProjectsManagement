#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IAutoFilters.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS XlsAutoFiltersCollection : public virtual Object,public virtual IAutoFilters
{
public:
    intrusive_ptr<DataSorter> GetSorter ();
    virtual intrusive_ptr<IXLSRange> GetRange ();
    virtual void SetRange (intrusive_ptr<IXLSRange> value);
    /*
    <summary>
        Gets addres of filtered range in R1C1 style. Read only.
    </summary>
    */
    LPCWSTR_S GetAddressR1C1 ();
    intrusive_ptr<Worksheet> GetWorksheet ();
    bool GetHasFiltered ();
    /*
    <summary>
        Get auto filter item..
    </summary>
    */
    virtual intrusive_ptr<FilterColumn> Get (int columnIndex);
    virtual int GetCount ();
    intrusive_ptr<XlsAutoFiltersCollection> Clone (intrusive_ptr<XlsWorksheet> parent);
private:
};
}}
