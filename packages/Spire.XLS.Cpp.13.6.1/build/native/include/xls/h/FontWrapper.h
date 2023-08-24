#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IExcelApplication.h"
#include "IOptimizedUpdate.h"
#include "IFont.h"
#include "CommonWrapper.h"
#include "IInternalFont.h"
#pragma warning(pop)

namespace Spire{namespace Xls{
class EXPORTS FontWrapper : public virtual CommonWrapper,public virtual IInternalFont
{
    friend class ChartTextArea;
    friend class XlsChart;
public:
    //virtual System.Object GetParent ();
    virtual void BeginUpdate ();
    virtual void EndUpdate ();
    //void add_AfterChangeEvent (System.EventHandler value);
    //void remove_AfterChangeEvent (System.EventHandler value);
    /*
    <summary>
        True if the font is bold.
    </summary>
    */
    virtual bool GetIsBold ();
    virtual void SetIsBold (bool value);
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
        True if the font is an outline font. Read / write Boolean.
    </summary>
    */
    bool GetMacOSOutlineFont ();
    void SetMacOSOutlineFont (bool value);
    /*
    <summary>
        True if the font is a shadow font or if the object has
            a shadow. Read / write Boolean.
    </summary>
    */
    bool GetMacOSShadow ();
    void SetMacOSShadow (bool value);
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
    virtual FontVertialAlignmentType GetVerticalAlignment ();
    virtual void SetVerticalAlignment (FontVertialAlignmentType value);
    virtual intrusive_ptr<Font> GenerateNativeFont ();
    virtual bool GetIsAutoColor ();
    /*
    <summary>
        Returns index of the font. Read-only.
    </summary>
    */
    virtual int GetIndex ();
    /*
    <summary>
        Returns internal font.
    </summary>
    */
    virtual intrusive_ptr<XlsFont> GetFont ();
    int GetFontIndex ();
    /*
    <summary>
        Indicates whether font is read-only.
    </summary>
    */
    bool GetIsReadOnly ();
    void SetIsReadOnly (bool value);
    /*
    <summary>
        Returns workbook.
    </summary>
    */
    intrusive_ptr<XlsWorkbook> GetWorkbook ();
    void ColorObjectUpdate ();
    //intrusive_ptr<FontWrapper> Clone (intrusive_ptr<XlsWorkbook> book,System.Object parent,System.Collections.IDictionary dicFontIndexes);
private:
};
}}
