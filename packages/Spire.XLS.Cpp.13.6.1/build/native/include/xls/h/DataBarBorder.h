#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS DataBarBorder : public virtual Object
{
    friend class DataBar;
public:
    intrusive_ptr<Color> GetColor ();
    void SetColor (intrusive_ptr<Color> value);
    DataBarBorderType GetType ();
    void SetType (DataBarBorderType value);
private:
};
}}
