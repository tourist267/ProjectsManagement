#pragma once
#include "pch.h"
#pragma warning(push)
#pragma warning(disable:4250)
#include "IExcelApplication.h"
#include "ICloneParent.h"
#include "IExtendedFormat.h"
#include "IOptimizedUpdate.h"
#include "IStyle.h"
#include "CommonWrapper.h"
#include "IExtendIndex.h"
#include "IInternalAddtionalFormat.h"
#pragma warning(pop)
namespace Spire{namespace Xls{
class EXPORTS AddtionalFormatWrapper : public virtual CommonWrapper,public virtual IInternalAddtionalFormat,public virtual IExtendIndex,public virtual IStyle
{
public:
    virtual bool GetBuiltIn ();
    virtual LPCWSTR_S GetName ();
    virtual bool GetIsInitialized ();
    //virtual System.Object GetParent ();
    virtual intrusive_ptr<XlsWorkbook> GetWorkbook ();
    /*
    <summary>
        Gets or sets bottom border color.
    </summary>
    */
    virtual intrusive_ptr<OColor> GetBottomBorderColor ();
    /*
    <summary>
        Gets or sets top border color.
    </summary>
    */
    virtual intrusive_ptr<OColor> GetTopBorderColor ();
    /*
    <summary>
        Gets or sets left border color.
    </summary>
    */
    virtual intrusive_ptr<OColor> GetLeftBorderColor ();
    /*
    <summary>
        Gets or sets right border color.
    </summary>
    */
    virtual intrusive_ptr<OColor> GetRightBorderColor ();
    /*
    <summary>
        Gets or sets diagonal border color.
    </summary>
    */
    virtual intrusive_ptr<OColor> GetDiagonalBorderColor ();
    /*
    <summary>
        Gets or sets line style of the left border.
    </summary>
    */
    virtual LineStyleType GetLeftBorderLineStyle ();
    virtual void SetLeftBorderLineStyle (LineStyleType value);
    /*
    <summary>
        Gets or sets line style of the right border.
    </summary>
    */
    virtual LineStyleType GetRightBorderLineStyle ();
    virtual void SetRightBorderLineStyle (LineStyleType value);
    /*
    <summary>
        Gets or sets line style of the top border.
    </summary>
    */
    virtual LineStyleType GetTopBorderLineStyle ();
    virtual void SetTopBorderLineStyle (LineStyleType value);
    /*
    <summary>
        Gets or sets line style of the bottom border.
    </summary>
    */
    virtual LineStyleType GetBottomBorderLineStyle ();
    virtual void SetBottomBorderLineStyle (LineStyleType value);
    /*
    <summary>
        Gets or sets line style of the diagonal border.
    </summary>
    */
    virtual LineStyleType GetDiagonalUpBorderLineStyle ();
    virtual void SetDiagonalUpBorderLineStyle (LineStyleType value);
    /*
    <summary>
        Gets or sets line style of the diagonal border.
    </summary>
    */
    virtual LineStyleType GetDiagonalDownBorderLineStyle ();
    virtual void SetDiagonalDownBorderLineStyle (LineStyleType value);
    /*
    <summary>
        Indicates whether DiagonalUp line is visible.
    </summary>
    */
    virtual bool GetDiagonalUpVisible ();
    virtual void SetDiagonalUpVisible (bool value);
    /*
    <summary>
        Indicates whether diagonal down line is visible.
    </summary>
    */
    virtual bool GetDiagonalDownVisible ();
    virtual void SetDiagonalDownVisible (bool value);
    /*
    <summary>
        Gets or Sets fill pattern type.
    </summary>
    */
    virtual ExcelPatternType GetFillPattern ();
    virtual void SetFillPattern (ExcelPatternType value);
    /*
    <summary>
        Gets extended format index.
    </summary>
    */
    virtual int GetExtendedFormatIndex ();
    /*
    <summary>
        Gets or Sets index of fill background excel color.
    </summary>
    */
    ExcelColors GetBackgroundKnownColor ();
    void SetBackgroundKnownColor (ExcelColors value);
    /*
    <summary>
        Gets or Sets fill background color.
    </summary>
    */
    intrusive_ptr<Color> GetBackgroundColor ();
    void SetBackgroundColor (intrusive_ptr<Color> value);
    virtual void SetThemeColor (ThemeColorType type,double tint);
    //virtual bool GetThemeColor (Spire.Xls.ThemeColorType& type,System.Double& tint);
    void SetBackgroundThemeColor (ThemeColorType type,int tint);
    //bool GetBackgroundThemeColor (Spire.Xls.ThemeColorType& type,System.Double& tint);
    /*
    <summary>
        Gets or Sets fill foreground excel color.
    </summary>
    */
    ExcelColors GetForegroundKnownColor ();
    void SetForegroundKnownColor (ExcelColors value);
    /*
    <summary>
        Gets or Sets fill foreground color.
    </summary>
    */
    intrusive_ptr<Color> GetForegroundColor ();
    void SetForegroundColor (intrusive_ptr<Color> value);
    /*
    <summary>
        Gets or Sets format index.
    </summary>
    */
    virtual int GetNumberFormatIndex ();
    virtual void SetNumberFormatIndex (int value);
    /*
    <summary>
        Returns or sets the horizontal alignment for the specified object.
    </summary>
    */
    virtual HorizontalAlignType GetHorizontalAlignment ();
    virtual void SetHorizontalAlignment (HorizontalAlignType value);
    /*
    <summary>
        True if the style includes the AddIndent, HorizontalAlignment,
            VerticalAlignment, WrapText, and Orientation properties.
    </summary>
    */
    virtual bool GetIncludeAlignment ();
    virtual void SetIncludeAlignment (bool value);
    /*
    <summary>
        True if the style includes the Color, KnownColor, LineStyle, and Weight border properties
    </summary>
    */
    virtual bool GetIncludeBorder ();
    virtual void SetIncludeBorder (bool value);
    /*
    <summary>
        True if the style includes the Background, Bold, Color, KnownColor, FontStyle, Italic, Name, OutlineFont, Shadow, Size, Strikethrough, Subscript, Superscript, and Underline font properties.
    </summary>
    */
    virtual bool GetIncludeFont ();
    virtual void SetIncludeFont (bool value);
    /*
    <summary>
        True if the style includes the NumberFormat property.
    </summary>
    */
    virtual bool GetIncludeNumberFormat ();
    virtual void SetIncludeNumberFormat (bool value);
    /*
    <summary>
        True if the style includes the Color, KnownColor,
            InvertIfNegative, Pattern, PatternColor, and PatternKnownColor
            interior properties.
    </summary>
    */
    virtual bool GetIncludePatterns ();
    virtual void SetIncludePatterns (bool value);
    /*
    <summary>
        True if the style includes the FormulaHidden and Locked protection
            properties.
    </summary>
    */
    virtual bool GetIncludeProtection ();
    virtual void SetIncludeProtection (bool value);
    /*
    <summary>
        Returns or sets the indent level for the style.
    </summary>
    */
    virtual int GetIndentLevel ();
    virtual void SetIndentLevel (int value);
    /*
    <summary>
        True if the formula will be hidden when the worksheet is protected.
    </summary>
    */
    virtual bool GetFormulaHidden ();
    virtual void SetFormulaHidden (bool value);
    /*
    <summary>
        True if the object is locked; False if the object can be modified when the sheet is protected.
    </summary>
    */
    virtual bool GetLocked ();
    virtual void SetLocked (bool value);
    /*
    <summary>
        Represents justify text alignment
    </summary>
    */
    virtual bool GetJustifyLast ();
    virtual void SetJustifyLast (bool value);
    /*
    <summary>
        Returns or sets the format code for the object.
    </summary>
    */
    virtual LPCWSTR_S GetNumberFormat ();
    virtual void SetNumberFormat (LPCWSTR_S value);
    /*
    <summary>
        Returns or sets the format code for the object as a string in the
            language of the user.
    </summary>
    */
    virtual LPCWSTR_S GetNumberFormatLocal ();
    virtual void SetNumberFormatLocal (LPCWSTR_S value);
    /*
    <summary>
        Returns object that describes number format. Read-only.
    </summary>
    */
    //virtual intrusive_ptr<INumberFormat> GetNumberFormatSettings ();
    /*
    <summary>
        Returns or sets the reading order for the specified object.
    </summary>
    */
    virtual ReadingOrderType GetReadingOrder ();
    virtual void SetReadingOrder (ReadingOrderType value);
    /*
    <summary>
        The text orientation. Can be an integer value from 1 to 180 degrees
    </summary>
    */
    virtual int GetRotation ();
    virtual void SetRotation (int value);
    /*
    <summary>
        True if text automatically shrinks to fit in the available column width.
    </summary>
    */
    virtual bool GetShrinkToFit ();
    virtual void SetShrinkToFit (bool value);
    /*
    <summary>
        Returns or sets the vertical alignment of the specified object.
    </summary>
    */
    virtual VerticalAlignType GetVerticalAlignment ();
    virtual void SetVerticalAlignment (VerticalAlignType value);
    /*
    <summary>
        True if Microsoft Excel wraps the text in the object.
    </summary>
    */
    virtual bool GetWrapText ();
    virtual void SetWrapText (bool value);
    virtual intrusive_ptr<IFont> GetFont ();
    virtual intrusive_ptr<IBorders> GetBorders ();
    /*
    <summary>
        If true then first symbol in cell is apostrophe.
    </summary>
    */
    virtual bool GetIsFirstSymbolApostrophe ();
    virtual void SetIsFirstSymbolApostrophe (bool value);
    /*
    <summary>
        Returns or sets the excel color of the interior.
    </summary>
    */
    virtual ExcelColors GetPatternKnownColor ();
    virtual void SetPatternKnownColor (ExcelColors value);
    /*
    <summary>
        Returns or sets the color of the interior pattern.
    </summary>
    */
    virtual intrusive_ptr<Color> GetPatternColor ();
    virtual void SetPatternColor (intrusive_ptr<Color> value);
    /*
    <summary>
        Gets or sets the cell shading excel color.
    </summary>
    */
    virtual ExcelColors GetKnownColor ();
    virtual void SetKnownColor (ExcelColors value);
    /*
    <summary>
        Gets or sets the cell shading color.
    </summary>
    */
    virtual intrusive_ptr<Color> GetColor ();
    virtual void SetColor (intrusive_ptr<Color> value);
    virtual intrusive_ptr<IInterior> GetInterior ();
    virtual bool GetIsModified ();
    virtual void BeginUpdate ();
    virtual void EndUpdate ();
    //virtual System.Object Clone (System.Object parent);
private:
};
}}
