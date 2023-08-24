#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "ICloneParent.h"
#include "IHyperLink.h"
#include "XlsObject.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS XlsHyperLink : public virtual XlsObject,public virtual IHyperLink,public virtual ICloneParent
{
public:
    virtual LPCWSTR_S GetAddress ();
    virtual void SetAddress (LPCWSTR_S value);
    virtual LPCWSTR_S GetName ();
    virtual intrusive_ptr<IXLSRange> GetRange ();
    void SetRange (intrusive_ptr<IXLSRange> value);
    virtual LPCWSTR_S GetScreenTip ();
    virtual void SetScreenTip (LPCWSTR_S value);
    virtual LPCWSTR_S GetSubAddress ();
    virtual void SetSubAddress (LPCWSTR_S value);
    void SetAddress (LPCWSTR_S strAddress,bool bSetText);
    /*
    <summary>
        Returns or sets the text to be displayed for the specified hyperlink.
            The default value is the address of the hyperlink.
    </summary>
    */
    virtual LPCWSTR_S GetTextToDisplay ();
    virtual void SetTextToDisplay (LPCWSTR_S value);
    virtual HyperLinkType GetType ();
    void SetType (HyperLinkType value);
    int GetFirstRow ();
    int GetFirstColumn ();
    int GetLastRow ();
    /*
    <summary>
        Gets/sets an optional string of Unicode characters
            that specifies the complete file path.
            When the property Type is not HyperLinkType.File,
            this property is invalid.
    </summary>
    */
    LPCWSTR_S GetUnicodePath ();
    void SetUnicodePath (LPCWSTR_S value);
    int GetLastColumn ();
    //virtual System.Object Clone (System.Object parent);
private:
};
}}
