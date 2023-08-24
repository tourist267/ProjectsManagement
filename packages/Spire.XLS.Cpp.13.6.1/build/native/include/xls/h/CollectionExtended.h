#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IExcelApplication.h"
#include "ICloneParent.h"
#include "CollectionBase.h"
#pragma warning(pop)

namespace Spire{namespace Xls{
template<typename T>
class EXPORTS CollectionExtended : public virtual CollectionBase<T>,public virtual IExcelApplication,public virtual ICloneParent
{
public:
    //virtual System.Object GetParent ();
    //void add_Changed (System.EventHandler value);
    //void remove_Changed (System.EventHandler value);
    //virtual System.Object Clone (System.Object parent);
    /*
    <summary>
        Enlarges internal storage if necessary.
    </summary>
    <param name="size">Required size.</param>
    */
    //void EnsureCapacity (int size);
    //static LPCWSTR_S GenerateDefaultName (ICollection namesCollection,LPCWSTR_S strStart);
private:
};
}}
