#pragma once
#include "pch.h"

//#pragma warning(push)
//#pragma warning(disable:4250)
//#include "XlsWorksheetConditionalFormats.h"
//#include "XlsConditionalFormats.h"
//#pragma warning(pop)

namespace Spire{namespace Xls{
class EXPORTS IConditionalFormatsCollection : public virtual Object
{
    friend class XlsWorksheet;
public:
    virtual int GetCapacity ()=0;
    virtual void SetCapacity (int value)=0;
    virtual int GetCount ()=0;
    virtual intrusive_ptr<XlsConditionalFormats> Get (int fieldIndex)=0;
    virtual intrusive_ptr<XlsConditionalFormats> Add ()=0;
    virtual intrusive_ptr<XlsConditionalFormats> Add (intrusive_ptr<XlsConditionalFormats> formats)=0;
    virtual void CopyFrom (intrusive_ptr<XlsWorksheetConditionalFormats> srcFormats)=0;
    virtual intrusive_ptr<XlsConditionalFormats> Find (std::vector<intrusive_ptr<Rectangle>> arrRanges)=0;
    virtual std::vector<intrusive_ptr<XlsConditionalFormats>> FindAll (std::vector<intrusive_ptr<Rectangle>> arrRanges)=0;
    virtual intrusive_ptr<XlsConditionalFormats> GetByIndex (int index)=0;
    //virtual System.Collections.IEnumerator GetEnumerator ()=0;
    virtual void Remove (std::vector<intrusive_ptr<Rectangle>> arrRanges)=0;
    virtual void RemoveAt (int index)=0;
private:
};
}}
