#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IOptimizedUpdate.h"
#include "IRichTextString.h"
#include "XlsObject.h"
#pragma warning(pop)

namespace Spire{namespace Xls{
class EXPORTS RTFCommentArray : public virtual XlsObject,public virtual IRichTextString
{
public:
    virtual intrusive_ptr<IFont> GetFont (int iPosition);
    virtual void SetFont (int iStartPos,int iEndPos,intrusive_ptr<IFont> font);
    virtual void ClearFormatting ();
    virtual void Append (LPCWSTR_S text,intrusive_ptr<IFont> font);
    virtual void Clear ();
    virtual LPCWSTR_S GetText ();
    virtual void SetText (LPCWSTR_S value);
    virtual LPCWSTR_S GetRtfText ();
    virtual bool GetIsFormatted ();
    virtual void BeginUpdate ();
    virtual void EndUpdate ();
private:
};
}}
