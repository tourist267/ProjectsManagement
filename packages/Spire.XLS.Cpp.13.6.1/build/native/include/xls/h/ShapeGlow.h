#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "XlsObject.h"
#include "ICloneParent.h"
#include "IGlow.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS ShapeGlow : public virtual XlsObject,public virtual IGlow,public virtual ICloneParent
{
public:
    /*
    <summary>
        Gets or sets the radio of soft edge.
    </summary>
    */
    virtual int GetSoftEdge ();
    virtual void SetSoftEdge (int value);
    virtual int GetTransparency ();
    virtual void SetTransparency (int value);
    virtual int GetRadius ();
    virtual void SetRadius (int value);
    virtual intrusive_ptr<Color> GetColor ();
    virtual void SetColor (intrusive_ptr<Color> value);
    //virtual System.Object Clone (System.Object parent);
private:
};
}}
