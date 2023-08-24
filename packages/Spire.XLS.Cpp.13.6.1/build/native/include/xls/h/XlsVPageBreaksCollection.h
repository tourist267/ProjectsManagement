#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "ICloneParent.h"
#include "IVPageBreaks.h"
#include "CollectionBase.h"
#include "VPageBreak.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS XlsVPageBreaksCollection : public virtual CollectionBase<VPageBreak>,public virtual ICloneParent, public virtual IVPageBreaks
{
public:
    //virtual System.Object Clone (System.Object parent);
    /*
    <summary>
        Gets manual breaks count. Read-only.
    </summary>
    */
    int GetManualBreakCount ();
    /*
    <summary>
        Returns code of the biff storage. Read-only.
    </summary>
    */
    int GetRecordCode ();
    /*
    <summary>
        Indicates whether data array is required by this record.
    </summary>
    */
    bool GetNeedDataArray ();
    long GetStreamPos ();
    void SetStreamPos (long value);
    virtual int GetCount();
    virtual void RemoveAt(int index);
private:
};
}}
