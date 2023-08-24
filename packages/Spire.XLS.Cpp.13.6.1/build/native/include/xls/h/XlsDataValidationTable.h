#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "ICloneParent.h"
#include "IDataValidationTable.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS XlsDataValidationTable : public virtual Object,public virtual ICloneParent,public virtual IDataValidationTable
{
public:
    virtual intrusive_ptr<Worksheet> GetWorksheet ();
    virtual intrusive_ptr<Workbook> GetWorkbook ();
    virtual intrusive_ptr<XlsDataValidationCollection> Get (int index);
    virtual int GetShapesCount ();
    virtual intrusive_ptr<IDataValidation> FindDataValidation (long iCellIndex);
    virtual void Remove (std::vector<intrusive_ptr<Rectangle>> rectangles);
    //virtual System.Object Clone (System.Object parent);
private:
};
}}
