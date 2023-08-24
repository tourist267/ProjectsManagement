#pragma once
#include "pch.h"

//#pragma warning(push)
//#pragma warning(disable:4250)
//#include "IXLSRange.h"
//#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS ISortedRule 
{
public:
    virtual intrusive_ptr<IXLSRange> GetRange ()=0;
    virtual void SetRange (intrusive_ptr<IXLSRange> value)=0;
    virtual void SortInt (int left,int right,int columnIndex)=0;
    virtual void SortFloat (int left,int right,int columnIndex)=0;
    virtual void SortDate (int left,int right,int columnIndex)=0;
    virtual void SortString (int left,int right,int columnIndex)=0;
    virtual void SortOnTypes (int left,int right,int columnIndex)=0;
    virtual void SortIntDesc (int left,int right,int columnIndex)=0;
    virtual void SortFloatDesc (int left,int right,int columnIndex)=0;
    virtual void SortDateDesc (int left,int right,int columnIndex)=0;
    virtual void SortStringDesc (int left,int right,int columnIndex)=0;
private:
};
}}
