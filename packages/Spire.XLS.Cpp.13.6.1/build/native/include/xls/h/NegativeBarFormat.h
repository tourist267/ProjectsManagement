#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS NegativeBarFormat : public virtual Object
{
    friend class DataBar;
public:
    intrusive_ptr<Color> GetBorderColor ();
    void SetBorderColor (intrusive_ptr<Color> value);
    DataBarNegativeColorType GetBorderColorType ();
    void SetBorderColorType (DataBarNegativeColorType value);
    intrusive_ptr<Color> GetColor ();
    void SetColor (intrusive_ptr<Color> value);
    DataBarNegativeColorType GetColorType ();
    void SetColorType (DataBarNegativeColorType value);
private:
};
}}
