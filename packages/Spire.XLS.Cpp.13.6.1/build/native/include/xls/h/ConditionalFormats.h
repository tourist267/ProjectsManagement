#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "CondFormatCollectionWrapper.h"
#include "ConditionalFormatWrapper.h"
#pragma warning(pop)

namespace Spire{namespace Xls{
/*
    <summary>
        Contains a condition and the formatting for cells.
    </summary>
*/
class EXPORTS ConditionalFormats : public virtual CondFormatCollectionWrapper
{
    friend class IXLSRange;
    friend class XlsName;
    friend class XlsRange;
    friend class XlsRangesCollection;
public:
    intrusive_ptr<IConditionalFormat> Get (int index);
    intrusive_ptr<IConditionalFormat> AddCondition ();
    intrusive_ptr<ConditionalFormatWrapper> AddCondition (ConditionalFormatType type,bool stopIsTrue);
private:
};
}}
