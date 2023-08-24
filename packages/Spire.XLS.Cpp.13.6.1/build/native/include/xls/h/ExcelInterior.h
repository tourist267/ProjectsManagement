#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IInterior.h"
#pragma warning(pop)

namespace Spire{namespace Xls{
/*
    <summary>
        Used to get or set interior settings.
    </summary>
*/
class EXPORTS ExcelInterior : public virtual Object,public virtual IInterior
{
    friend class CellStyle;
public:
    virtual ExcelColors GetPatternKnownColor ();
    virtual void SetPatternKnownColor (ExcelColors value);
    virtual intrusive_ptr<Color> GetPatternColor ();
    virtual void SetPatternColor (intrusive_ptr<Color> value);
    virtual ExcelColors GetKnownColor ();
    virtual void SetKnownColor (ExcelColors value);
    virtual intrusive_ptr<Color> GetColor ();
    virtual void SetColor (intrusive_ptr<Color> value);
    /*
    <summary>
        Returns gradient object for this extended format.
    </summary>
    */
    virtual intrusive_ptr<ExcelGradient> GetGradient ();
    virtual ExcelPatternType GetFillPattern ();
    virtual void SetFillPattern (ExcelPatternType value);
    //intrusive_ptr<IInterior> m_interior ();
private:
};
}}
