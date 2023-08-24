#pragma once
#include "pch.h"

//#pragma warning(push)
//#pragma warning(disable:4250)
//#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS IReflectionEffect : public virtual Object
{
    friend class ExcelCommentObject;
    friend class IShape;
    friend class CommentsRange;
    friend class XlsShape;
public:
    virtual int GetBlur ()=0;
    virtual void SetBlur (int value)=0;
    virtual double GetDirection ()=0;
    virtual void SetDirection (double value)=0;
    virtual int GetDistance ()=0;
    virtual void SetDistance (int value)=0;
    virtual double GetFadeDirection ()=0;
    virtual void SetFadeDirection (double value)=0;
    virtual bool GetRotWithShape ()=0;
    virtual void SetRotWithShape (bool value)=0;
    virtual int GetSize ()=0;
    virtual void SetSize (int value)=0;
    virtual int GetTransparency ()=0;
    virtual void SetTransparency (int value)=0;
private:
};
}}
