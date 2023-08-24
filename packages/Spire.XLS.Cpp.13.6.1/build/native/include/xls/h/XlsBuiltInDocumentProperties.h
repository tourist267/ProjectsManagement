#pragma once
#include "pch.h"
#pragma warning(push)
#pragma warning(disable:4250)
#include "IBuiltInDocumentProperties.h"
#include "DocumentProperty.h"
#include "CollectionBase.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS XlsBuiltInDocumentProperties : public virtual CollectionBase<DocumentProperty>,public virtual IBuiltInDocumentProperties
{
public:
    virtual intrusive_ptr<IDocumentProperty> Get (BuiltInPropertyType index);
    virtual intrusive_ptr<DocumentProperty> Get (int iIndex);
    /*
    <summary>
        Indicates whether collection contains specified property.
    </summary>
    <param name="index">Property id.</param>
    <returns>True if collection contains specified property.</returns>
    */
    virtual bool Contains (BuiltInPropertyType index);
    /*
    <summary>
        Gets/Sets title document property.
    </summary>
    */
    virtual LPCWSTR_S GetTitle ();
    virtual void SetTitle (LPCWSTR_S value);
    /*
    <summary>
        Gets/Sets version of the file.
    </summary>
    */
    LPCWSTR_S GetDocumentVersion ();
    void SetDocumentVersion (LPCWSTR_S value);
    int GetVersion ();
    void SetVersion (int value);
    /*
    <summary>
        Gets/Sets subject document property.
    </summary>
    */
    virtual LPCWSTR_S GetSubject ();
    virtual void SetSubject (LPCWSTR_S value);
    /*
    <summary>
        Gets/Sets author document property.
    </summary>
    */
    virtual LPCWSTR_S GetAuthor ();
    virtual void SetAuthor (LPCWSTR_S value);
    /*
    <summary>
        Gets/Sets keywords document property.
    </summary>
    */
    virtual LPCWSTR_S GetKeywords ();
    virtual void SetKeywords (LPCWSTR_S value);
    /*
    <summary>
        Gets/Sets comments document property.
    </summary>
    */
    virtual LPCWSTR_S GetComments ();
    virtual void SetComments (LPCWSTR_S value);
    /*
    <summary>
        Gets/Sets template document property.
    </summary>
    */
    virtual LPCWSTR_S GetTemplate ();
    virtual void SetTemplate (LPCWSTR_S value);
    /*
    <summary>
        Gets/Sets LastAuthor document property.
    </summary>
    */
    virtual LPCWSTR_S GetLastAuthor ();
    virtual void SetLastAuthor (LPCWSTR_S value);
    /*
    <summary>
        Gets/Sets revision number document property.
    </summary>
    */
    virtual LPCWSTR_S GetRevisionNumber ();
    virtual void SetRevisionNumber (LPCWSTR_S value);
    /*
    <summary>
        Gets/Sets EditTime document property.
    </summary>
    */
    virtual intrusive_ptr<TimeSpan> GetEditTime ();
    virtual void SetEditTime (intrusive_ptr<TimeSpan> value);
    /*
    <summary>
        Gets/Sets LastPrinted document property.
    </summary>
    */
    virtual intrusive_ptr<DateTime> GetLastPrinted ();
    virtual void SetLastPrinted (intrusive_ptr<DateTime> value);
    /*
    <summary>
        Gets/Sets CreationDate document property.
    </summary>
    */
    virtual intrusive_ptr<DateTime> GetCreatedTime ();
    virtual void SetCreatedTime (intrusive_ptr<DateTime> value);
    /*
    <summary>
        Gets/Sets LastSaveDate document property.
    </summary>
    */
    virtual intrusive_ptr<DateTime> GetLastSaveTime ();
    virtual void SetLastSaveTime (intrusive_ptr<DateTime> value);
    /*
    <summary>
        Gets/Sets PageCount document property.
    </summary>
    */
    virtual int GetPageCount ();
    virtual void SetPageCount (int value);
    /*
    <summary>
        Gets/Sets WordCount document property.
    </summary>
    */
    virtual int GetWordCount ();
    virtual void SetWordCount (int value);
    /*
    <summary>
        Gets/Sets CharCount document property.
    </summary>
    */
    virtual int GetCharacters ();
    virtual void SetCharacters (int value);
    /*
    <summary>
        Gets/Sets ApplicationName document property.
    </summary>
    */
    virtual LPCWSTR_S GetApplicationName ();
    virtual void SetApplicationName (LPCWSTR_S value);
    /*
    <summary>
        Gets/Sets Security document property.
    </summary>
    */
    int GetSecurity ();
    void SetSecurity (int value);
    /*
    <summary>
        Gets/Sets Category document proerty.
    </summary>
    */
    virtual LPCWSTR_S GetCategory ();
    virtual void SetCategory (LPCWSTR_S value);
    /*
    <summary>
        Gets/Sets Target format document property.
    </summary>
    */
    virtual LPCWSTR_S GetPresentationTarget ();
    virtual void SetPresentationTarget (LPCWSTR_S value);
    /*
    <summary>
        Gets/Sets ByteCount document property.
    </summary>
    */
    virtual int GetBytes ();
    virtual void SetBytes (int value);
    /*
    <summary>
        Gets/Sets LineCount document property.
    </summary>
    */
    virtual int GetLineCount ();
    virtual void SetLineCount (int value);
    /*
    <summary>
        Gets/Sets ParagrahpCount document property.
    </summary>
    */
    virtual int GetParagraphCount ();
    virtual void SetParagraphCount (int value);
    /*
    <summary>
        Gets/Sets SlideCount document property.
    </summary>
    */
    virtual int GetSlideCount ();
    virtual void SetSlideCount (int value);
    /*
    <summary>
        Gets/Sets NoteCount document property.
    </summary>
    */
    virtual int GetNoteCount ();
    virtual void SetNoteCount (int value);
    /*
    <summary>
        Gets/Sets HiddenCount document property.
    </summary>
    */
    virtual int GetHiddenCount ();
    virtual void SetHiddenCount (int value);
    /*
    <summary>
        Gets/Sets MmclipCount document property.
    </summary>
    */
    virtual int GetMultimediaClipCount ();
    virtual void SetMultimediaClipCount (int value);
    /*
    <summary>
        Gets/Sets SacleCrop document property.
    </summary>
    */
    bool GetScaleCrop ();
    void SetScaleCrop (bool value);
    /*
    <summary>
        Gets/Sets Manager document property.
    </summary>
    */
    virtual LPCWSTR_S GetManager ();
    virtual void SetManager (LPCWSTR_S value);
    /*
    <summary>
        Gets/Sets Company document property.
    </summary>
    */
    virtual LPCWSTR_S GetCompany ();
    virtual void SetCompany (LPCWSTR_S value);
    /*
    <summary>
        Indicate whether the custom links are hampered.
    </summary>
    */
    virtual bool GetLinksDirty ();
    virtual void SetLinksDirty (bool value);
    virtual int GetCount();
    virtual void Clear();
private:
};
}}
