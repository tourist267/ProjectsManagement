#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IShape.h"
#include "IPrstGeomShape.h"
#include "XlsShape.h"
#include "IOvalShape.h"
#include "IShapeLineFormat.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS XlsOvalShape : public virtual XlsShape,public virtual IOvalShape
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
    virtual intrusive_ptr<IHyperLink> GetHyLink ();
    virtual PrstGeomShapeType GetPrstShapeType ();
    //virtual Spire.Xls.Core.Spreadsheet.Collections.CollectionExtended`1[[Spire.Xls.Core.IGeomPath, Spire.XLS, Version=12.7.7.0, Culture=neutral, PublicKeyToken=null]] GetGeomPaths ();
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
