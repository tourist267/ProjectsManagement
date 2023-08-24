#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IExcelApplication.h"
#include "IConditionalFormat.h"
#include "IOptimizedUpdate.h"
#include "CommonWrapper.h"
#pragma warning(pop)
namespace Spire{namespace Xls{
class EXPORTS ConditionalFormatWrapper : public virtual CommonWrapper,public virtual IConditionalFormat
{
    friend class ConditionalFormats;
public:
    void SetIsTopBorderModified (bool value);
    virtual int GetDxfId ();
    virtual void SetDxfId (int value);
    //virtual System.Object GetParent ();
    virtual int GetPriority ();
    virtual void SetPriority (int value);
    intrusive_ptr<TopBottom> GetTopBottom ();
    intrusive_ptr<Average> GetAverage ();
    virtual ConditionalFormatType GetFormatType ();
    virtual void SetFormatType (ConditionalFormatType value);
    bool GetStopIfTrue ();
    void SetStopIfTrue (bool value);
    virtual ComparisonOperatorType GetOperator ();
    virtual void SetOperator (ComparisonOperatorType value);
    virtual bool GetIsBold ();
    virtual void SetIsBold (bool value);
    virtual bool GetIsItalic ();
    virtual void SetIsItalic (bool value);
    virtual ExcelColors GetFontKnownColor ();
    virtual void SetFontKnownColor (ExcelColors value);
    virtual intrusive_ptr<Color> GetFontColor ();
    virtual void SetFontColor (intrusive_ptr<Color> value);
    virtual FontUnderlineType GetUnderline ();
    virtual void SetUnderline (FontUnderlineType value);
    virtual bool GetIsStrikeThrough ();
    virtual void SetIsStrikeThrough (bool value);
    virtual ExcelColors GetLeftBorderKnownColor ();
    virtual void SetLeftBorderKnownColor (ExcelColors value);
    virtual intrusive_ptr<Color> GetLeftBorderColor ();
    virtual void SetLeftBorderColor (intrusive_ptr<Color> value);
    virtual LineStyleType GetLeftBorderStyle ();
    virtual void SetLeftBorderStyle (LineStyleType value);
    virtual ExcelColors GetRightBorderKnownColor ();
    virtual void SetRightBorderKnownColor (ExcelColors value);
    virtual intrusive_ptr<Color> GetRightBorderColor ();
    virtual void SetRightBorderColor (intrusive_ptr<Color> value);
    virtual LineStyleType GetRightBorderStyle ();
    virtual void SetRightBorderStyle (LineStyleType value);
    virtual ExcelColors GetTopBorderKnownColor ();
    virtual void SetTopBorderKnownColor (ExcelColors value);
    virtual intrusive_ptr<Color> GetTopBorderColor ();
    virtual void SetTopBorderColor (intrusive_ptr<Color> value);
    virtual LineStyleType GetTopBorderStyle ();
    virtual void SetTopBorderStyle (LineStyleType value);
    virtual ExcelColors GetBottomBorderKnownColor ();
    virtual void SetBottomBorderKnownColor (ExcelColors value);
    virtual intrusive_ptr<Color> GetBottomBorderColor ();
    virtual void SetBottomBorderColor (intrusive_ptr<Color> value);
    virtual LineStyleType GetBottomBorderStyle ();
    virtual void SetBottomBorderStyle (LineStyleType value);
    virtual LPCWSTR_S GetFirstFormula ();
    virtual void SetFirstFormula (LPCWSTR_S value);
    LPCWSTR_S GetFirstFormulaR1C1 ();
    void SetFirstFormulaR1C1 (LPCWSTR_S value);
    LPCWSTR_S GetSecondFormulaR1C1 ();
    void SetSecondFormulaR1C1 (LPCWSTR_S value);
    virtual LPCWSTR_S GetSecondFormula ();
    virtual void SetSecondFormula (LPCWSTR_S value);
    virtual ExcelColors GetKnownColor ();
    virtual void SetKnownColor (ExcelColors value);
    virtual intrusive_ptr<Color> GetColor ();
    virtual void SetColor (intrusive_ptr<Color> value);
    virtual ExcelColors GetBackKnownColor ();
    virtual void SetBackKnownColor (ExcelColors value);
    virtual intrusive_ptr<Color> GetBackColor ();
    virtual void SetBackColor (intrusive_ptr<Color> value);
    virtual ExcelPatternType GetFillPattern ();
    virtual void SetFillPattern (ExcelPatternType value);
    virtual bool GetIsSuperScript ();
    virtual void SetIsSuperScript (bool value);
    virtual bool GetIsSubScript ();
    virtual void SetIsSubScript (bool value);
    LPCWSTR_S GetNumberFormat ();
    void SetNumberFormat (LPCWSTR_S value);
    virtual intrusive_ptr<ColorScale> GetColorScale ();
    virtual intrusive_ptr<DataBar> GetDataBar ();
    virtual intrusive_ptr<IconSet> GetIconSet ();
    virtual void BeginUpdate ();
    virtual void EndUpdate ();
    LPCWSTR_S MakeFormula ();
    LPCWSTR_S MakeFormula (LPCWSTR_S para);
    void SetTimePeriod (TimePeriodType timePeriod);
    virtual intrusive_ptr<OColor> GetOColor ();
    virtual intrusive_ptr<OColor> GetBackColorObject ();
    virtual intrusive_ptr<OColor> GetTopBorderColorObject ();
    virtual intrusive_ptr<OColor> GetBottomBorderColorObject ();
    virtual intrusive_ptr<OColor> GetLeftBorderColorObject ();
    virtual intrusive_ptr<OColor> GetRightBorderColorObject ();
    virtual intrusive_ptr<OColor> GetFontColorObject ();
    bool GetIsPatternStyleModified ();
    void SetIsPatternStyleModified (bool value);
    bool GetIsBackgroundColorPresent ();
    void SetIsBackgroundColorPresent (bool value);
    bool GetIsBorderFormatPresent ();
    void SetIsBorderFormatPresent (bool value);
    bool GetIsBottomBorderModified ();
    void SetIsBottomBorderModified (bool value);
    bool GetIsFontColorPresent ();
    void SetIsFontColorPresent (bool value);
    bool GetIsFontFormatPresent ();
    void SetIsFontFormatPresent (bool value);
    bool GetIsLeftBorderModified ();
    void SetIsLeftBorderModified (bool value);
    /*
    <summary>
        Indicates whether pattern color .
    </summary>
    */
    bool GetIsPatternColorPresent ();
    void SetIsPatternColorPresent (bool value);
    bool GetIsPatternFormatPresent ();
    void SetIsPatternFormatPresent (bool value);
    bool GetIsRightBorderModified ();
    void SetIsRightBorderModified (bool value);
    bool GetIsTopBorderModified ();
private:
};
}}
