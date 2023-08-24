#pragma once
#include "pch.h"

//#pragma warning(push)
//#pragma warning(disable:4250)
//#include "UnknownVariableAction.h"
//#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS IMarkersDesigner 
{
    friend class IWorkbook;
    friend class XlsWorkbook;
public:
    virtual void ApplyMarkers ()=0;
    virtual void ApplyMarkers (UnknownVariableAction action)=0;
    //virtual void AddVariable (LPCWSTR_S strName,System.Object variable,int rowCount)=0;
    virtual void RemoveVariable (LPCWSTR_S strName)=0;
    virtual bool ContainsVariable (LPCWSTR_S strName)=0;
    virtual LPCWSTR_S GetMarkerPrefix ()=0;
    virtual void SetMarkerPrefix (LPCWSTR_S value)=0;
    //virtual System.Char GetArgumentSeparator ()=0;
    //virtual void SetArgumentSeparator (System.Char value)=0;
    virtual bool GetIsDetectDataTypes ()=0;
    virtual void SetIsDetectDataTypes (bool value)=0;
private:
};
}}
