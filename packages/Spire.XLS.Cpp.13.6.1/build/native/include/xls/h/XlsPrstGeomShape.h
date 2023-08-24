#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IShape.h"
#include "IPrstGeomShape.h"
#include "XlsShape.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS XlsPrstGeomShape : public virtual XlsShape,public virtual IPrstGeomShape
{
public:
    virtual PrstGeomShapeType GetPrstShapeType ();
    virtual LPCWSTR_S GetText ();
    virtual void SetText (LPCWSTR_S value);
    virtual ExcelShapeType GetShapeType ();
    //virtual Spire.Xls.Core.Spreadsheet.Collections.CollectionExtended`1[[Spire.Xls.Core.IGeomPath, Spire.XLS, Version=12.7.7.0, Culture=neutral, PublicKeyToken=null]] GetGeomPaths ();
    //virtual intrusive_ptr<IShape> Clone (System.Object parent,System.Collections.Generic.Dictionary`2[[System.String, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089],[System.String, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089]] hashNewNames,System.Collections.Generic.Dictionary`2[[System.Int32, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089],[System.Int32, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089]] dicFontIndexes,bool addToCollections);
    intrusive_ptr<GeomertyAdjustValuesCollection> GetShapeAdjustValues ();
private:
};
}}
