#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IOptimizedUpdate.h"
#include "IFont.h"
#include "XlsObject.h"
#pragma warning(pop)

namespace Spire{namespace Xls{
class EXPORTS FontArrayWrapper : public virtual XlsObject,public virtual IFont
{
public:
    virtual bool GetIsItalic ();
    virtual void SetIsItalic (bool value);
    virtual ExcelColors GetKnownColor ();
    virtual void SetKnownColor (ExcelColors value);
    virtual intrusive_ptr<Color> GetColor ();
    virtual void SetColor (intrusive_ptr<Color> value);
    virtual void SetThemeColor (ThemeColorType type,double tint);
    //virtual bool GetThemeColor (Spire.Xls.ThemeColorType& type,System.Double& tint);
    virtual bool GetIsBold ();
    virtual void SetIsBold (bool value);
    virtual double GetSize ();
    virtual void SetSize (double value);
    virtual bool GetIsStrikethrough ();
    virtual void SetIsStrikethrough (bool value);
    virtual LPCWSTR_S GetStrikethroughType ();
    virtual void SetStrikethroughType (LPCWSTR_S value);
    virtual bool GetIsSubscript ();
    virtual void SetIsSubscript (bool value);
    virtual bool GetIsSuperscript ();
    virtual void SetIsSuperscript (bool value);
    virtual FontUnderlineType GetUnderline ();
    virtual void SetUnderline (FontUnderlineType value);
    virtual LPCWSTR_S GetFontName ();
    virtual void SetFontName (LPCWSTR_S value);
    virtual FontVertialAlignmentType GetVerticalAlignment ();
    virtual void SetVerticalAlignment (FontVertialAlignmentType value);
    virtual intrusive_ptr<Font> GenerateNativeFont ();
    virtual bool GetIsAutoColor ();
    virtual void BeginUpdate ();
    virtual void EndUpdate ();
private:
};
}}
