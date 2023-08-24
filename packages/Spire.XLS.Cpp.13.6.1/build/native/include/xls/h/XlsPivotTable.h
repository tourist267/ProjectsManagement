#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IPivotTable.h"
#include "XlsObject.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS XlsPivotTable : public virtual XlsObject,public virtual IPivotTable
{
    friend class PivotCalculatedFieldsCollection;
    friend class PivotDataFields;
public:
    /*
    <summary>
         Specifies a boolean value that indicates whether to show row stripe formatting for the
            table.
     </summary>
    */
    bool GetShowRowStripes ();
    void SetShowRowStripes (bool value);
    /*
    <summary>
        Represents the pivot table to add the Calculated 
            Data field in rows
    </summary>
    */
    virtual bool GetShowDataFieldInRow ();
    virtual void SetShowDataFieldInRow (bool value);
    /*
    <summary>
        Gets or sets report filter collection
    </summary>
    */
    intrusive_ptr<PivotReportFilters> GetReportFilters ();
    void SetReportFilters (intrusive_ptr<PivotReportFilters> value);
    /*
    <summary>
        Indicated whether diplay all subtotal at top of group,
            Change will cover every field's setting
    </summary>
    */
    bool GetAllSubTotalTop ();
    void SetAllSubTotalTop (bool value);
    /*
    <summary>
        Represent the custom Style for this PivotTable
    </summary>
    */
    LPCWSTR_S GetCustomTableStyleName ();
    void SetCustomTableStyleName (LPCWSTR_S value);
    void CalculateData ();
    /*
    <summary>
        Change the data source of pivotTable.
    </summary>
    <param name="dataSource">New data source range.</param>
    */
    virtual void ChangeDataSource (intrusive_ptr<IXLSRange> dataSource);
    //System.Object Clone (System.Object parent);
    //System.Object Clone (System.Object parent,int cacheIndex,System.Collections.Generic.Dictionary`2[[System.String, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089],[System.String, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089]] hashWorksheetNames);
    virtual LPCWSTR_S GetName ();
    virtual void SetName (LPCWSTR_S value);
    virtual intrusive_ptr<PivotTableFields> GetPivotFields ();
    virtual intrusive_ptr<PivotDataFields> GetDataFields ();
    virtual bool GetIsRowGrand ();
    virtual void SetIsRowGrand (bool value);
    virtual bool GetIsColumnGrand ();
    virtual void SetIsColumnGrand (bool value);
    virtual bool GetShowDrillIndicators ();
    virtual void SetShowDrillIndicators (bool value);
    virtual bool GetDisplayFieldCaptions ();
    virtual void SetDisplayFieldCaptions (bool value);
    virtual bool GetRepeatItemsOnEachPrintedPage ();
    virtual void SetRepeatItemsOnEachPrintedPage (bool value);
    //virtual System.Nullable`1[[Spire.Xls.PivotBuiltInStyles, Spire.XLS, Version=12.7.7.0, Culture=neutral, PublicKeyToken=null]] GetBuiltInStyle ();
    //virtual void SetBuiltInStyle (System.Nullable`1[[Spire.Xls.PivotBuiltInStyles, Spire.XLS, Version=12.7.7.0, Culture=neutral, PublicKeyToken=null]] value);
    virtual bool GetShowRowGrand ();
    virtual void SetShowRowGrand (bool value);
    virtual bool GetShowColumnGrand ();
    virtual void SetShowColumnGrand (bool value);
    virtual int GetCacheIndex ();
    virtual PivotAutoFomatTypes GetAutoFormatType ();
    virtual void SetAutoFormatType (PivotAutoFomatTypes value);
    virtual bool GetIsCompatibleWithExcel2003 ();
    virtual void SetIsCompatibleWithExcel2003 (bool value);
    virtual intrusive_ptr<CellRange> GetLocation ();
    virtual void SetLocation (intrusive_ptr<CellRange> value);
    //virtual intrusive_ptr<IPivotTableOptions> GetOptions ();
    virtual int GetRowsPerPage ();
    void SetRowsPerPage (int value);
    virtual int GetColumnsPerPage ();
    void SetColumnsPerPage (int value);
    virtual intrusive_ptr<IPivotCalculatedFields> GetCalculatedFields ();
    virtual intrusive_ptr<IPivotFields> GetPageFields ();
    virtual intrusive_ptr<IPivotFields> GetRowFields ();
    virtual intrusive_ptr<IPivotFields> GetColumnFields ();
    bool GetShowSubtotals ();
    void SetShowSubtotals (bool value);
    virtual void Clear ();
    virtual void ClearRowFieldFilter (LPCWSTR_S fieldName);
    virtual void ClearColumnFieldFilter (LPCWSTR_S fieldName);
    virtual void ClearFilter (LPCWSTR_S fieldName);
    intrusive_ptr<XlsPivotTablesCollection> GetParent ();
    bool GetDisplayErrorString ();
    void SetDisplayErrorString (bool value);
    bool GetDisplayNullString ();
    void SetDisplayNullString (bool value);
    bool GetEnableDrilldown ();
    void SetEnableDrilldown (bool value);
    bool GetEnableFieldDialog ();
    void SetEnableFieldDialog (bool value);
    bool GetEnableWizard ();
    void SetEnableWizard (bool value);
    LPCWSTR_S GetErrorString ();
    void SetErrorString (LPCWSTR_S value);
    bool GetManualUpdate ();
    void SetManualUpdate (bool value);
    bool GetMergeLabels ();
    void SetMergeLabels (bool value);
    LPCWSTR_S GetNullString ();
    void SetNullString (LPCWSTR_S value);
    PagesOrderType GetPageFieldOrder ();
    void SetPageFieldOrder (PagesOrderType value);
    LPCWSTR_S GetPageFieldStyle ();
    void SetPageFieldStyle (LPCWSTR_S value);
    int GetPageFieldWrapCount ();
    void SetPageFieldWrapCount (int value);
    intrusive_ptr<PivotCache> GetCache ();
    intrusive_ptr<PivotConditionalFormatCollection> GetPivotConditionalFormats ();
    intrusive_ptr<XlsWorkbook> GetWorkbook ();
    intrusive_ptr<XlsWorksheet> GetWorksheet ();
    /*
    <summary>
         Specifies the first column of the PivotTable data, relative to the top left cell in the ref
            value
     </summary>
    */
    int GetFirstDataCol ();
    void SetFirstDataCol (int value);
    /*
    <summary>
         Specifies the first column of the PivotTable data, relative to the top left cell in the ref
            value
     </summary>
    */
    int GetFirstDataRow ();
    void SetFirstDataRow (int value);
    /*
    <summary>
         Specifies the first row of the PivotTable header, relative to the top left cell in the ref
            value.
     </summary>
    */
    int GetFirstHeaderRow ();
    void SetFirstHeaderRow (int value);
    /*
    <summary>
        Specifies a boolean value that indicates whether to show column headers for the table.
    </summary>
    */
    bool GetShowColHeaderStyle ();
    void SetShowColHeaderStyle (bool value);
    /*
    <summary>
         Specifies a boolean value that indicates whether to show column stripe formatting for
            the table.
     </summary>
    */
    bool GetShowColStripes ();
    void SetShowColStripes (bool value);
    /*
    <summary>
        Specifies a boolean value that indicates whether to show the last column.
    </summary>
    */
    bool GetShowLastCol ();
    void SetShowLastCol (bool value);
    /*
    <summary>
        Specifies a boolean value that indicates whether to show row headers for the table.
    </summary>
    */
    bool GetShowRowHeaderStyle ();
    void SetShowRowHeaderStyle (bool value);
private:
};
}}
