#pragma once
#include "pch.h"

//#pragma warning(push)
//#pragma warning(disable:4250)
//#include "PrstGeomShapeType.h"
//#include "IPrstGeomShape.h"
//#include "IGeomPathShape.h"
//#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS IPrstGeomShapes 
{
public:
    virtual int GetCount ()=0;
    /*
    <summary>
        Returns single item from the collection.
    </summary>
    <param name="index">Item's index to get.</param>
    <returns>Single item from the collection.</returns>
    */
    virtual intrusive_ptr<XlsPrstGeomShape> Get (int index)=0;
    virtual intrusive_ptr<XlsPrstGeomShape> Get (LPCWSTR_S name)=0;
    /*
    <summary>
        Adds new item to the collection.
    </summary>
    <param name="row">One-based row index of the top-left corner of the new item.</param>
    <param name="column">One-based column index of the top-left corner of the new item.</param>
    <param name="height">Height in pixels of the new item.</param>
    <param name="width">Width in pixels of the new item.</param>
    <returns>Newly added item.</returns>
    */
    virtual intrusive_ptr<IPrstGeomShape> AddPrstGeomShape (int row,int column,int height,int width,PrstGeomShapeType shapeType)=0;
    //virtual intrusive_ptr<IGeomPathShape> AddNotPrimitiveShape (int row,int column,int width,int height)=0;
    virtual std::vector<intrusive_ptr<XlsPrstGeomShape>> Get (PrstGeomShapeType shapeType)=0;
private:
};
}}
