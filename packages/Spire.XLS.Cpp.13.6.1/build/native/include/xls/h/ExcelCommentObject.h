#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IExcelApplication.h"
#include "IShape.h"
#include "ITextBox.h"
#include "ITextBoxShape.h"
#include "IComment.h"
#pragma warning(pop)

namespace Spire{namespace Xls{
class EXPORTS ExcelCommentObject : public virtual Object,public virtual IComment
{
public:
    void SetCommentLocation (bool isMoveWithCell,bool isSizeWithCell);
    /*
    <summary>
        Gets or sets the author of the comment. 
    </summary>
    */
    virtual LPCWSTR_S GetAuthor ();
    virtual void SetAuthor (LPCWSTR_S value);
    /*
    <summary>
        Indicates whether the comment is visible. 
    </summary>
    */
    virtual bool GetIsVisible ();
    virtual void SetIsVisible (bool value);
    /*
    <summary>
        Gets and sets the html string which contains data and some formattings in this shape.
    </summary>
    */
    virtual LPCWSTR_S GetHtmlString ();
    virtual void SetHtmlString (LPCWSTR_S value);
    /*
    <summary>
        Row of the commented range.
    </summary>
    */
    virtual int GetRow ();
    /*
    <summary>
        Column of the commented range.
    </summary>
    */
    virtual int GetColumn ();
    virtual intrusive_ptr<IRichTextString> GetRichText ();
    virtual intrusive_ptr<IShapeLineFormat> GetLine ();
    virtual intrusive_ptr<IShapeFill> GetFill ();
    /*
    <summary>
        Comment text
    </summary>
    */
    virtual LPCWSTR_S GetText ();
    virtual void SetText (LPCWSTR_S value);
    /*
    <summary>
        Indicates whether the size of the specified object is changed automatically
            to fit text within its boundaries. Read/write Boolean.
    </summary>
    */
    virtual bool GetAutoSize ();
    virtual void SetAutoSize (bool value);
    //virtual intrusive_ptr<ITextFrame> GetTextFrame ();
    /*
    <summary>
        Specifies all possible settings for how drawing object shall be resized when the rows and columns between its start and ending anchor are resized or inserted.
    </summary>
    */
    virtual ResizeBehaveType GetResizeBehave ();
    virtual void SetResizeBehave (ResizeBehaveType value);
    virtual bool GetVisible ();
    virtual void SetVisible (bool value);
    /*
    <summary>
        Height of comment.
    </summary>
    */
    virtual int GetHeight ();
    virtual void SetHeight (int value);
    virtual CommentHAlignType GetHAlignment ();
    virtual void SetHAlignment (CommentHAlignType value);
    virtual CommentVAlignType GetVAlignment ();
    virtual void SetVAlignment (CommentVAlignType value);
    virtual TextRotationType GetTextRotation ();
    virtual void SetTextRotation (TextRotationType value);
    virtual int GetID ();
    /*
    <summary>
        Position of left
    </summary>
    */
    virtual int GetLeft ();
    virtual void SetLeft (int value);
    /*
    <summary>
        Name of object.
    </summary>
    */
    virtual LPCWSTR_S GetName ();
    virtual void SetName (LPCWSTR_S value);
    /*
    <summary>
        Top of object.
    </summary>
    */
    virtual int GetTop ();
    virtual void SetTop (int value);
    /*
    <summary>
        Width of object.
    </summary>
    */
    virtual int GetWidth ();
    virtual void SetWidth (int value);
    /*
    <summary>
        Shape type of object.
    </summary>
    */
    virtual ExcelShapeType GetShapeType ();
    void SetShapeType (ExcelShapeType value);
    virtual bool GetIsLocked ();
    virtual void SetIsLocked (bool value);
    virtual bool GetIsPrintable ();
    virtual void SetIsPrintable (bool value);
    /*
    <summary>
        Alternative text.
    </summary>
    */
    virtual LPCWSTR_S GetAlternativeText ();
    virtual void SetAlternativeText (LPCWSTR_S value);
    //virtual System.Object GetParent ();
    virtual bool GetIsTextLocked ();
    virtual void SetIsTextLocked (bool value);
    virtual bool GetIsSmartArt ();
    virtual LPCWSTR_S GetOnAction ();
    virtual void SetOnAction (LPCWSTR_S value);
    virtual bool GetIsLockAspectRatio ();
    virtual void SetIsLockAspectRatio (bool value);
    virtual intrusive_ptr<IShadow> GetShadow ();
    virtual intrusive_ptr<IGlow> GetGlow ();
    virtual intrusive_ptr<IReflectionEffect> GetReflection ();
    virtual intrusive_ptr<IFormat3D> GetThreeD ();
    /*
    <summary>
        Returns or sets the rotation of the shape, in degrees.
    </summary>
    */
    virtual int GetRotation ();
    virtual void SetRotation (int value);
    virtual intrusive_ptr<IXLSRange> GetLinkedCell ();
    virtual void SetLinkedCell (intrusive_ptr<IXLSRange> value);
    /*
    <summary>
        Removes comment.
    </summary>
    */
    virtual void Remove ();
    /*
    <summary>
        Scales all comments.
    </summary>
    <param name="scaleWidth">Width scale in percents.</param>
    <param name="scaleHeight">Height scale in percents.</param>
    */
    virtual void Scale (int scaleWidth,int scaleHeight);
private:
};
}}
