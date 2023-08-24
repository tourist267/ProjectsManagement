#pragma once
#include "pch.h"
//#pragma warning(push)
//#pragma warning(disable:4250)
//#include "IExcelApplication.h"
//#include "IInterior.h"
#include "IExtendedFormat.h"
#include "IOptimizedUpdate.h"
//#pragma warning(pop)
namespace Spire{namespace Xls{
class EXPORTS IStyle : public virtual IExtendedFormat,public virtual IOptimizedUpdate
{
    friend class IStyles;
    friend class IXLSRange;
    friend class IWorksheet;
    friend class XlsName;
    friend class XlsRange;
    friend class XlsWorksheet;
    friend class XlsRangesCollection;
    friend class XlsStylesCollection;
public:
    virtual bool GetBuiltIn ()=0;
    virtual LPCWSTR_S GetName ()=0;
    virtual bool GetIsInitialized ()=0;
    virtual intrusive_ptr<IInterior> GetInterior ()=0;
private:
};
}}
