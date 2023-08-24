#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "ShapeCollectionBase.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS XlsHeaderFooterShapeCollection : public virtual ShapeCollectionBase
{
    friend class XlsWorksheetBase;
public:
    intrusive_ptr<XlsShape> SetPicture (LPCWSTR_S strShapeName,intrusive_ptr<Image> image);
    intrusive_ptr<XlsShape> SetPicture (LPCWSTR_S strShapeName,intrusive_ptr<Image> image,int index);
    intrusive_ptr<XlsShape> SetPicture (LPCWSTR_S strShapeName,intrusive_ptr<Image> image,int iIndex,bool bIncludeOptions);
private:
};
}}
