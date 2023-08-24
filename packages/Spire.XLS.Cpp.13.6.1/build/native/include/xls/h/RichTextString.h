#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IExcelApplication.h"
#include "IRichTextString.h"
#include "CommonWrapper.h"
#pragma warning(pop)

namespace Spire{namespace Xls{
class EXPORTS RichTextString : public virtual CommonWrapper,public virtual IRichTextString
{
public:
    //virtual System.Object GetParent ();
    virtual intrusive_ptr<IFont> GetFont (int index);
    virtual void SetFont (int startIndex,int endIndex,intrusive_ptr<IFont> font);
    virtual void ClearFormatting ();
    virtual void Clear ();
    virtual void Append (LPCWSTR_S text,intrusive_ptr<IFont> font);
    virtual LPCWSTR_S GetText ();
    virtual void SetText (LPCWSTR_S value);
    virtual LPCWSTR_S GetRtfText ();
    virtual bool GetIsFormatted ();
    virtual intrusive_ptr<XlsFont> GetDefaultFont ();
private:
};
}}
