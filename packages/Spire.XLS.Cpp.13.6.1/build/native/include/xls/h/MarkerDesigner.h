#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS MarkerDesigner : public virtual Object
{
    friend class Workbook;
public:
    //void AddDataTable (LPCWSTR_S paraName,System.Data.DataTable dataTable);
    //void AddDataTable (LPCWSTR_S paraName,System.Data.DataTable dataTable,int rowCount);
    //void AddDataView (LPCWSTR_S paraName,System.Data.DataView dataView);
    //void AddArray (LPCWSTR_S paraName,std::vector<System.Object> paramValues);
    //void AddDataColumn (LPCWSTR_S paramName,System.Data.DataColumn paramValue);
    //void AddParameter (LPCWSTR_S paraName,System.Object paramValue);
    /*
    <summary>
        Removes parameter from template marker.
    </summary>
    <param name="paraName"></param>
    */
    void RemoveParameter (LPCWSTR_S paraName);
    /*
    <summary>
        Checks parameter is exist.
    </summary>
    <param name="paramName"></param>
    */
    void Contains (LPCWSTR_S paramName);
    /*
    <summary>
        Apply templates markers
    </summary>
    */
    void Apply ();
    /*
    <summary>
        Prefix of Marker
    </summary>
    */
    LPCWSTR_S GetPrefix ();
    void SetPrefix (LPCWSTR_S value);
    /*
    <summary>
        Whether detect the dataTypes when apply marker
    </summary>
    */
    bool GetIsDetectDataTypes ();
    void SetIsDetectDataTypes (bool value);
private:
};
}}
