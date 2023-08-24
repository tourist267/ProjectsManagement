#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "ICloneParent.h"
#include "IAddInFunction.h"
#include "XlsObject.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS XlsAddInFunction : public virtual XlsObject,public virtual IAddInFunction,public virtual ICloneParent
{
public:
    /*
    <summary>
        Gets or sets book index.
    </summary>
    */
    int GetBookIndex ();
    void SetBookIndex (int value);
    /*
    <summary>
        Name index.
    </summary>
    */
    int GetNameIndex ();
    void SetNameIndex (int value);
    /*
    <summary>
        Name of add-in function.
    </summary>
    */
    virtual LPCWSTR_S GetName ();
    //virtual System.Object Clone (System.Object parent);
private:
};
}}
