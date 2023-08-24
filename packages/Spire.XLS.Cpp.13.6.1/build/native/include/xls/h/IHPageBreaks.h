#pragma once
#include "pch.h"

//#pragma warning(push)
//#pragma warning(disable:4250)
//#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS IHPageBreaks : public virtual Object
{
    friend class IWorksheet;
    friend class XlsWorksheet;
public:
    virtual int GetCount ()=0;
    //virtual System.Object GetParent ()=0;
private:
};
}}
