#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS XlsGradientStop : public virtual Object
{
    friend class GradientStops;
public:
    intrusive_ptr<OColor> GetOColor ();
    int GetPosition ();
    void SetPosition (int value);
    int GetTransparency ();
    void SetTransparency (int value);
    int GetTint ();
    void SetTint (int value);
    int GetShade ();
    void SetShade (int value);
private:
};
}}
