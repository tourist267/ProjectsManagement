#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
//#include "ImageFormatType.h"
//#include "LineShapeType.h"
//#include "PrstGeomShapeType.h"
#include "IExcelApplication.h"
//#include "IShape.h"
//#include "IPictureShape.h"
//#include "IPrstGeomShape.h"
//#include "IChartShape.h"
//#include "ICheckBox.h"
//#include "IComboBoxShape.h"
//#include "ILineShape.h"
//#include "IOvalShape.h"
//#include "IRadioButton.h"
//#include "ICommentShape.h"
//#include "ITextBoxLinkShape.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS IShapes : public virtual Object,public virtual IExcelApplication
{
    friend class XlsChartShape;
public:
    virtual intrusive_ptr<IChartShape> Add ();
    /*
    <summary>
        Adds new text line to the collection.
    </summary>
    <param name="startPoint">startPoint</param>
    <param name="endPoint">endPoint</param>
    <param name="lineShapeType">lineShapeType</param>
    <returns>Newly created line.</returns>
    */
    virtual intrusive_ptr<ILineShape> AddLine (intrusive_ptr<Point> startPoint,intrusive_ptr<Point> endPoint,LineShapeType lineShapeType);
    virtual intrusive_ptr<IPictureShape> AddPicture (intrusive_ptr<Stream> image,LPCWSTR_S pictureName,ImageFormatType imageFormat);
    virtual intrusive_ptr<IPictureShape> AddPicture (LPCWSTR_S fileName);
    virtual intrusive_ptr<ICommentShape> AddComment (LPCWSTR_S commentText,bool bIsParseOptions);
    virtual intrusive_ptr<ICommentShape> AddComment (LPCWSTR_S commentText);
    virtual intrusive_ptr<ICommentShape> AddComment ();
    virtual intrusive_ptr<IShape> AddCopy (intrusive_ptr<IShape> sourceShape);
    //virtual intrusive_ptr<IShape> AddCopy (intrusive_ptr<IShape> sourceShape,System.Collections.Generic.Dictionary`2[[System.String, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089],[System.String, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089]] hashNewNames,System.Collections.Generic.List`1[[System.Int32, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089]] arrFontIndexes);
    virtual intrusive_ptr<ITextBoxLinkShape> AddTextBox ();
    /*
    <summary>
        Add new oval shape in the collection.
    </summary>
    <param name="leftcolumn">0-1000</param>
    <param name="toprow">0-1000</param>
    <param name="rightcolumn">0-1000</param>
    <param name="bottowrow">0-1000</param>
    <returns></returns>
    */
    virtual intrusive_ptr<IOvalShape> AddOval (int row,int column,int height,int width);
    virtual intrusive_ptr<IPrstGeomShape> AddPrstGeomShape (PrstGeomShapeType shapeType);
    virtual intrusive_ptr<ICheckBox> AddCheckBox ();
    virtual intrusive_ptr<IComboBoxShape> AddComboBox ();
    virtual intrusive_ptr<IRadioButton> AddRadioButton ();
    virtual int GetCount ();
    virtual intrusive_ptr<IShape> Get (int index);
    virtual intrusive_ptr<IShape> Get (LPCWSTR_S strShapeName);
private:
};
}}
