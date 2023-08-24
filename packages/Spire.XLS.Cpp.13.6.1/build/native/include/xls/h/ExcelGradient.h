#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IGradient.h"
#pragma warning(pop)

namespace Spire{namespace Xls{
class EXPORTS ExcelGradient : public virtual Object,public virtual IGradient
{
    friend class ExcelInterior;
    friend class IInterior;
    friend class InteriorArrayWrapper;
public:
    virtual intrusive_ptr<Color> GetBackColor ();
    virtual void SetBackColor (intrusive_ptr<Color> value);
    virtual intrusive_ptr<OColor> GetBackColorObject ();
    virtual ExcelColors GetBackKnownColor ();
    virtual void SetBackKnownColor (ExcelColors value);
    virtual intrusive_ptr<Color> GetForeColor ();
    virtual void SetForeColor (intrusive_ptr<Color> value);
    virtual ExcelColors GetForeKnownColor ();
    virtual void SetForeKnownColor (ExcelColors value);
    virtual intrusive_ptr<OColor> GetForeColorObject ();
    virtual GradientStyleType GetGradientStyle ();
    virtual void SetGradientStyle (GradientStyleType value);
    virtual GradientVariantsType GetGradientVariant ();
    virtual void SetGradientVariant (GradientVariantsType value);
//    virtual int CompareTo (intrusive_ptr<IGradient> gradient);
    virtual void TwoColorGradient ();
    virtual void TwoColorGradient (GradientStyleType style,GradientVariantsType variant);
private:
};
}}
