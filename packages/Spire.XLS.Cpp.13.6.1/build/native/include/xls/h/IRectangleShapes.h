#pragma once
#include "pch.h"

//#pragma warning(push)
//#pragma warning(disable:4250)
//#include "RectangleShapeType.h"
//#include "IRectangleShape.h"
//#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS IRectangleShapes : public virtual Object
{
    friend class XlsWorksheetBase;
public:
    virtual int GetCount ()=0;
    virtual intrusive_ptr<IRectangleShape> Get (int index)=0;
    virtual intrusive_ptr<IRectangleShape> Get (LPCWSTR_S name)=0;
    virtual intrusive_ptr<IRectangleShape> AddRectangle (int row,int column,int height,int width,RectangleShapeType rectShapeType)=0;
private:
};
}}
