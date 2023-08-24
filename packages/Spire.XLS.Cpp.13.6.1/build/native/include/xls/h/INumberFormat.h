#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
//#include "CellFormatType.h"
#include "IExcelApplication.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS INumberFormat : public virtual IExcelApplication
{
    friend class CellStyleObject;
    friend class IExtendedFormat;
    friend class AddtionalFormatWrapper;
    friend class StyleArrayWrapper;
public:
    virtual int GetIndex ()=0;
    virtual LPCWSTR_S GetFormatString ()=0;
    virtual CellFormatType GetFormatType ()=0;
    virtual bool GetIsFraction ()=0;
    virtual bool GetIsScientific ()=0;
    virtual bool GetIsThousandSeparator ()=0;
    virtual int GetDecimalPlaces ()=0;
private:
};
}}
