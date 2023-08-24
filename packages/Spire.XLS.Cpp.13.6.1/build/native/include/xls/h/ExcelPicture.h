#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "XlsBitmapShape.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS ExcelPicture : public virtual XlsBitmapShape
{
    friend class PicturesCollection;
public:
private:
};
}}
