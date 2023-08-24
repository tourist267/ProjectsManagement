#pragma once
#include "pch.h"

//#pragma warning(push)
//#pragma warning(disable:4250)
//#include "PivotPageAreaFieldsOrderType.h"
//#include "PivotTableLayoutType.h"
//#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS IPivotTableOptions 
{
    friend class IPivotTable;
    friend class XlsPivotTable;
public:
    virtual bool GetShowAsteriskTotals ()=0;
    virtual void SetShowAsteriskTotals (bool value)=0;
    virtual LPCWSTR_S GetColumnHeaderCaption ()=0;
    virtual void SetColumnHeaderCaption (LPCWSTR_S value)=0;
    virtual LPCWSTR_S GetRowHeaderCaption ()=0;
    virtual void SetRowHeaderCaption (LPCWSTR_S value)=0;
    virtual bool GetShowCustomSortList ()=0;
    virtual void SetShowCustomSortList (bool value)=0;
    virtual bool GetShowFieldList ()=0;
    virtual void SetShowFieldList (bool value)=0;
    virtual bool GetShowGridDropZone ()=0;
    virtual void SetShowGridDropZone (bool value)=0;
    virtual bool GetIsDataEditable ()=0;
    virtual void SetIsDataEditable (bool value)=0;
    virtual bool GetEnableFieldProperties ()=0;
    virtual void SetEnableFieldProperties (bool value)=0;
    //virtual System.UInt32 GetIndent ()=0;
    //virtual void SetIndent (System.UInt32 value)=0;
    virtual LPCWSTR_S GetErrorString ()=0;
    virtual void SetErrorString (LPCWSTR_S value)=0;
    virtual bool GetDisplayErrorString ()=0;
    virtual void SetDisplayErrorString (bool value)=0;
    virtual bool GetMergeLabels ()=0;
    virtual void SetMergeLabels (bool value)=0;
    virtual int GetPageFieldWrapCount ()=0;
    virtual void SetPageFieldWrapCount (int value)=0;
    virtual PivotPageAreaFieldsOrderType GetPageFieldsOrder ()=0;
    virtual void SetPageFieldsOrder (PivotPageAreaFieldsOrderType value)=0;
    virtual bool GetDisplayNullString ()=0;
    virtual void SetDisplayNullString (bool value)=0;
    virtual LPCWSTR_S GetNullString ()=0;
    virtual void SetNullString (LPCWSTR_S value)=0;
    virtual bool GetPreserveFormatting ()=0;
    virtual void SetPreserveFormatting (bool value)=0;
    virtual bool GetIsAutoFormat ()=0;
    virtual void SetIsAutoFormat (bool value)=0;
    virtual bool GetShowTooltips ()=0;
    virtual void SetShowTooltips (bool value)=0;
    virtual bool GetDisplayFieldCaptions ()=0;
    virtual void SetDisplayFieldCaptions (bool value)=0;
    virtual bool GetPrintTitles ()=0;
    virtual void SetPrintTitles (bool value)=0;
    virtual bool GetIsSaveData ()=0;
    virtual void SetIsSaveData (bool value)=0;
    virtual PivotTableLayoutType GetRowLayout ()=0;
    virtual void SetRowLayout (PivotTableLayoutType value)=0;
    virtual bool GetShowDrillIndicators ()=0;
    virtual void SetShowDrillIndicators (bool value)=0;
    //virtual System.Int16 GetDataPosition ()=0;
    //virtual void SetDataPosition (System.Int16 value)=0;
private:
};
}}
