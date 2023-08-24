#pragma once
#include "pch.h"
#pragma warning(push)
#pragma warning(disable:4250)
//#include "IExcelApplication.h"
//#include "IShape.h"
#include "IPrstGeomShape.h"
//#include "IGeomPathInfo.h"
#pragma warning(pop)

namespace Spire{namespace Xls{
class EXPORTS IGeomPathShape : public virtual IPrstGeomShape
{
    friend class IPrstGeomShapes;
    friend class PrstGeomShapeCollection;
public:
    virtual intrusive_ptr<IGeomPathInfo> AddPath ()=0;
    virtual intrusive_ptr<IGeomPathInfo> Get (int index)=0;
private:
};
}}
