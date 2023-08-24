#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "XlsObject.h"
#include "IShapeLineFormat.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS XlsShapeLineFormat : public virtual XlsObject,public virtual IShapeLineFormat
{
public:
    virtual double GetWeight ();
    virtual void SetWeight (double value);
    virtual intrusive_ptr<Color> GetForeColor ();
    virtual void SetForeColor (intrusive_ptr<Color> value);
    virtual intrusive_ptr<Color> GetBackColor ();
    virtual void SetBackColor (intrusive_ptr<Color> value);
    virtual ExcelColors GetForeKnownColor ();
    virtual void SetForeKnownColor (ExcelColors value);
    virtual ExcelColors GetBackKnownColor ();
    virtual void SetBackKnownColor (ExcelColors value);
    virtual ShapeArrowStyleType GetBeginArrowHeadStyle ();
    virtual void SetBeginArrowHeadStyle (ShapeArrowStyleType value);
    virtual ShapeArrowStyleType GetEndArrowHeadStyle ();
    virtual void SetEndArrowHeadStyle (ShapeArrowStyleType value);
    virtual ShapeArrowLengthType GetBeginArrowheadLength ();
    virtual void SetBeginArrowheadLength (ShapeArrowLengthType value);
    virtual ShapeArrowLengthType GetEndArrowheadLength ();
    virtual void SetEndArrowheadLength (ShapeArrowLengthType value);
    virtual ShapeArrowWidthType GetBeginArrowheadWidth ();
    virtual void SetBeginArrowheadWidth (ShapeArrowWidthType value);
    virtual ShapeArrowWidthType GetEndArrowheadWidth ();
    virtual void SetEndArrowheadWidth (ShapeArrowWidthType value);
    virtual ShapeDashLineStyleType GetDashStyle ();
    virtual void SetDashStyle (ShapeDashLineStyleType value);
    virtual ShapeLineStyleType GetStyle ();
    virtual void SetStyle (ShapeLineStyleType value);
    virtual double GetTransparency ();
    virtual void SetTransparency (double value);
    virtual bool GetVisible ();
    virtual void SetVisible (bool value);
    virtual GradientPatternType GetPattern ();
    virtual void SetPattern (GradientPatternType value);
    virtual bool GetHasPattern ();
    virtual void SetHasPattern (bool value);
    /*
    <summary>
        Indicates whether join is round.
    </summary>
    */
    bool GetIsRound ();
    void SetIsRound (bool value);
    bool GetNoFill ();
    void SetNoFill (bool value);
    //intrusive_ptr<XlsShapeLineFormat> Clone (System.Object parent);
private:
};
}}
