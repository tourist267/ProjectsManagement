#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IOptimizedUpdate.h"
#include "IFont.h"
#include "IChartTextArea.h"
#include "IChartDataLabels.h"
#include "XlsObject.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS XlsChartDataLabels : public virtual XlsObject,public virtual IChartDataLabels
{
public:
    virtual bool GetHasSeriesName ();
    virtual void SetHasSeriesName (bool value);
    virtual bool GetHasCategoryName ();
    virtual void SetHasCategoryName (bool value);
    virtual bool GetHasValue ();
    virtual void SetHasValue (bool value);
    virtual bool GetHasPercentage ();
    virtual void SetHasPercentage (bool value);
    virtual bool GetHasBubbleSize ();
    virtual void SetHasBubbleSize (bool value);
    /*
    <summary>
        Gets or sets a value indicating whether this instance has formula.
    </summary>
    */
    bool GetHasFormula ();
    virtual LPCWSTR_S GetDelimiter ();
    virtual void SetDelimiter (LPCWSTR_S value);
    virtual bool GetHasLegendKey ();
    virtual void SetHasLegendKey (bool value);
    /*
    <summary>
        Indicates whether border formatting object was created. Read-only.
    </summary>
    */
    bool GetHasManualLayout ();
    virtual DataLabelPositionType GetPosition ();
    virtual void SetPosition (DataLabelPositionType value);
    virtual bool GetShowLeaderLines ();
    virtual void SetShowLeaderLines (bool value);
    virtual LPCWSTR_S GetNumberFormat ();
    virtual void SetNumberFormat (LPCWSTR_S value);
    virtual bool GetIsTextWrapped ();
    virtual void SetIsTextWrapped (bool value);
    virtual bool GetIsResizeShapeToFitText ();
    virtual void SetIsResizeShapeToFitText (bool value);
    /*
    <summary>
        True if the font is bold. Read / write Boolean.
    </summary>
    */
    virtual bool GetIsBold ();
    virtual void SetIsBold (bool value);
    /*
    <summary>
        Returns or sets the primary color of the object.
    </summary>
    */
    virtual ExcelColors GetKnownColor ();
    virtual void SetKnownColor (ExcelColors value);
    /*
    <summary>
        Gets or sets color. 
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
        Returns or sets the size of the font. Read / write Variant.
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
    /*
    <summary>
        Returns or sets font vertical alignment.
    </summary>
    */
    virtual FontVertialAlignmentType GetVerticalAlignment ();
    virtual void SetVerticalAlignment (FontVertialAlignmentType value);
    /*
    <summary>
        Indicates whether color has automatic color. Read-only.
    </summary>
    */
    virtual bool GetIsAutoColor ();
    virtual LPCWSTR_S GetStrikethroughType ();
    virtual void SetStrikethroughType (LPCWSTR_S value);
    virtual intrusive_ptr<Font> GenerateNativeFont ();
    /*
    <summary>
        Gets or sets text.
    </summary>
    */
    virtual LPCWSTR_S GetText ();
    virtual void SetText (LPCWSTR_S value);
    virtual intrusive_ptr<IChartFrameFormat> GetFrameFormat ();
    /*
    <summary>
        Text rotation angle. between -90 and 90.
    </summary>
    */
    virtual int GetTextRotationAngle ();
    virtual void SetTextRotationAngle (int value);
    /*
    <summary>
        Display mode of the background.
    </summary>
    */
    virtual ChartBackgroundMode GetBackgroundMode ();
    virtual void SetBackgroundMode (ChartBackgroundMode value);
    /*
    <summary>
        True if background is set to automatic.
    </summary>
    */
    virtual bool GetIsAutoMode ();
    intrusive_ptr<XlsChartSerieDataFormat> GetFormat ();
    intrusive_ptr<XlsFont> GetFont ();
    /*
    <summary>
        Set Range for value. above Excel 2013
    </summary>
    */
    intrusive_ptr<CellRange> GetValueFromCell ();
    void SetValueFromCell (intrusive_ptr<CellRange> value);
    /*
    <summary>
        false value Specifies that the Width shall be interpreted
            as the Right of the chart element..
    </summary>
    */
    bool GetIsWMode ();
    void SetIsWMode (bool value);
    /*
    <summary>
        false value Specifies that the Height shall be interpreted
            as the Bottom of the chart element..
    </summary>
    */
    bool GetIsHMode ();
    void SetIsHMode (bool value);
    /*
    <summary>
        true value Specifies that the X shall be interpreted
            as the Left of the chart element..
    </summary>
    */
    bool GetIsXMode ();
    void SetIsXMode (bool value);
    /*
    <summary>
        true value Specifies that the Y shall be interpreted
            as the Top of the chart element..
    </summary>
    */
    bool GetIsYMode ();
    void SetIsYMode (bool value);
    /*
    <summary>
        X-position of upper-left corner. 1/4000 of chart plot.
            IsXMode Shall set to True
    </summary>
    */
    int GetX ();
    void SetX (int value);
    /*
    <summary>
        Y-position of upper-left corner. 1/4000 of chart plot. 
            IsYMode Shall set to True
    </summary>
    */
    int GetY ();
    void SetY (int value);
    /*
    <summary>
        Text of area.
    </summary>
    */
    intrusive_ptr<XlsChartDataLabelArea> GetTextArea ();
    bool GetHasWedgeCallout ();
    void SetHasWedgeCallout (bool value);
    /*
    <summary>
        Y-size. 1/4000 of chart plot. IsHMode Shall set to True
    </summary>
    */
    int GetHeight ();
    void SetHeight (int value);
    /*
    <summary>
        X-size. 1/4000 of chart plot. IsWMode Shall set to True
    </summary>
    */
    int GetWidth ();
    void SetWidth (int value);
    int GetIndex ();
    virtual void BeginUpdate ();
    virtual void EndUpdate ();
private:
};
}}
