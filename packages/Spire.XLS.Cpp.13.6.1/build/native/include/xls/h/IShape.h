#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
//#include "ExcelShapeType.h"
//#include "ResizeBehaveType.h"
#include "IExcelApplication.h"
//#include "IShadow.h"
//#include "IFormat3D.h"
//#include "IXLSRange.h"
//#include "IGlow.h"
//#include "IShapeFill.h"
//#include "IShapeLineFormat.h"
//#include "ITextFrame.h"
//#include "IReflectionEffect.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS IShape : public virtual IExcelApplication
{
    friend class IShapes;
    friend class XlsWorksheetBase;
    friend class XlsChartShape;
    friend class XlsArcShape;
    friend class XlsBitmapShape;
    friend class XlsButtonShape;
    friend class XlsCheckBoxShape;
    friend class XlsComboBoxShape;
    friend class XlsComment;
    friend class XlsGroupBoxShape;
    friend class XlsLabelShape;
    friend class XlsLineShape;
    friend class XlsListBoxShape;
    friend class XlsOvalShape;
    friend class XlsPrstGeomShape;
    friend class XlsRadioButtonShape;
    friend class XlsRectangleShape;
    friend class XlsScrollBarShape;
    friend class XlsShape;
    friend class XlsSpinnerShape;
    friend class XlsTextBoxShape;
    friend class ShapeCollectionBase;
public:
    virtual int GetHeight ()=0;
    virtual void SetHeight (int value)=0;
    virtual int GetID ()=0;
    virtual int GetLeft ()=0;
    virtual void SetLeft (int value)=0;
    virtual LPCWSTR_S GetName ()=0;
    virtual void SetName (LPCWSTR_S value)=0;
    virtual int GetTop ()=0;
    virtual void SetTop (int value)=0;
    virtual int GetWidth ()=0;
    virtual void SetWidth (int value)=0;
    /*
    <summary>
        Gets and sets the html string which contains data and some formattings in this shape.
    </summary>
    */
    virtual LPCWSTR_S GetHtmlString ()=0;
    virtual void SetHtmlString (LPCWSTR_S value)=0;
    virtual ExcelShapeType GetShapeType ()=0;
    virtual bool GetVisible ()=0;
    virtual void SetVisible (bool value)=0;
    virtual LPCWSTR_S GetAlternativeText ()=0;
    virtual void SetAlternativeText (LPCWSTR_S value)=0;
    virtual intrusive_ptr<IShapeFill> GetFill ()=0;
    virtual intrusive_ptr<IShapeLineFormat> GetLine ()=0;
    virtual LPCWSTR_S GetOnAction ()=0;
    virtual void SetOnAction (LPCWSTR_S value)=0;
    virtual intrusive_ptr<IShadow> GetShadow ()=0;
    virtual intrusive_ptr<IFormat3D> GetThreeD ()=0;
    virtual intrusive_ptr<IGlow> GetGlow ()=0;
    virtual intrusive_ptr<IReflectionEffect> GetReflection ()=0;
    virtual int GetRotation ()=0;
    virtual void SetRotation (int value)=0;
    /*
    <summary>
        Specifies all possible settings for how drawing object shall be resized when the rows and columns between its start and ending anchor are resized or inserted(ComboBoxShape and CheckBoxShape and RadioButtonShape set MoveAndResize type value is invalid)
    </summary>
    */
    virtual ResizeBehaveType GetResizeBehave ()=0;
    virtual void SetResizeBehave (ResizeBehaveType value)=0;
    virtual bool GetIsLocked ()=0;
    virtual void SetIsLocked (bool value)=0;
    virtual bool GetIsPrintable ()=0;
    virtual void SetIsPrintable (bool value)=0;
    virtual bool GetIsLockAspectRatio ()=0;
    virtual void SetIsLockAspectRatio (bool value)=0;
    virtual bool GetIsSmartArt ()=0;
    //virtual intrusive_ptr<ITextFrame> GetTextFrame ()=0;
    /*
    <summary>
        Gets or sets the range linked to the shape's value.
    </summary>
    */
    virtual intrusive_ptr<IXLSRange> GetLinkedCell ()=0;
    virtual void SetLinkedCell (intrusive_ptr<IXLSRange> value)=0;
    virtual void Remove ()=0;
    virtual void Scale (int scaleWidth,int scaleHeight)=0;
private:
};
}}
