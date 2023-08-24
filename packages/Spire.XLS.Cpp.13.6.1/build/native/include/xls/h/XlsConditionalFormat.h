#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "ICloneParent.h"
#include "IConditionalFormat.h"
#include "XlsObject.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS XlsConditionalFormat : public virtual XlsObject,public virtual IConditionalFormat,public virtual ICloneParent
{
    friend class CondFormatCollectionWrapper;
public:
    virtual intrusive_ptr<IconSet> GetIconSet ();
    /*
    <summary>
        Get the conditional formatting's "ColorScale" instance.
            The default instance is a "green-red" 2ColorScale .
            Valid only for type = ColorScale.
    </summary>
    <returns>ColorScale instance</returns>
    */
    virtual intrusive_ptr<ColorScale> GetColorScale ();
    LPCWSTR_S GetNumberFormat ();
    void SetNumberFormat (LPCWSTR_S value);
    bool GetIsNumberFormatPresent ();
    virtual int GetHashCode ();
    //virtual bool Equals (System.Object obj);
    //virtual System.Object Clone (System.Object parent);
    /*
    <summary>
        Conditional format color. Read-only.
    </summary>
    */
    virtual intrusive_ptr<OColor> GetOColor ();
    /*
    <summary>
        Conditional format background color. Read-only.
    </summary>
    */
    virtual intrusive_ptr<OColor> GetBackColorObject ();
    /*
    <summary>
        Conditional format top border color. Read-only.
    </summary>
    */
    virtual intrusive_ptr<OColor> GetTopBorderColorObject ();
    /*
    <summary>
        Conditional format bottom border color. Read-only.
    </summary>
    */
    virtual intrusive_ptr<OColor> GetBottomBorderColorObject ();
    /*
    <summary>
        Conditional format left border color. Read-only.
    </summary>
    */
    virtual intrusive_ptr<OColor> GetLeftBorderColorObject ();
    /*
    <summary>
        Conditional format right border color. Read-only.
    </summary>
    */
    virtual intrusive_ptr<OColor> GetRightBorderColorObject ();
    /*
    <summary>
        Conditional format font color. Read-only.
    </summary>
    */
    virtual intrusive_ptr<OColor> GetFontColorObject ();
    LPCWSTR_S MakeFormula ();
    LPCWSTR_S MakeFormula (LPCWSTR_S para);
    LPCWSTR_S MakeFormula (double para);
    void UpdateFormula (int iCurIndex,int iSourceIndex,intrusive_ptr<Rectangle> sourceRect,int iDestIndex,intrusive_ptr<Rectangle> destRect,int row,int column);
    virtual int GetPriority ();
    virtual void SetPriority (int value);
    bool GetStopIfTrue ();
    void SetStopIfTrue (bool value);
    virtual int GetDxfId ();
    virtual void SetDxfId (int value);
    intrusive_ptr<Average> GetAverage ();
    intrusive_ptr<TopBottom> GetTopBottom ();
    /*
    <summary>
        Excel color of the left line.
    </summary>
    */
    virtual ExcelColors GetLeftBorderKnownColor ();
    virtual void SetLeftBorderKnownColor (ExcelColors value);
    virtual intrusive_ptr<Color> GetLeftBorderColor ();
    virtual void SetLeftBorderColor (intrusive_ptr<Color> value);
    /*
    <summary>
        Left border line style.
    </summary>
    */
    virtual LineStyleType GetLeftBorderStyle ();
    virtual void SetLeftBorderStyle (LineStyleType value);
    /*
    <summary>
        Color of the right line.
    </summary>
    */
    virtual ExcelColors GetRightBorderKnownColor ();
    virtual void SetRightBorderKnownColor (ExcelColors value);
    /*
    <summary>
        Color of the right line.
    </summary>
    */
    virtual intrusive_ptr<Color> GetRightBorderColor ();
    virtual void SetRightBorderColor (intrusive_ptr<Color> value);
    /*
    <summary>
        Right border line style.
    </summary>
    */
    virtual LineStyleType GetRightBorderStyle ();
    virtual void SetRightBorderStyle (LineStyleType value);
    /*
    <summary>
        Excel color of the top line.
    </summary>
    */
    virtual ExcelColors GetTopBorderKnownColor ();
    virtual void SetTopBorderKnownColor (ExcelColors value);
    virtual intrusive_ptr<Color> GetTopBorderColor ();
    virtual void SetTopBorderColor (intrusive_ptr<Color> value);
    /*
    <summary>
        Top border line style.
    </summary>
    */
    virtual LineStyleType GetTopBorderStyle ();
    virtual void SetTopBorderStyle (LineStyleType value);
    /*
    <summary>
        Excel color of the bottom line.
    </summary>
    */
    virtual ExcelColors GetBottomBorderKnownColor ();
    virtual void SetBottomBorderKnownColor (ExcelColors value);
    /*
    <summary>
        Color of the bottom line.
    </summary>
    */
    virtual intrusive_ptr<Color> GetBottomBorderColor ();
    virtual void SetBottomBorderColor (intrusive_ptr<Color> value);
    /*
    <summary>
        Bottom border line style.
    </summary>
    */
    virtual LineStyleType GetBottomBorderStyle ();
    virtual void SetBottomBorderStyle (LineStyleType value);
    /*
    <summary>
        First formula.
    </summary>
    */
    virtual LPCWSTR_S GetFirstFormula ();
    virtual void SetFirstFormula (LPCWSTR_S value);
    LPCWSTR_S GetFirstFormulaR1C1 ();
    void SetFirstFormulaR1C1 (LPCWSTR_S value);
    void SetTimePeriod (TimePeriodType timePeriod);
    /*
    <summary>
        Second formula.
    </summary>
    */
    virtual LPCWSTR_S GetSecondFormula ();
    virtual void SetSecondFormula (LPCWSTR_S value);
    LPCWSTR_S GetSecondFormulaR1C1 ();
    void SetSecondFormulaR1C1 (LPCWSTR_S value);
    virtual ConditionalFormatType GetFormatType ();
    virtual void SetFormatType (ConditionalFormatType value);
    /*
    <summary>
        Type of the comparison operator.
    </summary>
    */
    virtual ComparisonOperatorType GetOperator ();
    virtual void SetOperator (ComparisonOperatorType value);
    /*
    <summary>
        Indicates whether font is bold.
    </summary>
    */
    virtual bool GetIsBold ();
    virtual void SetIsBold (bool value);
    /*
    <summary>
        Indicates whether font is italic.
    </summary>
    */
    virtual bool GetIsItalic ();
    virtual void SetIsItalic (bool value);
    /*
    <summary>
        Font excel color.
    </summary>
    */
    virtual ExcelColors GetFontKnownColor ();
    virtual void SetFontKnownColor (ExcelColors value);
    virtual intrusive_ptr<Color> GetFontColor ();
    virtual void SetFontColor (intrusive_ptr<Color> value);
    /*
    <summary>
        Underline type.
    </summary>
    */
    virtual FontUnderlineType GetUnderline ();
    virtual void SetUnderline (FontUnderlineType value);
    /*
    <summary>
        Indicates whether font is striked through.
    </summary>
    */
    virtual bool GetIsStrikeThrough ();
    virtual void SetIsStrikeThrough (bool value);
    /*
    <summary>
        Indicates whether font is superscript.
    </summary>
    */
    virtual bool GetIsSuperScript ();
    virtual void SetIsSuperScript (bool value);
    /*
    <summary>
        Indicates whether font is subscript.
    </summary>
    */
    virtual bool GetIsSubScript ();
    virtual void SetIsSubScript (bool value);
    /*
    <summary>
        Pattern foreground excel color.
    </summary>
    */
    virtual ExcelColors GetKnownColor ();
    virtual void SetKnownColor (ExcelColors value);
    /*
    <summary>
        Pattern foreground color.
    </summary>
    */
    virtual intrusive_ptr<Color> GetColor ();
    virtual void SetColor (intrusive_ptr<Color> value);
    /*
    <summary>
        Pattern background excel color.
    </summary>
    */
    virtual ExcelColors GetBackKnownColor ();
    virtual void SetBackKnownColor (ExcelColors value);
    /*
    <summary>
        Pattern background color.
    </summary>
    */
    virtual intrusive_ptr<Color> GetBackColor ();
    virtual void SetBackColor (intrusive_ptr<Color> value);
    /*
    <summary>
        XlsFill pattern type.
    </summary>
    */
    virtual ExcelPatternType GetFillPattern ();
    virtual void SetFillPattern (ExcelPatternType value);
    /*
    <summary>
        Indicates whether contains font formatting.
    </summary>
    */
    bool GetIsFontFormatPresent ();
    void SetIsFontFormatPresent (bool value);
    /*
    <summary>
        Indicates whether contains border formatting.
    </summary>
    */
    bool GetIsBorderFormatPresent ();
    void SetIsBorderFormatPresent (bool value);
    /*
    <summary>
        Indicates whether contains pattern formatting.
    </summary>
    */
    bool GetIsPatternFormatPresent ();
    void SetIsPatternFormatPresent (bool value);
    /*
    <summary>
        Indicates whether format color present.
    </summary>
    */
    bool GetIsFontColorPresent ();
    void SetIsFontColorPresent (bool value);
    /*
    <summary>
        Indicates whether presents pattern color.
    </summary>
    */
    bool GetIsPatternColorPresent ();
    void SetIsPatternColorPresent (bool value);
    /*
    <summary>
        Indicates whether pattern style was modified.
    </summary>
    */
    bool GetIsPatternStyleModified ();
    void SetIsPatternStyleModified (bool value);
    /*
    <summary>
        Indicates whether background color present.
    </summary>
    */
    bool GetIsBackgroundColorPresent ();
    void SetIsBackgroundColorPresent (bool value);
    /*
    <summary>
        Indicates whether left border style and color are modified.
    </summary>
    */
    bool GetIsLeftBorderModified ();
    void SetIsLeftBorderModified (bool value);
    /*
    <summary>
        Indicates right border style and color modified.
    </summary>
    */
    bool GetIsRightBorderModified ();
    void SetIsRightBorderModified (bool value);
    /*
    <summary>
        Indicates whether top border style and color are modified.
    </summary>
    */
    bool GetIsTopBorderModified ();
    void SetIsTopBorderModified (bool value);
    /*
    <summary>
        Indicates whether bottom border style and color are modified.
    </summary>
    */
    bool GetIsBottomBorderModified ();
    void SetIsBottomBorderModified (bool value);
    virtual intrusive_ptr<DataBar> GetDataBar ();
private:
};
}}
