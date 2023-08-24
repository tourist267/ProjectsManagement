#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IRectangleShapes.h"
#include "CollectionBase.h"
#include "XlsRectangleShape.h"
#pragma warning(pop)
namespace Spire{namespace Xls{
class EXPORTS RectangleCollection : public virtual CollectionBase<XlsRectangleShape>,public virtual IRectangleShapes
{
    friend class XlsWorksheetBase;
public:
    virtual intrusive_ptr<IRectangleShape> Get (int index);
    virtual intrusive_ptr<IRectangleShape> Get (LPCWSTR_S name);
    virtual intrusive_ptr<IRectangleShape> AddRectangle (int row,int column,int height,int width,RectangleShapeType rectShapeType);
    void AddCopy (intrusive_ptr<IRectangleShape> source);
    void Clear ();

    virtual int GetCount();
private:
};
}}
