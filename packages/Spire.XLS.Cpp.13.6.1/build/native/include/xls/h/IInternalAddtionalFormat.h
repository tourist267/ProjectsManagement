#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
//#include "LineStyleType.h"
//#include "IExcelApplication.h"
#include "IExtendedFormat.h"
//#include "OColor.h"
//#include "XlsWorkbook.h"
#pragma warning(pop)

namespace Spire{namespace Xls{
class EXPORTS IInternalAddtionalFormat : public virtual IExtendedFormat
{
public:
    virtual intrusive_ptr<OColor> GetBottomBorderColor ()=0;
    virtual intrusive_ptr<OColor> GetTopBorderColor ()=0;
    virtual intrusive_ptr<OColor> GetLeftBorderColor ()=0;
    virtual intrusive_ptr<OColor> GetRightBorderColor ()=0;
    virtual intrusive_ptr<OColor> GetDiagonalBorderColor ()=0;
    virtual LineStyleType GetLeftBorderLineStyle ()=0;
    virtual void SetLeftBorderLineStyle (LineStyleType value)=0;
    virtual LineStyleType GetRightBorderLineStyle ()=0;
    virtual void SetRightBorderLineStyle (LineStyleType value)=0;
    virtual LineStyleType GetTopBorderLineStyle ()=0;
    virtual void SetTopBorderLineStyle (LineStyleType value)=0;
    virtual LineStyleType GetBottomBorderLineStyle ()=0;
    virtual void SetBottomBorderLineStyle (LineStyleType value)=0;
    virtual LineStyleType GetDiagonalUpBorderLineStyle ()=0;
    virtual void SetDiagonalUpBorderLineStyle (LineStyleType value)=0;
    virtual LineStyleType GetDiagonalDownBorderLineStyle ()=0;
    virtual void SetDiagonalDownBorderLineStyle (LineStyleType value)=0;
    virtual bool GetDiagonalUpVisible ()=0;
    virtual void SetDiagonalUpVisible (bool value)=0;
    virtual bool GetDiagonalDownVisible ()=0;
    virtual void SetDiagonalDownVisible (bool value)=0;
    virtual void BeginUpdate ()=0;
    virtual void EndUpdate ()=0;
    virtual intrusive_ptr<XlsWorkbook> GetWorkbook ()=0;
private:
};
}}
