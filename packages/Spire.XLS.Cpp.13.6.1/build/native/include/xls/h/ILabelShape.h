#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
//#include "IExcelApplication.h"
#include "IShape.h"
#pragma warning(pop)

namespace Spire{namespace Xls{
class EXPORTS ILabelShape : public virtual IShape
{
    friend class ILabelShapes;
    friend class LabelShapeCollection;
public:
    virtual LPCWSTR_S GetText ()=0;
    virtual void SetText (LPCWSTR_S value)=0;
    virtual bool GetIsTextLocked ()=0;
    virtual void SetIsTextLocked (bool value)=0;
private:
};
}}
