#pragma once
#include "pch.h"

//#pragma warning(push)
//#pragma warning(disable:4250)
//#include "ILabelShape.h"
//#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS ILabelShapes : public virtual Object
{
    friend class XlsWorksheetBase;
public:
    virtual int GetCount ()=0;
    virtual intrusive_ptr<ILabelShape> Get (int index)=0;
    virtual intrusive_ptr<ILabelShape> Get (LPCWSTR_S name)=0;
    virtual intrusive_ptr<ILabelShape> AddLabel (int row,int column,int height,int width)=0;
private:
};
}}
