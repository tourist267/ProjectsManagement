#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IShape.h"
#include "XlsShape.h"
#include "IListBox.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS XlsListBoxShape : public virtual XlsShape,public virtual IListBox
{
public:
    virtual bool GetDisplay3DShading ();
    virtual void SetDisplay3DShading (bool value);
    virtual intrusive_ptr<IXLSRange> GetLinkedCell ();
    virtual void SetLinkedCell (intrusive_ptr<IXLSRange> value);
    virtual intrusive_ptr<IXLSRange> GetListFillRange ();
    virtual void SetListFillRange (intrusive_ptr<IXLSRange> value);
    virtual int GetSelectedIndex ();
    virtual void SetSelectedIndex (int value);
    virtual SelectionType GetSelectionType ();
    virtual void SetSelectionType (SelectionType value);
    virtual ExcelShapeType GetShapeType ();
    //virtual intrusive_ptr<IShape> Clone (System.Object parent,System.Collections.Generic.Dictionary`2[[System.String, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089],[System.String, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089]] hashNewNames,System.Collections.Generic.Dictionary`2[[System.Int32, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089],[System.Int32, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089]] dicFontIndexes,bool addToCollections);
private:
};
}}
