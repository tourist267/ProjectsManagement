#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
//#include "ImageFormatType.h"
#include "IExcelApplication.h"
//#include "IPictureShape.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS IPictures : public virtual IExcelApplication
{
    friend class ITabSheet;
    friend class XlsWorksheetBase;
public:
    virtual int GetCount ()=0;
    virtual intrusive_ptr<XlsBitmapShape> Get (int Index)=0;
    virtual intrusive_ptr<IPictureShape> Add (intrusive_ptr<Image> image,LPCWSTR_S pictureName)=0;
    virtual intrusive_ptr<IPictureShape> Add (intrusive_ptr<Image> image,LPCWSTR_S pictureName,ImageFormatType imageFormat)=0;
    virtual intrusive_ptr<IPictureShape> Add (LPCWSTR_S strFileName)=0;
    virtual intrusive_ptr<IPictureShape> Add (LPCWSTR_S strFileName,ImageFormatType imageFormat)=0;
    virtual intrusive_ptr<IPictureShape> Add (int topRow,int leftColumn,intrusive_ptr<Image> image)=0;
    virtual intrusive_ptr<IPictureShape> Add (int topRow,int leftColumn,intrusive_ptr<Image> image,ImageFormatType imageFormat)=0;
    virtual intrusive_ptr<IPictureShape> Add (int topRow,int leftColumn,intrusive_ptr<Stream> stream)=0;
    virtual intrusive_ptr<IPictureShape> Add (int topRow,int leftColumn,intrusive_ptr<Stream> stream,ImageFormatType imageFormat)=0;
    virtual intrusive_ptr<IPictureShape> Add (int topRow,int leftColumn,LPCWSTR_S fileName)=0;
    virtual intrusive_ptr<IPictureShape> Add (int topRow,int leftColumn,LPCWSTR_S fileName,ImageFormatType imageFormat)=0;
    virtual intrusive_ptr<IPictureShape> Add (int topRow,int leftColumn,int bottomRow,int rightColumn,intrusive_ptr<Image> image)=0;
    virtual intrusive_ptr<IPictureShape> Add (int topRow,int leftColumn,int bottomRow,int rightColumn,intrusive_ptr<Image> image,ImageFormatType imageFormat)=0;
    virtual intrusive_ptr<IPictureShape> Add (int topRow,int leftColumn,int bottomRow,int rightColumn,intrusive_ptr<Stream> stream)=0;
    virtual intrusive_ptr<IPictureShape> Add (int topRow,int leftColumn,int bottomRow,int rightColumn,intrusive_ptr<Stream> stream,ImageFormatType imageFormat)=0;
    virtual intrusive_ptr<IPictureShape> Add (int topRow,int leftColumn,int bottomRow,int rightColumn,LPCWSTR_S fileName)=0;
    virtual intrusive_ptr<IPictureShape> Add (int topRow,int leftColumn,int bottomRow,int rightColumn,LPCWSTR_S fileName,ImageFormatType imageFormat)=0;
    virtual intrusive_ptr<IPictureShape> Add (int topRow,int leftColumn,intrusive_ptr<Image> image,int scaleWidth,int scaleHeight)=0;
    virtual intrusive_ptr<IPictureShape> Add (int topRow,int leftColumn,intrusive_ptr<Image> image,int scaleWidth,int scaleHeight,ImageFormatType imageFormat)=0;
    virtual intrusive_ptr<IPictureShape> Add (int topRow,int leftColumn,intrusive_ptr<Stream> stream,int scaleWidth,int scaleHeight)=0;
    virtual intrusive_ptr<IPictureShape> Add (int topRow,int leftColumn,intrusive_ptr<Stream> stream,int scaleWidth,int scaleHeight,ImageFormatType imageFormat)=0;
    virtual intrusive_ptr<IPictureShape> Add (int topRow,int leftColumn,LPCWSTR_S fileName,int scaleWidth,int scaleHeight)=0;
    virtual intrusive_ptr<IPictureShape> Add (int topRow,int leftColumn,LPCWSTR_S fileName,int scaleWidth,int scaleHeight,ImageFormatType imageFormat)=0;
private:
};
}}
