#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "XlsValidationWrapper.h"
#include "CellRange.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS Validation : public virtual XlsValidationWrapper
{
    friend class IXLSRange;
    friend class XlsName;
    friend class XlsRange;
    friend class XlsRangesCollection;
public:
    /*
    <summary>
        Returns data type validation for a range
    </summary>
    */
    intrusive_ptr<IXLSRange> GetDataRange ();
    void SetDataRange (intrusive_ptr<CellRange> value);
private:
};
}}
