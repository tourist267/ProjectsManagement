#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
//#include "CommentHAlignType.h"
//#include "CommentVAlignType.h"
//#include "TextRotationType.h"
//#include "IExcelApplication.h"
//#include "IShape.h"
//#include "IHyperLink.h"
//#include "IRichTextString.h"
#include "IPrstGeomShape.h"
//#include "IShapeLineFormat.h"
#pragma warning(pop)

namespace Spire{namespace Xls{
class EXPORTS IOvalShape : public virtual IPrstGeomShape
{
    friend class IOvalShapes;
    friend class IShapes;
    friend class OvalShapeCollection;
public:
    virtual intrusive_ptr<IShapeLineFormat> GetLine ()=0;
    virtual int GetRotation ()=0;
    virtual void SetRotation (int value)=0;
    virtual intrusive_ptr<IHyperLink> GetHyLink ()=0;
    virtual CommentHAlignType GetHAlignment ()=0;
    virtual void SetHAlignment (CommentHAlignType value)=0;
    virtual CommentVAlignType GetVAlignment ()=0;
    virtual void SetVAlignment (CommentVAlignType value)=0;
    virtual TextRotationType GetTextRotation ()=0;
    virtual void SetTextRotation (TextRotationType value)=0;
    virtual bool GetIsTextLocked ()=0;
    virtual void SetIsTextLocked (bool value)=0;
    virtual intrusive_ptr<IRichTextString> GetRichText ()=0;
    virtual LPCWSTR_S GetText ()=0;
    virtual void SetText (LPCWSTR_S value)=0;
private:
};
}}
