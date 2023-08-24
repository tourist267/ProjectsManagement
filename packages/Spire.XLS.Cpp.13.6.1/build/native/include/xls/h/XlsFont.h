#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "ICloneParent.h"
#include "IOptimizedUpdate.h"
#include "IFont.h"
#include "XlsObject.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS XlsFont : public virtual XlsObject, public virtual IFont,public virtual ICloneParent
{
    friend class IInternalFont;
    friend class RichTextShape;
    friend class FontWrapper;
    friend class RangeRichTextString;
    friend class RichTextString;
    friend class XlsChartDataLabels;
    friend class XlsChartLegendArea;
    friend class XlsChartTitleArea;
public:
    //intrusive_ptr<XlsFont> Clone (System.Object parent);
    //virtual int CompareTo (System.Object obj);
    virtual bool GetIsAutoColor ();
    virtual bool GetIsBold ();
    virtual void SetIsBold (bool value);
    /*
    <summary>
        Returns color object.
    </summary>
    */
    intrusive_ptr<OColor> GetOColor ();
    virtual ExcelColors GetKnownColor ();
    virtual void SetKnownColor (ExcelColors value);
    virtual intrusive_ptr<Color> GetColor ();
    virtual void SetColor (intrusive_ptr<Color> value);
    virtual void SetThemeColor (ThemeColorType type,double tint);
    //virtual bool GetThemeColor (Spire.Xls.ThemeColorType& type,System.Double& tint);
    virtual bool GetIsItalic ();
    virtual void SetIsItalic (bool value);
    virtual double GetSize ();
    virtual void SetSize (double value);
    virtual bool GetIsStrikethrough ();
    virtual void SetIsStrikethrough (bool value);
    virtual bool GetIsSubscript ();
    virtual void SetIsSubscript (bool value);
    virtual LPCWSTR_S GetStrikethroughType ();
    virtual void SetStrikethroughType (LPCWSTR_S value);
    virtual bool GetIsSuperscript ();
    virtual void SetIsSuperscript (bool value);
    virtual FontUnderlineType GetUnderline ();
    virtual void SetUnderline (FontUnderlineType value);
    virtual LPCWSTR_S GetFontName ();
    virtual void SetFontName (LPCWSTR_S value);
    virtual FontVertialAlignmentType GetVerticalAlignment ();
    virtual void SetVerticalAlignment (FontVertialAlignmentType value);
    LPCWSTR_S GetScheme ();
    void SetScheme (LPCWSTR_S value);
    virtual intrusive_ptr<Font> GenerateNativeFont ();
    intrusive_ptr<Font> GenerateNativeFont (float size);
    virtual void BeginUpdate ();
    virtual void EndUpdate ();
    intrusive_ptr<XlsFont> GetFont ();
    intrusive_ptr<SizeF> MeasureString (LPCWSTR_S strValue);
private:
};
}}
