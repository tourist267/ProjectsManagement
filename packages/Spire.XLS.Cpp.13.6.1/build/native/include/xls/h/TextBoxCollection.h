#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "ITextBoxes.h"
#include "CollectionBase.h"
#include "XlsTextBoxShape.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS TextBoxCollection : public virtual CollectionBase<XlsTextBoxShape>,public virtual ITextBoxes
{
    friend class XlsWorksheetBase;
public:
    virtual intrusive_ptr<ITextBoxLinkShape> Get (int index);
    virtual intrusive_ptr<ITextBoxLinkShape> Get (LPCWSTR_S name);
    void AddCopy (intrusive_ptr<ITextBoxLinkShape> textboxsource);
    virtual intrusive_ptr<ITextBoxLinkShape> AddTextBox (int row,int column,int height,int width);
    void Clear ();
    virtual int GetCount();
private:
};
}}
