#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IExcelApplication.h"
#include "IOptimizedUpdate.h"
//#include "IFont.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS IRichTextString : public virtual IExcelApplication,public virtual IOptimizedUpdate
{
    friend class ExcelCommentObject;
    friend class IOvalShape;
    friend class ITextBox;
    friend class IXLSRange;
    friend class XlsName;
    friend class XlsRange;
    friend class CommentsRange;
    friend class XlsArcShape;
    friend class XlsButtonShape;
    friend class XlsComment;
    friend class XlsOvalShape;
    friend class XlsRectangleShape;
    friend class XlsShape;
    friend class XlsTextBoxShape;
    friend class XlsRangesCollection;
public:
    virtual intrusive_ptr<IFont> GetFont (int index)=0;
    virtual void SetFont (int iStartPos,int iEndPos,intrusive_ptr<IFont> font)=0;
    virtual void ClearFormatting ()=0;
    virtual void Clear ()=0;
    virtual void Append (LPCWSTR_S text,intrusive_ptr<IFont> font)=0;
    virtual LPCWSTR_S GetText ()=0;
    virtual void SetText (LPCWSTR_S value)=0;
    virtual LPCWSTR_S GetRtfText ()=0;
    virtual bool GetIsFormatted ()=0;
private:
};
}}
