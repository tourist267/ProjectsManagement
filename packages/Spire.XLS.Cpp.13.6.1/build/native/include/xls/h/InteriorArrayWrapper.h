#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IInterior.h"
#include "XlsObject.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS InteriorArrayWrapper : public virtual XlsObject,public virtual IInterior
{
public:
    virtual ExcelColors GetPatternKnownColor ();
    virtual void SetPatternKnownColor (ExcelColors value);
    virtual intrusive_ptr<Color> GetPatternColor ();
    virtual void SetPatternColor (intrusive_ptr<Color> value);
    virtual ExcelColors GetKnownColor ();
    virtual void SetKnownColor (ExcelColors value);
    virtual intrusive_ptr<Color> GetColor ();
    virtual void SetColor (intrusive_ptr<Color> value);
    virtual intrusive_ptr<ExcelGradient> GetGradient ();
    virtual ExcelPatternType GetFillPattern ();
    virtual void SetFillPattern (ExcelPatternType value);
    void BeginUpdate ();
    void EndUpdate ();
private:
};
}}
