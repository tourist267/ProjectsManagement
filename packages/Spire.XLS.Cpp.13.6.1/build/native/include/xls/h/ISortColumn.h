#pragma once
#include "pch.h"

//#pragma warning(push)
//#pragma warning(disable:4250)
//#include "OrderBy.h"
//#include "SortComparsionType.h"
//#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS ISortColumn 
{
public:
    virtual int GetKey ()=0;
    virtual void SetKey (int value)=0;
    virtual SortComparsionType GetComparsionType ()=0;
    virtual void SetComparsionType (SortComparsionType value)=0;
    virtual OrderBy GetOrder ()=0;
    virtual void SetOrder (OrderBy value)=0;
    virtual intrusive_ptr<Color> GetColor ()=0;
    virtual void SetColor (intrusive_ptr<Color> value)=0;
    virtual void SetLevel (int priority)=0;
private:
};
}}
