#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IExcelApplication.h"
#include "IOptimizedUpdate.h"
#include "IFont.h"
#pragma warning(pop)

namespace Spire{namespace Xls{
class EXPORTS ExcelFont : public virtual Object,public virtual IFont
{
    friend class CellStyle;
    friend class RichText;
    friend class Workbook;
    friend class FontsCollection;
    friend class ChartCategoryAxis;
    friend class ChartSeriesAxis;
    friend class ChartValueAxis;
    friend class PivotStyle;
public:
    /*
    <summary>
        True if the font style is italic. Read / write Boolean.
    </summary>
    */
    virtual bool GetIsItalic ();
    virtual void SetIsItalic (bool value);
    /*
    <summary>
        Returns or sets the primary excel color of the object.
    </summary>
    */
    virtual ExcelColors GetKnownColor ();
    virtual void SetKnownColor (ExcelColors value);
    /*
    <summary>
        Returns or sets the primary color of the font.
    </summary>
    */
    virtual intrusive_ptr<Color> GetColor ();
    virtual void SetColor (intrusive_ptr<Color> value);
    /*
    <summary>
        Set the theme color.
    </summary>
    <param name="type">theme color type</param>
    <param name="tint"></param>
    */
    virtual void SetThemeColor (ThemeColorType type,double tint);
    //virtual bool GetThemeColor (Spire.Xls.ThemeColorType& type,System.Double& tint);
    /*
    <summary>
        True if the font is bold.
    </summary>
    */
    virtual bool GetIsBold ();
    virtual void SetIsBold (bool value);
    /*
    <summary>
        Returns or sets the font name. Read / write string.
    </summary>
    */
    virtual LPCWSTR_S GetFontName ();
    virtual void SetFontName (LPCWSTR_S value);
    /*
    <summary>
        Returns or sets the size of the font. Read / write integer.
    </summary>
    */
    virtual double GetSize ();
    virtual void SetSize (double value);
    /*
    <summary>
        True if the font is struck through with a horizontal line.
            Read / write Boolean
    </summary>
    */
    virtual bool GetIsStrikethrough ();
    virtual void SetIsStrikethrough (bool value);
    virtual LPCWSTR_S GetStrikethroughType ();
    virtual void SetStrikethroughType (LPCWSTR_S value);
    /*
    <summary>
        True if the font is formatted as subscript.
            False by default. Read / write Boolean.
    </summary>
    */
    virtual bool GetIsSubscript ();
    virtual void SetIsSubscript (bool value);
    /*
    <summary>
        True if the font is formatted as superscript. False by default.
            Read/write Boolean
    </summary>
    */
    virtual bool GetIsSuperscript ();
    virtual void SetIsSuperscript (bool value);
    /*
    <summary>
        Indicates whether color is automatically selected. Read-only.
    </summary>
    */
    virtual bool GetIsAutoColor ();
    /*
    <summary>
        Returns or sets the type of underline applied to the font. 
    </summary>
    */
    virtual FontUnderlineType GetUnderline ();
    virtual void SetUnderline (FontUnderlineType value);
    virtual FontVertialAlignmentType GetVerticalAlignment ();
    virtual void SetVerticalAlignment (FontVertialAlignmentType value);
    /*
    <summary>
        Generates system font object.
    </summary>
    <returns>Font object.</returns>
    */
    virtual intrusive_ptr<Font> GenerateNativeFont ();
    //virtual System.Object GetParent ();
    virtual void BeginUpdate ();
    virtual void EndUpdate ();
private:
};
}}
