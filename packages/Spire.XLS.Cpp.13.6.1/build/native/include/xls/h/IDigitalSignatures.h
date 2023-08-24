#pragma once
#include "pch.h"

//#pragma warning(push)
//#pragma warning(disable:4250)
//#include "IDigitalSignature.h"
//#pragma warning(pop)

namespace Spire{
namespace Xls{
/*
    <summary>
        Represents a Collection of DigitalSignature in Excel.
    </summary>
*/
class EXPORTS IDigitalSignatures 
{
    friend class Workbook;
public:
    /*
    <summary>
        create a signature and add to DigitalSignatureCollection.
    </summary>
    <param name="certificate">Certificate object that was used to sign</param>
    <param name="comments">Signature Comments</param>
    <param name="signTime">Sign Time</param>
    */
    //virtual intrusive_ptr<IDigitalSignature> Add (System.Security.Cryptography.X509Certificates.X509Certificate2 certificate,LPCWSTR_S comments,tm signTime)=0;
private:
};
}}
