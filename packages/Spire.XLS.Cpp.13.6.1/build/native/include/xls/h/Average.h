#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS Average : public virtual Object
{
    friend class ConditionalFormatWrapper;
    friend class XlsConditionalFormat;
public:
    AverageType GetType ();
    void SetType (AverageType value);
private:
};
}}