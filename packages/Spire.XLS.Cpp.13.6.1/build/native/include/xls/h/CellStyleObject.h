#pragma once
#include "pch.h"
#pragma warning(push)
#pragma warning(disable:4250)
#include "IExcelApplication.h"
#include "IExtendedFormat.h"
#include "IOptimizedUpdate.h"
#include "IStyle.h"
#pragma warning(pop)

namespace Spire{namespace Xls{
class EXPORTS CellStyleObject : public virtual Object,public virtual IStyle
{
public:
    /*
    <summary>
        Represents justify text alignment
    </summary>
    */
    virtual bool GetJustifyLast ();
    virtual void SetJustifyLast (bool value);
    /*
    <summary>
        Returns or sets the format code for the object as a string in the
            language of the user.
    </summary>
    */
    virtual LPCWSTR_S GetNumberFormatLocal ();
    virtual void SetNumberFormatLocal (LPCWSTR_S value);
    virtual intrusive_ptr<IInterior> GetInterior ();
    virtual bool GetIsModified ();
    /*
    <summary>
        Set the theme color.
    </summary>
    <param name="type">theme color type</param>
    <param name="tint"></param>
    */
    virtual void SetThemeColor (ThemeColorType type,double tint);
    //virtual bool GetThemeColor (Spire.Xls.ThemeColorType& type,System.Double& tint);
    virtual intrusive_ptr<IBorders> GetBorders ();
    /*
    <summary>
        True if the style is a built-in style.
    </summary>
    */
    virtual bool GetBuiltIn ();
    /*
    <summary>
        Gets or Sets fill pattern type.
    </summary>
    */
    virtual ExcelPatternType GetFillPattern ();
    virtual void SetFillPattern (ExcelPatternType value);
    virtual intrusive_ptr<IFont> GetFont ();
    /*
    <summary>
        True if the formula will be hidden when the worksheet is protected.
    </summary>
    */
    virtual bool GetFormulaHidden ();
    virtual void SetFormulaHidden (bool value);
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
    virtual bool GetIsInitialized ();
    /*
    <summary>
        True if the object is locked; False if the object can be modified when the sheet is protected.
    </summary>
    */
    virtual bool GetLocked ();
    virtual void SetLocked (bool value);
    /*
    <summary>
        Returns or sets the name of the object. Read-only String.
    </summary>
    */
    virtual LPCWSTR_S GetName ();
    /*
    <summary>
        Returns or sets the format code for the object.
    </summary>
    */
    virtual LPCWSTR_S GetNumberFormat ();
    virtual void SetNumberFormat (LPCWSTR_S value);
    /*
    <summary>
        Gets or Sets format index.
    </summary>
    */
    virtual int GetNumberFormatIndex ();
    virtual void SetNumberFormatIndex (int value);
    //virtual intrusive_ptr<INumberFormat> GetNumberFormatSettings ();
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
    /*
    <summary>
        Returns or sets the reading order for the specified object.
    </summary>
    */
    virtual ReadingOrderType GetReadingOrder ();
    virtual void SetReadingOrder (ReadingOrderType value);
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
    //virtual System.Object GetParent ();
    virtual void BeginUpdate ();
    virtual void EndUpdate ();
private:
};
}}
