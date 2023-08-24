#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
//#include "IExcelApplication.h"
#include "IShape.h"
#pragma warning(pop)

namespace Spire{namespace Xls{
class EXPORTS IGroupBox : public virtual IShape
{
    friend class IGroupBoxes;
    friend class GroupBoxCollection;
public:
    virtual bool GetDisplay3DShading ()=0;
    virtual void SetDisplay3DShading (bool value)=0;
    virtual LPCWSTR_S GetText ()=0;
    virtual void SetText (LPCWSTR_S value)=0;
    virtual bool GetIsTextLocked ()=0;
    virtual void SetIsTextLocked (bool value)=0;
private:
};
}}
