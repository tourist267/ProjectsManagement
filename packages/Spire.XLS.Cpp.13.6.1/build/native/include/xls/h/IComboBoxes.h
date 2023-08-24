#pragma once
#include "pch.h"

//#pragma warning(push)
//#pragma warning(disable:4250)
//#include "IComboBoxShape.h"
//#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS IComboBoxes : public virtual Object
{
    friend class ITabSheet;
    friend class XlsWorksheetBase;
    friend class XlsChartShape;
public:
    virtual int GetCount ()=0;
    virtual intrusive_ptr<IComboBoxShape> Get (int index)=0;
    virtual intrusive_ptr<IComboBoxShape> Get (LPCWSTR_S name)=0;
    virtual intrusive_ptr<IComboBoxShape> AddComboBox (int row,int column,int height,int width)=0;
private:
};
}}
