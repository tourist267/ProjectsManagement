#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
//#include "ExcelVersion.h"
//#include "IExcelApplication.h"
//#include "ITabSheet.h"
#include "IWorksheet.h"
//#include "XlsWorkbook.h"
#pragma warning(pop)

namespace Spire{namespace Xls{
class EXPORTS IInternalWorksheet : public virtual IWorksheet
{
    friend class XlsWorksheet;
public:
    virtual int GetDefaultPrintRowHeight ()=0;
    virtual int GetFirstRow ()=0;
    virtual void SetFirstRow (int value)=0;
    virtual int GetFirstColumn ()=0;
    virtual void SetFirstColumn (int value)=0;
    virtual int GetLastRow ()=0;
    virtual void SetLastRow (int value)=0;
    virtual int GetLastColumn ()=0;
    virtual void SetLastColumn (int value)=0;
    virtual intrusive_ptr<XlsWorkbook> GetParentWorkbook ()=0;
    virtual ExcelVersion GetVersion ()=0;
    virtual bool IsArrayFormula (long index)=0;
    //virtual intrusive_ptr<IInternalWorksheet> GetClonedObject (System.Collections.Generic.Dictionary`2[[System.String, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089],[System.String, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089]] hashNewNames,intrusive_ptr<XlsWorkbook> book)=0;
private:
};
}}
