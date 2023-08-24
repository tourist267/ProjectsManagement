#pragma once
#include "pch.h"

//#pragma warning(push)
//#pragma warning(disable:4250)
//#include "ExcelColors.h"
//#include "GradientColorType.h"
//#include "GradientPatternType.h"
//#include "GradientPresetType.h"
//#include "GradientStyleType.h"
//#include "GradientTextureType.h"
//#include "GradientVariantsType.h"
//#include "ShapeFillType.h"
//#include "PicStretch.h"
//#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS IShapeFill : public virtual Object
{
    friend class ExcelCommentObject;
    friend class IChartFillBorder;
    friend class IChartGridLine;
    friend class IPictureShape;
    friend class IShape;
    friend class XlsChartDropBar;
    friend class XlsChartFrameFormat;
    friend class XlsChartGridLine;
    friend class XlsChartSerieDataFormat;
    friend class XlsChartWallOrFloor;
    friend class CommentsRange;
    friend class XlsComment;
    friend class XlsShape;
public:
    virtual ShapeFillType GetFillType ()=0;
    virtual void SetFillType (ShapeFillType value)=0;
    virtual GradientStyleType GetGradientStyle ()=0;
    virtual void SetGradientStyle (GradientStyleType value)=0;
    virtual GradientVariantsType GetGradientVariant ()=0;
    virtual void SetGradientVariant (GradientVariantsType value)=0;
    virtual double GetTransparencyTo ()=0;
    virtual void SetTransparencyTo (double value)=0;
    virtual double GetTransparencyFrom ()=0;
    virtual void SetTransparencyFrom (double value)=0;
    virtual GradientColorType GetGradientColorType ()=0;
    virtual void SetGradientColorType (GradientColorType value)=0;
    virtual GradientPatternType GetPattern ()=0;
    virtual void SetPattern (GradientPatternType value)=0;
    virtual GradientTextureType GetTexture ()=0;
    virtual void SetTexture (GradientTextureType value)=0;
    virtual ExcelColors GetBackKnownColor ()=0;
    virtual void SetBackKnownColor (ExcelColors value)=0;
    virtual ExcelColors GetForeKnownColor ()=0;
    virtual void SetForeKnownColor (ExcelColors value)=0;
    virtual intrusive_ptr<Color> GetBackColor ()=0;
    virtual void SetBackColor (intrusive_ptr<Color> value)=0;
    virtual intrusive_ptr<Color> GetForeColor ()=0;
    virtual void SetForeColor (intrusive_ptr<Color> value)=0;
    virtual GradientPresetType GetPresetGradientType ()=0;
    virtual void SetPresetGradientType (GradientPresetType value)=0;
    virtual intrusive_ptr<Image> GetPicture ()=0;
    virtual LPCWSTR_S GetPictureName ()=0;
    virtual bool GetVisible ()=0;
    virtual void SetVisible (bool value)=0;
    virtual double GetGradientDegree ()=0;
    virtual void SetGradientDegree (double value)=0;
    virtual double GetTransparency ()=0;
    virtual void SetTransparency (double value)=0;
    virtual intrusive_ptr<PicStretch> GetPicStretch ()=0;
    virtual void SetPicStretch (intrusive_ptr<PicStretch> value)=0;
    virtual bool GetTile ()=0;
    virtual void SetTile (bool value)=0;
    virtual void CustomPicture (LPCWSTR_S path)=0;
    virtual void CustomPicture (intrusive_ptr<Image> im,LPCWSTR_S name)=0;
    virtual void CustomTexture (LPCWSTR_S path)=0;
    virtual void CustomTexture (intrusive_ptr<Image> im,LPCWSTR_S name)=0;
    virtual void Patterned (GradientPatternType pattern)=0;
    virtual void PresetGradient (GradientPresetType grad)=0;
    virtual void PresetGradient (GradientPresetType grad,GradientStyleType shadStyle)=0;
    virtual void PresetGradient (GradientPresetType grad,GradientStyleType shadStyle,GradientVariantsType shadVar)=0;
    virtual void PresetTextured (GradientTextureType texture)=0;
    virtual void TwoColorGradient ()=0;
    virtual void TwoColorGradient (GradientStyleType style)=0;
    virtual void TwoColorGradient (GradientStyleType style,GradientVariantsType variant)=0;
    virtual void OneColorGradient ()=0;
    virtual void OneColorGradient (GradientStyleType style)=0;
    virtual void OneColorGradient (GradientStyleType style,GradientVariantsType variant)=0;
    virtual void Solid ()=0;
private:
};
}}
