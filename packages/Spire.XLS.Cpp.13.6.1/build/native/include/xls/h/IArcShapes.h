#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS IArcShapes : public virtual Object
{
    friend class XlsWorksheetBase;
public:
    virtual int GetCount ()=0;
    virtual intrusive_ptr<IArcShape> Get (int index)=0;
    virtual intrusive_ptr<IArcShape> Get (LPCWSTR_S name)=0;
    virtual intrusive_ptr<IArcShape> AddArc (int row,int column,int height,int width)=0;
private:
};
}}
