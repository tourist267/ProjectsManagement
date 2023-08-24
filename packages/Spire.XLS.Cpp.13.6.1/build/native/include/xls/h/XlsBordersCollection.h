#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "XlsBorder.h"
#include "CollectionBase.h"
#include "IBorders.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS XlsBordersCollection : public virtual CollectionBase<XlsBorder>, public virtual IBorders
{
    friend class PivotStyle;
public:
    /*
    <summary>
        Returns or sets the primary excel color of the object. 
    </summary>
    */
    virtual ExcelColors GetKnownColor ();
    virtual void SetKnownColor (ExcelColors value);
    /*
    <summary>
        Returns or sets the primary color of the object.
    </summary>
    */
    virtual intrusive_ptr<Color> GetColor ();
    virtual void SetColor (intrusive_ptr<Color> value);
    virtual intrusive_ptr<IBorder> Get (BordersLineType index);
    /*
    <summary>
        Returns or sets the line style for the border.
    </summary>
    */
    virtual LineStyleType GetLineStyle ();
    virtual void SetLineStyle (LineStyleType value);
    virtual LineStyleType GetValue ();
    virtual void SetValue (LineStyleType value);

    virtual int GetCount();
private:
};
}}
