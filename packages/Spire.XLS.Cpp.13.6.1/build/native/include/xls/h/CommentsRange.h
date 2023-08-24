#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IShape.h"
#include "ITextBox.h"
#include "XlsObject.h"
#include "ITextBoxShape.h"
#include "IComment.h"
#pragma warning(pop)

namespace Spire{namespace Xls{
class EXPORTS CommentsRange : public virtual XlsObject,public virtual IComment
{
public:
    virtual LPCWSTR_S GetAuthor ();
    virtual void SetAuthor (LPCWSTR_S value);
    virtual bool GetIsVisible ();
    virtual void SetIsVisible (bool value);
    virtual int GetRow ();
    virtual int GetColumn ();
    virtual intrusive_ptr<IRichTextString> GetRichText ();
    virtual LPCWSTR_S GetText ();
    virtual void SetText (LPCWSTR_S value);
    /*
    <summary>
        Gets and sets the html string which contains data and some formattings in this shape.
    </summary>
    */
    virtual LPCWSTR_S GetHtmlString ();
    virtual void SetHtmlString (LPCWSTR_S value);
    bool GetIsMoveWithCell ();
    void SetIsMoveWithCell (bool value);
    virtual bool GetAutoSize ();
    virtual void SetAutoSize (bool value);
    virtual void Remove ();
    virtual void Scale (int scaleWidth,int scaleHeight);
    /*
    <summary>
        Specifies all possible settings for how drawing object shall be resized when the rows and columns between its start and ending anchor are resized or inserted
    </summary>
    */
    virtual ResizeBehaveType GetResizeBehave ();
    virtual void SetResizeBehave (ResizeBehaveType value);
    virtual bool GetVisible ();
    virtual void SetVisible (bool value);
    virtual int GetHeight ();
    virtual void SetHeight (int value);
    virtual int GetID ();
    virtual bool GetIsSmartArt ();
    virtual int GetLeft ();
    virtual void SetLeft (int value);
    virtual LPCWSTR_S GetName ();
    virtual void SetName (LPCWSTR_S value);
    virtual int GetTop ();
    virtual void SetTop (int value);
    virtual int GetWidth ();
    virtual void SetWidth (int value);
    virtual ExcelShapeType GetShapeType ();
    void SetShapeType (ExcelShapeType value);
    virtual LPCWSTR_S GetAlternativeText ();
    virtual void SetAlternativeText (LPCWSTR_S value);
    //virtual intrusive_ptr<ITextFrame> GetTextFrame ();
    virtual intrusive_ptr<IShapeFill> GetFill ();
    /*
    <summary>
        Represents line format properties. Read only.
    </summary>
    */
    virtual intrusive_ptr<IShapeLineFormat> GetLine ();
    virtual LPCWSTR_S GetOnAction ();
    virtual void SetOnAction (LPCWSTR_S value);
    virtual intrusive_ptr<IXLSRange> GetLinkedCell ();
    virtual void SetLinkedCell (intrusive_ptr<IXLSRange> value);
    virtual int GetRotation ();
    virtual void SetRotation (int value);
    virtual intrusive_ptr<IFormat3D> GetThreeD ();
    virtual intrusive_ptr<IGlow> GetGlow ();
    virtual intrusive_ptr<IShadow> GetShadow ();
    virtual intrusive_ptr<IReflectionEffect> GetReflection ();
    virtual bool GetIsLockAspectRatio ();
    virtual void SetIsLockAspectRatio (bool value);
    virtual bool GetIsPrintable ();
    virtual void SetIsPrintable (bool value);
    virtual bool GetIsLocked ();
    virtual void SetIsLocked (bool value);
    virtual CommentHAlignType GetHAlignment ();
    virtual void SetHAlignment (CommentHAlignType value);
    virtual CommentVAlignType GetVAlignment ();
    virtual void SetVAlignment (CommentVAlignType value);
    virtual TextRotationType GetTextRotation ();
    virtual void SetTextRotation (TextRotationType value);
    virtual bool GetIsTextLocked ();
    virtual void SetIsTextLocked (bool value);
private:
};
}}
