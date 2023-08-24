#pragma once
#include "pch.h"
#pragma warning(push)
#pragma warning(disable:4250)
#include "IExcelApplication.h"
#include "IShape.h"
#include "ITextBox.h"
#include "ITextBoxShape.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS TextBoxShapeBase : public virtual ITextBoxShape
{
public:
    virtual bool GetIsWrapText ()=0;
    virtual void SetIsWrapText (bool value)=0;
    virtual double GetInnerLeftMargin ()=0;
    virtual void SetInnerLeftMargin (double value)=0;
    virtual double GetInnerRightMargin ()=0;
    virtual void SetInnerRightMargin (double value)=0;
    virtual double GetInnerTopMargin ()=0;
    virtual void SetInnerTopMargin (double value)=0;
    virtual double GetInnerBottomMargin ()=0;
    virtual void SetInnerBottomMargin (double value)=0;
    virtual LPCWSTR_S GetInsetMode ()=0;
    virtual void SetInsetMode (LPCWSTR_S value)=0;
    virtual intrusive_ptr<Color> GetFillColor ()=0;
    virtual void SetFillColor (intrusive_ptr<Color> value)=0;
private:
};
}}
