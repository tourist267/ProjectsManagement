#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS PivotItem : public virtual Object
{
public:
    bool GetHasChildItems ();
    void SetHasChildItems (bool value);
    bool GetIsExpaned ();
    void SetIsExpaned (bool value);
    bool GetDrillAcross ();
    void SetDrillAcross (bool value);
    bool GetIsCalculatedItem ();
    void SetIsCalculatedItem (bool value);
    bool GetIsHidden ();
    void SetIsHidden (bool value);
    bool GetIsMissing ();
    void SetIsMissing (bool value);
    LPCWSTR_S GetUserCaption ();
    bool GetIsChar ();
    void SetIsChar (bool value);
    bool GetIsHiddenDetails ();
    void SetIsHiddenDetails (bool value);
    PivotItemType GetItemType ();
    void SetItemType (PivotItemType value);
private:
};
}}
