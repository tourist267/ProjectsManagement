#pragma once
#include "pch.h"
#pragma warning(push)
#pragma warning(disable:4250)
//#include "IExcelApplication.h"
#include "IShape.h"
#include "ITextBox.h"
//#include "IShapeLineFormat.h"
#pragma warning(pop)

namespace Spire{namespace Xls{
class EXPORTS ITextBoxShape : public virtual ITextBox,public virtual IShape
{
public:
    virtual intrusive_ptr<IShapeLineFormat> GetLine ()=0;
private:
};
}}
