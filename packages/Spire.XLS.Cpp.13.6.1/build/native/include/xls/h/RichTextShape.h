#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IExcelApplication.h"
#include "IOptimizedUpdate.h"
#include "IRichTextString.h"
#pragma warning(pop)

namespace Spire{namespace Xls{
class EXPORTS RichTextShape : public virtual Object,public virtual IRichTextString
{
public:
    virtual LPCWSTR_S GetText ();
    virtual void SetText (LPCWSTR_S value);
    virtual LPCWSTR_S GetRtfText ();
    virtual bool GetIsFormatted ();
    //virtual System.Object GetParent ();
    virtual intrusive_ptr<IFont> GetFont (int index);
    virtual void SetFont (int startIndex,int endIndex,intrusive_ptr<IFont> font);
    virtual void ClearFormatting ();
    virtual void Clear ();
    virtual void Append (LPCWSTR_S text,intrusive_ptr<IFont> font);
    virtual void BeginUpdate ();
    virtual void EndUpdate ();
    virtual intrusive_ptr<XlsFont> GetDefaultFont ();
    int GetFormattingRunsCount ();
    int GetSpace (int FormattingRunsIndex);
    void SetSpace (int FormattingRunsIndex,int SpaceValue);
private:
};
}}
