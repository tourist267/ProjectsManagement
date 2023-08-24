#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IExcelApplication.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS IBorders : public virtual IExcelApplication
{
    friend class CellStyleObject;
    friend class IExtendedFormat;
    friend class IXLSRange;
    friend class AddtionalFormatWrapper;
    friend class StyleArrayWrapper;
    friend class XlsName;
    friend class XlsRange;
    friend class XlsRangesCollection;
public:
    virtual ExcelColors GetKnownColor ()=0;
    virtual void SetKnownColor (ExcelColors value)=0;
    virtual intrusive_ptr<Color> GetColor ()=0;
    virtual void SetColor (intrusive_ptr<Color> value)=0;
    virtual int GetCount ()=0;
    virtual intrusive_ptr<IBorder> Get (BordersLineType Index)=0;
    virtual LineStyleType GetLineStyle ()=0;
    virtual void SetLineStyle (LineStyleType value)=0;
    virtual LineStyleType GetValue ()=0;
    virtual void SetValue (LineStyleType value)=0;
private:
};
}}
