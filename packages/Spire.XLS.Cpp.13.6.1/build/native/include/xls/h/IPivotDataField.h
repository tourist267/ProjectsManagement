#pragma once
#include "pch.h"

//#pragma warning(push)
//#pragma warning(disable:4250)
//#include "SubtotalTypes.h"
//#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS IPivotDataField : public virtual Object
{
    friend class IPivotDataFields;
    friend class PivotDataFields;
public:
    virtual LPCWSTR_S GetName ()=0;
    virtual SubtotalTypes GetSubtotal ()=0;
    virtual int GetBaseItem ()=0;
    virtual void SetBaseItem (int value)=0;
    virtual int GetBaseField ()=0;
    virtual void SetBaseField (int value)=0;
private:
};
}}
