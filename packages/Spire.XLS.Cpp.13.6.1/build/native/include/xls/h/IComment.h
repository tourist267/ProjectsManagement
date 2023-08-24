#pragma once
#include "pch.h"
#pragma warning(push)
#pragma warning(disable:4250)
//#include "IExcelApplication.h"
//#include "IShape.h"
//#include "ITextBox.h"
#include "ITextBoxShape.h"
#pragma warning(pop)
namespace Spire{namespace Xls{
class EXPORTS IComment : public virtual ITextBoxShape
{
public:
    virtual LPCWSTR_S GetAuthor ()=0;
    virtual void SetAuthor (LPCWSTR_S value)=0;
    virtual bool GetIsVisible ()=0;
    virtual void SetIsVisible (bool value)=0;
    virtual int GetRow ()=0;
    virtual int GetColumn ()=0;
    virtual bool GetAutoSize ()=0;
    virtual void SetAutoSize (bool value)=0;
private:
};
}}
