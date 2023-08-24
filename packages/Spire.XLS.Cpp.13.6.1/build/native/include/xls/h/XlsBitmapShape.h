#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IShape.h"
#include "IPictureShape.h"
#include "XlsShape.h"
#include "IShapeFill.h"
#include "IShapeLineFormat.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS XlsBitmapShape : public virtual XlsShape,public virtual IPictureShape
{
public:
    virtual void Remove (bool removeImage);
    //System.UInt32 GetBlipId ();
    virtual intrusive_ptr<Color> GetColorTo ();
    virtual void SetColorTo (intrusive_ptr<Color> value);
    LPCWSTR_S GetRefRange ();
    void SetRefRange (LPCWSTR_S value);
    bool GetIsDDE ();
    void SetIsDDE (bool value);
    bool GetIsCamera ();
    void SetIsCamera (bool value);
    virtual intrusive_ptr<Color> GetColorFrom ();
    virtual void SetColorFrom (intrusive_ptr<Color> value);
    virtual LPCWSTR_S GetFileName ();
    void SetFileName (LPCWSTR_S value);
    virtual intrusive_ptr<Image> GetPicture ();
    void SetPicture (intrusive_ptr<Image> value);
    /*
    <summary>
        Compress the Picture quality for reduce file size
    </summary>
    <param name="quality">picture quality.Range is 0~100</param>
    */
    void Compress (int quality);
    int GetCropLeftOffset ();
    void SetCropLeftOffset (int value);
    int GetCropRightOffset ();
    void SetCropRightOffset (int value);
    int GetCropBottomOffset ();
    void SetCropBottomOffset (int value);
    int GetCropTopOffset ();
    void SetCropTopOffset (int value);
    LPCWSTR_S GetMacro ();
    void SetMacro (LPCWSTR_S value);
    virtual ExcelShapeType GetShapeType ();
    virtual void Dispose ();
    void SetHyperLink (LPCWSTR_S linkString,bool isExternal);
    //virtual intrusive_ptr<IShape> Clone (System.Object parent,System.Collections.Generic.Dictionary`2[[System.String, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089],[System.String, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089]] hashNewNames,System.Collections.Generic.Dictionary`2[[System.Int32, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089],[System.Int32, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089]] dicFontIndexes,bool addToCollection);

    virtual intrusive_ptr<IShapeFill> GetFill()
    {
        return XlsShape::GetFill();
    }
    virtual intrusive_ptr<IShapeLineFormat> GetLine()
    {
        return XlsShape::GetLine();
    }
private:
};
}}
