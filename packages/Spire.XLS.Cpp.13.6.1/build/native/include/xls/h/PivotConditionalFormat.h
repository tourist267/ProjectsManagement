#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS PivotConditionalFormat : public virtual Object
{
    friend class PivotConditionalFormatCollection;
public:
    ConditionalFormatScope Getscope ();
    void Setscope (ConditionalFormatScope value);
    intrusive_ptr<IConditionalFormat> Get (int index);
    intrusive_ptr<IConditionalFormat> AddCondition ();
private:
};
}}
