#pragma once
#include "pch.h"

//#pragma warning(push)
//#pragma warning(disable:4250)
//#include "BuiltInPropertyType.h"
//#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS IDocumentProperty : public virtual Object
{
    friend class IBuiltInDocumentProperties;
    friend class ICustomDocumentProperties;
    friend class XlsBuiltInDocumentProperties;
public:
    virtual bool GetIsBuiltIn ()=0;
    virtual BuiltInPropertyType GetPropertyId ()=0;
    virtual LPCWSTR_S GetName ()=0;
    //virtual System.Object GetValue ()=0;
    //virtual void SetValue (System.Object value)=0;
    virtual bool GetBoolean ()=0;
    virtual void SetBoolean (bool value)=0;
    virtual int GetInteger ()=0;
    virtual void SetInteger (int value)=0;
    virtual int GetInt32 ()=0;
    virtual void SetInt32 (int value)=0;
    virtual double GetDouble ()=0;
    virtual void SetDouble (double value)=0;
    virtual LPCWSTR_S GetText ()=0;
    virtual void SetText (LPCWSTR_S value)=0;
    virtual intrusive_ptr<DateTime> GetDateTime ()=0;
    virtual void SetDateTime (intrusive_ptr<DateTime> value)=0;
    virtual intrusive_ptr<TimeSpan> GetTimeSpan ()=0;
    virtual void SetTimeSpan (intrusive_ptr<TimeSpan> value)=0;
    virtual LPCWSTR_S GetLinkSource ()=0;
    virtual void SetLinkSource (LPCWSTR_S value)=0;
    virtual bool GetLinkToContent ()=0;
    virtual void SetLinkToContent (bool value)=0;
private:
};
}}
