#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "XlsPageSetup.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
/*
    <summary>
        Represents the page setup description. The PageSetup object contains all page setup attributes (left margin, bottom margin, paper size, and so on) as properties.
    </summary>
*/
class EXPORTS PageSetup : public virtual XlsPageSetup
{
    friend class Worksheet;
public:
private:
};
}}
