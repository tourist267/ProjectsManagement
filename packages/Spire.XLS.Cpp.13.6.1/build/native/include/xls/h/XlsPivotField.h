#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "ICloneParent.h"
#include "IPivotField.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS XlsPivotField : public virtual Object,public virtual IPivotField,public virtual ICloneParent
{
public:
    intrusive_ptr<PivotTableFields> GetParent ();
    virtual LPCWSTR_S GetName ();
    virtual AxisTypes GetAxis ();
    virtual void SetAxis (AxisTypes value);
    virtual LPCWSTR_S GetNumberFormat ();
    virtual void SetNumberFormat (LPCWSTR_S value);
    virtual SubtotalTypes GetSubtotals ();
    virtual void SetSubtotals (SubtotalTypes value);
    virtual bool GetCanDragToRow ();
    virtual void SetCanDragToRow (bool value);
    virtual bool GetCanDragToColumn ();
    virtual void SetCanDragToColumn (bool value);
    virtual bool GetCanDragToPage ();
    virtual void SetCanDragToPage (bool value);
    virtual bool GetCanDragOff ();
    virtual void SetCanDragOff (bool value);
    virtual bool GetCanDragToData ();
    virtual void SetCanDragToData (bool value);
    bool GetDataField ();
    void SetDataField (bool value);
    bool GetIsDataField ();
    int GetNumberFormatIndex ();
    void SetNumberFormatIndex (int value);
    /*
    <summary>
        Specifies the custom text that is displayed for the subtotals caption.
    </summary>
    */
    LPCWSTR_S GetSubtotalCaption ();
    void SetSubtotalCaption (LPCWSTR_S value);
    /*
    <summary>
        Get or set whether show 
    </summary>
    */
    bool GetSubtotalTop ();
    void SetSubtotalTop (bool value);
    /*
    <summary>
        Autoshow is enabled.
    </summary>
    */
    bool GetIsAutoShow ();
    void SetIsAutoShow (bool value);
    /*
    <summary>
        User can remove field from fiew.
    </summary>
    */
    bool GetIsDragToHide ();
    void SetIsDragToHide (bool value);
    /*
    <summary>
        Specifies a boolean value that indicates whether manual filter is in inclusive mode.
    </summary>
    */
    bool GetShowNewItemsInFilter ();
    void SetShowNewItemsInFilter (bool value);
    /*
    <summary>
         Specifies a boolean value that indicates whether new items that appear after a refresh
            should be hidden by default.
     </summary>
    */
    bool GetShowNewItemsOnRefresh ();
    void SetShowNewItemsOnRefresh (bool value);
    /*
    <summary>
        True if a blank row is inserted after the specified row field in a PivotTable report.
    </summary>
    */
    virtual bool GetShowBlankRow ();
    virtual void SetShowBlankRow (bool value);
    /*
    <summary>
        True if a page break is inserted after each field. 
    </summary>
    */
    bool GetShowPageBreak ();
    void SetShowPageBreak (bool value);
    /*
    <summary>
        Specifies the number of items showed per page in the PivotTable.
    </summary>
    */
    int GetItemsPerPage ();
    void SetItemsPerPage (int value);
    /*
    <summary>
         Specifies a boolean value that indicates whether the field can have multiple items
            selected in the page field.
     </summary>
    */
    bool GetIsMultiSelected ();
    void SetIsMultiSelected (bool value);
    /*
    <summary>
        Show all items for this field.
    </summary>
    */
    bool GetIsShowAllItems ();
    void SetIsShowAllItems (bool value);
    /*
    <summary>
         Specifies a boolean value that indicates whether the items in this field should be shown
            in Outline form.
            If the parameter is true, the field layout is "Show item labels in outline form".
            If the parameter is false, the field layout is "Show item labels in tabular form".
     </summary>
    */
    bool GetShowOutline ();
    void SetShowOutline (bool value);
    /*
    <summary>
        True if the flag for the specified PivotTable field or PivotTable item is set to "drilled" (expanded, or visible).
    </summary>
    */
    bool GetShowDropDown ();
    void SetShowDropDown (bool value);
    /*
    <summary>
         Specifies a boolean value that indicates whether to show the property as a member
            caption.
     </summary>
    */
    bool GetShowPropAsCaption ();
    void SetShowPropAsCaption (bool value);
    /*
    <summary>
        Specifies a boolean value that indicates whether to show the member property value in a
            tooltip on the appropriate PivotTable cells.
    </summary>
    */
    bool GetShowToolTip ();
    void SetShowToolTip (bool value);
    //System.Nullable`1[[Spire.Xls.PivotFieldSortType, Spire.XLS, Version=12.7.7.0, Culture=neutral, PublicKeyToken=null]] GetSortType ();
    //void SetSortType (System.Nullable`1[[Spire.Xls.PivotFieldSortType, Spire.XLS, Version=12.7.7.0, Culture=neutral, PublicKeyToken=null]] value);
    /*
    <summary>
         Specifies the unique name of the member property to be used as a caption for the field
            and field items.
     </summary>
    */
    LPCWSTR_S GetCaption ();
    void SetCaption (LPCWSTR_S value);
    /*
    <summary>
         Specifies a boolean value that indicates whether the application will display fields
            compactly in the sheet on which this PivotTable resides
     </summary>
    */
    bool GetCompact ();
    void SetCompact (bool value);
    /*
    <summary>
        Specifies the formula for the calculated field
    </summary>
    */
    virtual LPCWSTR_S GetFormula ();
    virtual void SetFormula (LPCWSTR_S value);
    /*
    <summary>
        Indicates whether this field is formula field
    </summary>
    */
    virtual bool GetIsFormulaField ();
    /*
    <summary>
        True if the field repeat item labels.
    </summary>
    */
    virtual bool GetRepeatItemLabels ();
    virtual void SetRepeatItemLabels (bool value);
    /*
    <summary>
        Preserves the sorting elements of the field
    </summary>
    */
    intrusive_ptr<AutoSortScope> GetAutoSort ();
    void SetAutoSort (intrusive_ptr<AutoSortScope> value);
    PivotFieldFormatType GetShowDataAs ();
    void SetShowDataAs (PivotFieldFormatType value);
    /*
    <summary>
        Represents the index of item and itemoptions key pairs
    </summary>
    */
    void AddItemOption (int index);
    /*
    <summary>
        Indicates whether the specific PivotItem is hidden detail.
             Must call after pivottable CalculateData function.
    </summary>
    <param name="index">the index of the pivotItem in the pivotField.</param>
    <returns>whether the specific PivotItem is hidden detail</returns>
    */
    bool IsHiddenItemDetail (int index);
    /*
    <summary>
         Sets whether the specific PivotItem in a pivot field is hidden detail.
             Must call after pivottable CalculateData function.
    </summary>
    <param name="index">the index of the pivotItem in the pivotField.</param>
    <param name="isHiddenDetail">whether the specific PivotItem is hidden</param>
    */
    void HideItemDetail (int index,bool isHiddenDetail);
    /*
    <summary>
         Sets whether the PivotItems in a pivot field is hidden detail.That is collapse/expand this field.
             Must call after pivottable CalculateData function.
    </summary>
    <param name="itemValue">the value of the pivotItem in the pivotField.</param>
    <param name="isHiddenDetail">whether the specific PivotItem is hidden</param>
    */
    void HideItemDetail (LPCWSTR_S itemValue,bool isHiddenDetail);
    /*
    <summary>
         Sets whether the PivotItems in a pivot field is hidden detail.That is collapse/expand this field.
             Must call after pivottable CalculateData function.
    </summary>
    <param name="isHiddenDetail">whether DetailItems is hidden</param>
    */
    void HideDetail (bool isHiddenDetail);
    /*
    <summary>
        Indicates whether the specific PivotItem is hidden.
             Must call after pivottable CalculateData function.
    </summary>
    <param name="index">the index of the pivotItem in the pivotField.</param>
    <returns>whether the specific PivotItem is hidden</returns>
    */
    bool IsHiddenItem (int index);
    /*
    <summary>
         Sets whether the specific PivotItem in a data field is hidden.
             Must call after pivottable CalculateData function.
    </summary>
    <param name="index">the index of the pivotItem in the pivotField.</param>
    <param name="isHidden">whether the specific PivotItem is hidden</param>
    */
    void HideItem (int index,bool isHidden);
    /*
    <summary>
         Sets whether the all PivotItem in a data field is hidden.
             Must call after pivottable CalculateData function.
    </summary>
    <param name="isHidden">whether the specific PivotItem is hidden</param>
    */
    void HideAllItem (bool isHidden);
    /*
    <summary>
         Sets whether the specific PivotItem in a data field is hidden.
             Must call after pivottable CalculateData function.
    </summary>
    <param name="itemValue">the value of the pivotItem in the pivotField.</param>
    <param name="isHidden">whether the specific PivotItem is hidden</param>
    */
    void HideItem (LPCWSTR_S itemValue,bool isHidden);
    /*
    <summary>
        Sort row fildes or col fields by data field.
    </summary>
    */
    void Sort (bool isAscendSort,intrusive_ptr<PivotDataField> sortByField);
    //virtual System.Object Clone (System.Object parent);
private:
};
}}
