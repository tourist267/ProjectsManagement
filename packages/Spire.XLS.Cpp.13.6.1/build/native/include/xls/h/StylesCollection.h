#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "XlsStylesCollection.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS StylesCollection : public virtual XlsStylesCollection
{
    friend class Workbook;
public:
    /*
    <summary>
        gets a object from a collection. 
    </summary>
    */
    intrusive_ptr<CellStyleObject> Get (int Index);
    /*
    <summary>
        gets a object from a collection. 
    </summary>
    */
    intrusive_ptr<CellStyleObject> Get (LPCWSTR_S name);
    /*
    <summary>
        Adds a new style.
    </summary>
    <param name="name">Style name</param>
    <returns></returns>
    */
    intrusive_ptr<CellStyle> Add (LPCWSTR_S name);
    /*
    <summary>
        Adds a style.
    </summary>
    <param name="style">Style to added.</param>
    */
    void Add (intrusive_ptr<CellStyle> style);
    void Remove (intrusive_ptr<CellStyle> style);
    /*
    <summary>
        Style which is in collection.
    </summary>
    <param name="style">Style object.</param>
    <returns></returns>
    */
    intrusive_ptr<CellStyle> Contains (intrusive_ptr<CellStyle> style);
    static bool Compare (intrusive_ptr<CellStyle> source,intrusive_ptr<CellStyle> destination);
    void Replace (intrusive_ptr<CellStyle> style);
    intrusive_ptr<CellStyle> GetDefaultStyle (LPCWSTR_S styleName);
private:
};
}}
