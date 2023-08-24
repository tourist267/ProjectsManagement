#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
//#include "ExcelColors.h"
//#include "FontUnderlineType.h"
//#include "FontVertialAlignmentType.h"
//#include "ThemeColorType.h"
#include "IExcelApplication.h"
#include "IOptimizedUpdate.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS IFont : public virtual IExcelApplication,public virtual IOptimizedUpdate
{
    friend class CellStyleObject;
    friend class RichTextObject;
    friend class IChartAxis;
    friend class IExtendedFormat;
    friend class IRichTextString;
    friend class IWorkbook;
    friend class AddtionalFormatWrapper;
    friend class RichTextShape;
    friend class RTFCommentArray;
    friend class RichTextString;
    friend class RTFStringArray;
    friend class StyleArrayWrapper;
    friend class XlsWorkbook;
    friend class XlsChart;
    friend class XlsChartAxis;
    friend class XlsFontsCollection;
public:
    virtual bool GetIsBold ()=0;
    virtual void SetIsBold (bool value)=0;
    virtual ExcelColors GetKnownColor ()=0;
    virtual void SetKnownColor (ExcelColors value)=0;
    virtual intrusive_ptr<Color> GetColor ()=0;
    virtual void SetColor (intrusive_ptr<Color> value)=0;
    virtual void SetThemeColor (ThemeColorType type,double tint)=0;
    //virtual bool GetThemeColor (Spire.Xls.ThemeColorType& type,System.Double& tint)=0;
    virtual bool GetIsItalic ()=0;
    virtual void SetIsItalic (bool value)=0;
    virtual double GetSize ()=0;
    virtual void SetSize (double value)=0;
    virtual bool GetIsStrikethrough ()=0;
    virtual void SetIsStrikethrough (bool value)=0;
    virtual bool GetIsSubscript ()=0;
    virtual void SetIsSubscript (bool value)=0;
    virtual LPCWSTR_S GetStrikethroughType ()=0;
    virtual void SetStrikethroughType (LPCWSTR_S value)=0;
    virtual bool GetIsSuperscript ()=0;
    virtual void SetIsSuperscript (bool value)=0;
    virtual FontUnderlineType GetUnderline ()=0;
    virtual void SetUnderline (FontUnderlineType value)=0;
    virtual LPCWSTR_S GetFontName ()=0;
    virtual void SetFontName (LPCWSTR_S value)=0;
    virtual FontVertialAlignmentType GetVerticalAlignment ()=0;
    virtual void SetVerticalAlignment (FontVertialAlignmentType value)=0;
    virtual bool GetIsAutoColor ()=0;
    //virtual intrusive_ptr<Font> GenerateNativeFont ()=0;
private:
};
}}
