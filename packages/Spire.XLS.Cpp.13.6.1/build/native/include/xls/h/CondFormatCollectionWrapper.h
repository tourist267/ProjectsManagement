#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IExcelApplication.h"
#include "IConditionalFormats.h"
#include "IOptimizedUpdate.h"
#include "CommonWrapper.h"
#pragma warning(pop)
namespace Spire{namespace Xls{
class EXPORTS CondFormatCollectionWrapper : public virtual CommonWrapper,public virtual IConditionalFormats
{
public:
    //virtual System.Collections.IEnumerator GetEnumerator ();
    virtual void BeginUpdate ();
    virtual void EndUpdate ();
    virtual int GetCount ();
    virtual intrusive_ptr<IConditionalFormat> Get (int index);
    virtual intrusive_ptr<IConditionalFormat> AddCondition ();
    void Remove ();
    virtual void RemoveAt (int index);
    //virtual System.Object GetParent ();
    intrusive_ptr<XlsConditionalFormat> GetCondition (int iCondition);
    void AddRange (intrusive_ptr<IXLSRange> range);
private:
};
}}
