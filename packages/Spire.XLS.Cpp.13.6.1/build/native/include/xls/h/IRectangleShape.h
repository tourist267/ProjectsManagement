#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
//#include "RectangleShapeType.h"
//#include "IExcelApplication.h"
//#include "IShape.h"
#include "ITextBox.h"
//#include "IHyperLink.h"
#include "IPrstGeomShape.h"
//#include "IShapeLineFormat.h"
#pragma warning(pop)

namespace Spire{namespace Xls{
class EXPORTS IRectangleShape : public virtual ITextBox,public virtual IPrstGeomShape
{
    friend class IRectangleShapes;
    friend class RectangleCollection;
public:
    virtual RectangleShapeType GetRectShapeType ()=0;
    virtual int GetRotation ()=0;
    virtual void SetRotation (int value)=0;
    virtual intrusive_ptr<IShapeLineFormat> GetLine ()=0;
    virtual intrusive_ptr<IHyperLink> GetHyLink ()=0;
private:
};
}}
