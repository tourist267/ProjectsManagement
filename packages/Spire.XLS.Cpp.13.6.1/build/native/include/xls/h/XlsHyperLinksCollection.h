#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "ICloneParent.h"
#include "IHyperLinks.h"
#include "CollectionBase.h"
#include "HyperLink.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS XlsHyperLinksCollection : public virtual CollectionBase<XlsHyperLink>,public virtual ICloneParent,public virtual IHyperLinks
{
public:
    virtual intrusive_ptr<HyperLink> Get (int index);
    //virtual System.Object Clone (System.Object parent);
    virtual intrusive_ptr<HyperLink> Add (intrusive_ptr<IXLSRange> range);
    bool GetIsReadOnly ();
    /*
    <summary>
        Creates hyperlink styles.
    </summary>
    */
    void CreateHyperlinkStyles ();
    /*
    <summary>
        Gets hyperlinks for the specified range.
    </summary>
    <param name="range">range object.</param>
    <returns></returns>
    */
    intrusive_ptr<XlsHyperLinksCollection> GetRangeHyperlinks (intrusive_ptr<IXLSRange> range);
    virtual int GetCount();
    virtual void RemoveAt(int index);
private:
};
}}
