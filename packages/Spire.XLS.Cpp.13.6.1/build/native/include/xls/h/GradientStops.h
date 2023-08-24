#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS GradientStops : public virtual Object
{
    friend class XlsChartFill;
    friend class XlsShapeFill;
public:
    int GetAngle ();
    void SetAngle (int value);
    GradientType GetGradientType ();
    void SetGradientType (GradientType value);
    intrusive_ptr<Rectangle> GetFillToRect ();
    void SetFillToRect (intrusive_ptr<Rectangle> value);
    bool GetIsDoubled ();
    void DoubleGradientStops ();
    void InvertGradientStops ();
    intrusive_ptr<GradientStops> ShrinkGradientStops ();
    intrusive_ptr<GradientStops> Clone ();
    void Add (intrusive_ptr<XlsGradientStop> stop);
    intrusive_ptr<XlsGradientStop> Add (intrusive_ptr<Color> color,int position,int transparency,int tint,int shade);
    void Serialize (intrusive_ptr<Stream> stream);
private:
};
}}
