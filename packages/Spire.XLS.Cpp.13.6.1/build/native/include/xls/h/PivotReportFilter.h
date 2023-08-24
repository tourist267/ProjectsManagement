#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Xls{
/*
    <summary>
        Represent the report filter of PivotTable
    </summary>
*/
class EXPORTS PivotReportFilter : public virtual Object
{
    friend class PivotReportFilters;
public:
    /*
    <summary>
        Indicated whether multiple select the filter field
    </summary>
    */
    bool GetIsMultipleSelect ();
    void SetIsMultipleSelect (bool value);
    //System.Collections.Generic.List`1[[System.String, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089]] GetFilterItemStrings ();
    //void SetFilterItemStrings (System.Collections.Generic.List`1[[System.String, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089]] value);
    /*
    <summary>
        Represent the page field string of pivottable
    </summary>
    */
    LPCWSTR_S GetFieldString ();
    void SetFieldString (LPCWSTR_S value);
    /*
    <summary>
        Represents the name of filter field
    </summary>
    */
    LPCWSTR_S GetFieldName ();
    void SetFieldName (LPCWSTR_S value);
private:
};
}}
