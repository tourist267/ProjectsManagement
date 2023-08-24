#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IPictures.h"
#include "CollectionBase.h"
#include "XlsBitmapShape.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS XlsPicturesCollection : public virtual CollectionBase<XlsBitmapShape>,public virtual IPictures
{
public:
    virtual intrusive_ptr<IPictureShape> Add (intrusive_ptr<Image> image,LPCWSTR_S pictureName);
    virtual intrusive_ptr<IPictureShape> Add (intrusive_ptr<Image> image,LPCWSTR_S pictureName,ImageFormatType imageFormat);
    virtual intrusive_ptr<IPictureShape> Add (LPCWSTR_S strFileName);
    virtual intrusive_ptr<IPictureShape> Add (LPCWSTR_S strFileName,ImageFormatType imageFormat);
    virtual intrusive_ptr<IPictureShape> Add (int topRow,int leftColumn,intrusive_ptr<Image> image);
    virtual intrusive_ptr<IPictureShape> Add (int topRow,int leftColumn,intrusive_ptr<Image> image,ImageFormatType imageFormat);
    virtual intrusive_ptr<IPictureShape> Add (int topRow,int leftColumn,intrusive_ptr<Stream> stream);
    virtual intrusive_ptr<IPictureShape> Add (int topRow,int leftColumn,intrusive_ptr<Stream> stream,ImageFormatType imageFormat);
    virtual intrusive_ptr<IPictureShape> Add (int topRow,int leftColumn,LPCWSTR_S fileName);
    virtual intrusive_ptr<IPictureShape> Add (int topRow,int leftColumn,LPCWSTR_S fileName,ImageFormatType imageFormat);
    virtual intrusive_ptr<IPictureShape> Add (int topRow,int leftColumn,int bottomRow,int rightColumn,intrusive_ptr<Image> image);
    intrusive_ptr<IPictureShape> AddLinkPic (int topRow,int leftColumn,int height,int width,LPCWSTR_S linktarget);
    virtual intrusive_ptr<IPictureShape> Add (int topRow,int leftColumn,int bottomRow,int rightColumn,intrusive_ptr<Image> image,ImageFormatType imageFormat);
    virtual intrusive_ptr<IPictureShape> Add (int topRow,int leftColumn,int bottomRow,int rightColumn,intrusive_ptr<Stream> stream);
    virtual intrusive_ptr<IPictureShape> Add (int topRow,int leftColumn,int bottomRow,int rightColumn,intrusive_ptr<Stream> stream,ImageFormatType imageFormat);
    virtual intrusive_ptr<IPictureShape> Add (int topRow,int leftColumn,int bottomRow,int rightColumn,LPCWSTR_S fileName);
    virtual intrusive_ptr<IPictureShape> Add (int topRow,int leftColumn,int bottomRow,int rightColumn,LPCWSTR_S fileName,ImageFormatType imageFormat);
    virtual intrusive_ptr<IPictureShape> Add (int topRow,int leftColumn,intrusive_ptr<Image> image,int scaleWidth,int scaleHeight);
    virtual intrusive_ptr<IPictureShape> Add (int topRow,int leftColumn,intrusive_ptr<Image> image,int scaleWidth,int scaleHeight,ImageFormatType imageFormat);
    virtual intrusive_ptr<IPictureShape> Add (int topRow,int leftColumn,intrusive_ptr<Stream> stream,int scaleWidth,int scaleHeight);
    virtual intrusive_ptr<IPictureShape> Add (int topRow,int leftColumn,intrusive_ptr<Stream> stream,int scaleWidth,int scaleHeight,ImageFormatType imageFormat);
    virtual intrusive_ptr<IPictureShape> Add (int topRow,int leftColumn,LPCWSTR_S fileName,int scaleWidth,int scaleHeight);
    virtual intrusive_ptr<IPictureShape> Add (int topRow,int leftColumn,LPCWSTR_S fileName,int scaleWidth,int scaleHeight,ImageFormatType imageFormat);
    void Clear ();
    virtual int GetCount();
    virtual intrusive_ptr<XlsBitmapShape> Get(int Index);
private:
};
}}
