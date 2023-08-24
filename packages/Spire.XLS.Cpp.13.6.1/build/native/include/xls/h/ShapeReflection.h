#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "ICloneParent.h"
#include "XlsObject.h"
#include "IReflectionEffect.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS ShapeReflection : public virtual XlsObject,public virtual IReflectionEffect,public virtual ICloneParent
{
public:
    //virtual System.Object Clone (System.Object parent);
    virtual int GetBlur ();
    virtual void SetBlur (int value);
    virtual double GetDirection ();
    virtual void SetDirection (double value);
    virtual int GetDistance ();
    virtual void SetDistance (int value);
    virtual double GetFadeDirection ();
    virtual void SetFadeDirection (double value);
    virtual bool GetRotWithShape ();
    virtual void SetRotWithShape (bool value);
    virtual int GetSize ();
    virtual void SetSize (int value);
    virtual int GetTransparency ();
    virtual void SetTransparency (int value);
private:
};
}}
