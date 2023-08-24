#pragma once
#include "pch.h"
#pragma warning(push)
#pragma warning(disable:4250)
//#include "IExcelApplication.h"
#include "IXLSRange.h"
//#include "XlsWorkbook.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS ICombinedRange : public virtual IXLSRange
{
public:
    //virtual LPCWSTR_S GetNewRangeLocation (System.Collections.Generic.Dictionary`2[[System.String, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089],[System.String, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089]] names,System.String& strSheetName)=0;
    //virtual intrusive_ptr<IXLSRange> Clone (System.Object parent,System.Collections.Generic.Dictionary`2[[System.String, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089],[System.String, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089]] hashNewNames,intrusive_ptr<XlsWorkbook> book)=0;
    virtual void ClearConditionalFormats ()=0;
    virtual std::vector<intrusive_ptr<Rectangle>> GetRectangles ()=0;
    virtual int GetRectanglesCount ()=0;
    virtual int GetCellsCount ()=0;
    virtual LPCWSTR_S GetRangeGlobalAddress2007 ()=0;
    virtual LPCWSTR_S GetWorksheetName ()=0;
private:
};
}}
