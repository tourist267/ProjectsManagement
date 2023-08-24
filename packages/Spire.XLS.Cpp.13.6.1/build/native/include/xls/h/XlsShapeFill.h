#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "XlsObject.h"
#include "IShapeFill.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS XlsShapeFill : public virtual XlsObject,public virtual IShapeFill
{
public:
    virtual intrusive_ptr<GradientStops> GetGradientStops ();
    virtual ShapeFillType GetFillType ();
    virtual void SetFillType (ShapeFillType value);
    virtual GradientStyleType GetGradientStyle ();
    virtual void SetGradientStyle (GradientStyleType value);
    virtual GradientVariantsType GetGradientVariant ();
    virtual void SetGradientVariant (GradientVariantsType value);
    virtual double GetTransparency ();
    virtual void SetTransparency (double value);
    virtual double GetTransparencyFrom ();
    virtual void SetTransparencyFrom (double value);
    virtual double GetTransparencyTo ();
    virtual void SetTransparencyTo (double value);
    virtual bool GetVisible ();
    virtual void SetVisible (bool value);
    virtual ExcelColors GetBackKnownColor ();
    virtual void SetBackKnownColor (ExcelColors value);
    virtual ExcelColors GetForeKnownColor ();
    virtual void SetForeKnownColor (ExcelColors value);
    virtual intrusive_ptr<Color> GetBackColor ();
    virtual void SetBackColor (intrusive_ptr<Color> value);
    virtual intrusive_ptr<Color> GetForeColor ();
    virtual void SetForeColor (intrusive_ptr<Color> value);
    virtual intrusive_ptr<OColor> GetBackColorObject ();
    virtual intrusive_ptr<OColor> GetForeColorObject ();
    virtual GradientColorType GetGradientColorType ();
    virtual void SetGradientColorType (GradientColorType value);
    virtual GradientTextureType GetTexture ();
    virtual void SetTexture (GradientTextureType value);
    virtual GradientPatternType GetPattern ();
    virtual void SetPattern (GradientPatternType value);
    virtual GradientPresetType GetPresetGradientType ();
    virtual void SetPresetGradientType (GradientPresetType value);
    virtual intrusive_ptr<Image> GetPicture ();
    virtual LPCWSTR_S GetPictureName ();
    virtual double GetGradientDegree ();
    virtual void SetGradientDegree (double value);
    virtual bool GetIsGradientSupported ();
    virtual void SetIsGradientSupported (bool value);
    virtual bool GetTile ();
    virtual void SetTile (bool value);
    virtual intrusive_ptr<PicStretch> GetPicStretch ();
    virtual void SetPicStretch (intrusive_ptr<PicStretch> value);
    virtual intrusive_ptr<PicTile> GetPicTile ();
    virtual void SetPicTile (intrusive_ptr<PicTile> value);
    static bool IsDoubled (GradientStyleType gradientStyle,GradientVariantsType variant);
    static bool IsInverted (GradientStyleType gradientStyle,GradientVariantsType variant);
    virtual int CompareTo (intrusive_ptr<IGradient> twin);
    virtual void CustomPicture (LPCWSTR_S path);
    virtual void CustomPicture (intrusive_ptr<Image> im,LPCWSTR_S name);
    virtual void CustomTexture (LPCWSTR_S path);
    virtual void CustomTexture (intrusive_ptr<Image> im,LPCWSTR_S name);
    virtual void Patterned (GradientPatternType pattern);
    virtual void PresetGradient (GradientPresetType grad);
    virtual void PresetGradient (GradientPresetType grad,GradientStyleType shadStyle);
    virtual void PresetGradient (GradientPresetType grad,GradientStyleType shadStyle,GradientVariantsType shadVar);
    virtual void PresetTextured (GradientTextureType texture);
    virtual void TwoColorGradient ();
    virtual void TwoColorGradient (GradientStyleType style);
    virtual void TwoColorGradient (GradientStyleType style,GradientVariantsType variant);
    virtual void OneColorGradient ();
    virtual void OneColorGradient (GradientStyleType style);
    virtual void OneColorGradient (GradientStyleType style,GradientVariantsType variant);
    virtual void Solid ();
    //virtual intrusive_ptr<XlsShapeFill> Clone (System.Object parent);
private:
};
}}
