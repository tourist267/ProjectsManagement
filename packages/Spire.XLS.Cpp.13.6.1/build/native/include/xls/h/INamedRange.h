#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IExcelApplication.h"
//#include "IXLSRange.h"
//#include "IWorksheet.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS INamedRange : public virtual IExcelApplication
{
    friend class INameRanges;
public:
    virtual int GetIndex ()=0;
    virtual LPCWSTR_S GetName ()=0;
    virtual void SetName (LPCWSTR_S value)=0;
    virtual LPCWSTR_S GetNameLocal ()=0;
    virtual void SetNameLocal (LPCWSTR_S value)=0;
    virtual intrusive_ptr<IXLSRange> GetRefersToRange ()=0;
    virtual void SetRefersToRange (intrusive_ptr<IXLSRange> value)=0;
    virtual LPCWSTR_S GetValue ()=0;
    virtual void SetValue (LPCWSTR_S value)=0;
    virtual bool GetVisible ()=0;
    virtual void SetVisible (bool value)=0;
    virtual bool GetIsLocal ()=0;
    virtual LPCWSTR_S GetValueR1C1 ()=0;
    virtual intrusive_ptr<IWorksheet> GetWorksheet ()=0;
    virtual LPCWSTR_S GetScope ()=0;
    virtual void Delete ()=0;
private:
};
}}
