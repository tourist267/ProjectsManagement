#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "ICloneParent.h"
#include "IStyles.h"
#include "CollectionBase.h"
#include "CellStyleObject.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS XlsStylesCollection : public virtual CollectionBase<CellStyleObject>,public virtual ICloneParent,public virtual IStyles
{
public:
    /*
    <summary>
        Check collection contains style with specified name.
    </summary>
    <param name="name">Style name</param>
    <returns></returns>
    */
    virtual bool Contains (LPCWSTR_S name);
    /*
    <summary>
        Removes style from the colleciton.
    </summary>
    <param name="styleName">Style to remove.</param>
    */
    virtual void Remove (LPCWSTR_S styleName);
    virtual intrusive_ptr<CellStyleObject> Get (LPCWSTR_S name);
    //virtual System.Object Clone (System.Object parent);
    void UpdateStyleRecords ();
    virtual int GetCount();
    virtual intrusive_ptr<CellStyleObject> Get(int Index);
private:
};
}}
