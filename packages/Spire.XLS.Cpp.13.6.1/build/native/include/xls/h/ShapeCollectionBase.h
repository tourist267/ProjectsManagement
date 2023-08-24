#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS ShapeCollectionBase : public virtual Object
{
public:
    virtual intrusive_ptr<IShape> Get (int index);
    virtual intrusive_ptr<IShape> Get (LPCWSTR_S strShapeName);
    //virtual intrusive_ptr<IShape> AddCopy (intrusive_ptr<IShape> sourceShape,System.Collections.Generic.Dictionary`2[[System.String, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089],[System.String, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089]] hashNewNames,System.Collections.Generic.List`1[[System.Int32, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089]] arrFontIndexes);
    //virtual intrusive_ptr<IShape> AddCopy (intrusive_ptr<IShape> sourceShape);
    intrusive_ptr<XlsShape> AddShape (intrusive_ptr<XlsShape> newXlsShape);
private:
};
}}
