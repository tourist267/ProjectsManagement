#pragma once
#include "pch.h"

//#pragma warning(push)
//#pragma warning(disable:4250)
//#include "CheckState.h"
//#include "IExcelApplication.h"
#include "IShape.h"
//#include "IShapeLineFormat.h"
//#pragma warning(pop)

namespace Spire{namespace Xls{
class EXPORTS ICheckBox : public virtual IShape
{
    friend class ICheckBoxes;
    friend class IShapes;
    friend class CheckBoxCollection;
public:
    virtual CheckState GetCheckState ()=0;
    virtual void SetCheckState (CheckState value)=0;
    virtual intrusive_ptr<IShapeLineFormat> GetLine ()=0;
    virtual LPCWSTR_S GetText ()=0;
    virtual void SetText (LPCWSTR_S value)=0;
    virtual bool GetIsTextLocked ()=0;
    virtual void SetIsTextLocked (bool value)=0;
    virtual bool GetDisplay3DShading ()=0;
    virtual void SetDisplay3DShading (bool value)=0;
private:
};
}}
