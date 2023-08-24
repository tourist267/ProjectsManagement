#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "XlsObject.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS ExternalLink : public virtual XlsObject
{
    friend class ExternalLinkCollection;
public:
    LPCWSTR_S GetDataSource ();
    void SetDataSource (LPCWSTR_S value);
    bool GetIsReferred ();
    bool GetIsVisible ();
    void AddExternalName (LPCWSTR_S text,LPCWSTR_S referTo);
private:
};
}}
