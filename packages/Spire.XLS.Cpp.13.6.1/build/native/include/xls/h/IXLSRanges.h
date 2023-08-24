#pragma once
#include "pch.h"
#pragma warning(push)
#pragma warning(disable:4250)
//#include "IExcelApplication.h"
#include "IXLSRange.h"
#pragma warning(pop)

namespace Spire{namespace Xls{
class EXPORTS IXLSRanges : public virtual IXLSRange
{
public:
    /*
    <summary>
        Removes range from the collection.
    </summary>
    <param name="range">Range to remove.</param>
    */
    virtual bool Remove (intrusive_ptr<XlsRange> range)=0;
    /*
    <summary>
        Returns item by index from the collection.
    </summary>
    */
    virtual intrusive_ptr<XlsRange> Get (int index)=0;
private:
};
}}
