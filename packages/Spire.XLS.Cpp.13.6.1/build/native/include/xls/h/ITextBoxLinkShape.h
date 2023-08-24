#pragma once
#include "pch.h"
#pragma warning(push)
#pragma warning(disable:4250)
//#include "IExcelApplication.h"
//#include "IShape.h"
//#include "ITextBox.h"
//#include "IHyperLink.h"
#include "ITextBoxShape.h"
#pragma warning(pop)

namespace Spire{namespace Xls{
class EXPORTS ITextBoxLinkShape : public virtual ITextBoxShape
{
    friend class IShapes;
    friend class ITextBoxes;
    friend class TextBoxCollection;
public:
    virtual int GetRotation ()=0;
    virtual void SetRotation (int value)=0;
    virtual intrusive_ptr<IHyperLink> GetHyLink ()=0;
private:
};
}}
