#pragma once
#include "pch.h"
#pragma warning(push)
#pragma warning(disable:4250)
//#include "IExcelApplication.h"
#include "IShape.h"
#pragma warning(pop)

namespace Spire{namespace Xls{
class EXPORTS IScrollBarShape : public virtual IShape
{
    friend class IScrollBarShapes;
    friend class ScrollBarCollection;
public:
    virtual bool GetDisplay3DShading ()=0;
    virtual void SetDisplay3DShading (bool value)=0;
    virtual int GetCurrentValue ()=0;
    virtual void SetCurrentValue (int value)=0;
    virtual int GetMin ()=0;
    virtual void SetMin (int value)=0;
    virtual int GetMax ()=0;
    virtual void SetMax (int value)=0;
    virtual int GetIncrementalChange ()=0;
    virtual void SetIncrementalChange (int value)=0;
    virtual int GetPageChange ()=0;
    virtual void SetPageChange (int value)=0;
    /*
    <summary>
        Warning : It's not recommend use set method,because this property decision by width and height
    </summary>
    */
    virtual bool GetIsHorizontal ()=0;
    virtual void SetIsHorizontal (bool value)=0;
private:
};
}}
