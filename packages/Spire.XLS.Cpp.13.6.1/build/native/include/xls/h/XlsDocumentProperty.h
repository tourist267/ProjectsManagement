#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IDocumentProperty.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS XlsDocumentProperty : public virtual Object,public virtual IDocumentProperty
{
public:
    virtual bool GetIsBuiltIn ();
    virtual BuiltInPropertyType GetPropertyId ();
    void SetPropertyId (BuiltInPropertyType value);
    virtual LPCWSTR_S GetName ();
    //virtual System.Object GetValue ();
    //virtual void SetValue (System.Object value);
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
    //std::vector<System.Byte> GetBlob ();
    //void SetBlob (std::vector<System.Byte> value);
    std::vector<LPCWSTR_S> GetStringArray ();
    void SetStringArray (std::vector<LPCWSTR_S> value);
    //std::vector<System.Object> GetObjectArray ();
    //void SetObjectArray (std::vector<System.Object> value);
    PropertyType GetPropertyType ();
    void SetPropertyType (PropertyType value);
    virtual LPCWSTR_S GetLinkSource ();
    virtual void SetLinkSource (LPCWSTR_S value);
    virtual bool GetLinkToContent ();
    virtual void SetLinkToContent (bool value);
    LPCWSTR_S GetInternalName ();
    //bool FillPropVariant (intrusive_ptr<IPropertyData> variant,int iPropertyId);
    //static int CorrectIndex (BuiltInPropertyType propertyId,System.Boolean& bSummary);
    //void SetLinkSource (intrusive_ptr<IPropertyData> variant);
    //virtual System.Object Clone ();
    static int DEF_FILE_TIME_START_YEAR ();
private:
};
}}
