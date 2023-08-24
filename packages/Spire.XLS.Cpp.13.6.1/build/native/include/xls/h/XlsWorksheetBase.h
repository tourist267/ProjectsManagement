#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "ICloneParent.h"
#include "ITabSheet.h"
#include "INamedObject.h"
#include "XlsObject.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS XlsWorksheetBase : public virtual XlsObject,public virtual INamedObject,public virtual ITabSheet,public virtual ICloneParent
{
    friend class XlsPivotTablesCollection;
public:
    /*
    <summary>
         Protects worksheet with password.protect the sheet except select lock/unlock cells.
        <example>The following code illustrates how to protect the sheet except select lock/unlock cells:
        <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        Worksheet worksheet = workbook.Worksheets[0];
        //Protects the first worksheet's content with password
        worksheet.Protect("123456");
        //Save to file
        workbook.SaveToFile("Protect.xlsx");
        </code>
        </example>
    </summary>
    <param name="password">Protection password.</param>
    <remarks>Password should be less than 15 symbols.</remarks>
    */
    virtual void Protect (LPCWSTR_S password);
    //virtual System.Object Clone (System.Object parent);
    /*
    <summary>
        Unprotects this wokrsheet.
    </summary>
    */
    void Unprotect ();
    /*
    <summary>
        Unprotects this worksheet using specified password.
    </summary>
    <param name="password">Password to unprotect.</param>
    */
    virtual void Unprotect (LPCWSTR_S password);
    intrusive_ptr<IShape> AddTextEffectShape (PresetTextEffect effect,LPCWSTR_S text,int upperLeftRow,int top,int upperLeftColumn,int left,int height,int width);
    void SetChanged ();
    /*
    <summary>
        Returns or sets the name of the object. Read / write String.
    </summary>
    */
    virtual LPCWSTR_S GetName ();
    virtual void SetName (LPCWSTR_S value);
    /*
    <summary>
        Name used by macros to access workbook items.
    </summary>
    */
    virtual LPCWSTR_S GetCodeName ();
    virtual void SetCodeName (LPCWSTR_S value);
    /*
    <summary>
        Zoom factor of document.
    </summary>
    <remarks> Value of zoom should be between 10 and 400.</remarks>
    */
    virtual int GetZoom ();
    virtual void SetZoom (int value);
    /*
    <summary>
        Controls end user visibility of worksheet.
    </summary>
    */
    virtual WorksheetVisibility GetVisibility ();
    virtual void SetVisibility (WorksheetVisibility value);
    virtual intrusive_ptr<IWorkbook> GetWorkbook ();
    intrusive_ptr<IChartShapes> GetCharts ();
    intrusive_ptr<QueryTableCollection> GetQueryTables ();
    virtual intrusive_ptr<ICheckBoxes> GetCheckBoxes ();
    intrusive_ptr<IButtonShapes> GetButtonShapes ();
    intrusive_ptr<ILabelShapes> GetLabelShapes ();
    intrusive_ptr<ILines> GetLines ();
    intrusive_ptr<IListBoxes> GetListBoxes ();
    virtual intrusive_ptr<IComboBoxes> GetComboBoxes ();
    intrusive_ptr<IGroupBoxes> GetGroupBoxes ();
    intrusive_ptr<IOvalShapes> GetOvalShapes ();
    intrusive_ptr<IRectangleShapes> GetRectangleShapes ();
    intrusive_ptr<IScrollBarShapes> GetScrollBarShapes ();
    intrusive_ptr<ISpinnerShapes> GetSpinnerShapes ();
    intrusive_ptr<IArcShapes> GetArcShapes ();
    virtual intrusive_ptr<IComments> GetComments ();
    /*
    <summary>
         Grid line color.
        <example>The following code illustrates how to set the grid line color:
        <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        Worksheet worksheet = workbook.Worksheets[0];
        //Set grid lines color
        worksheet.GridLineColor = ExcelColors.Red;
        //Save to file
        workbook.SaveToFile("GridLineColor.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual ExcelColors GetGridLineColor ();
    virtual void SetGridLineColor (ExcelColors value);
    bool GetHasPictures ();
    /*
    <summary>
        Indicates whether worksheet has vml shapes. Read-only.
    </summary>
    */
    bool GetHasVmlShapes ();
    /*
    <summary>
        Header / footer shapes collection.
    </summary>
    */
    intrusive_ptr<XlsHeaderFooterShapeCollection> GetHeaderFooterShapes ();
    /*
    <summary>
        Indicates whether gridline color has default value.
    </summary>
    */
    bool GetDefaultGridlineColor ();
    /*
    <summary>
        Gets / sets index of the first row of the worksheet.
    </summary>
    */
    virtual int GetFirstRow ();
    virtual void SetFirstRow (int value);
    /*
    <summary>
        Gets or sets index of the first column of the worksheet.
    </summary>
    */
    virtual int GetFirstColumn ();
    virtual void SetFirstColumn (int value);
    /*
    <summary>
        Gets or sets one-based index of the last row of the worksheet.
    </summary>
    */
    virtual int GetLastRow ();
    virtual void SetLastRow (int value);
    /*
    <summary>
        Gets or sets index of the last column of the worksheet.
    </summary>
    */
    virtual int GetLastColumn ();
    virtual void SetLastColumn (int value);
    /*
    <summary>
        Gets index of the last data row of the worksheet.
    </summary>
    */
    int GetLastDataRow ();
    /*
    <summary>
        Gets index of the last data column of the worksheet.
    </summary>
    */
    int GetLastDataColumn ();
    virtual bool GetIsPasswordProtected ();
    /*
    <summary>
        Returns the index number of the object within the collection of objects.
    </summary>
    */
    virtual int GetIndex ();
    void SetIndex (int value);
    bool GetIsTransitionEvaluation ();
    void SetIsTransitionEvaluation (bool value);
    /*
    <summary>
         Gets/sets left visible column of the worksheet.
        <example>The following code illustrates how to set the left visible column:
        <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        Worksheet worksheet = workbook.Worksheets[0];
        //Set left visible column
        worksheet.LeftVisibleColumn = 3;
        //Get left visible column
        Console.Write(worksheet.LeftVisibleColumn);
        //Save to file
        workbook.SaveToFile("LeftVisibleColumn.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual int GetLeftVisibleColumn ();
    virtual void SetLeftVisibleColumn (int value);
    int GetRealIndex ();
    void SetRealIndex (int value);
    /*
    <summary>
        Gets or sets sheetId for this sheet.
    </summary>
    */
    int GetSheetId ();
    void SetSheetId (int value);
    /*
    <summary>
        Gets or sets whether the worksheet will display row and column headers. Default is true.
    </summary>
    */
    bool GetIsRowColHeadersVisible ();
    void SetIsRowColHeadersVisible (bool value);
    /*
    <summary>
        Indicates whether worksheet is displayed right to left.
    </summary>
    */
    virtual bool GetIsRightToLeft ();
    virtual void SetIsRightToLeft (bool value);
    virtual intrusive_ptr<XlsWorkbook> GetParentWorkbook ();
    virtual intrusive_ptr<IPictures> GetPictures ();
    virtual intrusive_ptr<IRadioButtons> GetRadioButtons ();
    /*
    <summary>
        Returns inner textboxes collection. Read-only.
    </summary>
    */
    virtual intrusive_ptr<ITextBoxes> GetTextBoxes ();
    /*
    <summary>
        Indicates whether tab of this sheet is selected. Read-only.
    </summary>
    */
    virtual bool GetIsSelected ();
    /*
    <summary>
        Indicates is current sheet is protected.
    </summary>
    */
    virtual bool GetProtectContents ();
    /*
    <summary>
        True if objects are protected. Read only.
    </summary>
    */
    virtual bool GetProtectDrawingObjects ();
    virtual SheetProtectionType GetProtection ();
    /*
    <summary>
        True if the scenarios of the current sheet are protected. Read only.
    </summary>
    */
    virtual bool GetProtectScenarios ();
    /*
    <summary>
        Tab color.
    </summary>
    */
    virtual intrusive_ptr<Color> GetTabColor ();
    virtual void SetTabColor (intrusive_ptr<Color> value);
    virtual intrusive_ptr<OColor> GetTabColorObject ();
    /*
    <summary>
        Tab excel color.
    </summary>
    */
    virtual ExcelColors GetTabKnownColor ();
    virtual void SetTabKnownColor (ExcelColors value);
    /*
    <summary>
         Gets/sets top visible row of the worksheet.
        <example>The following code illustrates how to set the top visible row:
        <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        Worksheet worksheet = workbook.Worksheets[0];
        //Set top visible row
        worksheet.TopVisibleRow = 5;
        //Get top visible row
        Console.Write(worksheet.TopVisibleRow);
        //Save to file
        workbook.SaveToFile("TopVisibleRow.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual int GetTopVisibleRow ();
    virtual void SetTopVisibleRow (int value);
    intrusive_ptr<CheckBoxCollection> GetTypedCheckBoxes ();
    intrusive_ptr<ComboBoxCollection> GetTypedComboBoxes ();
    /*
    <summary>
        Returns inner lines collection. Read-only.
    </summary>
    */
    intrusive_ptr<LineCollection> GetTypedLines ();
    /*
    <summary>
        Returns inner rects collection. Read-only.
    </summary>
    */
    intrusive_ptr<RectangleCollection> GetTypedRects ();
    intrusive_ptr<ArcShapeCollection> GetTypedArcs ();
    /*
    <summary>
        Returns inner ovals collection. Read-only.
    </summary>
    */
    intrusive_ptr<OvalShapeCollection> GetTypedOvals ();
    /*
    <summary>
        Returns inner buttons collection. Read-only.
    </summary>
    */
    intrusive_ptr<ButtonShapeCollection> GetTypedButtons ();
    /*
    <summary>
        Returns inner gourpboxes collection. Read-only.
    </summary>
    */
    intrusive_ptr<GroupBoxCollection> GetTypedGroupBoxes ();
    /*
    <summary>
        Returns inner labels collection. Read-only.
    </summary>
    */
    intrusive_ptr<LabelShapeCollection> GetTypedLabels ();
    /*
    <summary>
        Returns inner listboxes collection. Read-only.
    </summary>
    */
    intrusive_ptr<ListBoxCollection> GetTypedListBoxes ();
    /*
    <summary>
        Returns inner scollbars collection. Read-only.
    </summary>
    */
    intrusive_ptr<ScrollBarCollection> GetTypedScollBars ();
    /*
    <summary>
        Returns inner spinners collection. Read-only.
    </summary>
    */
    intrusive_ptr<SpinnerShapeCollection> GetTypedSpinners ();
    intrusive_ptr<RadioButtonCollection> GetTypedRadioButtons ();
    /*
    <summary>
        Returns inner textboxes collection. Read-only.
    </summary>
    */
    intrusive_ptr<TextBoxCollection> GetTypedTextBoxes ();
    intrusive_ptr<PrstGeomShapeCollection> GetPrstGeomShapes ();
    /*
    <summary>
        Returns inner pictures collection. Read-only.
    </summary>
    */
    intrusive_ptr<PicturesCollection> GetTypedPictures ();
    /*
    <summary>
        Indicates whether worksheet contains some unknown vml shapes.
    </summary>
    */
    bool GetUnknownVmlShapes ();
    void SetUnknownVmlShapes (bool value);
    int GetVmlShapesCount ();
    /*
    <summary>
        Makes the current sheet the active sheet. Equivalent to clicking the
            sheet's tab in MS Excel.
    </summary>
    */
    virtual void Activate ();
    virtual void Select ();
    void SelectTab ();
    virtual void Unselect ();
    void Unselect (bool Check);
    virtual void Protect (LPCWSTR_S password,SheetProtectionType options);
    //static int DEF_MIN_COLUMN_INDEX ();

    virtual int GetTabIndex();
private:
};
}}
