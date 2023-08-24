#pragma once
#include "pch.h"
namespace Spire{namespace Xls{
class EXPORTS PicTile : public virtual Object
{
    friend class XlsShapeFill;
public:
    double GetOffsetX ();
    void SetOffsetX (double value);
    double GetOffsetY ();
    void SetOffsetY (double value);
    double GetScaleX ();
    void SetScaleX (double value);
    double GetScaleY ();
    void SetScaleY (double value);
private:
};
}}
