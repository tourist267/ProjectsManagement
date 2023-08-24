#pragma once
#include "pch.h"

//#pragma warning(push)
//#pragma warning(disable:4250)
//#include "IGroupBox.h"
//#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS IGroupBoxes : public virtual Object
{
    friend class XlsWorksheetBase;
public:
    virtual int GetCount ()=0;
    virtual intrusive_ptr<IGroupBox> Get (int index)=0;
    virtual intrusive_ptr<IGroupBox> Get (LPCWSTR_S name)=0;
    virtual intrusive_ptr<IGroupBox> AddGroupBox (int row,int column,int height,int width)=0;
private:
};
}}
