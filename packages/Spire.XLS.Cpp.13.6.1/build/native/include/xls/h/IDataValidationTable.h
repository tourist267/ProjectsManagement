#pragma once
#include "pch.h"

//#pragma warning(push)
//#pragma warning(disable:4250)
//#include "IDataValidation.h"
//#include "Workbook.h"
//#include "Worksheet.h"
//#include "XlsDataValidationCollection.h"
//#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS IDataValidationTable : public virtual Object
{
    friend class IDataValidationCollection;
    friend class XlsWorksheet;
    friend class XlsDataValidationCollection;
public:
    virtual intrusive_ptr<Workbook> GetWorkbook ()=0;
    virtual intrusive_ptr<Worksheet> GetWorksheet ()=0;
    virtual int GetShapesCount ()=0;
    virtual intrusive_ptr<XlsDataValidationCollection> Get (int index)=0;
    virtual intrusive_ptr<IDataValidation> FindDataValidation (long iCellIndex)=0;
    virtual void Remove (std::vector<intrusive_ptr<Rectangle>> rectangles)=0;
private:
};
}}
