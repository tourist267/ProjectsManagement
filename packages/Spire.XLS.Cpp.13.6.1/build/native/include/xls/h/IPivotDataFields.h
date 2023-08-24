#pragma once
#include "pch.h"

//#pragma warning(push)
//#pragma warning(disable:4250)
//#include "SubtotalTypes.h"
//#include "IPivotField.h"
//#include "IPivotDataField.h"
//#include "PivotDataField.h"
//#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS IPivotDataFields 
{
public:
    virtual intrusive_ptr<PivotDataField> Get (int index)=0;
    virtual intrusive_ptr<IPivotDataField> Get (LPCWSTR_S name)=0;
    virtual intrusive_ptr<IPivotDataField> Add (intrusive_ptr<IPivotField> field,LPCWSTR_S name,SubtotalTypes subtotal)=0;
    virtual int GetCount ()=0;
private:
};
}}
