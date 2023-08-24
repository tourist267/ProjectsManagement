#pragma once
#include "pch.h"
#pragma warning(push)
#pragma warning(disable:4250)
#include "IExcelApplication.h"
#include "IBorders.h"
#pragma warning(pop)
namespace Spire{namespace Xls{
class EXPORTS BordersCollection : public virtual Object,public virtual IBorders
{
    friend class CellRange;
    friend class CellStyle;
    friend class RangesCollection;
public:
    //virtual System.Collections.IEnumerator GetEnumerator ();
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
    /*
    <summary>
        Gets border item.
    </summary>
    */
    virtual intrusive_ptr<IBorder> Get (BordersLineType Index);
    /*
    <summary>
        Returns or sets the line style for the border.
    </summary>
    */
    virtual LineStyleType GetLineStyle ();
    virtual void SetLineStyle (LineStyleType value);
    /*
    <summary>
        Gets or sets line style of borders.
    </summary>
    */
    virtual LineStyleType GetValue ();
    virtual void SetValue (LineStyleType value);
    /*
    <summary>
        Gets count of borders.
    </summary>
    */
    virtual int GetCount ();
    //vitual System.Object GetParent ();
private:
    intrusive_ptr<IBorder> Create(IntPtrWithTypeName intPtrWithTypeName, intrusive_ptr<Object> pParent);
};
}}
