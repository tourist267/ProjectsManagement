#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IAutoFilter.h"
#include "IAutoFilterCondition.h"
#pragma warning(pop)

namespace Spire{namespace Xls{
class EXPORTS FilterColumn : public virtual Object,public virtual IAutoFilter
{
    friend class IAutoFilters;
    friend class XlsAutoFiltersCollection;
public:
    /*
    <summary>
         Indicates whether the AutoFilter button for this column is visible.
    </summary>
    */
    bool GetVisibledropdown ();
    void SetVisibledropdown (bool value);
    //System.Object GetFilter ();
    //void SetFilter (System.Object value);
    FilterType GetFilterType ();
    void SetFilterType (FilterType value);
    int GetFieldIndex ();
    void SetFieldIndex (int value);
    /*
    <summary>
        number of items display in Top10Items mode.
    </summary>
    */
    virtual int GetTop10Items ();
    virtual void SetTop10Items (int value);
    /*
    <summary>
        Highest-valued 10 items displayed 
    </summary>
    */
    virtual bool GetIsTop10Items ();
    virtual void SetIsTop10Items (bool value);
    virtual bool GetShowTopItem ();
    virtual void SetShowTopItem (bool value);
    /*
    <summary>
        True if the second condition is a simple equality.
    </summary>
    */
    virtual bool GetIsSimple2 ();
    virtual void SetIsSimple2 (bool value);
    /*
    <summary>
        True if the first condition is a simple equality.
    </summary>
    */
    virtual bool GetIsSimple1 ();
    virtual void SetIsSimple1 (bool value);
    /*
    <summary>
        Highest-valued 10 items displayed (percentage specified in condition)
    </summary>
    */
    virtual bool GetIsTop10Percent ();
    virtual void SetIsTop10Percent (bool value);
    /*
    <summary>
        Logical AND of FirstCondtion and SecondCondition.
    </summary>
    */
    virtual bool GetIsAnd ();
    virtual void SetIsAnd (bool value);
    virtual bool GetIsFiltered ();
    /*
    <summary>
        Second condition of autofilter.
    </summary>
    */
    virtual intrusive_ptr<IAutoFilterCondition> GetSecondCondition ();
    virtual intrusive_ptr<IAutoFilterCondition> GetFirstCondition ();
    /*
    <summary>
        First condition used.
    </summary>
    */
    bool GetHasFirstCondition ();
    /*
    <summary>
        Second condition used
    </summary>
    */
    bool GetHasSecondCondition ();
private:
};
}}
