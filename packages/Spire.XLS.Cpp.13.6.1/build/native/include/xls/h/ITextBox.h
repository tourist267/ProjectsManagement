#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
//#include "CommentHAlignType.h"
//#include "CommentVAlignType.h"
//#include "TextRotationType.h"
#include "IExcelApplication.h"
//#include "IRichTextString.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS ITextBox : public virtual IExcelApplication
{
public:
    virtual CommentHAlignType GetHAlignment ()=0;
    virtual void SetHAlignment (CommentHAlignType value)=0;
    virtual CommentVAlignType GetVAlignment ()=0;
    virtual void SetVAlignment (CommentVAlignType value)=0;
    virtual TextRotationType GetTextRotation ()=0;
    virtual void SetTextRotation (TextRotationType value)=0;
    virtual bool GetIsTextLocked ()=0;
    virtual void SetIsTextLocked (bool value)=0;
    virtual intrusive_ptr<IRichTextString> GetRichText ()=0;
    virtual LPCWSTR_S GetText ()=0;
    virtual void SetText (LPCWSTR_S value)=0;
private:
};
}}
