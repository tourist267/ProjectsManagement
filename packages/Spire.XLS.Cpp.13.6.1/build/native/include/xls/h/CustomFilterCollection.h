#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{namespace Xls{
class EXPORTS CustomFilterCollection : public virtual Object
{
public:
    //System.Collections.IEnumerator GetEnumerator ();
    void Clear ();
    int GetCapacity ();
    void SetCapacity (int value);
    int GetCount ();
    RelationShip GetRelationShip ();
    void SetRelationShip (RelationShip value);
    void Add (intrusive_ptr<CustomFilter> customFilter);
    /*
    <summary>
        Gets the custom filter in the specific index.
    </summary>
    <param name="index">The index.</param>
    <returns></returns>
    */
    intrusive_ptr<CustomFilter> Get (int index);
    intrusive_ptr<CustomFilter> GetByIndex (int index);
private:
};
}}
