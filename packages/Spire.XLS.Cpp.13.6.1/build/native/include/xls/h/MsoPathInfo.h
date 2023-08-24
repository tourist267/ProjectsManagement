#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS MsoPathInfo : public virtual Object
{
    friend class IGeomPathInfo;
public:
    MsoPathType GetType ();
    //System.Collections.ArrayList GetPointList ();
private:
};
}}
