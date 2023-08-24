#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "ICloneParent.h"
#include "IConditionalFormatsCollection.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS XlsWorksheetConditionalFormats : public virtual Object,public virtual ICloneParent,public virtual IConditionalFormatsCollection
{
public:
    virtual intrusive_ptr<XlsConditionalFormats> Find (std::vector<intrusive_ptr<Rectangle>> arrRanges);
    virtual std::vector<intrusive_ptr<XlsConditionalFormats>> FindAll (std::vector<intrusive_ptr<Rectangle>> arrRanges);
    intrusive_ptr<XlsConditionalFormats> Contains (intrusive_ptr<XlsConditionalFormats> formats);
    virtual intrusive_ptr<XlsConditionalFormats> Add ();
    virtual intrusive_ptr<XlsConditionalFormats> Add (intrusive_ptr<XlsConditionalFormats> formats);
    virtual void Remove (std::vector<intrusive_ptr<Rectangle>> arrRanges);
    virtual void CopyFrom (intrusive_ptr<XlsWorksheetConditionalFormats> srcFormats);
    //virtual System.Object Clone (System.Object parent);
    virtual void RemoveAt (int index);
    virtual intrusive_ptr<XlsConditionalFormats> GetByIndex (int index);
    virtual intrusive_ptr<XlsConditionalFormats> Get (int fieldIndex);
    //virtual System.Collections.IEnumerator GetEnumerator ();
    void Clear ();
    virtual int GetCapacity ();
    virtual void SetCapacity (int value);
    virtual int GetCount ();
private:
};
}}
