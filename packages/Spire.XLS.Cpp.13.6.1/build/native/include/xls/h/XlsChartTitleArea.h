#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IOptimizedUpdate.h"
#include "IFont.h"
#include "IChartTextArea.h"
#include "XlsObject.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS XlsChartTitleArea : public virtual XlsObject,public virtual IChartTextArea
{
public:
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
    /*
    <summary>
        Gets or sets text.
    </summary>
    */
    virtual LPCWSTR_S GetText ();
    virtual void SetText (LPCWSTR_S value);
    virtual intrusive_ptr<IChartFrameFormat> GetFrameFormat ();
    /*
    <summary>
        Text rotation angle. between -90 and 90.
    </summary>
    */
    virtual int GetTextRotationAngle ();
    virtual void SetTextRotationAngle (int value);
    /*
    <summary>
        Display mode of the background.
    </summary>
    */
    virtual ChartBackgroundMode GetBackgroundMode ();
    virtual void SetBackgroundMode (ChartBackgroundMode value);
    /*
    <summary>
        True if background is set to automatic.
    </summary>
    */
    virtual bool GetIsAutoMode ();
    void SetIsAutoMode (bool value);
    /*
    <summary>
        Returns FontImpl for current font. Read-only.
    </summary>
    */
    intrusive_ptr<XlsFont> GetFont ();
    virtual void BeginUpdate ();
    virtual void EndUpdate ();
private:
};
}}
