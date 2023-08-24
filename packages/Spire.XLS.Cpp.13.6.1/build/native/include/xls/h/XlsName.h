#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IXLSRange.h"
#include "XlsObject.h"
#include "INamedRange.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS XlsName : public virtual XlsObject,public virtual INamedRange,public virtual IXLSRange
{
public:
    virtual intrusive_ptr<IComment> GetComment ();
    virtual intrusive_ptr<IRichTextString> GetRichText ();
    /*
    <summary>
        Gets and sets the html string which contains data and some formattings in this cell.
    </summary>
    */
    virtual LPCWSTR_S GetHtmlString ();
    virtual void SetHtmlString (LPCWSTR_S value);
    virtual bool GetHasMerged ();
    virtual intrusive_ptr<IXLSRange> GetMergeArea ();
    virtual bool GetIsWrapText ();
    virtual void SetIsWrapText (bool value);
    /*
    <summary>
        Indicates is current range has external formula. Read-only.
    </summary>
    */
    virtual bool GetHasExternalFormula ();
    /*
    <summary>
        Represents ignore error options. If not single cell returs concatenateed flags.
    </summary>
    */
    virtual IgnoreErrorType GetIgnoreErrorOptions ();
    virtual void SetIgnoreErrorOptions (IgnoreErrorType value);
    //virtual System.Nullable`1[[System.Boolean, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089]] GetIsStringsPreserved ();
    //virtual void SetIsStringsPreserved (System.Nullable`1[[System.Boolean, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089]] value);
    //virtual System.Nullable`1[[Spire.Xls.BuiltInStyles, Spire.XLS, Version=12.7.7.0, Culture=neutral, PublicKeyToken=null]] GetBuiltInStyle ();
    //virtual void SetBuiltInStyle (System.Nullable`1[[Spire.Xls.BuiltInStyles, Spire.XLS, Version=12.7.7.0, Culture=neutral, PublicKeyToken=null]] value);
    virtual intrusive_ptr<IHyperLinks> GetHyperlinks ();
    virtual intrusive_ptr<IXLSRange> Activate (bool scroll);
    virtual void Merge ();
    virtual void Merge (bool clearCells);
    virtual void UnMerge ();
    virtual void FreezePanes ();
    virtual void ClearContents ();
    virtual void Clear (ExcelClearOptions option);
    void Clear (bool isClearFormat);
    virtual intrusive_ptr<IXLSRange> Intersect (intrusive_ptr<IXLSRange> range);
    virtual intrusive_ptr<IXLSRange> Merge (intrusive_ptr<IXLSRange> range);
    virtual void AutoFitRows ();
    virtual void AutoFitColumns ();
    virtual intrusive_ptr<ICommentShape> AddComment ();
    virtual void BorderAround ();
    virtual void BorderAround (LineStyleType borderLine);
    virtual void BorderAround (LineStyleType borderLine,intrusive_ptr<Color> borderColor);
    virtual void BorderAround (LineStyleType borderLine,ExcelColors borderColor);
    virtual void BorderInside ();
    virtual void BorderInside (LineStyleType borderLine);
    virtual void BorderInside (LineStyleType borderLine,intrusive_ptr<Color> borderColor);
    virtual void BorderInside (LineStyleType borderLine,ExcelColors borderColor);
    virtual void BorderNone ();
    virtual void CollapseGroup (GroupByType groupBy);
    virtual void ExpandGroup (GroupByType groupBy);
    virtual void ExpandGroup (GroupByType groupBy,ExpandCollapseFlags flags);
    //virtual System.Collections.IEnumerator GetEnumerator ();
    intrusive_ptr<IXLSRange> Activate ();
    //System.Object Clone (System.Object parent);
    //intrusive_ptr<IXLSRange> Clone (System.Object parent,System.Collections.Generic.Dictionary`2[[System.String, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089],[System.String, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089]] hashNewNames,intrusive_ptr<XlsWorkbook> book);
    void ConvertFullRowColumnName (ExcelVersion version);
    intrusive_ptr<IXLSRange> CopyTo (intrusive_ptr<IXLSRange> destination);
    //intrusive_ptr<IList<CellRange>> FindAll (intrusive_ptr<TimeSpan> findValue);
    intrusive_ptr<IList<CellRange>> FindAll (intrusive_ptr<DateTime> findValue);
    intrusive_ptr<IList<CellRange>> FindAll (bool findValue);
    intrusive_ptr<IList<CellRange>> FindAll (double findValue,FindType flags);
    //System.Collections.Generic.List`1[[Spire.Xls.CellRange, Spire.XLS, Version=12.7.7.0, Culture=neutral, PublicKeyToken=null]] FindAll (LPCWSTR_S findValue,FindType flags);
    //intrusive_ptr<IXLSRange> FindFirst (intrusive_ptr<TimeSpan> findValue);
    intrusive_ptr<IXLSRange> FindFirst (intrusive_ptr<DateTime> findValue);
    intrusive_ptr<IXLSRange> FindFirst (bool findValue);
    intrusive_ptr<IXLSRange> FindFirst (double findValue,FindType flags);
    intrusive_ptr<IXLSRange> FindFirst (LPCWSTR_S findValue,FindType flags);
    void SetIndex (int index);
    void SetIndex (int index,bool bRaiseEvent);
    //virtual System.Data.DataTable ExportDataTable (intrusive_ptr<ExportTableOptions> options);
    virtual int GetIndex ();
    virtual LPCWSTR_S GetName ();
    virtual void SetName (LPCWSTR_S value);
    virtual LPCWSTR_S GetNameLocal ();
    virtual void SetNameLocal (LPCWSTR_S value);
    virtual intrusive_ptr<IXLSRange> GetRefersToRange ();
    virtual void SetRefersToRange (intrusive_ptr<IXLSRange> value);
    virtual LPCWSTR_S GetValue ();
    virtual void SetValue (LPCWSTR_S value);
    virtual bool GetVisible ();
    virtual void SetVisible (bool value);
    virtual bool GetIsLocal ();
    virtual LPCWSTR_S GetValueR1C1 ();
    virtual intrusive_ptr<IWorksheet> GetWorksheet ();
    virtual LPCWSTR_S GetScope ();
    virtual void Delete ();
    virtual LPCWSTR_S GetRangeAddress ();
    virtual LPCWSTR_S GetRangeAddressLocal ();
    virtual LPCWSTR_S GetRangeGlobalAddress ();
    LPCWSTR_S GetRangeGlobalAddress2007 ();
    virtual LPCWSTR_S GetRangeR1C1Address ();
    virtual LPCWSTR_S GetRangeR1C1AddressLocal ();
    virtual bool GetBooleanValue ();
    virtual void SetBooleanValue (bool value);
    virtual intrusive_ptr<IBorders> GetBorders ();
    virtual intrusive_ptr<IList<CellRange>> GetCells ();
    //virtual System.Collections.Generic.List`1[[Spire.Xls.CellRange, Spire.XLS, Version=12.7.7.0, Culture=neutral, PublicKeyToken=null]] GetCellList ();
    virtual int GetColumn ();
    virtual int GetColumnGroupLevel ();
    virtual double GetColumnWidth ();
    virtual void SetColumnWidth (double value);
    virtual int GetCount ();
    virtual intrusive_ptr<DateTime> GetDateTimeValue ();
    virtual void SetDateTimeValue (intrusive_ptr<DateTime> value);
    virtual LPCWSTR_S GetNumberText ();
    virtual intrusive_ptr<IXLSRange> GetEndCell ();
    virtual intrusive_ptr<IXLSRange> GetEntireColumn ();
    virtual intrusive_ptr<IXLSRange> GetEntireRow ();
    virtual LPCWSTR_S GetErrorValue ();
    virtual void SetErrorValue (LPCWSTR_S value);
    virtual LPCWSTR_S GetFormula ();
    virtual void SetFormula (LPCWSTR_S value);
    virtual LPCWSTR_S GetFormulaArray ();
    virtual void SetFormulaArray (LPCWSTR_S value);
    virtual LPCWSTR_S GetFormulaArrayR1C1 ();
    virtual void SetFormulaArrayR1C1 (LPCWSTR_S value);
    virtual bool GetIsFormulaHidden ();
    virtual void SetIsFormulaHidden (bool value);
    virtual intrusive_ptr<DateTime> GetFormulaDateTime ();
    virtual void SetFormulaDateTime (intrusive_ptr<DateTime> value);
    virtual LPCWSTR_S GetFormulaR1C1 ();
    virtual void SetFormulaR1C1 (LPCWSTR_S value);
    virtual bool GetFormulaBoolValue ();
    virtual void SetFormulaBoolValue (bool value);
    virtual LPCWSTR_S GetFormulaErrorValue ();
    virtual void SetFormulaErrorValue (LPCWSTR_S value);
    virtual bool GetHasDataValidation ();
    virtual bool GetHasBoolean ();
    virtual bool GetHasDateTime ();
    virtual bool GetHasFormula ();
    virtual bool GetHasFormulaArray ();
    virtual bool GetHasFormulaDateTime ();
    virtual bool GetHasFormulaNumberValue ();
    virtual bool GetHasFormulaStringValue ();
    virtual bool GetHasNumber ();
    virtual bool GetHasRichText ();
    virtual bool GetHasString ();
    virtual bool GetHasStyle ();
    virtual HorizontalAlignType GetHorizontalAlignment ();
    virtual void SetHorizontalAlignment (HorizontalAlignType value);
    virtual int GetIndentLevel ();
    virtual void SetIndentLevel (int value);
    virtual bool GetIsBlank ();
    bool GetIsBuiltIn ();
    void SetIsBuiltIn (bool value);
    bool GetIsExternName ();
    bool GetIsFunction ();
    void SetIsFunction (bool value);
    virtual bool GetHasError ();
    virtual bool GetIsGroupedByColumn ();
    virtual bool GetIsGroupedByRow ();
    virtual bool GetIsInitialized ();
    virtual int GetLastColumn ();
    virtual void SetLastColumn (int value);
    virtual int GetLastRow ();
    virtual void SetLastRow (int value);
    virtual double GetNumberValue ();
    virtual void SetNumberValue (double value);
    virtual LPCWSTR_S GetNumberFormat ();
    virtual void SetNumberFormat (LPCWSTR_S value);
    virtual int GetRow ();
    virtual int GetRowGroupLevel ();
    virtual double GetRowHeight ();
    virtual void SetRowHeight (double value);
    virtual intrusive_ptr<IList<XlsRange>> GetRows ();
    virtual intrusive_ptr<IList<XlsRange>> GetColumns ();
    virtual intrusive_ptr<IStyle> GetStyle ();
    virtual void SetStyle (intrusive_ptr<IStyle> value);
    virtual LPCWSTR_S GetCellStyleName ();
    virtual void SetCellStyleName (LPCWSTR_S value);
    virtual LPCWSTR_S GetText ();
    virtual void SetText (LPCWSTR_S value);
    virtual intrusive_ptr<TimeSpan> GetTimeSpanValue ();
    virtual void SetTimeSpanValue (intrusive_ptr<TimeSpan> value);
    /*
    <summary>
        Returns the calculated value of a formula.
    </summary>
    */
    virtual LPCWSTR_S GetEnvalutedValue ();
    virtual VerticalAlignType GetVerticalAlignment ();
    virtual void SetVerticalAlignment (VerticalAlignType value);
    //virtual System.Object GetValue2 ();
    //virtual void SetValue2 (System.Object value);
    virtual intrusive_ptr<IXLSRange> Get (int row,int column);
    virtual void SetItem (int row,int column,intrusive_ptr<IXLSRange> value);
    virtual intrusive_ptr<IXLSRange> Get (int row,int column,int lastRow,int lastColumn);
    virtual intrusive_ptr<IXLSRange> Get (LPCWSTR_S name);
    /*
    <summary>
        Gets cell range. Read-only.
    </summary>
    */
    virtual intrusive_ptr<IXLSRange> Get (LPCWSTR_S name,bool IsR1C1Notation);
    /*
    <summary>
        Collection of conditional formats.
    </summary>
    */
    virtual intrusive_ptr<ConditionalFormats> GetConditionalFormats ();
    virtual intrusive_ptr<Validation> GetDataValidation ();
    virtual LPCWSTR_S GetFormulaStringValue ();
    virtual void SetFormulaStringValue (LPCWSTR_S value);
    virtual double GetFormulaNumberValue ();
    virtual void SetFormulaNumberValue (double value);
    virtual bool GetHasFormulaBoolValue ();
    virtual bool GetHasFormulaErrorValue ();
private:
};
}}
