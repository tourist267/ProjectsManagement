#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IShape.h"
#include "XlsShape.h"
#include "IComboBoxShape.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS XlsComboBoxShape : public virtual XlsShape,public virtual IComboBoxShape
{
public:
    ExcelComboType GetComboType ();
    virtual LPCWSTR_S GetSelectedValue ();
    virtual bool GetDisplay3DShading ();
    virtual void SetDisplay3DShading (bool value);
    virtual int GetDropDownLines ();
    virtual void SetDropDownLines (int value);
    virtual int GetSelectedIndex ();
    virtual void SetSelectedIndex (int value);
    virtual intrusive_ptr<IXLSRange> GetListFillRange ();
    virtual void SetListFillRange (intrusive_ptr<IXLSRange> value);
    virtual ExcelShapeType GetShapeType ();
    //virtual intrusive_ptr<IShape> Clone (System.Object parent,System.Collections.Generic.Dictionary`2[[System.String, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089],[System.String, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089]] hashNewNames,System.Collections.Generic.Dictionary`2[[System.Int32, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089],[System.Int32, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089]] dicFontIndexes,bool addToCollections);
private:
};
}}
