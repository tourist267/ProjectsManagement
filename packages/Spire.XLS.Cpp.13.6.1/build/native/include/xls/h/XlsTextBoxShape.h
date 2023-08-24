#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IShape.h"
#include "ITextBox.h"
#include "XlsShape.h"
#include "ITextBoxLinkShape.h"
#include "TextBoxShapeBase.h"
#include "IShapeLineFormat.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS XlsTextBoxShape : public virtual XlsShape,public virtual ITextBoxLinkShape,public virtual TextBoxShapeBase
{
public:
    virtual ExcelShapeType GetShapeType ();
    virtual LPCWSTR_S GetText ();
    virtual void SetText (LPCWSTR_S value);
    virtual bool GetIsTextLocked ();
    virtual void SetIsTextLocked (bool value);
    virtual bool GetIsWrapText ();
    virtual void SetIsWrapText (bool value);
    virtual TextRotationType GetTextRotation ();
    virtual void SetTextRotation (TextRotationType value);
    virtual intrusive_ptr<IRichTextString> GetRichText ();
    virtual CommentHAlignType GetHAlignment ();
    virtual void SetHAlignment (CommentHAlignType value);
    virtual CommentVAlignType GetVAlignment ();
    virtual void SetVAlignment (CommentVAlignType value);
    intrusive_ptr<Rectangle> GetCoordinates2007 ();
    void SetCoordinates2007 (intrusive_ptr<Rectangle> value);
    bool GetHasStyleProperties ();
    LPCWSTR_S GetTextFieldId ();
    void SetTextFieldId (LPCWSTR_S value);
    LPCWSTR_S GetTextFieldType ();
    void SetTextFieldType (LPCWSTR_S value);
    virtual intrusive_ptr<Color> GetFillColor ();
    virtual void SetFillColor (intrusive_ptr<Color> value);
    virtual LPCWSTR_S GetInsetMode ();
    virtual void SetInsetMode (LPCWSTR_S value);
    int GetLeftMarginEMU ();
    void SetLeftMarginEMU (int value);
    int GetTopMarginEMU ();
    void SetTopMarginEMU (int value);
    int GetRightMarginEMU ();
    void SetRightMarginEMU (int value);
    int GetBottomMarginEMU ();
    void SetBottomMarginEMU (int value);
    virtual double GetInnerBottomMargin ();
    virtual void SetInnerBottomMargin (double value);
    virtual double GetInnerLeftMargin ();
    virtual void SetInnerLeftMargin (double value);
    virtual double GetInnerRightMargin ();
    virtual void SetInnerRightMargin (double value);
    virtual double GetInnerTopMargin ();
    virtual void SetInnerTopMargin (double value);
    LPCWSTR_S GetVertOverflow ();
    void SetVertOverflow (LPCWSTR_S value);
    LPCWSTR_S GetHorzOverflow ();
    void SetHorzOverflow (LPCWSTR_S value);
    LPCWSTR_S GetAnchor ();
    void SetAnchor (LPCWSTR_S value);
    LPCWSTR_S GetVert ();
    void SetVert (LPCWSTR_S value);
    bool GetIsTextWrapped ();
    void SetIsTextWrapped (bool value);
    int GetUpRight ();
    void SetUpRight (int value);
    virtual intrusive_ptr<IHyperLink> GetHyLink ();
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
private:
};
}}
