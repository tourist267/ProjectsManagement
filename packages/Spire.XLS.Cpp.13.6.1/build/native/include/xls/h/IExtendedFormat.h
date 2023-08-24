#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
//#include "ExcelColors.h"
//#include "ExcelPatternType.h"
//#include "HorizontalAlignType.h"
//#include "ReadingOrderType.h"
//#include "ThemeColorType.h"
//#include "VerticalAlignType.h"
#include "IExcelApplication.h"
//#include "IFont.h"
//#include "IBorders.h"
//#include "INumberFormat.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS IExtendedFormat : public virtual IExcelApplication
{
public:
    virtual intrusive_ptr<IBorders> GetBorders ()=0;
    virtual ExcelPatternType GetFillPattern ()=0;
    virtual void SetFillPattern (ExcelPatternType value)=0;
    virtual intrusive_ptr<IFont> GetFont ()=0;
    virtual bool GetFormulaHidden ()=0;
    virtual void SetFormulaHidden (bool value)=0;
    virtual HorizontalAlignType GetHorizontalAlignment ()=0;
    virtual void SetHorizontalAlignment (HorizontalAlignType value)=0;
    virtual bool GetIncludeAlignment ()=0;
    virtual void SetIncludeAlignment (bool value)=0;
    virtual bool GetIncludeBorder ()=0;
    virtual void SetIncludeBorder (bool value)=0;
    virtual bool GetIncludeFont ()=0;
    virtual void SetIncludeFont (bool value)=0;
    virtual bool GetIncludeNumberFormat ()=0;
    virtual void SetIncludeNumberFormat (bool value)=0;
    virtual bool GetIncludePatterns ()=0;
    virtual void SetIncludePatterns (bool value)=0;
    virtual bool GetIncludeProtection ()=0;
    virtual void SetIncludeProtection (bool value)=0;
    virtual int GetIndentLevel ()=0;
    virtual void SetIndentLevel (int value)=0;
    virtual bool GetIsFirstSymbolApostrophe ()=0;
    virtual void SetIsFirstSymbolApostrophe (bool value)=0;
    virtual bool GetLocked ()=0;
    virtual void SetLocked (bool value)=0;
    virtual bool GetJustifyLast ()=0;
    virtual void SetJustifyLast (bool value)=0;
    virtual LPCWSTR_S GetNumberFormat ()=0;
    virtual void SetNumberFormat (LPCWSTR_S value)=0;
    virtual int GetNumberFormatIndex ()=0;
    virtual void SetNumberFormatIndex (int value)=0;
    virtual LPCWSTR_S GetNumberFormatLocal ()=0;
    virtual void SetNumberFormatLocal (LPCWSTR_S value)=0;
    //virtual intrusive_ptr<INumberFormat> GetNumberFormatSettings ()=0;
    virtual ReadingOrderType GetReadingOrder ()=0;
    virtual void SetReadingOrder (ReadingOrderType value)=0;
    virtual int GetRotation ()=0;
    virtual void SetRotation (int value)=0;
    virtual bool GetShrinkToFit ()=0;
    virtual void SetShrinkToFit (bool value)=0;
    virtual VerticalAlignType GetVerticalAlignment ()=0;
    virtual void SetVerticalAlignment (VerticalAlignType value)=0;
    virtual bool GetWrapText ()=0;
    virtual void SetWrapText (bool value)=0;
    virtual ExcelColors GetPatternKnownColor ()=0;
    virtual void SetPatternKnownColor (ExcelColors value)=0;
    virtual intrusive_ptr<Color> GetPatternColor ()=0;
    virtual void SetPatternColor (intrusive_ptr<Color> value)=0;
    virtual ExcelColors GetKnownColor ()=0;
    virtual void SetKnownColor (ExcelColors value)=0;
    virtual intrusive_ptr<Color> GetColor ()=0;
    virtual void SetColor (intrusive_ptr<Color> value)=0;
    virtual bool GetIsModified ()=0;
    virtual void SetThemeColor (ThemeColorType type,double tint)=0;
    //virtual bool GetThemeColor (Spire.Xls.ThemeColorType& type,System.Double& tint)=0;
private:
};
}}
