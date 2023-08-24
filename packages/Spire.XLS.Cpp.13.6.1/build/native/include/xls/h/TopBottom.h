#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS TopBottom : public virtual Object
{
    friend class ConditionalFormatWrapper;
    friend class XlsConditionalFormat;
public:
    int GetRank ();
    void SetRank (int value);
    TopBottomType GetType ();
    void SetType (TopBottomType value);
private:
};
}}
