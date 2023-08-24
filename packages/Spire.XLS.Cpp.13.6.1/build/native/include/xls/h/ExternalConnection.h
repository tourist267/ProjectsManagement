#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS ExternalConnection : public virtual Object
{
    friend class DataConnections;
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
private:
};
}}
