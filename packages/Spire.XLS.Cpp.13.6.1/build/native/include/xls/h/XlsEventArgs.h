#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS XlsEventArgs : public virtual Object
{
public:
    //System.Object GetnewValue ();
    //System.Object GetoldValue ();
    /*
    <summary>
        Name of the property. Read-only.
    </summary>
    */
    LPCWSTR_S GetName ();
    /*
    <summary>
        If more than one property must be changed on one send message, 
            attach it to the ValueChangeEventArgs to create a one way directed list of property changes.
    </summary>
    */
    intrusive_ptr<XlsEventArgs> GetNext ();
    void SetNext (intrusive_ptr<XlsEventArgs> value);
    static intrusive_ptr<XlsEventArgs> GetEmpty ();
private:
};
}}
