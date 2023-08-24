#pragma once
#include "pch.h"
#pragma warning(push)
#pragma warning(disable:4250)
#include "IExtendedFormat.h"
#include "IOptimizedUpdate.h"
#include "XlsObject.h"
#include "IStyle.h"
#include "IExtendIndex.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS StyleArrayWrapper : public virtual XlsObject,public virtual IStyle,public virtual IExtendIndex
{
public:
    virtual bool GetIsModified ();
    virtual intrusive_ptr<IBorders> GetBorders ();
    virtual bool GetBuiltIn ();
    virtual ExcelPatternType GetFillPattern ();
    virtual void SetFillPattern (ExcelPatternType value);
    ExcelColors GetFillBackground ();
    void SetFillBackground (ExcelColors value);
    intrusive_ptr<Color> GetFillBackgroundRGB ();
    void SetFillBackgroundRGB (intrusive_ptr<Color> value);
    ExcelColors GetFillForeground ();
    void SetFillForeground (ExcelColors value);
    intrusive_ptr<Color> GetFillForegroundRGB ();
    void SetFillForegroundRGB (intrusive_ptr<Color> value);
    virtual intrusive_ptr<IFont> GetFont ();
    virtual bool GetFormulaHidden ();
    virtual void SetFormulaHidden (bool value);
    virtual HorizontalAlignType GetHorizontalAlignment ();
    virtual void SetHorizontalAlignment (HorizontalAlignType value);
    virtual bool GetIncludeAlignment ();
    virtual void SetIncludeAlignment (bool value);
    virtual bool GetIncludeBorder ();
    virtual void SetIncludeBorder (bool value);
    virtual bool GetIncludeFont ();
    virtual void SetIncludeFont (bool value);
    virtual bool GetIncludeNumberFormat ();
    virtual void SetIncludeNumberFormat (bool value);
    virtual bool GetIncludePatterns ();
    virtual void SetIncludePatterns (bool value);
    virtual bool GetIncludeProtection ();
    virtual void SetIncludeProtection (bool value);
    virtual int GetIndentLevel ();
    virtual void SetIndentLevel (int value);
    virtual bool GetIsInitialized ();
    virtual bool GetLocked ();
    virtual void SetLocked (bool value);
    virtual LPCWSTR_S GetName ();
    virtual LPCWSTR_S GetNumberFormat ();
    virtual void SetNumberFormat (LPCWSTR_S value);
    virtual int GetNumberFormatIndex ();
    virtual void SetNumberFormatIndex (int value);
    //virtual intrusive_ptr<INumberFormat> GetNumberFormatSettings ();
    virtual int GetRotation ();
    virtual void SetRotation (int value);
    virtual bool GetShrinkToFit ();
    virtual void SetShrinkToFit (bool value);
    virtual VerticalAlignType GetVerticalAlignment ();
    virtual void SetVerticalAlignment (VerticalAlignType value);
    virtual bool GetWrapText ();
    virtual void SetWrapText (bool value);
    virtual ReadingOrderType GetReadingOrder ();
    virtual void SetReadingOrder (ReadingOrderType value);
    virtual bool GetIsFirstSymbolApostrophe ();
    virtual void SetIsFirstSymbolApostrophe (bool value);
    virtual ExcelColors GetPatternKnownColor ();
    virtual void SetPatternKnownColor (ExcelColors value);
    virtual intrusive_ptr<Color> GetPatternColor ();
    virtual void SetPatternColor (intrusive_ptr<Color> value);
    virtual ExcelColors GetKnownColor ();
    virtual void SetKnownColor (ExcelColors value);
    virtual intrusive_ptr<Color> GetColor ();
    virtual void SetColor (intrusive_ptr<Color> value);
    virtual intrusive_ptr<IInterior> GetInterior ();
    virtual void SetThemeColor (ThemeColorType type,double tint);
    //virtual bool GetThemeColor (Spire.Xls.ThemeColorType& type,System.Double& tint);
    virtual bool GetJustifyLast ();
    virtual void SetJustifyLast (bool value);
    virtual LPCWSTR_S GetNumberFormatLocal ();
    virtual void SetNumberFormatLocal (LPCWSTR_S value);
    virtual int GetExtendedFormatIndex ();
    virtual void BeginUpdate ();
    virtual void EndUpdate ();
private:
};
}}
