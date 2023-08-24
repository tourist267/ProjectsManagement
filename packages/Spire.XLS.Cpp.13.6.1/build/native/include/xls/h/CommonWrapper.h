#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "ICloneParent.h"
#include "IOptimizedUpdate.h"
#pragma warning(pop)
namespace Spire{namespace Xls{
class EXPORTS CommonWrapper : public virtual Object,public virtual IOptimizedUpdate,public virtual ICloneParent
{
public:
    virtual void BeginUpdate ();
    virtual void EndUpdate ();
    //virtual System.Object Clone (System.Object parent);
private:
};
}}
