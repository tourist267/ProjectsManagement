#pragma once
#include "pch.h"

//#pragma warning(push)
//#pragma warning(disable:4250)
//#include "ExcelColors.h"
//#include "GradientStyleType.h"
//#include "GradientVariantsType.h"
//#include "OColor.h"
//#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS IGradient : public virtual Object
{
public:
    virtual intrusive_ptr<OColor> GetBackColorObject ()=0;
    virtual intrusive_ptr<OColor> GetForeColorObject ()=0;
    virtual intrusive_ptr<Color> GetBackColor ()=0;
    virtual void SetBackColor (intrusive_ptr<Color> value)=0;
    virtual ExcelColors GetBackKnownColor ()=0;
    virtual void SetBackKnownColor (ExcelColors value)=0;
    virtual intrusive_ptr<Color> GetForeColor ()=0;
    virtual void SetForeColor (intrusive_ptr<Color> value)=0;
    virtual ExcelColors GetForeKnownColor ()=0;
    virtual void SetForeKnownColor (ExcelColors value)=0;
    virtual GradientStyleType GetGradientStyle ()=0;
    virtual void SetGradientStyle (GradientStyleType value)=0;
    virtual GradientVariantsType GetGradientVariant ()=0;
    virtual void SetGradientVariant (GradientVariantsType value)=0;
    //virtual int CompareTo (intrusive_ptr<IGradient> gradient)=0;
    virtual void TwoColorGradient ()=0;
    virtual void TwoColorGradient (GradientStyleType style,GradientVariantsType variant)=0;
private:
};
}}
