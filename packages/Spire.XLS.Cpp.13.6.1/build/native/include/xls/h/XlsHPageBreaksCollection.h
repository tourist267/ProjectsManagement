#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "ICloneParent.h"
#include "IHPageBreaks.h"
#include "CollectionBase.h"
#include "HPageBreak.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS XlsHPageBreaksCollection : public virtual CollectionBase<HPageBreak>,public virtual ICloneParent, public virtual IHPageBreaks
{
public:
    /*
    <summary>
        Gets manual breaks count. Read-only.
    </summary>
    */
    int GetManualBreakCount ();
    int GetRecordCode ();
    bool GetNeedDataArray ();
    long GetStreamPos ();
    void SetStreamPos (long value);
    //virtual System.Object Clone (System.Object parent);
    virtual int GetCount();
private:
};
}}
