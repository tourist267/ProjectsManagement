#pragma once
#include "pch.h"

//#pragma warning(push)
//#pragma warning(disable:4250)
//#include "IListBox.h"
//#pragma warning(pop)

namespace Spire{namespace Xls{
class EXPORTS IListBoxes : public virtual Object
{
    friend class XlsWorksheetBase;
public:
    virtual int GetCount ()=0;
    virtual intrusive_ptr<IListBox> Get (int index)=0;
    virtual intrusive_ptr<IListBox> Get (LPCWSTR_S name)=0;
    virtual intrusive_ptr<IListBox> AddListBox (int row,int column,int height,int width)=0;
private:
};
}}
