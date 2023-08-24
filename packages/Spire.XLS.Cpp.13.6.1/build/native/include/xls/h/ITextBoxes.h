#pragma once
#include "pch.h"

//#pragma warning(push)
//#pragma warning(disable:4250)
//#include "ITextBoxLinkShape.h"
//#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS ITextBoxes : public virtual Object
{
    friend class ITabSheet;
    friend class XlsWorksheetBase;
    friend class XlsChartShape;
public:
    virtual int GetCount ()=0;
    /*
    <summary>
        Returns single item from the collection.
    </summary>
    <param name="index">Item's index to get.</param>
    <returns>Single item from the collection.</returns>
    */
    virtual intrusive_ptr<ITextBoxLinkShape> Get (int index)=0;
    virtual intrusive_ptr<ITextBoxLinkShape> Get (LPCWSTR_S name)=0;
    /*
    <summary>
        Adds new item to the collection.
    </summary>
    <param name="row">One-based row index of the top-left corner of the new item.</param>
    <param name="column">One-based column index of the top-left corner of the new item.</param>
    <param name="height">Height in pixels of the new item.</param>
    <param name="width">Width in pixels of the new item.</param>
    <returns>Newly added item.</returns>
    */
    virtual intrusive_ptr<ITextBoxLinkShape> AddTextBox (int row,int column,int height,int width)=0;
private:
};
}}
