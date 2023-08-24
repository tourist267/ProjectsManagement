#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "ImageFormatType.h"
#include "XlsPicturesCollection.h"
#include "ExcelPicture.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS PicturesCollection : public virtual XlsPicturesCollection
{
    friend class Worksheet;
    friend class XlsWorksheetBase;
public:
    intrusive_ptr<XlsBitmapShape> Get (int Index);
    //intrusive_ptr<ExcelPicture> Add (intrusive_ptr<Image> image,LPCWSTR_S pictureName);
    //intrusive_ptr<ExcelPicture> Add (intrusive_ptr<Image> image,LPCWSTR_S pictureName,ImageFormatType imageFormat);
    /*
    <summary>
        Adds picture from the specified file.
    </summary>
    <param name="fileName">File name.</param>
    <returns>Added picture.</returns>
    */
    intrusive_ptr<IPictureShape> Add (LPCWSTR_S fileName);
    /*
    <summary>
        Adds picture from the specified file.
    </summary>
    <param name="strFileName">File name.</param>
    <param name="imageFormat">Image format.</param>
    <returns>Added picture.</returns>
    */
    intrusive_ptr<IPictureShape> Add (LPCWSTR_S fileName,ImageFormatType imageFormat);
    //intrusive_ptr<ExcelPicture> Add (int topRow,int leftColumn,intrusive_ptr<Image> image);
    //intrusive_ptr<ExcelPicture> Add (int topRow,int leftColumn,intrusive_ptr<Image> image,ImageFormatType imageFormat);
    /*
    <summary>
        Adds image to the collection.
    </summary>
    <param name="topRow">Top row of a new picture.</param>
    <param name="leftColumn">Left column.</param>
    <param name="stream">Stream object.</param>
    <returns>Added picture.</returns>
    */
    intrusive_ptr<IPictureShape> Add (int topRow,int leftColumn,intrusive_ptr<Stream> stream);
    /*
    <summary>
        Adds image to the collection.
    </summary>
    <param name="topRow">Top row of a new picture.</param>
    <param name="leftColumn">Left column.</param>
    <param name="stream">Stream with the picture.</param>
    <param name="imageFormat">Image format.</param>
    <returns>Added picture.</returns>
    */
    intrusive_ptr<IPictureShape> Add (int topRow,int leftColumn,intrusive_ptr<Stream> stream,ImageFormatType imageFormat);
    /*
    <summary>
        Adds image to the collection.
    </summary>
    <param name="topRow">Top row of a new picture.</param>
    <param name="leftColumn">Left column.</param>
    <param name="fileName">File name.</param>
    <returns>Added picture.</returns>
    */
    intrusive_ptr<IPictureShape> Add (int topRow,int leftColumn,LPCWSTR_S fileName);
    /*
    <summary>
        Adds image to the collection.
    </summary>
    <param name="topRow">Top row of a new picture.</param>
    <param name="leftColumn">Left column.</param>
    <param name="fileName">File name.</param>
    <param name="imageFormat">Image format.</param>
    <returns>Added picture.</returns>
    */
    intrusive_ptr<IPictureShape> Add (int topRow,int leftColumn,LPCWSTR_S fileName,ImageFormatType imageFormat);
    //intrusive_ptr<ExcelPicture> Add (int topRow,int leftColumn,int bottomRow,int rightColumn,intrusive_ptr<Image> image);
    intrusive_ptr<ExcelPicture> AddLinkPic (int topRow,int leftColumn,int height,int width,LPCWSTR_S linktarget);
    //intrusive_ptr<ExcelPicture> Add (int topRow,int leftColumn,int bottomRow,int rightColumn,intrusive_ptr<Image> image,ImageFormatType imageFormat);
    /*
    <summary>
        Adds image to the collection.
    </summary>
    <param name="topRow">Top row of a new picture.</param>
    <param name="leftColumn">Left column.</param>
    <param name="bottomRow">Bottom row.</param>
    <param name="rightColumn">Right column.</param>
    <param name="stream">Stream.</param>
    <returns>Added picture.</returns>
    */
    intrusive_ptr<IPictureShape> Add (int topRow,int leftColumn,int bottomRow,int rightColumn,intrusive_ptr<Stream> stream);
    /*
    <summary>
        Adds image to the collection.
    </summary>
    <param name="topRow">Top row of a new picture.</param>
    <param name="leftColumn">Left column.</param>
    <param name="bottomRow">Bottom row.</param>
    <param name="rightColumn">Right column.</param>
    <param name="stream">Stream with the picture.</param>
    <param name="imageFormat">Image format.</param>
    <returns>Added picture.</returns>
    */
    intrusive_ptr<IPictureShape> Add (int topRow,int leftColumn,int bottomRow,int rightColumn,intrusive_ptr<Stream> stream,ImageFormatType imageFormat);
    /*
    <summary>
        Adds image to the collection.
    </summary>
    <param name="topRow">Top row of a new picture.</param>
    <param name="leftColumn">Left column.</param>
    <param name="bottomRow">Bottom row.</param>
    <param name="rightColumn">Right column.</param>
    <param name="fileName">File name.</param>
    <returns>Added picture.</returns>
    */
    intrusive_ptr<IPictureShape> Add (int topRow,int leftColumn,int bottomRow,int rightColumn,LPCWSTR_S fileName);
    /*
    <summary>
        Adds image to the collection.
    </summary>
    <param name="topRow">Top row of a new picture.</param>
    <param name="leftColumn">Left column.</param>
    <param name="bottomRow">Bottom row.</param>
    <param name="rightColumn">Right column.</param>
    <param name="fileName">File name.</param>
    <param name="imageFormat">Image format.</param>
    <returns>Added picture.</returns>
    */
    intrusive_ptr<IPictureShape> Add (int topRow,int leftColumn,int bottomRow,int rightColumn,LPCWSTR_S fileName,ImageFormatType imageFormat);
    //intrusive_ptr<ExcelPicture> Add (int topRow,int leftColumn,intrusive_ptr<Image> image,int scaleWidth,int scaleHeight);
    //intrusive_ptr<ExcelPicture> Add (int topRow,int leftColumn,intrusive_ptr<Image> image,int scaleWidth,int scaleHeight,ImageFormatType imageFormat);
    /*
    <summary>
        Adds image to the collection.
    </summary>
    <param name="topRow">Top row of a new picture.</param>
    <param name="leftColumn">Left column.</param>
    <param name="stream">Stream with the picture.</param>
    <param name="scaleWidth">Width scale in percents.</param>
    <param name="scaleHeight">Height scale in percents.</param>
    <returns>Added picture.</returns>
    */
    intrusive_ptr<IPictureShape> Add (int topRow,int leftColumn,intrusive_ptr<Stream> stream,int scaleWidth,int scaleHeight);
    /*
    <summary>
        Adds image to the collection.
    </summary>
    <param name="topRow">Top row of a new picture.</param>
    <param name="leftColumn">Left column.</param>
    <param name="stream">Stream with the picture.</param>
    <param name="scaleWidth">Width scale in percents.</param>
    <param name="scaleHeight">Height scale in percents.</param>
    <param name="imageFormat">Image format.</param>
    <returns>Added picture.</returns>
    */
    intrusive_ptr<IPictureShape> Add (int topRow,int leftColumn,intrusive_ptr<Stream> stream,int scaleWidth,int scaleHeight,ImageFormatType imageFormat);
    /*
    <summary>
        Adds image to the collection.
    </summary>
    <param name="topRow">Top row of a new picture.</param>
    <param name="leftColumn">Left column.</param>
    <param name="fileName">File name.</param>
    <param name="scaleWidth">Width scale in percents.</param>
    <param name="scaleHeight">Height scale in percents.</param>
    <returns>Added picture.</returns>
    */
    intrusive_ptr<IPictureShape> Add (int topRow,int leftColumn,LPCWSTR_S fileName,int scaleWidth,int scaleHeight);
    /*
    <summary>
        Adds image to the collection.
    </summary>
    <param name="topRow">Top row of a new picture.</param>
    <param name="leftColumn">Left column.</param>
    <param name="fileName">Name of the shape.</param>
    <param name="scaleWidth">Width scale in percents.</param>
    <param name="scaleHeight">Height scale in percents.</param>
    <param name="imageFormat">Image format to use for picture storing.</param>
    <returns>Added picture.</returns>
    */
    intrusive_ptr<IPictureShape> Add (int topRow,int leftColumn,LPCWSTR_S fileName,int scaleWidth,int scaleHeight,ImageFormatType imageFormat);
private:
};
}}
