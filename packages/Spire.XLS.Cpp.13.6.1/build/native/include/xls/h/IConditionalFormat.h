#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
//#include "ComparisonOperatorType.h"
//#include "ConditionalFormatType.h"
//#include "ExcelColors.h"
//#include "ExcelPatternType.h"
//#include "FontUnderlineType.h"
//#include "LineStyleType.h"
#include "IExcelApplication.h"
//#include "ColorScale.h"
//#include "DataBar.h"
//#include "IconSet.h"
#pragma warning(pop)

namespace Spire{namespace Xls{
class EXPORTS IConditionalFormat : public virtual IExcelApplication
{
    friend class IConditionalFormats;
    friend class PivotConditionalFormat;
    friend class CondFormatCollectionWrapper;
    friend class XlsConditionalFormats;
public:
    virtual ConditionalFormatType GetFormatType ()=0;
    virtual void SetFormatType (ConditionalFormatType value)=0;
    virtual ComparisonOperatorType GetOperator ()=0;
    virtual void SetOperator (ComparisonOperatorType value)=0;
    virtual bool GetIsBold ()=0;
    virtual void SetIsBold (bool value)=0;
    virtual bool GetIsItalic ()=0;
    virtual void SetIsItalic (bool value)=0;
    virtual int GetPriority ()=0;
    virtual void SetPriority (int value)=0;
    virtual ExcelColors GetFontKnownColor ()=0;
    virtual void SetFontKnownColor (ExcelColors value)=0;
    virtual intrusive_ptr<Color> GetFontColor ()=0;
    virtual void SetFontColor (intrusive_ptr<Color> value)=0;
    virtual FontUnderlineType GetUnderline ()=0;
    virtual void SetUnderline (FontUnderlineType value)=0;
    virtual bool GetIsStrikeThrough ()=0;
    virtual void SetIsStrikeThrough (bool value)=0;
    virtual ExcelColors GetLeftBorderKnownColor ()=0;
    virtual void SetLeftBorderKnownColor (ExcelColors value)=0;
    virtual intrusive_ptr<Color> GetLeftBorderColor ()=0;
    virtual void SetLeftBorderColor (intrusive_ptr<Color> value)=0;
    virtual LineStyleType GetLeftBorderStyle ()=0;
    virtual void SetLeftBorderStyle (LineStyleType value)=0;
    virtual ExcelColors GetRightBorderKnownColor ()=0;
    virtual void SetRightBorderKnownColor (ExcelColors value)=0;
    virtual intrusive_ptr<Color> GetRightBorderColor ()=0;
    virtual void SetRightBorderColor (intrusive_ptr<Color> value)=0;
    virtual LineStyleType GetRightBorderStyle ()=0;
    virtual void SetRightBorderStyle (LineStyleType value)=0;
    virtual ExcelColors GetTopBorderKnownColor ()=0;
    virtual void SetTopBorderKnownColor (ExcelColors value)=0;
    virtual intrusive_ptr<Color> GetTopBorderColor ()=0;
    virtual void SetTopBorderColor (intrusive_ptr<Color> value)=0;
    virtual LineStyleType GetTopBorderStyle ()=0;
    virtual void SetTopBorderStyle (LineStyleType value)=0;
    virtual ExcelColors GetBottomBorderKnownColor ()=0;
    virtual void SetBottomBorderKnownColor (ExcelColors value)=0;
    virtual intrusive_ptr<Color> GetBottomBorderColor ()=0;
    virtual void SetBottomBorderColor (intrusive_ptr<Color> value)=0;
    virtual LineStyleType GetBottomBorderStyle ()=0;
    virtual void SetBottomBorderStyle (LineStyleType value)=0;
    virtual LPCWSTR_S GetFirstFormula ()=0;
    virtual void SetFirstFormula (LPCWSTR_S value)=0;
    virtual LPCWSTR_S GetSecondFormula ()=0;
    virtual void SetSecondFormula (LPCWSTR_S value)=0;
    virtual ExcelColors GetKnownColor ()=0;
    virtual void SetKnownColor (ExcelColors value)=0;
    virtual intrusive_ptr<Color> GetColor ()=0;
    virtual void SetColor (intrusive_ptr<Color> value)=0;
    virtual ExcelColors GetBackKnownColor ()=0;
    virtual void SetBackKnownColor (ExcelColors value)=0;
    virtual intrusive_ptr<Color> GetBackColor ()=0;
    virtual void SetBackColor (intrusive_ptr<Color> value)=0;
    virtual ExcelPatternType GetFillPattern ()=0;
    virtual void SetFillPattern (ExcelPatternType value)=0;
    virtual bool GetIsSuperScript ()=0;
    virtual void SetIsSuperScript (bool value)=0;
    virtual bool GetIsSubScript ()=0;
    virtual void SetIsSubScript (bool value)=0;
    virtual intrusive_ptr<DataBar> GetDataBar ()=0;
    virtual intrusive_ptr<IconSet> GetIconSet ()=0;
    virtual intrusive_ptr<ColorScale> GetColorScale ()=0;
private:
};
}}
