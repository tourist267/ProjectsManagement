#pragma once
#include "pch.h"

//#pragma warning(push)
//#pragma warning(disable:4250)
//#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS IColorScale 
{
public:
    //virtual System.Collections.Generic.IList`1[[Spire.Xls.Core.Spreadsheet.ColorConditionValue, Spire.XLS, Version=12.7.7.0, Culture=neutral, PublicKeyToken=null]] GetCriteria ()=0;
    virtual void SetConditionCount (int count)=0;
private:
};
}}
