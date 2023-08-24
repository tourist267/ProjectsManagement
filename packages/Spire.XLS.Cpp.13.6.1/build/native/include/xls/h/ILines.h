#pragma once
#include "pch.h"

//#pragma warning(push)
//#pragma warning(disable:4250)
//#include "LineShapeType.h"
//#include "ILineShape.h"
//#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS ILines : public virtual Object
{
    friend class XlsWorksheetBase;
public:
    virtual int GetCount ()=0;
    virtual intrusive_ptr<ILineShape> Get (int index)=0;
    virtual intrusive_ptr<ILineShape> Get (LPCWSTR_S name)=0;
    virtual intrusive_ptr<ILineShape> AddLine (int row,int column,int width,int height,LineShapeType lineShapeType)=0;
private:
};
}}
