#pragma once
#include "pch.h"

//#pragma warning(push)
//#pragma warning(disable:4250)
//#include "IXLSRange.h"
//#include "IListObject.h"
 //#include "../../common/h/IEnumerable.h"
//#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS IListObjects : public virtual IList<IListObject>
{
    friend class IWorksheet;
    friend class XlsWorksheet;
public:
    /*
    <summary>
        Creates new list object and adds it to the collection.
    </summary>
    <param name="name">Name of the new list object.</param>
    <param name="range">Destination range.</param>
    <returns>Newly created object.</returns>
    */
    virtual intrusive_ptr<IListObject> Create (LPCWSTR_S name,intrusive_ptr<IXLSRange> range);
private:
};
}}
