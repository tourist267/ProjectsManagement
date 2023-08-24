#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IBorder.h"
#include "XlsObject.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS XlsBorder : public virtual XlsObject,public virtual IBorder
{
public:
    //virtual bool GetThemeColor (Spire.Xls.ThemeColorType& type,System.Double& tint);
    virtual void SetThemeColor (ThemeColorType type,double tint);
    /*
    <summary>
        Returns or sets a ExcelColors value that represents the color of the border
    </summary>
    */
    virtual ExcelColors GetKnownColor ();
    virtual void SetKnownColor (ExcelColors value);
    virtual intrusive_ptr<OColor> GetOColor ();
    /*
    <summary>
        Returns or sets the primary color of the object, as shown in the table in the remarks section. Use the RGB function to create a color value. 
            Read/write Color.
    </summary>
    */
    virtual intrusive_ptr<Color> GetColor ();
    virtual void SetColor (intrusive_ptr<Color> value);
    /*
    <summary>
        Returns or sets the line style for the border. Read/write LineStyleType.
    </summary>
    */
    virtual LineStyleType GetLineStyle ();
    virtual void SetLineStyle (LineStyleType value);
    /*
    <summary>
        Indicates whether shows diagonal line.
    </summary>
    */
    virtual bool GetShowDiagonalLine ();
    virtual void SetShowDiagonalLine (bool value);
    BordersLineType GetBorderIndex ();
    static ExcelColors ColorToExcelColor (ExcelColors color);
    void CopyFrom (intrusive_ptr<IBorder> baseBorder);
    void setLineStyleAndColor (LineStyleType borderLine,ExcelColors borderColor);
private:
};
}}
