#pragma once
#include "pch.h"

//#pragma warning(push)
//#pragma warning(disable:4250)
//#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS INamedObject 
{
    friend class XlsWorkbookObjectsCollection;
public:
    virtual LPCWSTR_S GetName ()=0;
private:
};
}}
