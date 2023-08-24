#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IOptimizedUpdate.h"
#include "IFont.h"
#include "IChartDataTable.h"
#include "XlsObject.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS XlsChartDataTable : public virtual XlsObject,public virtual IChartDataTable
{
public:
    /*
    <summary>
        Indicates whether data table has horizontal border.
    </summary>
    */
    virtual bool GetHasHorzBorder ();
    virtual void SetHasHorzBorder (bool value);
    /*
    <summary>
        Indicates whether data table has vertical border.
    </summary>
    */
    virtual bool GetHasVertBorder ();
    virtual void SetHasVertBorder (bool value);
    /*
    <summary>
        Indicate whether data table has borders.
    </summary>
    */
    virtual bool GetHasBorders ();
    virtual void SetHasBorders (bool value);
    /*
    <summary>
        Indicates whehter series keys in the data table.
    </summary>
    */
    virtual bool GetShowSeriesKeys ();
    virtual void SetShowSeriesKeys (bool value);
    /*
    <summary>
        Display mode of the background.
    </summary>
    */
    virtual ChartBackgroundMode GetBackgroundMode ();
    virtual void SetBackgroundMode (ChartBackgroundMode value);
    /*
    <summary>
        True if the font is bold. Read / write Boolean.
    </summary>
    */
    virtual bool GetIsBold ();
    virtual void SetIsBold (bool value);
    /*
    <summary>
        Returns or sets the primary color of the object.
    </summary>
    */
    virtual ExcelColors GetKnownColor ();
    virtual void SetKnownColor (ExcelColors value);
    /*
    <summary>
        Gets or sets color. 
    </summary>
    */
    virtual intrusive_ptr<Color> GetColor ();
    virtual void SetColor (intrusive_ptr<Color> value);
    virtual void SetThemeColor (ThemeColorType type,double tint);
    //virtual bool GetThemeColor (Spire.Xls.ThemeColorType& type,System.Double& tint);
    /*
    <summary>
        True if the font style is italic. Read / write Boolean.
    </summary>
    */
    virtual bool GetIsItalic ();
    virtual void SetIsItalic (bool value);
    /*
    <summary>
        Returns or sets the size of the font. Read / write Variant.
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
        Returns or sets the type of underline applied to the font.
    </summary>
    */
    virtual FontUnderlineType GetUnderline ();
    virtual void SetUnderline (FontUnderlineType value);
    /*
    <summary>
        Returns or sets the font name. Read / write string.
    </summary>
    */
    virtual LPCWSTR_S GetFontName ();
    virtual void SetFontName (LPCWSTR_S value);
    /*
    <summary>
        Returns or sets font vertical alignment.
    </summary>
    */
    virtual FontVertialAlignmentType GetVerticalAlignment ();
    virtual void SetVerticalAlignment (FontVertialAlignmentType value);
    /*
    <summary>
        Indicates whether color has automatic color. Read-only.
    </summary>
    */
    virtual bool GetIsAutoColor ();
    virtual LPCWSTR_S GetStrikethroughType ();
    virtual void SetStrikethroughType (LPCWSTR_S value);
    virtual intrusive_ptr<Font> GenerateNativeFont ();
    virtual void BeginUpdate ();
    virtual void EndUpdate ();
    //intrusive_ptr<XlsChartDataTable> Clone (System.Object parent);
private:
};
}}
