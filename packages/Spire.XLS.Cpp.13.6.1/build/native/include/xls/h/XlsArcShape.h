#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IShape.h"
#include "ITextBox.h"
#include "IPrstGeomShape.h"
#include "IArcShape.h"
#include "XlsPrstGeomShape.h"
#include "IShapeLineFormat.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS XlsArcShape : public virtual XlsPrstGeomShape,public virtual IArcShape
{
public:
    virtual ExcelShapeType GetShapeType ();
    virtual LPCWSTR_S GetText ();
    virtual void SetText (LPCWSTR_S value);
    virtual bool GetIsTextLocked ();
    virtual void SetIsTextLocked (bool value);
    virtual TextRotationType GetTextRotation ();
    virtual void SetTextRotation (TextRotationType value);
    virtual intrusive_ptr<IRichTextString> GetRichText ();
    virtual CommentHAlignType GetHAlignment ();
    virtual void SetHAlignment (CommentHAlignType value);
    virtual CommentVAlignType GetVAlignment ();
    virtual void SetVAlignment (CommentVAlignType value);
    virtual double GetWeight ();
    virtual void SetWeight (double value);
    virtual intrusive_ptr<Color> GetColor ();
    virtual void SetColor (intrusive_ptr<Color> value);
    virtual ShapeLineStyleType GetStyle ();
    virtual void SetStyle (ShapeLineStyleType value);
    virtual ShapeDashLineStyleType GetDashStyle ();
    virtual void SetDashStyle (ShapeDashLineStyleType value);
    virtual ShapeArrowWidthType GetBeginArrowheadWidth ();
    virtual void SetBeginArrowheadWidth (ShapeArrowWidthType value);
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
    //virtual intrusive_ptr<IShape> Clone (System.Object parent,System.Collections.Generic.Dictionary`2[[System.String, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089],[System.String, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089]] hashNewNames,System.Collections.Generic.Dictionary`2[[System.Int32, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089],[System.Int32, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089]] dicFontIndexes,bool addToCollections);

    virtual intrusive_ptr<IShapeLineFormat> GetLine()
    {
        return XlsShape::GetLine();
    }
    virtual int GetRotation()
    {
        return XlsShape::GetRotation();
    }
    virtual void SetRotation(int value)
    {
        XlsShape::SetRotation(value);
    }
    virtual ExcelVerticalAlignment GetTextVerticalAlignment()
    {
        return XlsShape::GetTextVerticalAlignment();
    }
    virtual void SetTextVerticalAlignment(ExcelVerticalAlignment value)
    {
        XlsShape::SetTextVerticalAlignment(value);
    }

private:
};
}}
