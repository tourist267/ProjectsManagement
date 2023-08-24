#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS ExportTableOptions : public virtual Object
{
public:
    bool GetKeepDataFormat ();
    void SetKeepDataFormat (bool value);
    bool GetExportColumnNames ();
    void SetExportColumnNames (bool value);
    RenameStrategy GetRenameStrategy ();
    void SetRenameStrategy (RenameStrategy value);
    bool GetComputedFormulaValue ();
    void SetComputedFormulaValue (bool value);
private:
};
}}
