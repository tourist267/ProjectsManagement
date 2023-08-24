#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS IAutoFilter : public virtual Object
{
    friend class AutoFiltersCollection;
public:
    virtual intrusive_ptr<IAutoFilterCondition> GetFirstCondition ()=0;
    virtual intrusive_ptr<IAutoFilterCondition> GetSecondCondition ()=0;
    virtual bool GetIsFiltered ()=0;
    virtual bool GetIsAnd ()=0;
    virtual void SetIsAnd (bool value)=0;
    virtual bool GetIsTop10Percent ()=0;
    virtual void SetIsTop10Percent (bool value)=0;
    virtual bool GetIsSimple1 ()=0;
    virtual void SetIsSimple1 (bool value)=0;
    virtual bool GetIsSimple2 ()=0;
    virtual void SetIsSimple2 (bool value)=0;
    virtual bool GetShowTopItem ()=0;
    virtual void SetShowTopItem (bool value)=0;
    virtual bool GetIsTop10Items ()=0;
    virtual void SetIsTop10Items (bool value)=0;
    virtual int GetTop10Items ()=0;
    virtual void SetTop10Items (int value)=0;
private:
};
}}
