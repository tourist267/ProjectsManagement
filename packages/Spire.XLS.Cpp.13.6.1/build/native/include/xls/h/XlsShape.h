#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "ICloneParent.h"
#include "IShape.h"
#include "INamedObject.h"
#include "XlsObject.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS XlsShape : public virtual XlsObject,public virtual IShape,public virtual ICloneParent,public virtual INamedObject
{
    friend class XlsHeaderFooterShapeCollection;
    friend class ShapeCollectionBase;
public:
    /*
    <summary>
        Save shape to image.
    </summary>
    <param name="fileName">Output file name.</param>
    <param name="imageFormat">Type of the image to create.</param>
    */
    void SaveToImage (LPCWSTR_S fileName,intrusive_ptr<ImageFormat> imageFormat);
    /*
    <summary>
        Save shape to image.
    </summary>
    <param name="fileStream">Output stream. It is ignored if null.</param>
    */
    void SaveToImage (intrusive_ptr<Stream> fileStream);
    /*
    <summary>
        Save shape to image.
    </summary>
    <param name="fileName">Output file name.</param>
    */
    void SaveToImage (LPCWSTR_S fileName);
    void SetTextEffect (PresetTextEffect effect,LPCWSTR_S text);
    //virtual System.Object Clone (System.Object parent);
    //virtual intrusive_ptr<IShape> Clone (System.Object parent,System.Collections.Generic.Dictionary`2[[System.String, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089],[System.String, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089]] hashNewNames,System.Collections.Generic.Dictionary`2[[System.Int32, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089],[System.Int32, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089]] dicFontIndexes,bool addToCollections);
    virtual LPCWSTR_S GetName ();
    virtual void SetName (LPCWSTR_S value);
    void ChangeLayer (ShapeLayerChangeType changeType);
    /*
    <summary>
        Height of object.
    </summary>
    */
    virtual int GetHeight ();
    virtual void SetHeight (int value);
    virtual int GetID ();
    int GetShapeId ();
    void SetShapeId (int value);
    virtual int GetLeft ();
    virtual void SetLeft (int value);
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
        Type of shape , Read Only.
    </summary>
    */
    virtual ExcelShapeType GetShapeType ();
    void SetShapeType (ExcelShapeType value);
    bool GetVmlShape ();
    void SetVmlShape (bool value);
    /*
    <summary>
        True means that is relative to original size of picture.
    </summary>
    */
    bool GetIsRelativeResize ();
    void SetIsRelativeResize (bool value);
    bool GetIsRelative ();
    void SetIsRelative (bool value);
    virtual int GetInstance ();
    bool GetIsShortVersion ();
    void SetIsShortVersion (bool value);
    int GetShapeCount ();
    virtual bool GetVisible ();
    virtual void SetVisible (bool value);
    /*
    <summary>
        Gets and sets the html string which contains data and some formattings in this shape.
    </summary>
    */
    virtual LPCWSTR_S GetHtmlString ();
    virtual void SetHtmlString (LPCWSTR_S value);
    /*
    <summary>
        Returns or sets the descriptive (alternative) text string for a Shape object when the object is saved to a Web page. Read/write String
    </summary>
    */
    virtual LPCWSTR_S GetAlternativeText ();
    virtual void SetAlternativeText (LPCWSTR_S value);
    /*
    <summary>
        Represents fill properties.
    </summary>
    */
    virtual intrusive_ptr<IShapeFill> GetFill ();
    bool GetUpdatePositions ();
    void SetUpdatePositions (bool value);
    bool GetHasFill ();
    void SetHasFill (bool value);
    bool GetHasLineFormat ();
    void SetHasLineFormat (bool value);
    /*
    <summary>
        Returns or sets if the shape flips Horizontal.false is default;
    </summary>
    */
    bool GetIsFlipH ();
    void SetIsFlipH (bool value);
    /*
    <summary>
        Returns or sets if the shape flips Vertical.false is default;
    </summary>
    */
    bool GetIsFlipV ();
    void SetIsFlipV (bool value);
    /*
    <summary>
        This shape is group shape.
    </summary>
    */
    bool GetIsGroup ();
    /*
    <summary>
        This shape is child shape of group shape.
    </summary>
    */
    bool GetIsInGroup ();
    /*
    <summary>
        Returns or sets the descriptive (alternative) text title string for a Shape object when the object is saved to a Web page. Read/write String
    </summary>
    */
    LPCWSTR_S GetAlternativeTextTitle ();
    void SetAlternativeTextTitle (LPCWSTR_S value);
    virtual LPCWSTR_S GetOnAction ();
    virtual void SetOnAction (LPCWSTR_S value);
    virtual bool GetIsLocked ();
    virtual void SetIsLocked (bool value);
    virtual bool GetIsPrintable ();
    virtual void SetIsPrintable (bool value);
    /*
    <summary>
        Specifies all possible settings for how drawing object shall be resized when the rows and columns between its start and ending anchor are resized or inserted(ComboBoxShape and CheckBoxShape and RadioButtonShape set MoveAndResize type value is invalid)
    </summary>
    */
    virtual ResizeBehaveType GetResizeBehave ();
    virtual void SetResizeBehave (ResizeBehaveType value);
    virtual bool GetIsLockAspectRatio ();
    virtual void SetIsLockAspectRatio (bool value);
    /*
    <summary>
        Bottom row.
    </summary>
    */
    int GetBottomRow ();
    void SetBottomRow (int value);
    /*
    <summary>
        Bottom row offset.
    </summary>
    */
    int GetBottomRowOffset ();
    void SetBottomRowOffset (int value);
    /*
    <summary>
        Left column.
    </summary>
    */
    int GetLeftColumn ();
    void SetLeftColumn (int value);
    /*
    <summary>
        Left column offset. 1024 means whole column offset
    </summary>
    */
    int GetLeftColumnOffset ();
    void SetLeftColumnOffset (int value);
    /*
    <summary>
        Right column.
    </summary>
    */
    int GetRightColumn ();
    void SetRightColumn (int value);
    /*
    <summary>
        Right column offset.
    </summary>
    */
    int GetRightColumnOffset ();
    void SetRightColumnOffset (int value);
    /*
    <summary>
        Top row.
    </summary>
    */
    int GetTopRow ();
    void SetTopRow (int value);
    /*
    <summary>
        Top row offset.256 means whole row offset
    </summary>
    */
    int GetTopRowOffset ();
    void SetTopRowOffset (int value);
    virtual intrusive_ptr<IShapeLineFormat> GetLine ();
    bool GetAutoSize ();
    void SetAutoSize (bool value);
    /*
    <summary>
        Returns or sets the rotation of the shape, in degrees.
    </summary>
    <value></value>
    */
    virtual int GetRotation ();
    virtual void SetRotation (int value);
    virtual intrusive_ptr<IShadow> GetShadow ();
    virtual intrusive_ptr<IGlow> GetGlow ();
    virtual intrusive_ptr<IReflectionEffect> GetReflection ();
    intrusive_ptr<IRichTextString> GetRichText ();
    virtual intrusive_ptr<IFormat3D> GetThreeD ();
    virtual bool GetIsSmartArt ();
    //virtual intrusive_ptr<ITextFrame> GetTextFrame ();
    virtual ExcelVerticalAlignment GetTextVerticalAlignment ();
    virtual void SetTextVerticalAlignment (ExcelVerticalAlignment value);
    virtual intrusive_ptr<IXLSRange> GetLinkedCell ();
    virtual void SetLinkedCell (intrusive_ptr<IXLSRange> value);
    /*
    <summary>
        Removes object.
    </summary>
    */
    virtual void Remove ();
    /*
    <summary>
        Scales the shape.
    </summary>
    <param name="scaleWidth">Width scale in percent.</param>
    <param name="scaleHeight">Height scale in percent.</param>
    */
    virtual void Scale (int scaleWidth,int scaleHeight);
    /*
    <summary>
        Save shape to image.
    </summary>
    <returns>Created image.</returns>
    */
    intrusive_ptr<Bitmap> SaveToImage ();
    /*
    <summary>
        Save shape to image.
    </summary>
    <param name="fileStream">Output stream. It is ignored if null.</param>
    <param name="imageFormat">Type of the image to create.</param>
    */
    void SaveToImage (intrusive_ptr<Stream> fileStream,intrusive_ptr<ImageFormat> imageFormat);
private:
};
}}
