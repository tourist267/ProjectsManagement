#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IExcelApplication.h"
#include "IOptimizedUpdate.h"
#include "IFont.h"
#include "IChartTextArea.h"
#include "IChartDataLabels.h"
#include "XlsObject.h"
#pragma warning(pop)

namespace Spire{namespace Xls{
class EXPORTS ChartTextArea : public virtual XlsObject,public virtual IChartDataLabels
{
    friend class Chart;
    friend class ChartSheet;
    friend class ChartCategoryAxis;
    friend class ChartDataLabels;
    friend class ChartLegend;
    friend class ChartLegendEntry;
    friend class ChartSeriesAxis;
    friend class ChartValueAxis;
public:
    virtual LPCWSTR_S GetText ();
    virtual void SetText (LPCWSTR_S value);
    virtual int GetTextRotationAngle ();
    virtual void SetTextRotationAngle (int value);
    virtual intrusive_ptr<IChartFrameFormat> GetFrameFormat ();
    virtual ChartBackgroundMode GetBackgroundMode ();
    virtual void SetBackgroundMode (ChartBackgroundMode value);
    virtual bool GetIsAutoMode ();
    //virtual System.Object GetParent ();
    virtual bool GetIsBold ();
    virtual void SetIsBold (bool value);
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
    virtual bool GetIsAutoColor ();
    virtual intrusive_ptr<Font> GenerateNativeFont ();
    virtual void BeginUpdate ();
    virtual void EndUpdate ();
    /*
    <summary>
        Returns textarea's color object. Read-only.
    </summary>
    */
    virtual intrusive_ptr<OColor> GetOColor ();
    virtual ChartParagraphType GetParagraphType ();
    virtual void SetParagraphType (ChartParagraphType value);
    virtual bool GetHasTextRotation ();
    virtual bool GetIsResizeShapeToFitText ();
    virtual void SetIsResizeShapeToFitText (bool value);
    virtual bool GetIsTextWrapped ();
    virtual void SetIsTextWrapped (bool value);
    /*
    <summary>
        Delimeter.
    </summary>
    */
    virtual LPCWSTR_S GetDelimiter ();
    virtual void SetDelimiter (LPCWSTR_S value);
    /*
    <summary>
        Indicates whether buble size is in data labels.
    </summary>
    */
    virtual bool GetHasBubbleSize ();
    virtual void SetHasBubbleSize (bool value);
    /*
    <summary>
        Indicates whether category name is in data labels.
    </summary>
    */
    virtual bool GetHasCategoryName ();
    virtual void SetHasCategoryName (bool value);
    /*
    <summary>
        Indicates whether legend key is in data labels.
    </summary>
    */
    virtual bool GetHasLegendKey ();
    virtual void SetHasLegendKey (bool value);
    /*
    <summary>
        Indicates whether percentage is in data labels.
    </summary>
    */
    virtual bool GetHasPercentage ();
    virtual void SetHasPercentage (bool value);
    /*
    <summary>
        Indicates whether series name is in data labels.
    </summary>
    */
    virtual bool GetHasSeriesName ();
    virtual void SetHasSeriesName (bool value);
    /*
    <summary>
        Indicates whether value is in data labels.
    </summary>
    */
    virtual bool GetHasValue ();
    virtual void SetHasValue (bool value);
    /*
    <summary>
        Represents data labels position.
    </summary>
    */
    virtual DataLabelPositionType GetPosition ();
    virtual void SetPosition (DataLabelPositionType value);
    virtual bool GetShowLeaderLines ();
    virtual void SetShowLeaderLines (bool value);
    /*
    <summary>
        Gets or sets number format for the text area.
    </summary>
    */
    virtual LPCWSTR_S GetNumberFormat ();
    virtual void SetNumberFormat (LPCWSTR_S value);
    /*
    <summary>
        Indicates whether contain dataLabels .
    </summary>
    */
    bool GetHasDataLabels ();
    HorizontalAlignType GetHorizontalAlignType ();
    void SetHorizontalAlignType (HorizontalAlignType value);
    int GetIndex ();
    /*
    <summary>
        Indicates whether to show category label and value as percentage.
    </summary>
    */
    bool GetIsShowLabelPercent ();
    void SetIsShowLabelPercent (bool value);
    /*
    <summary>
        Indicates if current text assign to trend object.
    </summary>
    */
    bool GetIsTrend ();
    void SetIsTrend (bool value);
    /*
    <summary>
        Gets index to the number format. Read-only.
    </summary>
    */
    int GetNumberFormatIndex ();
    intrusive_ptr<XlsWorkbook> GetParentWorkbook ();
    //float GetX ();
    //void SetX (float value);
    //float GetY ();
    //void SetY (float value);
    void SetFont (intrusive_ptr<ExcelFont> font);
    /*
    <summary>
        Returns FontImpl for current font. Read-only.
    </summary>
    */
    intrusive_ptr<FontWrapper> GetFont ();
    //System.Object Clone (System.Object parent,System.Collections.Generic.Dictionary`2[[System.Int32, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089],[System.Int32, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089]] fontIndexes,System.Collections.Generic.Dictionary`2[[System.String, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089],[System.String, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089]] dicNewSheetNames);
    //System.Object Clone (System.Object parent);
private:
};
}}
