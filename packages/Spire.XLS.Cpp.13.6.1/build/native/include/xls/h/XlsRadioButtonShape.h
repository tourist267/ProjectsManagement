#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IShape.h"
#include "XlsShape.h"
#include "IRadioButton.h"
#include "IShapeLineFormat.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS XlsRadioButtonShape : public virtual XlsShape,public virtual IRadioButton
{
public:
    virtual LPCWSTR_S GetText ();
    virtual void SetText (LPCWSTR_S value);
    virtual bool GetIsTextLocked ();
    virtual void SetIsTextLocked (bool value);
    virtual intrusive_ptr<IXLSRange> GetLinkedCell ();
    virtual void SetLinkedCell (intrusive_ptr<IXLSRange> value);
    virtual bool GetDisplay3DShading ();
    virtual void SetDisplay3DShading (bool value);
    virtual bool GetIsFirstButton ();
    virtual CheckState GetCheckState ();
    virtual void SetCheckState (CheckState value);
    virtual ExcelShapeType GetShapeType ();
    //virtual intrusive_ptr<IShape> Clone (System.Object parent,System.Collections.Generic.Dictionary`2[[System.String, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089],[System.String, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089]] hashNewNames,System.Collections.Generic.Dictionary`2[[System.Int32, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089],[System.Int32, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089]] dicFontIndexes,bool addToCollections);
    CommentHAlignType GetHAlignment ();
    void SetHAlignment (CommentHAlignType value);
    CommentVAlignType GetVAlignment ();
    void SetVAlignment (CommentVAlignType value);
    TextRotationType GetTextRotation ();
    void SetTextRotation (TextRotationType value);
    void SetRichText (intrusive_ptr<RichTextString> value);

    virtual intrusive_ptr<IShapeLineFormat> GetLine()
    {
        return XlsShape::GetLine();
    }

private:
};
}}
