#pragma once
#include "pch.h"

//#pragma warning(push)
//#pragma warning(disable:4250)
//#include "ExcelColors.h"
//#include "GradientPatternType.h"
//#include "ShapeArrowLengthType.h"
//#include "ShapeArrowStyleType.h"
//#include "ShapeArrowWidthType.h"
//#include "ShapeDashLineStyleType.h"
//#include "ShapeLineStyleType.h"
//#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS IShapeLineFormat : public virtual Object
{
    friend class ExcelCommentObject;
    friend class IArcShape;
    friend class ICheckBox;
    friend class IOvalShape;
    friend class IPictureShape;
    friend class IRadioButton;
    friend class IRectangleShape;
    friend class IShape;
    friend class ITextBoxShape;
    friend class CommentsRange;
    friend class XlsShape;
public:
    virtual double GetWeight ()=0;
    virtual void SetWeight (double value)=0;
    virtual intrusive_ptr<Color> GetForeColor ()=0;
    virtual void SetForeColor (intrusive_ptr<Color> value)=0;
    virtual intrusive_ptr<Color> GetBackColor ()=0;
    virtual void SetBackColor (intrusive_ptr<Color> value)=0;
    virtual ExcelColors GetForeKnownColor ()=0;
    virtual void SetForeKnownColor (ExcelColors value)=0;
    virtual ExcelColors GetBackKnownColor ()=0;
    virtual void SetBackKnownColor (ExcelColors value)=0;
    virtual ShapeArrowStyleType GetBeginArrowHeadStyle ()=0;
    virtual void SetBeginArrowHeadStyle (ShapeArrowStyleType value)=0;
    virtual ShapeArrowStyleType GetEndArrowHeadStyle ()=0;
    virtual void SetEndArrowHeadStyle (ShapeArrowStyleType value)=0;
    virtual ShapeArrowLengthType GetBeginArrowheadLength ()=0;
    virtual void SetBeginArrowheadLength (ShapeArrowLengthType value)=0;
    virtual ShapeArrowLengthType GetEndArrowheadLength ()=0;
    virtual void SetEndArrowheadLength (ShapeArrowLengthType value)=0;
    virtual ShapeArrowWidthType GetBeginArrowheadWidth ()=0;
    virtual void SetBeginArrowheadWidth (ShapeArrowWidthType value)=0;
    virtual ShapeArrowWidthType GetEndArrowheadWidth ()=0;
    virtual void SetEndArrowheadWidth (ShapeArrowWidthType value)=0;
    virtual ShapeDashLineStyleType GetDashStyle ()=0;
    virtual void SetDashStyle (ShapeDashLineStyleType value)=0;
    virtual ShapeLineStyleType GetStyle ()=0;
    virtual void SetStyle (ShapeLineStyleType value)=0;
    virtual double GetTransparency ()=0;
    virtual void SetTransparency (double value)=0;
    virtual bool GetVisible ()=0;
    virtual void SetVisible (bool value)=0;
    virtual GradientPatternType GetPattern ()=0;
    virtual void SetPattern (GradientPatternType value)=0;
    virtual bool GetHasPattern ()=0;
    virtual void SetHasPattern (bool value)=0;
private:
};
}}
