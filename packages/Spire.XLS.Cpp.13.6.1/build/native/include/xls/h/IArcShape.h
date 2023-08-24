#pragma once
#include "pch.h"
#pragma warning(push)
#pragma warning(disable:4250)
#include "IExcelApplication.h"
#include "IShape.h"
#include "ITextBox.h"
#include "IPrstGeomShape.h"
#pragma warning(pop)
namespace Spire{namespace Xls{
class EXPORTS IArcShape : public virtual ITextBox
{
    friend class IArcShapes;
    friend class ArcShapeCollection;
public:
    virtual intrusive_ptr<IShapeLineFormat> GetLine ()=0;
    virtual int GetRotation ()=0;
    virtual void SetRotation (int value)=0;
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
        Weight
    </summary>
    */
    virtual double GetWeight ()=0;
    virtual void SetWeight (double value)=0;
    virtual intrusive_ptr<IHyperLink> GetHyLink ()=0;
private:
};
}}
