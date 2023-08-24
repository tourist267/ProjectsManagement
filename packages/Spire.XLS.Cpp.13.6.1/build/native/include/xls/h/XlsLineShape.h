#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IShape.h"
#include "IPrstGeomShape.h"
#include "ILineShape.h"
#include "XlsPrstGeomShape.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS XlsLineShape : public virtual XlsPrstGeomShape,public virtual ILineShape
{
public:
    virtual LineShapeType GetLineShapeType ();
    void SetLineShapeType (LineShapeType value);
    virtual double GetWeight ();
    virtual void SetWeight (double value);
    int GetMiddleOffset ();
    void SetMiddleOffset (int value);
    virtual double GetMiddleOffsetPercent ();
    virtual void SetMiddleOffsetPercent (double value);
    virtual double GetTransparency ();
    virtual void SetTransparency (double value);
    /*
    <summary>
        line color
    </summary>
    */
    virtual intrusive_ptr<Color> GetColor ();
    virtual void SetColor (intrusive_ptr<Color> value);
    virtual ShapeLineStyleType GetStyle ();
    virtual void SetStyle (ShapeLineStyleType value);
    virtual ShapeDashLineStyleType GetDashStyle ();
    virtual void SetDashStyle (ShapeDashLineStyleType value);
    virtual ShapeArrowWidthType GetBeginArrowheadWidth ();
    virtual void SetBeginArrowheadWidth (ShapeArrowWidthType value);
    /*
    <summary>
         BeginArrowHeadStyle
    </summary>
    */
    virtual ShapeArrowStyleType GetBeginArrowHeadStyle ();
    virtual void SetBeginArrowHeadStyle (ShapeArrowStyleType value);
    virtual ShapeArrowLengthType GetBeginArrowheadLength ();
    virtual void SetBeginArrowheadLength (ShapeArrowLengthType value);
    virtual ShapeArrowStyleType GetEndArrowHeadStyle ();
    virtual void SetEndArrowHeadStyle (ShapeArrowStyleType value);
    virtual ShapeArrowLengthType GetEndArrowheadLength ();
    virtual void SetEndArrowheadLength (ShapeArrowLengthType value);
    virtual ShapeArrowWidthType GetEndArrowheadWidth ();
    virtual void SetEndArrowheadWidth (ShapeArrowWidthType value);
    virtual intrusive_ptr<IHyperLink> GetHyLink ();
    virtual PrstGeomShapeType GetPrstShapeType ();
    intrusive_ptr<Point> GetStartPoint ();
    void SetStartPoint (intrusive_ptr<Point> value);
    intrusive_ptr<Point> GetEndPoint ();
    void SetEndPoint (intrusive_ptr<Point> value);
    bool GetFlipH ();
    void SetFlipH (bool value);
    bool GetFlipV ();
    void SetFlipV (bool value);
    virtual ExcelShapeType GetShapeType ();
    //virtual intrusive_ptr<IShape> Clone (System.Object parent,System.Collections.Generic.Dictionary`2[[System.String, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089],[System.String, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089]] hashNewNames,System.Collections.Generic.Dictionary`2[[System.Int32, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089],[System.Int32, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089]] dicFontIndexes,bool addToCollections);

    virtual int GetRotation()
    {
        return XlsShape::GetRotation();
    }
    virtual void SetRotation(int value)
    {
        XlsShape::SetRotation(value);
    }

private:
};
}}
