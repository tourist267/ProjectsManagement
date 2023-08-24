#pragma once
#include "pch.h"
#pragma warning(push)
#pragma warning(disable:4250)
#include "ExcelAddInFunction.h"
#include "XlsAddInFunctionsCollection.h"
#pragma warning(pop)
namespace Spire{namespace Xls{
class EXPORTS AddInFunctionsCollection : public virtual XlsAddInFunctionsCollection
{
    friend class Workbook;
public:
    /*
    <summary>
        Get Add-In function.
    </summary>
    <param name="index">Item index.</param>
    <returns></returns>
    */
    intrusive_ptr<XlsAddInFunction> Get (int index);
private:
};
}}
