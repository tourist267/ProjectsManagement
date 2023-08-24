#pragma once
#include "pch.h"

//#pragma warning(push)
//#pragma warning(disable:4250)
//#include "ICheckBox.h"
//#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS ICheckBoxes : public virtual Object
{
    friend class ITabSheet;
    friend class XlsWorksheetBase;
    friend class XlsChartShape;
public:
    virtual int GetCount ()=0;
    virtual intrusive_ptr<ICheckBox> Get (int index)=0;
    virtual intrusive_ptr<ICheckBox> Get (LPCWSTR_S name)=0;
    virtual intrusive_ptr<ICheckBox> AddCheckBox (int row,int column,int height,int width)=0;
private:
};
}}
