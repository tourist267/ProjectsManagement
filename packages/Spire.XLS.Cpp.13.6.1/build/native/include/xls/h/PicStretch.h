#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS PicStretch : public virtual Object
{
    friend class IShapeFill;
    friend class XlsChartFill;
    friend class XlsShapeFill;
public:
    FillPictureType GetType ();
    void SetType (FillPictureType value);
    double GetScale ();
    void SetScale (double value);
    double GetLeft ();
    void SetLeft (double value);
    double GetTop ();
    void SetTop (double value);
    double GetBottom ();
    void SetBottom (double value);
    double GetRight ();
    void SetRight (double value);
private:
};
}}
