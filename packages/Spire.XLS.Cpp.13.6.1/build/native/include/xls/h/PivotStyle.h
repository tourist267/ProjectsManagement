#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS PivotStyle : public virtual Object
{
    friend class Workbook;
public:
    intrusive_ptr<PivotTableStyle> GetParent ();
    intrusive_ptr<ExcelFont> GetFont ();
    void SetFont (intrusive_ptr<ExcelFont> value);
    intrusive_ptr<XlsBordersCollection> GetBorders ();
    void SetBorders (intrusive_ptr<XlsBordersCollection> value);
    intrusive_ptr<XlsFill> GetFill ();
    void SetFill (intrusive_ptr<XlsFill> value);
private:
};
}}
