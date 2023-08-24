#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IShapeFill.h"
#include "XlsShapeFill.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS XlsChartFill : public virtual XlsShapeFill
{
public:
    virtual intrusive_ptr<GradientStops> GetGradientStops ();
    virtual ShapeFillType GetFillType ();
    virtual void SetFillType (ShapeFillType value);
    virtual GradientStyleType GetGradientStyle ();
    virtual void SetGradientStyle (GradientStyleType value);
    virtual GradientVariantsType GetGradientVariant ();
    virtual void SetGradientVariant (GradientVariantsType value);
    virtual double GetTransparencyTo ();
    virtual void SetTransparencyTo (double value);
    virtual double GetTransparencyFrom ();
    virtual void SetTransparencyFrom (double value);
    virtual GradientColorType GetGradientColorType ();
    virtual void SetGradientColorType (GradientColorType value);
    virtual GradientPatternType GetPattern ();
    virtual void SetPattern (GradientPatternType value);
    virtual GradientTextureType GetTexture ();
    virtual void SetTexture (GradientTextureType value);
    virtual intrusive_ptr<OColor> GetBackColorObject ();
    virtual intrusive_ptr<OColor> GetForeColorObject ();
    virtual ExcelColors GetBackKnownColor ();
    virtual void SetBackKnownColor (ExcelColors value);
    virtual ExcelColors GetForeKnownColor ();
    virtual void SetForeKnownColor (ExcelColors value);
    virtual intrusive_ptr<Color> GetBackColor ();
    virtual void SetBackColor (intrusive_ptr<Color> value);
    virtual intrusive_ptr<Color> GetForeColor ();
    virtual void SetForeColor (intrusive_ptr<Color> value);
    virtual GradientPresetType GetPresetGradientType ();
    virtual void SetPresetGradientType (GradientPresetType value);
    virtual intrusive_ptr<Image> GetPicture ();
    virtual LPCWSTR_S GetPictureName ();
    virtual bool GetVisible ();
    virtual void SetVisible (bool value);
    virtual double GetGradientDegree ();
    virtual void SetGradientDegree (double value);
    virtual double GetTransparency ();
    virtual void SetTransparency (double value);
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
    //static System.Drawing.Imaging.MetafileFrameUnit GetMetaUnit (System.Drawing.GraphicsUnit unit);
    //static intrusive_ptr<Stream> SerializeMetafile (intrusive_ptr<Image> picture);
    virtual intrusive_ptr<PicStretch> GetPicStretch ();
    virtual void SetPicStretch (intrusive_ptr<PicStretch> value);
    virtual bool GetTile ();
    virtual void SetTile (bool value);
private:
};
}}
