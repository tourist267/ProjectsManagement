#pragma once
#include "pch.h"
#pragma warning(push)
#pragma warning(disable:4250)
//#include "ExcelVerticalAlignment.h"
//#include "PrstGeomShapeType.h"
//#include "IExcelApplication.h"
#include "IShape.h"
#pragma warning(pop)

namespace Spire{namespace Xls{
class EXPORTS IPrstGeomShape : public virtual IShape
{
    friend class IPrstGeomShapes;
    friend class IShapes;
    friend class PrstGeomShapeCollection;
public:
    virtual PrstGeomShapeType GetPrstShapeType ()=0;
    virtual LPCWSTR_S GetText ()=0;
    virtual void SetText (LPCWSTR_S value)=0;
    //virtual Spire.Xls.Core.Spreadsheet.Collections.CollectionExtended`1[[Spire.Xls.Core.IGeomPath, Spire.XLS, Version=12.7.7.0, Culture=neutral, PublicKeyToken=null]] GetGeomPaths ()=0;
    //virtual ExcelVerticalAlignment GetTextVerticalAlignment ()=0;
    //virtual void SetTextVerticalAlignment (ExcelVerticalAlignment value)=0;
private:
};
}}
