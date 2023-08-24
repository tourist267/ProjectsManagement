#pragma once
#include "pch.h"
#pragma warning(push)
#pragma warning(disable:4250)
//#include "SelectionType.h"
//#include "IExcelApplication.h"
#include "IShape.h"
//#include "IXLSRange.h"
#pragma warning(pop)
namespace Spire{namespace Xls{
class EXPORTS IListBox : public virtual IShape
{
    friend class IListBoxes;
    friend class ListBoxCollection;
public:
    virtual bool GetDisplay3DShading ()=0;
    virtual void SetDisplay3DShading (bool value)=0;
    virtual intrusive_ptr<IXLSRange> GetListFillRange ()=0;
    virtual void SetListFillRange (intrusive_ptr<IXLSRange> value)=0;
    virtual int GetSelectedIndex ()=0;
    virtual void SetSelectedIndex (int value)=0;
    virtual SelectionType GetSelectionType ()=0;
    virtual void SetSelectionType (SelectionType value)=0;
private:
};
}}
