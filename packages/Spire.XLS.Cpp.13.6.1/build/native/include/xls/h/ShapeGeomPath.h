#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IGeomPath.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS ShapeGeomPath : public virtual Object,public virtual IGeomPath
{
public:
    //virtual Spire.Xls.Core.Spreadsheet.Collections.CollectionExtended`1[[Spire.Xls.Core.Spreadsheet.Shapes.ShapeSegmentPath, Spire.XLS, Version=12.7.7.0, Culture=neutral, PublicKeyToken=null]] GetSegmentPaths ();
private:
};
}}
