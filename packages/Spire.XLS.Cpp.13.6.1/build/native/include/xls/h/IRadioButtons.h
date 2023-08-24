#pragma once
#include "pch.h"

//#pragma warning(push)
//#pragma warning(disable:4250)
//#include "IRadioButton.h"
//#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS IRadioButtons : public virtual Object
{
    friend class ITabSheet;
    friend class XlsWorksheetBase;
public:
    virtual int GetCount ()=0;
    virtual intrusive_ptr<IRadioButton> Get (int index)=0;
    virtual intrusive_ptr<IRadioButton> Get (LPCWSTR_S name)=0;
    virtual intrusive_ptr<IRadioButton> Add (int row,int column,int height,int width)=0;
    virtual intrusive_ptr<IRadioButton> Add ()=0;
    virtual intrusive_ptr<IRadioButton> Add (int row,int column)=0;
private:
};
}}
