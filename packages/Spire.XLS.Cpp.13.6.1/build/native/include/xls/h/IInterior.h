#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
//#include "ExcelColors.h"
//#include "ExcelPatternType.h"
//#include "ExcelGradient.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS IInterior : public virtual Object
{
    friend class ExcelInterior;
    friend class CellStyleObject;
    friend class IStyle;
    friend class AddtionalFormatWrapper;
    friend class StyleArrayWrapper;
public:
    virtual ExcelColors GetPatternKnownColor ()=0;
    virtual void SetPatternKnownColor (ExcelColors value)=0;
    virtual intrusive_ptr<Color> GetPatternColor ()=0;
    virtual void SetPatternColor (intrusive_ptr<Color> value)=0;
    virtual ExcelColors GetKnownColor ()=0;
    virtual void SetKnownColor (ExcelColors value)=0;
    virtual intrusive_ptr<Color> GetColor ()=0;
    virtual void SetColor (intrusive_ptr<Color> value)=0;
    virtual intrusive_ptr<ExcelGradient> GetGradient ()=0;
    virtual ExcelPatternType GetFillPattern ()=0;
    virtual void SetFillPattern (ExcelPatternType value)=0;
private:
};
}}
