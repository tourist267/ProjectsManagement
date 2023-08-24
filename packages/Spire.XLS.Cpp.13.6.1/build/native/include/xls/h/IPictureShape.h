#pragma once
#include "pch.h"
#pragma warning(push)
#pragma warning(disable:4250)
//#include "IExcelApplication.h"
#include "IShape.h"
//#include "IShapeFill.h"
//#include "IShapeLineFormat.h"
#pragma warning(pop)
namespace Spire{namespace Xls{
class EXPORTS IPictureShape : public virtual IShape
{
    friend class IPictures;
    friend class IShapes;
    friend class IOleObject;
    friend class XlsPicturesCollection;
public:
    virtual LPCWSTR_S GetFileName ()=0;
    virtual intrusive_ptr<Image> GetPicture ()=0;
    virtual intrusive_ptr<Color> GetColorFrom ()=0;
    virtual void SetColorFrom (intrusive_ptr<Color> value)=0;
    virtual intrusive_ptr<Color> GetColorTo ()=0;
    virtual void SetColorTo (intrusive_ptr<Color> value)=0;
    virtual intrusive_ptr<IShapeFill> GetFill ()=0;
    virtual intrusive_ptr<IShapeLineFormat> GetLine ()=0;
    virtual void Remove (bool removeImage)=0;
private:
};
}}
