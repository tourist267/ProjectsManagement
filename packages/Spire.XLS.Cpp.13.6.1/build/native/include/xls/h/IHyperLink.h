#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
//#include "HyperLinkType.h"
#include "IExcelApplication.h"
//#include "IXLSRange.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS IHyperLink : public virtual IExcelApplication
{
    friend class IArcShape;
    friend class ILineShape;
    friend class IOvalShape;
    friend class IRectangleShape;
    friend class ITextBoxLinkShape;
    friend class IHyperLinks;
    friend class XlsArcShape;
    friend class XlsLineShape;
    friend class XlsOvalShape;
    friend class XlsRectangleShape;
    friend class XlsTextBoxShape;
    friend class XlsHyperLinksCollection;
public:
    virtual LPCWSTR_S GetAddress ()=0;
    virtual void SetAddress (LPCWSTR_S value)=0;
    virtual LPCWSTR_S GetName ()=0;
    virtual intrusive_ptr<IXLSRange> GetRange ()=0;
    virtual LPCWSTR_S GetScreenTip ()=0;
    virtual void SetScreenTip (LPCWSTR_S value)=0;
    virtual LPCWSTR_S GetSubAddress ()=0;
    virtual void SetSubAddress (LPCWSTR_S value)=0;
    virtual LPCWSTR_S GetTextToDisplay ()=0;
    virtual void SetTextToDisplay (LPCWSTR_S value)=0;
    virtual HyperLinkType GetType ()=0;
private:
};
}}
