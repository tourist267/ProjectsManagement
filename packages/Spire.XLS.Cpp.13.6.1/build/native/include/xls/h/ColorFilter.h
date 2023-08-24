#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS ColorFilter : public virtual Object
{
public:
    bool GetFilterByFillColor ();
    void SetFilterByFillColor (bool value);
    intrusive_ptr<Color> GetValue ();
    void SetValue (intrusive_ptr<Color> value);
private:
};
}}
