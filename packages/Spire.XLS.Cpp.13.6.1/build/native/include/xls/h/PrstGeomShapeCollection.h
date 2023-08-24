#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IPrstGeomShapes.h"
#include "CollectionBase.h"
#include "XlsPrstGeomShape.h"
#pragma warning(pop)
namespace Spire{namespace Xls{
class EXPORTS PrstGeomShapeCollection : public virtual CollectionBase<XlsPrstGeomShape>,public virtual IPrstGeomShapes
{
    friend class XlsWorksheetBase;
public:
    virtual intrusive_ptr<XlsPrstGeomShape> Get (int index);
    virtual intrusive_ptr<XlsPrstGeomShape> Get (LPCWSTR_S name);
    virtual std::vector<intrusive_ptr<XlsPrstGeomShape>> Get (PrstGeomShapeType shapeType);
    //virtual intrusive_ptr<IGeomPathShape> AddNotPrimitiveShape (int row,int column,int width,int height);
    /*
    <summary>
        Add a preset shape to prstgeomshape collection;
    </summary>
    <param name="row">shape's first row number in worksheet</param>
    <param name="column">shape's first column number in worksheet</param>
    <param name="width">shape's width, in unit of pixel.</param>
    <param name="height">shape's height, in unit of pixel.</param>
    <param name="shapeType">shape's type</param>
    <returns></returns>
    */
    virtual intrusive_ptr<IPrstGeomShape> AddPrstGeomShape (int row,int column,int width,int height,PrstGeomShapeType shapeType);
    void AddCopy (intrusive_ptr<IPrstGeomShape> source);
    /*
    <summary>
        Remove a shape in collection;
    </summary>
    <param name="shape">the shape to remove</param>
    */
    void Remove (intrusive_ptr<IShape> shape);
    void Clear ();

    virtual int GetCount();
private:
};
}}
