#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS IBuiltInDocumentProperties : public virtual Object
{
    friend class IWorkbook;
    friend class XlsWorkbook;
public:
    virtual intrusive_ptr<IDocumentProperty> Get (BuiltInPropertyType index)=0;
    virtual intrusive_ptr<DocumentProperty> Get (int iIndex)=0;
    virtual int GetCount ()=0;
    virtual void Clear ()=0;
    virtual bool Contains (BuiltInPropertyType index)=0;
    virtual LPCWSTR_S GetTitle ()=0;
    virtual void SetTitle (LPCWSTR_S value)=0;
    virtual LPCWSTR_S GetSubject ()=0;
    virtual void SetSubject (LPCWSTR_S value)=0;
    virtual LPCWSTR_S GetAuthor ()=0;
    virtual void SetAuthor (LPCWSTR_S value)=0;
    virtual LPCWSTR_S GetKeywords ()=0;
    virtual void SetKeywords (LPCWSTR_S value)=0;
    virtual LPCWSTR_S GetComments ()=0;
    virtual void SetComments (LPCWSTR_S value)=0;
    virtual LPCWSTR_S GetTemplate ()=0;
    virtual void SetTemplate (LPCWSTR_S value)=0;
    virtual LPCWSTR_S GetLastAuthor ()=0;
    virtual void SetLastAuthor (LPCWSTR_S value)=0;
    virtual LPCWSTR_S GetRevisionNumber ()=0;
    virtual void SetRevisionNumber (LPCWSTR_S value)=0;
    virtual intrusive_ptr<TimeSpan> GetEditTime ()=0;
    virtual void SetEditTime (intrusive_ptr<TimeSpan> value)=0;
    virtual intrusive_ptr<DateTime> GetLastPrinted ()=0;
    virtual void SetLastPrinted (intrusive_ptr<DateTime> value)=0;
    virtual intrusive_ptr<DateTime> GetCreatedTime ()=0;
    virtual void SetCreatedTime (intrusive_ptr<DateTime> value)=0;
    virtual intrusive_ptr<DateTime> GetLastSaveTime ()=0;
    virtual void SetLastSaveTime (intrusive_ptr<DateTime> value)=0;
    virtual int GetPageCount ()=0;
    virtual void SetPageCount (int value)=0;
    virtual int GetWordCount ()=0;
    virtual void SetWordCount (int value)=0;
    virtual int GetCharacters ()=0;
    virtual void SetCharacters (int value)=0;
    virtual LPCWSTR_S GetApplicationName ()=0;
    virtual void SetApplicationName (LPCWSTR_S value)=0;
    virtual LPCWSTR_S GetCategory ()=0;
    virtual void SetCategory (LPCWSTR_S value)=0;
    virtual LPCWSTR_S GetPresentationTarget ()=0;
    virtual void SetPresentationTarget (LPCWSTR_S value)=0;
    virtual int GetBytes ()=0;
    virtual void SetBytes (int value)=0;
    virtual int GetLineCount ()=0;
    virtual void SetLineCount (int value)=0;
    virtual int GetParagraphCount ()=0;
    virtual void SetParagraphCount (int value)=0;
    virtual int GetSlideCount ()=0;
    virtual void SetSlideCount (int value)=0;
    virtual int GetNoteCount ()=0;
    virtual void SetNoteCount (int value)=0;
    virtual int GetHiddenCount ()=0;
    virtual void SetHiddenCount (int value)=0;
    virtual int GetMultimediaClipCount ()=0;
    virtual void SetMultimediaClipCount (int value)=0;
    virtual LPCWSTR_S GetManager ()=0;
    virtual void SetManager (LPCWSTR_S value)=0;
    virtual LPCWSTR_S GetCompany ()=0;
    virtual void SetCompany (LPCWSTR_S value)=0;
    virtual bool GetLinksDirty ()=0;
    virtual void SetLinksDirty (bool value)=0;
private:
};
}}
