#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "XlsShape.h"
#include "ICommentShape.h"
#include "IShapeLineFormat.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS XlsComment : public virtual XlsShape,public virtual ICommentShape
{
public:
    virtual ExcelShapeType GetShapeType ();
    virtual LPCWSTR_S GetAuthor ();
    virtual void SetAuthor (LPCWSTR_S value);
    virtual bool GetAutoSize ();
    virtual void SetAutoSize (bool value);
    virtual int GetColumn ();
    void SetColumn (int value);
    virtual int GetRow ();
    void SetRow (int value);
    virtual LPCWSTR_S GetText ();
    virtual void SetText (LPCWSTR_S value);
    virtual bool GetIsTextLocked ();
    virtual void SetIsTextLocked (bool value);
    virtual TextRotationType GetTextRotation ();
    virtual void SetTextRotation (TextRotationType value);
    virtual intrusive_ptr<IRichTextString> GetRichText ();
    virtual CommentHAlignType GetHAlignment ();
    virtual void SetHAlignment (CommentHAlignType value);
    virtual void Remove ();
    virtual CommentVAlignType GetVAlignment ();
    virtual void SetVAlignment (CommentVAlignType value);
    virtual bool GetIsVisible ();
    virtual void SetIsVisible (bool value);
    virtual intrusive_ptr<IShapeFill> GetFill ();
    //virtual intrusive_ptr<IShape> Clone (System.Object parent,System.Collections.Generic.Dictionary`2[[System.String, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089],[System.String, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089]] hashNewNames,System.Collections.Generic.Dictionary`2[[System.Int32, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089],[System.Int32, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089]] dicFontIndexes,bool addToCollections);

    virtual intrusive_ptr<IShapeLineFormat> GetLine()
    {
        return XlsShape::GetLine();
    }
private:
};
}}
