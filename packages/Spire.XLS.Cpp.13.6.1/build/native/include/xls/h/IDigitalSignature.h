#pragma once
#include "pch.h"

//#pragma warning(push)
//#pragma warning(disable:4250)
//#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS IDigitalSignature 
{
    friend class IDigitalSignatures;
public:
    //virtual System.Security.Cryptography.X509Certificates.X509Certificate2 GetCertificate ()=0;
    //virtual void SetCertificate (System.Security.Cryptography.X509Certificates.X509Certificate2 value)=0;
    /*
    <summary>
        Signature Comments.
    </summary>
    */
    virtual LPCWSTR_S GetComments ()=0;
    virtual void SetComments (LPCWSTR_S value)=0;
    /*
    <summary>
        Sign Time.
    </summary>
    */
    virtual tm GetSignTime ()=0;
    virtual void SetSignTime (tm value)=0;
    /*
    <summary>
        Indicates whether this digital signature is valid.
    </summary>
    */
    virtual bool GetIsValid ()=0;
    virtual void SetIsValid (bool value)=0;
private:
};
}}
