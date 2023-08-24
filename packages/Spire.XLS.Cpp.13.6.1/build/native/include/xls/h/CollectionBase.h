#pragma once
#include "pch.h"
namespace Spire{namespace Xls{
template<typename T>
class EXPORTS CollectionBase : public virtual Object, public virtual IList<T>
{
public:
    //int GetCapacity ();
    //void SetCapacity (int value);
    //virtual int GetCount ();
    //virtual T* Get (int i);
    //virtual void SetItem (int i,T* value);
    //virtual void Clear ();
    //virtual void Insert (int index,T* item);
    ////virtual IEnumerator`1 GetEnumerator ();
    //virtual void RemoveAt (int index);
    //virtual int IndexOf (T* item);
    //virtual void Add (T* item);
    //virtual bool Contains (T* item);
    //virtual void CopyTo (std::vector<T*> array,int arrayIndex);
    //virtual bool GetIsReadOnly ();
    //virtual bool Remove (T* item);

    int GetCapacity()
    {
        typedef int (*myFunc)(int*);
        myFunc MyImport = (myFunc)symLoad(GetStaticHandleXls(), "CollectionBase_get_Capacity");
        return MyImport(instance);
    }
    void SetCapacity(int value)
    {
        typedef void (*myFunc)(int*, int);
        myFunc MyImport = (myFunc)symLoad(GetStaticHandleXls(), "CollectionBase_set_Capacity");
        MyImport(instance, value);
    }
    //int GetCount()
    //{
    //    typedef int (*myFunc)(int*);
    //    myFunc MyImport = (myFunc)symLoad(GetStaticHandleXls(), "CollectionBase_get_Count");
    //    return MyImport(instance);
    //}
    //T* Get(int i)
    //{
    //    typedef int* (*myFunc)(int*, int);
    //    myFunc MyImport = (myFunc)symLoad(GetStaticHandleXls(), "CollectionBase_get_Item");
    //    int* p = MyImport(instance, i);
    //    T* ret = Object::Create<T>(p, this);
    //    return ret;
    //}
    //void SetItem(int i, T* value)
    //{
    //    int* intP = value->GetIntPtr();
    //    typedef void (*myFunc)(int*, int, int*);
    //    myFunc MyImport = (myFunc)symLoad(GetStaticHandleXls(), "CollectionBase_set_Item");
    //    MyImport(instance, i, intP);
    //}
    //void Clear()
    //{
    //    typedef void (*myFunc)(int*);
    //    myFunc MyImport = (myFunc)symLoad(GetStaticHandleXls(), "CollectionBase_Clear");
    //    MyImport(instance);

    //}
    //void Insert(int index, T* item)
    //{
    //    int* intP = item->GetIntPtr();

    //    typedef void (*myFunc)(int*, int, int*);
    //    myFunc MyImport = (myFunc)symLoad(GetStaticHandleXls(), "CollectionBase_Insert");
    //    MyImport(instance, index, intP);

    //}
    //IEnumerator`1 GetEnumerator()
    //{
    //    typedef int* (*myFunc)(int*);
    //    myFunc MyImport = (myFunc)symLoad(GetStaticHandleXls(), "CollectionBase_GetEnumerator");
    //    int* p = MyImport(instance);
    //    IEnumerator`1 ret = (IEnumerator`1)Object::Create(p, this);
    //    return ret;
    //
    //}
    //void RemoveAt(int index)
    //{
    //    typedef void (*myFunc)(int*, int);
    //    myFunc MyImport = (myFunc)symLoad(GetStaticHandleXls(), "CollectionBase_RemoveAt");
    //    MyImport(instance, index);

    //}
    //int IndexOf(T* item)
    //{
    //    int* intP = item->GetIntPtr();

    //    typedef int (*myFunc)(int*, int*);
    //    myFunc MyImport = (myFunc)symLoad(GetStaticHandleXls(), "CollectionBase_IndexOf");
    //    return MyImport(instance, intP);

    //}
    //void Add(T* item)
    //{
    //    int* intP = item->GetIntPtr();

    //    typedef void (*myFunc)(int*, int*);
    //    myFunc MyImport = (myFunc)symLoad(GetStaticHandleXls(), "CollectionBase_Add");
    //    MyImport(instance, intP);

    //}
    //bool Contains(T* item)
    //{
    //    int* intP = item->GetIntPtr();

    //    typedef bool (*myFunc)(int*, int*);
    //    myFunc MyImport = (myFunc)symLoad(GetStaticHandleXls(), "CollectionBase_Contains");
    //    return MyImport(instance, intP);

    //}
    //void CopyTo(std::vector<T*> array, int arrayIndex)
    //{
    //    int** intP = GetObjIntPtrArrayFromVector<T>(array);

    //    typedef void (*myFunc)(int*, int**, int, int);
    //    myFunc MyImport = (myFunc)symLoad(GetStaticHandleXls(), "CollectionBase_CopyTo");
    //    MyImport(instance, intP, (int)array.size(), arrayIndex);

    //}
    //bool GetIsReadOnly()
    //{
    //    typedef bool (*myFunc)(int*);
    //    myFunc MyImport = (myFunc)symLoad(GetStaticHandleXls(), "CollectionBase_get_IsReadOnly");
    //    return MyImport(instance);
    //}
    //bool Remove(T* item)
    //{
    //    int* intP = item->GetIntPtr();

    //    typedef bool (*myFunc)(int*, int*);
    //    myFunc MyImport = (myFunc)symLoad(GetStaticHandleXls(), "CollectionBase_Remove");
    //    return MyImport(instance, intP);

    //}
private:
};
}}
//#include "CollectionBase.cpp"
