#pragma once
#include "pch.h"

//#pragma warning(push)
//#pragma warning(disable:4250)
//#include "ISpinnerShape.h"
//#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS ISpinnerShapes : public virtual Object
{
    friend class XlsWorksheetBase;
public:
    virtual int GetCount ()=0;
    virtual intrusive_ptr<ISpinnerShape> Get (int index)=0;
    virtual intrusive_ptr<ISpinnerShape> Get (LPCWSTR_S name)=0;
    virtual intrusive_ptr<ISpinnerShape> AddSpinner (int row,int column,int height,int width)=0;
private:
};
}}
