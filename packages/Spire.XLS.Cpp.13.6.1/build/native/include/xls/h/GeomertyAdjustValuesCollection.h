#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS GeomertyAdjustValuesCollection : public virtual Object
{
    friend class XlsPrstGeomShape;
public:
    intrusive_ptr<GeomertyAdjustValue> Get (int index);
    intrusive_ptr<GeomertyAdjustValue> AddAdjustValue (GeomertyAdjustValueFormulaType type);
private:
};
}}
