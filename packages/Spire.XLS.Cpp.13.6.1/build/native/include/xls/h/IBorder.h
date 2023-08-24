#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IExcelApplication.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS IBorder : public virtual IExcelApplication
{
    friend class BordersCollection;
    friend class IBorders;
    friend class BordersCollectionArrayWrapper;
    friend class XlsBordersCollection;
public:
    virtual ExcelColors GetKnownColor ()=0;
    virtual void SetKnownColor (ExcelColors value)=0;
    virtual intrusive_ptr<OColor> GetOColor ()=0;
    virtual intrusive_ptr<Color> GetColor ()=0;
    virtual void SetColor (intrusive_ptr<Color> value)=0;
    virtual LineStyleType GetLineStyle ()=0;
    virtual void SetLineStyle (LineStyleType value)=0;
    virtual bool GetShowDiagonalLine ()=0;
    virtual void SetShowDiagonalLine (bool value)=0;
    virtual void SetThemeColor (ThemeColorType type,double tint)=0;
    //virtual bool GetThemeColor (Spire.Xls.ThemeColorType& type,System.Double& tint)=0;
private:
};
}}
