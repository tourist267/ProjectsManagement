#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IConditionValue.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS IColorConditionValue : public virtual IConditionValue
{
public:
    virtual intrusive_ptr<Color> GetFormatColor ()=0;
    virtual void SetFormatColor (intrusive_ptr<Color> value)=0;
private:
};
}}
