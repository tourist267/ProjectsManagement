#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IExcelApplication.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS XlsObject : public virtual Object,public virtual IExcelApplication
{
public:
    //virtual System.Object GetParent ();
    /*
    <summary>
        Dispose object and free resources.
    </summary>
    */
    virtual void Dispose ();
private:
};
}}
