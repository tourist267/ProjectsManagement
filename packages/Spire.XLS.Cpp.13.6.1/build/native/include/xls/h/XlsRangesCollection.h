#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IXLSRange.h"
#include "IXLSRanges.h"
#include "ICombinedRange.h"
#include "ExcelClearOptions.h"
#include "CollectionBase.h"
#include "XlsRange.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS XlsRangesCollection : public virtual CollectionBase<XlsRange>,public virtual IXLSRanges,public virtual ICombinedRange
{
    friend class XlsWorksheet;
public:
    virtual intrusive_ptr<IXLSRange> Intersect (intrusive_ptr<IXLSRange> range);
    virtual intrusive_ptr<IXLSRange> Merge (intrusive_ptr<IXLSRange> range);
    /*
    <summary>
        Autofits all rows.
    </summary>
    */
    virtual void AutoFitRows ();
    /*
    <summary>
        Autofits all columns. 
    </summary>
    */
    virtual void AutoFitColumns ();
    virtual intrusive_ptr<ICommentShape> AddComment ();
    virtual void BorderAround ();
    virtual void BorderAround (LineStyleType borderLine);
    virtual void BorderAround (LineStyleType borderLine,intrusive_ptr<Color> borderColor);
    /*
    <summary>
        Sets around border for current range.
    </summary>
    <param name="borderLine">Represents border line.</param>
    <param name="borderColor">Represents border color as ExcelColors.</param>
    */
    virtual void BorderAround (LineStyleType borderLine,ExcelColors borderColor);
    /*
    <summary>
        Sets inside border for current range.
    </summary>
    */
    virtual void BorderInside ();
    virtual void BorderInside (LineStyleType borderLine);
    virtual void BorderInside (LineStyleType borderLine,intrusive_ptr<Color> borderColor);
    /*
    <summary>
        Sets inside border for current range.
    </summary>
    <param name="borderLine">Represents border line.</param>
    <param name="borderColor">Represents border color as ExcelColors.</param>
    */
    virtual void BorderInside (LineStyleType borderLine,ExcelColors borderColor);
    virtual void BorderNone ();
    virtual void CollapseGroup (GroupByType groupBy);
    virtual void ExpandGroup (GroupByType groupBy);
    virtual void ExpandGroup (GroupByType groupBy,ExpandCollapseFlags flags);
    //virtual LPCWSTR_S GetNewRangeLocation (System.Collections.Generic.Dictionary`2[[System.String, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089],[System.String, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089]] names,System.String& sheetName);
    //virtual intrusive_ptr<IXLSRange> Clone (System.Object parent,System.Collections.Generic.Dictionary`2[[System.String, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089],[System.String, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089]] hashNewNames,intrusive_ptr<XlsWorkbook> book);
    virtual int GetCellsCount ();
    /*
    <summary>
        Clears conditional formats.
    </summary>
    */
    virtual void ClearConditionalFormats ();
    virtual std::vector<intrusive_ptr<Rectangle>> GetRectangles ();
    virtual int GetRectanglesCount ();
    virtual LPCWSTR_S GetWorksheetName ();
    virtual bool Remove (intrusive_ptr<XlsRange> range);
    virtual intrusive_ptr<XlsRange> Get (int index);
    void SetItem (int index,intrusive_ptr<IXLSRange> value);
    //virtual System.Collections.IEnumerator GetEnumerator ();
    virtual LPCWSTR_S GetEnvalutedValue ();
    virtual LPCWSTR_S GetRangeAddress ();
    virtual LPCWSTR_S GetRangeAddressLocal ();
    virtual LPCWSTR_S GetRangeGlobalAddress ();
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
    virtual LPCWSTR_S GetFormulaR1C1 ();
    virtual void SetFormulaR1C1 (LPCWSTR_S value);
    virtual LPCWSTR_S GetFormulaArray ();
    virtual void SetFormulaArray (LPCWSTR_S value);
    virtual LPCWSTR_S GetFormulaArrayR1C1 ();
    virtual void SetFormulaArrayR1C1 (LPCWSTR_S value);
    virtual bool GetIsFormulaHidden ();
    virtual void SetIsFormulaHidden (bool value);
    virtual intrusive_ptr<DateTime> GetFormulaDateTime ();
    virtual void SetFormulaDateTime (intrusive_ptr<DateTime> value);
    virtual bool GetHasDataValidation ();
    virtual bool GetHasBoolean ();
    virtual bool GetHasDateTime ();
    virtual bool GetHasFormulaBoolValue ();
    virtual bool GetHasFormulaErrorValue ();
    virtual bool GetHasFormulaDateTime ();
    virtual bool GetHasFormulaNumberValue ();
    virtual bool GetHasFormulaStringValue ();
    virtual bool GetHasFormula ();
    virtual bool GetHasFormulaArray ();
    virtual bool GetHasNumber ();
    virtual bool GetHasRichText ();
    virtual bool GetHasString ();
    virtual bool GetHasStyle ();
    virtual HorizontalAlignType GetHorizontalAlignment ();
    virtual void SetHorizontalAlignment (HorizontalAlignType value);
    /*
    <summary>
        Returns hyperlinks for this ranges collection.
    </summary>
    */
    virtual intrusive_ptr<IHyperLinks> GetHyperlinks ();
    virtual int GetIndentLevel ();
    virtual void SetIndentLevel (int value);
    virtual bool GetIsBlank ();
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
    virtual LPCWSTR_S GetValue ();
    virtual void SetValue (LPCWSTR_S value);
    //virtual System.Object GetValue2 ();
    //virtual void SetValue2 (System.Object value);
    virtual VerticalAlignType GetVerticalAlignment ();
    virtual void SetVerticalAlignment (VerticalAlignType value);
    virtual intrusive_ptr<IWorksheet> GetWorksheet ();
    virtual intrusive_ptr<IXLSRange> Get (int row,int column);
    virtual void SetItem (int row,int column,intrusive_ptr<IXLSRange> value);
    virtual intrusive_ptr<IXLSRange> Get (int row,int column,int lastRow,int lastColumn);
    virtual intrusive_ptr<IXLSRange> Get (LPCWSTR_S name);
    virtual intrusive_ptr<IXLSRange> Get (LPCWSTR_S name,bool IsR1C1Notation);
    virtual intrusive_ptr<ConditionalFormats> GetConditionalFormats ();
    virtual intrusive_ptr<Validation> GetDataValidation ();
    virtual LPCWSTR_S GetFormulaStringValue ();
    virtual void SetFormulaStringValue (LPCWSTR_S value);
    virtual double GetFormulaNumberValue ();
    virtual void SetFormulaNumberValue (double value);
    virtual bool GetFormulaBoolValue ();
    virtual void SetFormulaBoolValue (bool value);
    virtual LPCWSTR_S GetFormulaErrorValue ();
    virtual void SetFormulaErrorValue (LPCWSTR_S value);
    /*
    <summary>
        Gets and sets the html string which contains data and some formattings in this cell.
    </summary>
    */
    virtual LPCWSTR_S GetHtmlString ();
    virtual void SetHtmlString (LPCWSTR_S value);
    virtual intrusive_ptr<IComment> GetComment ();
    virtual intrusive_ptr<IRichTextString> GetRichText ();
    virtual bool GetHasMerged ();
    virtual intrusive_ptr<IXLSRange> GetMergeArea ();
    virtual bool GetIsWrapText ();
    virtual void SetIsWrapText (bool value);
    virtual bool GetHasExternalFormula ();
    virtual IgnoreErrorType GetIgnoreErrorOptions ();
    virtual void SetIgnoreErrorOptions (IgnoreErrorType value);
    //virtual System.Nullable`1[[System.Boolean, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089]] GetIsStringsPreserved ();
    //virtual void SetIsStringsPreserved (System.Nullable`1[[System.Boolean, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089]] value);
    //virtual System.Nullable`1[[Spire.Xls.BuiltInStyles, Spire.XLS, Version=12.7.7.0, Culture=neutral, PublicKeyToken=null]] GetBuiltInStyle ();
    //virtual void SetBuiltInStyle (System.Nullable`1[[Spire.Xls.BuiltInStyles, Spire.XLS, Version=12.7.7.0, Culture=neutral, PublicKeyToken=null]] value);
    virtual LPCWSTR_S GetRangeGlobalAddress2007 ();
    /*
    <summary>
        Activages a single cell, scroll to it and activates the respective sheet
            To select a range of cells, use the Select method.
    </summary>
    <param name="scroll">True to scroll to the cell</param>
    <returns></returns>
    */
    virtual intrusive_ptr<IXLSRange> Activate (bool scroll);
    //virtual System.Data.DataTable ExportDataTable (intrusive_ptr<ExportTableOptions> options);
    virtual void Merge ();
    virtual void Merge (bool clearCells);
    virtual void UnMerge ();
    virtual void FreezePanes ();
    virtual void ClearContents();
    virtual void Clear(ExcelClearOptions option);
    virtual int GetCount();
private:
};
}}
