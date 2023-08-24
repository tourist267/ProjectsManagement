#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS ImportObjectOptions : public virtual Object
{
public:
    bool GetConvertNumericData ();
    void SetConvertNumericData (bool value);
    bool GetInsertRows ();
    void SetInsertRows (bool value);
    bool GetCheckMergedCells ();
    void SetCheckMergedCells (bool value);
    bool GetIsFieldNameShown ();
    void SetIsFieldNameShown (bool value);
    LPCWSTR_S GetDateFormat ();
    void SetDateFormat (LPCWSTR_S value);
private:
};
}}
