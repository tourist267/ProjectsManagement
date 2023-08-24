#pragma once
#include "pch.h"

//#pragma warning(push)
//#pragma warning(disable:4250)
//#include "PivotAutoFomatTypes.h"
//#include "IPivotFields.h"
//#include "IXLSRange.h"
//#include "IPivotCalculatedFields.h"
//#include "PivotTableFields.h"
//#include "IPivotTableOptions.h"
//#include "CellRange.h"
//#include "PivotDataFields.h"
//#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS IPivotTable : public virtual Object
{
    friend class IPivotTables;
    friend class XlsPivotTablesCollection;
public:
    virtual LPCWSTR_S GetName ()=0;
    virtual void SetName (LPCWSTR_S value)=0;
    virtual intrusive_ptr<PivotTableFields> GetPivotFields ()=0;
    virtual intrusive_ptr<PivotDataFields> GetDataFields ()=0;
    virtual bool GetIsRowGrand ()=0;
    virtual void SetIsRowGrand (bool value)=0;
    virtual bool GetIsColumnGrand ()=0;
    virtual void SetIsColumnGrand (bool value)=0;
    virtual bool GetShowDrillIndicators ()=0;
    virtual void SetShowDrillIndicators (bool value)=0;
    virtual bool GetDisplayFieldCaptions ()=0;
    virtual void SetDisplayFieldCaptions (bool value)=0;
    virtual bool GetRepeatItemsOnEachPrintedPage ()=0;
    virtual void SetRepeatItemsOnEachPrintedPage (bool value)=0;
    //virtual System.Nullable`1[[Spire.Xls.PivotBuiltInStyles, Spire.XLS, Version=12.7.7.0, Culture=neutral, PublicKeyToken=null]] GetBuiltInStyle ()=0;
    //virtual void SetBuiltInStyle (System.Nullable`1[[Spire.Xls.PivotBuiltInStyles, Spire.XLS, Version=12.7.7.0, Culture=neutral, PublicKeyToken=null]] value)=0;
    virtual bool GetShowRowGrand ()=0;
    virtual void SetShowRowGrand (bool value)=0;
    virtual bool GetShowColumnGrand ()=0;
    virtual void SetShowColumnGrand (bool value)=0;
    virtual int GetCacheIndex ()=0;
    virtual intrusive_ptr<CellRange> GetLocation ()=0;
    virtual void SetLocation (intrusive_ptr<CellRange> value)=0;
    //virtual intrusive_ptr<IPivotTableOptions> GetOptions ()=0;
    virtual int GetRowsPerPage ()=0;
    virtual int GetColumnsPerPage ()=0;
    virtual intrusive_ptr<IPivotCalculatedFields> GetCalculatedFields ()=0;
    virtual intrusive_ptr<IPivotFields> GetPageFields ()=0;
    virtual intrusive_ptr<IPivotFields> GetRowFields ()=0;
    virtual intrusive_ptr<IPivotFields> GetColumnFields ()=0;
    virtual bool GetShowDataFieldInRow ()=0;
    virtual void SetShowDataFieldInRow (bool value)=0;
    virtual PivotAutoFomatTypes GetAutoFormatType ()=0;
    virtual void SetAutoFormatType (PivotAutoFomatTypes value)=0;
    virtual bool GetIsCompatibleWithExcel2003 ()=0;
    virtual void SetIsCompatibleWithExcel2003 (bool value)=0;
    virtual void Clear ()=0;
    virtual void ClearRowFieldFilter (LPCWSTR_S fieldName)=0;
    virtual void ClearColumnFieldFilter (LPCWSTR_S fieldName)=0;
    virtual void ClearFilter (LPCWSTR_S fieldName)=0;
    virtual void ChangeDataSource (intrusive_ptr<IXLSRange> dataSource)=0;
private:
};
}}
