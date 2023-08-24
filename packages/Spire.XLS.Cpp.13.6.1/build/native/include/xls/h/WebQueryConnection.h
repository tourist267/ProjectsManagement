#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "ExternalConnection.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS WebQueryConnection : public virtual ExternalConnection
{
public:
    virtual LPCWSTR_S GetID ();
    virtual LPCWSTR_S GetName ();
    virtual void SetName (LPCWSTR_S value);
    virtual ConnectionDataSourceType GetConnType ();
    virtual bool GetBackgroundRefresh ();
    virtual void SetBackgroundRefresh (bool value);
    virtual LPCWSTR_S GetRefreshedVersion ();
    virtual void SetRefreshedVersion (LPCWSTR_S value);
    virtual bool GetSaveData ();
    virtual void SetSaveData (bool value);
    virtual LPCWSTR_S GetOdcFile ();
    virtual void SetOdcFile (LPCWSTR_S value);
    virtual bool GetKeepAlive ();
    virtual void SetKeepAlive (bool value);
    virtual bool GetOnlyUseConnectionFile ();
    virtual void SetOnlyUseConnectionFile (bool value);
    bool GetSourceData ();
    void SetSourceData (bool value);
    bool GetParsePre ();
    void SetParsePre (bool value);
    bool GetConsecutive ();
    void SetConsecutive (bool value);
    bool GetXl2000 ();
    void SetXl2000 (bool value);
    LPCWSTR_S GetUrl ();
    void SetUrl (LPCWSTR_S value);
private:
};
}}
