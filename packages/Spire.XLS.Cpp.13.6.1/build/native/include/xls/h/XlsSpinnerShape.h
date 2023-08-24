#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IShape.h"
#include "XlsShape.h"
#include "ISpinnerShape.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS XlsSpinnerShape : public virtual XlsShape,public virtual ISpinnerShape
{
public:
    virtual bool GetDisplay3DShading ();
    virtual void SetDisplay3DShading (bool value);
    virtual int GetCurrentValue ();
    virtual void SetCurrentValue (int value);
    virtual int GetMin ();
    virtual void SetMin (int value);
    virtual int GetMax ();
    virtual void SetMax (int value);
    virtual int GetIncrementalChange ();
    virtual void SetIncrementalChange (int value);
    virtual ExcelShapeType GetShapeType ();
    //virtual intrusive_ptr<IShape> Clone (System.Object parent,System.Collections.Generic.Dictionary`2[[System.String, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089],[System.String, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089]] hashNewNames,System.Collections.Generic.Dictionary`2[[System.Int32, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089],[System.Int32, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089]] dicFontIndexes,bool addToCollections);
private:
};
}}
