#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS PivotTableStyle : public virtual Object
{
    friend class PivotStyle;
public:
    //void SetConverter (System.Object converter);
    bool GetIsDefaultStyle ();
    void SetIsDefaultStyle (bool value);
    LPCWSTR_S GetName ();
    //System.Collections.Generic.Dictionary`2[[Spire.Xls.PivotTableElement, Spire.XLS, Version=12.7.7.0, Culture=neutral, PublicKeyToken=null],[Spire.Xls.Core.Spreadsheet.PivotTables.PivotStyle, Spire.XLS, Version=12.7.7.0, Culture=neutral, PublicKeyToken=null]] GetStyles ();
private:
};
}}
