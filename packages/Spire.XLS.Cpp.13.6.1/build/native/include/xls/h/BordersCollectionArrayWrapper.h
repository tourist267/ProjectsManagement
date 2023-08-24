#pragma once
#include "pch.h"
#pragma warning(push)
#pragma warning(disable:4250)
#include "IBorders.h"
#pragma warning(pop)
namespace Spire{namespace Xls{
class EXPORTS BordersCollectionArrayWrapper : public virtual Object,public virtual IBorders
{
public:
    virtual ExcelColors GetKnownColor ();
    virtual void SetKnownColor (ExcelColors value);
    virtual intrusive_ptr<Color> GetColor ();
    virtual void SetColor (intrusive_ptr<Color> value);
    virtual intrusive_ptr<IBorder> Get (BordersLineType Index);
    virtual LineStyleType GetLineStyle ();
    virtual void SetLineStyle (LineStyleType value);
    virtual LineStyleType GetValue ();
    virtual void SetValue (LineStyleType value);
private:
};
}}
