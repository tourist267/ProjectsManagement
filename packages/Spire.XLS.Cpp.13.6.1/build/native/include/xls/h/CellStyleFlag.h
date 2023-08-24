#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS CellStyleFlag : public virtual Object
{
public:
    CellStyleFlag();
    bool GetAll ();
    void SetAll (bool value);
    bool GetBorders ();
    void SetBorders (bool value);
    bool GetLeftBorder ();
    void SetLeftBorder (bool value);
    bool GetRightBorder ();
    void SetRightBorder (bool value);
    bool GetTopBorder ();
    void SetTopBorder (bool value);
    bool GetBottomBorder ();
    void SetBottomBorder (bool value);
    bool GetDiagonalDownBorder ();
    void SetDiagonalDownBorder (bool value);
    bool GetDiagonalUpBorder ();
    void SetDiagonalUpBorder (bool value);
    bool GetFont ();
    void SetFont (bool value);
    bool GetFontSize ();
    void SetFontSize (bool value);
    bool GetFontName ();
    void SetFontName (bool value);
    bool GetFontColor ();
    void SetFontColor (bool value);
    bool GetFontBold ();
    void SetFontBold (bool value);
    bool GetFontItalic ();
    void SetFontItalic (bool value);
    bool GetFontUnderline ();
    void SetFontUnderline (bool value);
    bool GetFontStrike ();
    void SetFontStrike (bool value);
    bool GetFontScript ();
    void SetFontScript (bool value);
    bool GetNumberFormat ();
    void SetNumberFormat (bool value);
    bool GetHorizontalAlignment ();
    void SetHorizontalAlignment (bool value);
    bool GetVerticalAlignment ();
    void SetVerticalAlignment (bool value);
    bool GetIndent ();
    void SetIndent (bool value);
    bool GetRotation ();
    void SetRotation (bool value);
    bool GetWrapText ();
    void SetWrapText (bool value);
    bool GetShrinkToFit ();
    void SetShrinkToFit (bool value);
    bool GetTextDirection ();
    void SetTextDirection (bool value);
    bool GetCellShading ();
    void SetCellShading (bool value);
    bool GetLocked ();
    void SetLocked (bool value);
    bool GetHideFormula ();
    void SetHideFormula (bool value);
private:
};
}}
