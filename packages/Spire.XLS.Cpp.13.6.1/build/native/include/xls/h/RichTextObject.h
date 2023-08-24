#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IExcelApplication.h"
#include "IOptimizedUpdate.h"
#include "IRichTextString.h"
#pragma warning(pop)

namespace Spire{namespace Xls{
class EXPORTS RichTextObject : public virtual Object,public virtual IRichTextString
{
public:
    virtual intrusive_ptr<IFont> GetFont (int position);
    virtual void SetFont (int startPos,int endPos,intrusive_ptr<IFont> font);
    /*
    <summary>
        Clears formatting.
    </summary>
    */
    virtual void ClearFormatting ();
    /*
    <summary>
        Clears all.
    </summary>
    */
    virtual void Clear ();
    virtual LPCWSTR_S GetText ();
    virtual void SetText (LPCWSTR_S value);
    /*
    <summary>
        Gets Rtf Text. Read-Only.
    </summary>
    */
    virtual LPCWSTR_S GetRtfText ();
    /*
    <summary>
        Indicates whether rich text string contains formatting Read-only.
    </summary>
    */
    virtual bool GetIsFormatted ();
    //virtual System.Object GetParent ();
    virtual void BeginUpdate ();
    virtual void EndUpdate ();
    virtual void Append (LPCWSTR_S text,intrusive_ptr<IFont> font);
private:
};
}}
