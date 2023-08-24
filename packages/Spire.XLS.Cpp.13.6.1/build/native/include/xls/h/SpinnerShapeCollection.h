#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "ISpinnerShapes.h"
#include "CollectionBase.h"
#include "XlsSpinnerShape.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS SpinnerShapeCollection : public virtual CollectionBase<XlsSpinnerShape>,public virtual ISpinnerShapes
{
    friend class XlsWorksheetBase;
public:
    virtual intrusive_ptr<ISpinnerShape> Get (int index);
    virtual intrusive_ptr<ISpinnerShape> Get (LPCWSTR_S name);
    virtual intrusive_ptr<ISpinnerShape> AddSpinner (int row,int column,int height,int width);
    void AddCopy (intrusive_ptr<ISpinnerShape> source);
    void Clear ();

    virtual int GetCount();
private:
};
}}
