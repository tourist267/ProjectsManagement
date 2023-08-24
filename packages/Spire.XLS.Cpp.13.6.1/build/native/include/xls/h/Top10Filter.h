#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS Top10Filter : public virtual Object
{
public:
    bool GetIsTop ();
    void SetIsTop (bool value);
    bool GetIsPercent ();
    void SetIsPercent (bool value);
    int GetItems ();
    void SetItems (int value);
    //System.Object GetCriteria ();
    //void SetCriteria (System.Object value);
private:
};
}}
