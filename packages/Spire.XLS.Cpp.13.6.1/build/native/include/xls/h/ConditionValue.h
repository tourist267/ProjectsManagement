#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IConditionValue.h"
#pragma warning(pop)

namespace Spire{namespace Xls{
/*
    <summary>
        Represents single condition value for iconset, databar, colorscale conditions.
    </summary>
*/
class EXPORTS ConditionValue : public virtual Object,public virtual IConditionValue
{
    friend class DataBar;
public:
    /*
    <summary>
        specifies how the threshold values for a data bar, color scale,
            or icon set conditional format are determined
    </summary>
    */
    virtual ConditionValueType GetType ();
    virtual void SetType (ConditionValueType value);
    virtual bool GetIsGTE ();
    virtual void SetIsGTE (bool value);
    //virtual System.Object GetValue ();
    //virtual void SetValue (System.Object value);
    //intrusive_ptr<IConditionValue> m_condtionValue ();
private:
};
}}
