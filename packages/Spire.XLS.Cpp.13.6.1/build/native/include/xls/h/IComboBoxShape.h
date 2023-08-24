#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
//#include "IExcelApplication.h"
#include "IShape.h"
//#include "IXLSRange.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS IComboBoxShape : public virtual IShape
{
    friend class IComboBoxes;
    friend class IShapes;
    friend class ComboBoxCollection;
public:
    virtual intrusive_ptr<IXLSRange> GetListFillRange ()=0;
    virtual void SetListFillRange (intrusive_ptr<IXLSRange> value)=0;
    virtual int GetSelectedIndex ()=0;
    virtual void SetSelectedIndex (int value)=0;
    virtual int GetDropDownLines ()=0;
    virtual void SetDropDownLines (int value)=0;
    virtual bool GetDisplay3DShading ()=0;
    virtual void SetDisplay3DShading (bool value)=0;
    virtual LPCWSTR_S GetSelectedValue ()=0;
private:
};
}}
