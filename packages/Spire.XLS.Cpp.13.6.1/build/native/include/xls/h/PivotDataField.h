#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "ICloneParent.h"
#include "IPivotDataField.h"
#pragma warning(pop)
namespace Spire{namespace Xls{
class EXPORTS PivotDataField : public virtual Object,public virtual IPivotDataField,public virtual ICloneParent
{
    friend class IPivotDataFields;
    friend class PivotDataFields;
public:
    virtual LPCWSTR_S GetName ();
    virtual SubtotalTypes GetSubtotal ();
    void SetSubtotal (SubtotalTypes value);
    virtual int GetBaseItem ();
    virtual void SetBaseItem (int value);
    virtual int GetBaseField ();
    virtual void SetBaseField (int value);
    PivotFieldFormatType GetShowDataAs ();
    void SetShowDataAs (PivotFieldFormatType value);
    //virtual System.Object Clone (System.Object parent);
private:
};
}}
