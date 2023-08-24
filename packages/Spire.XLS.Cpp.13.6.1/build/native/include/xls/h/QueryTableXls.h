#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS QueryTableXls : public virtual Object
{
    friend class QueryTableCollection;
public:
    bool GetAdjustColumnWidth ();
    void SetAdjustColumnWidth (bool value);
    bool GetPreserveFormatting ();
    void SetPreserveFormatting (bool value);
private:
};
}}
