#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS XlsPivotCacheField : public virtual Object
{
public:
    LPCWSTR_S GetFormula ();
    void SetFormula (LPCWSTR_S value);
    bool GetIsDataBaseField ();
    void SetIsDataBaseField (bool value);
    bool GetIsDouble ();
    void SetIsDouble (bool value);
    bool GetIsDoubleInt ();
    void SetIsDoubleInt (bool value);
    bool GetIsString ();
    void SetIsString (bool value);
    bool GetIsDate ();
    int GetItemCount ();
    LPCWSTR_S GetName ();
    void SetName (LPCWSTR_S value);
    int GetIndex ();
    void SetIndex (int value);
    PivotDataType GetDataType ();
    /*
    <summary>
        Indicates the field is formula field
    </summary>
    */
    bool GetIsFormulaField ();
    /*
    <summary>
        Specifies the caption of the cache field
    </summary>
    */
    LPCWSTR_S GetCaption ();
    void SetCaption (LPCWSTR_S value);
    /*
    <summary>
        Represents the cache field is Field group
    </summary>
    */
    bool Getisfieldgroup ();
    //System.Object GetValue (int index);
private:
};
}}
