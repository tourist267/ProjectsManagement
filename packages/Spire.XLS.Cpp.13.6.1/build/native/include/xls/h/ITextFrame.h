#pragma once
#include "pch.h"

//#pragma warning(push)
//#pragma warning(disable:4250)
//#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS ITextFrame 
{
    friend class ExcelCommentObject;
    friend class IShape;
    friend class CommentsRange;
    friend class XlsShape;
public:
    virtual bool GetAutoSize ()=0;
    virtual void SetAutoSize (bool value)=0;
    virtual bool GetIsAutoMargin ()=0;
    virtual void SetIsAutoMargin (bool value)=0;
    virtual double GetLeftMarginPt ()=0;
    virtual void SetLeftMarginPt (double value)=0;
    virtual double GetRightMarginPt ()=0;
    virtual void SetRightMarginPt (double value)=0;
    virtual double GetTopMarginPt ()=0;
    virtual void SetTopMarginPt (double value)=0;
    virtual double GetBottomMarginPt ()=0;
    virtual void SetBottomMarginPt (double value)=0;
private:
};
}}
