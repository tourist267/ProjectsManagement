#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IBorder.h"
#include "XlsObject.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS XlsBorderArrayWrapper : public virtual XlsObject,public virtual IBorder
{
public:
    //virtual bool GetThemeColor (Spire.Xls.ThemeColorType& type,System.Double& tint);
    virtual void SetThemeColor (ThemeColorType type,double tint);
    virtual ExcelColors GetKnownColor ();
    virtual void SetKnownColor (ExcelColors value);
    virtual intrusive_ptr<OColor> GetOColor ();
    virtual intrusive_ptr<Color> GetColor ();
    virtual void SetColor (intrusive_ptr<Color> value);
    virtual LineStyleType GetLineStyle ();
    virtual void SetLineStyle (LineStyleType value);
    virtual bool GetShowDiagonalLine ();
    virtual void SetShowDiagonalLine (bool value);
private:
};
}}
