#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Xls{
/*
    <summary>
        This object used to store, convert colors.
    </summary>
*/
class EXPORTS OColor : public virtual Object
{
    friend class ConditionalFormatWrapper;
    friend class CellBorder;
    friend class ExcelGradient;
    friend class ChartTextArea;
    friend class IBorder;
    friend class IGradient;
    friend class IInternalAddtionalFormat;
    friend class AddtionalFormatWrapper;
    friend class XlsFill;
    friend class GradientArrayWrapper;
    friend class XlsBorder;
    friend class XlsBorderArrayWrapper;
    friend class XlsGradient;
    friend class XlsFont;
    friend class XlsWorksheetBase;
    friend class XlsConditionalFormat;
    friend class XlsChartDropBar;
    friend class XlsChartFill;
    friend class XlsChartFrameFormat;
    friend class XlsChartInterior;
    friend class XlsChartSerieDataFormat;
    friend class XlsChartWallOrFloor;
    friend class XlsGradientStop;
    friend class XlsShapeFill;
public:
    /*
    <summary>
        Returns color value (it can be index, rgb color, etc.)
    </summary>
    */
    int GetValue ();
    /*
    <summary>
        Gets or sets Tint.
    </summary>
    */
    double GetTint ();
    void SetTint (double value);
    /*
    <summary>
        Returns type of the stored color.
    </summary>
    */
    ColorType GetColorType ();
    /*
    <summary>
        Returns the hash code for this instance.
    </summary>
    <returns>A 32-bit signed integer hash code.</returns>
    */
    virtual int GetHashCode ();
    void SetTheme (int themeIndex,intrusive_ptr<IWorkbook> book);
    void SetTheme (int themeIndex,intrusive_ptr<IWorkbook> book,double dTintValue);
    //bool GetThemeColor (System.Int32& themeIndex,System.Double& tint);
    void SetRGB (intrusive_ptr<Color> rgb,intrusive_ptr<IWorkbook> book,double dTintValue);
    /*
    <summary>
        Sets known color.
    </summary>
    <param name="value">Excel color to set.</param>
    */
    void SetKnownColor (ExcelColors value);
    ExcelColors GetKnownColor (intrusive_ptr<Workbook> book);
    virtual void Dispose ();
    //virtual bool Equals (System.Object obj);
private:
};
}}
