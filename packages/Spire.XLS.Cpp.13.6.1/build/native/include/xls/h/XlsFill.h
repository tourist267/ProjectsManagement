#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS XlsFill : public virtual Object
{
    friend class PivotStyle;
public:
    intrusive_ptr<OColor> GetOColor ();
    intrusive_ptr<OColor> GetPatternColorObject ();
    ExcelPatternType GetPattern ();
    void SetPattern (ExcelPatternType value);
    GradientStyleType GetGradientStyle ();
    void SetGradientStyle (GradientStyleType value);
    GradientVariantsType GetGradientVariant ();
    void SetGradientVariant (GradientVariantsType value);
    ShapeFillType GetFillType ();
    void SetFillType (ShapeFillType value);
    //virtual bool Equals (System.Object obj);
    virtual int GetHashCode ();
    intrusive_ptr<XlsFill> Clone ();
private:
};
}}
