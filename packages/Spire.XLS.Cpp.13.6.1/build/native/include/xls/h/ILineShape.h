#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
//#include "LineShapeType.h"
//#include "ShapeArrowLengthType.h"
//#include "ShapeArrowStyleType.h"
//#include "ShapeArrowWidthType.h"
//#include "ShapeDashLineStyleType.h"
//#include "ShapeLineStyleType.h"
//#include "IExcelApplication.h"
//#include "IShape.h"
//#include "IHyperLink.h"
#include "IPrstGeomShape.h"
#pragma warning(pop)

namespace Spire{namespace Xls{
class EXPORTS ILineShape : public virtual IPrstGeomShape
{
    friend class ILines;
    friend class IShapes;
    friend class LineCollection;
public:
    /*
    <summary>
        line color
    </summary>
    */
    virtual intrusive_ptr<Color> GetColor ()=0;
    virtual void SetColor (intrusive_ptr<Color> value)=0;
    /*
    <summary>
        Begin Arrow Head Style
    </summary>
    */
    virtual ShapeArrowStyleType GetBeginArrowHeadStyle ()=0;
    virtual void SetBeginArrowHeadStyle (ShapeArrowStyleType value)=0;
    /*
    <summary>
        Begin Arrow head Length
    </summary>
    */
    virtual ShapeArrowLengthType GetBeginArrowheadLength ()=0;
    virtual void SetBeginArrowheadLength (ShapeArrowLengthType value)=0;
    /*
    <summary>
        Begin Arrow head Width
    </summary>
    */
    virtual ShapeArrowWidthType GetBeginArrowheadWidth ()=0;
    virtual void SetBeginArrowheadWidth (ShapeArrowWidthType value)=0;
    /*
    <summary>
        End Arrow Head Style
    </summary>
    */
    virtual ShapeArrowStyleType GetEndArrowHeadStyle ()=0;
    virtual void SetEndArrowHeadStyle (ShapeArrowStyleType value)=0;
    /*
    <summary>
        End Arrow head Length
    </summary>
    */
    virtual ShapeArrowLengthType GetEndArrowheadLength ()=0;
    virtual void SetEndArrowheadLength (ShapeArrowLengthType value)=0;
    /*
    <summary>
        End Arrow head Width
    </summary>
    */
    virtual ShapeArrowWidthType GetEndArrowheadWidth ()=0;
    virtual void SetEndArrowheadWidth (ShapeArrowWidthType value)=0;
    /*
    <summary>
        DashStyle
    </summary>
    */
    virtual ShapeDashLineStyleType GetDashStyle ()=0;
    virtual void SetDashStyle (ShapeDashLineStyleType value)=0;
    /*
    <summary>
        Style
    </summary>
    */
    virtual ShapeLineStyleType GetStyle ()=0;
    virtual void SetStyle (ShapeLineStyleType value)=0;
    /*
    <summary>
        Transparency 
            value 0---1
    </summary>
    */
    virtual double GetTransparency ()=0;
    virtual void SetTransparency (double value)=0;
    /*
    <summary>
        Weight
    </summary>
    */
    virtual double GetWeight ()=0;
    virtual void SetWeight (double value)=0;
    /*
    <summary>
        MiddleOffsetPercent 
            Set middle point value , 
            when middle point localed at back of start point  value is less than 0
            when middle point  localed at start point  value is 0
            when middle point  localed at end point  value is 1
            when middle point localed at back of end point  value is greater than 0
    </summary>
    */
    virtual double GetMiddleOffsetPercent ()=0;
    virtual void SetMiddleOffsetPercent (double value)=0;
    virtual LineShapeType GetLineShapeType ()=0;
    virtual int GetRotation ()=0;
    virtual void SetRotation (int value)=0;
    virtual intrusive_ptr<IHyperLink> GetHyLink ()=0;
private:
};
}}
