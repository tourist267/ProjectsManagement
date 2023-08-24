#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "CellStyleObject.h"
#include "ExcelFont.h"
#include "ExcelInterior.h"
#include "BordersCollection.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS CellStyle : public virtual CellStyleObject
{
    friend class CellRange;
    friend class Worksheet;
    friend class RangesCollection;
    friend class StylesCollection;
public:
    /*
    <summary>
        Returns a Borders collection that represents the borders of a style.
    </summary>
    */
    intrusive_ptr<IBorders> GetBorders ();
    /*
    <summary>
        Returns a Font object that represents the font of the specified object.
    </summary>
    */
    intrusive_ptr<IFont> GetFont ();
    /*
    <summary>
        Returns interior object for extended format.
    </summary>
    */
    intrusive_ptr<IInterior> GetInterior ();
    intrusive_ptr<CellStyle> clone ();
    intrusive_ptr<CellStyle> clone (intrusive_ptr<Workbook> book);
private:
};
}}
