#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IDocumentProperty.h"
#pragma warning(pop)

namespace Spire{namespace Xls{
class EXPORTS DocumentProperty : public virtual Object,public virtual IDocumentProperty
{
public:
    virtual bool GetIsBuiltIn ();
    virtual BuiltInPropertyType GetPropertyId ();
    PropertyType GetPropertyType ();
    LPCWSTR_S GetInternalName ();
    virtual LPCWSTR_S GetName ();
    //virtual System.Object GetValue ();
    //virtual void SetValue (System.Object value);
    //std::vector<System.Byte> GetBlob ();
    //void SetBlob (std::vector<System.Byte> value);
    virtual bool GetBoolean ();
    virtual void SetBoolean (bool value);
    virtual int GetInteger ();
    virtual void SetInteger (int value);
    virtual int GetInt32 ();
    virtual void SetInt32 (int value);
    virtual double GetDouble ();
    virtual void SetDouble (double value);
    virtual LPCWSTR_S GetText ();
    virtual void SetText (LPCWSTR_S value);
    virtual intrusive_ptr<DateTime> GetDateTime ();
    virtual void SetDateTime (intrusive_ptr<DateTime> value);
    virtual intrusive_ptr<TimeSpan> GetTimeSpan ();
    virtual void SetTimeSpan (intrusive_ptr<TimeSpan> value);
    virtual LPCWSTR_S GetLinkSource ();
    virtual void SetLinkSource (LPCWSTR_S value);
    virtual bool GetLinkToContent ();
    virtual void SetLinkToContent (bool value);
    //System.Object Clone ();
    //void SetLinkSource (intrusive_ptr<IPropertyData> variant);
    //static int CorrectIndex (BuiltInPropertyType propertyId,System.Boolean& bSummary);
    static int DEF_FILE_TIME_START_YEAR ();
private:
};
}}
