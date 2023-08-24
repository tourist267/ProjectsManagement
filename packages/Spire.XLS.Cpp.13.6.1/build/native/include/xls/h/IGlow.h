#pragma once
#include "pch.h"

//#pragma warning(push)
//#pragma warning(disable:4250)
//#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS IGlow : public virtual Object
{
    friend class ExcelCommentObject;
    friend class IShape;
    friend class CommentsRange;
    friend class XlsShape;
public:
    virtual intrusive_ptr<Color> GetColor ()=0;
    virtual void SetColor (intrusive_ptr<Color> value)=0;
    virtual int GetSoftEdge ()=0;
    virtual void SetSoftEdge (int value)=0;
    virtual int GetTransparency ()=0;
    virtual void SetTransparency (int value)=0;
    virtual int GetRadius ()=0;
    virtual void SetRadius (int value)=0;
private:
};
}}
