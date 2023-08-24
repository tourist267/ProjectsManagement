#pragma once
#include "pch.h"

//#pragma warning(push)
//#pragma warning(disable:4250)
//#include "IOvalShape.h"
//#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS IOvalShapes : public virtual Object
{
    friend class XlsWorksheetBase;
public:
    virtual int GetCount ()=0;
    virtual intrusive_ptr<IOvalShape> Get (int index)=0;
    virtual intrusive_ptr<IOvalShape> Get (LPCWSTR_S name)=0;
    virtual intrusive_ptr<IOvalShape> AddOval (int row,int column,int height,int width)=0;
private:
};
}}
