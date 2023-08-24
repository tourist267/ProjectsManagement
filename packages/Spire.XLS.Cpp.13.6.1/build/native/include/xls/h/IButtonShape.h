#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IExcelApplication.h"
#include "IShape.h"
#include "ITextBox.h"
#pragma warning(pop)

namespace Spire{namespace Xls{
class EXPORTS IButtonShape : public virtual IShape,public virtual ITextBox
{
    friend class IButtonShapes;
    friend class ButtonShapeCollection;
public:
private:
};
}}
