#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS DynamicFilter : public virtual Object
{
public:
    /*
    <summary>
        Gets and sets the dynamic filter type.
    </summary>
    */
    DynamicFilterType GetDynamicFilterType ();
    void SetDynamicFilterType (DynamicFilterType value);
    /*
    <summary>
        Gets and sets the dynamic filter value.
    </summary>
    */
    //System.Object GetValue ();
    //void SetValue (System.Object value);
    /*
    <summary>
        Gets and sets the dynamic filter max value.
    </summary>
    */
    //System.Object GetMaxValue ();
    //void SetMaxValue (System.Object value);
private:
};
}}
