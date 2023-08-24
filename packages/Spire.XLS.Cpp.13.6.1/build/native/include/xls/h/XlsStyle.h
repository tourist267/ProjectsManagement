#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "ICloneParent.h"
#include "IOptimizedUpdate.h"
#include "INamedObject.h"
#include "IStyle.h"
#include "IInternalAddtionalFormat.h"
#include "AddtionalFormatWrapper.h"
#pragma warning(pop)
namespace Spire{namespace Xls{
class EXPORTS XlsStyle : public virtual AddtionalFormatWrapper,public virtual INamedObject
{
public:
    virtual LPCWSTR_S GetName ();
    virtual bool GetIsInitialized ();
    virtual bool GetBuiltIn ();
    int GetIndex ();
    //virtual System.Object Clone (System.Object parent);
    //virtual int CompareTo (System.Object obj);
    virtual void BeginUpdate ();
    virtual void EndUpdate ();
    static std::vector<LPCWSTR_S> DEF_DEFAULT_STYLES ();
private:
};
}}
