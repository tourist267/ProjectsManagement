#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS CellValueChangedEventArgs : public virtual Object
{
public:
    /*
    <summary>
        Gets or sets the old value.
    </summary>
    <value>The old value.</value>
    */
    //System.Object GetOldValue ();
    //void SetOldValue (System.Object value);
    /*
    <summary>
        Gets or sets the new value.
    </summary>
    <value>The new value.</value>
    */
    //System.Object GetNewValue ();
    //void SetNewValue (System.Object value);
    /*
    <summary>
        Gets or sets the range.
    </summary>
    <value>The range.</value>
    */
    intrusive_ptr<IXLSRange> GetRange ();
    void SetRange (intrusive_ptr<IXLSRange> value);
private:
};
}}
