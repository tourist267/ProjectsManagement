#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IWorksheets.h"
#include "CollectionBase.h"
#include "XlsWorksheet.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS XlsWorksheetsCollection : public virtual CollectionBase<XlsWorksheet>, public virtual IWorksheets
{
public:
    virtual intrusive_ptr<XlsWorksheet> Get (int Index);
    virtual intrusive_ptr<IWorksheet> Get (LPCWSTR_S sheetName);
    /*
    <summary>
        Indicates whether all created range objects should be cached.
    </summary>
    */
    virtual bool GetUseRangesCache ();
    virtual void SetUseRangesCache (bool value);
    /*
    <summary>
        Toggles worksheet search algorithm when searching worksheet by name.
    </summary>
    */
    bool GetUseHashForWorksheetLookup ();
    void SetUseHashForWorksheetLookup (bool value);
    void Clear ();
    virtual intrusive_ptr<IWorksheet> Create ();
    virtual intrusive_ptr<IWorksheet> Create (LPCWSTR_S name);
    intrusive_ptr<IList<CellRange>> FindAll (LPCWSTR_S findValue,FindType flags,ExcelFindOptions findOptions);
    intrusive_ptr<IXLSRange> FindFirst (LPCWSTR_S findValue,FindType flags,ExcelFindOptions findOptions);
    virtual void Remove (intrusive_ptr<IWorksheet> sheet);
    /*
    <summary>
        Removes specified worksheet from the collection.
    </summary>
    <param name="sheetName">Name of the sheet to remove.</param>
    */
    virtual void Remove (LPCWSTR_S sheetName);
    /*
    <summary>
        Removes specified worksheet from the collection.
    </summary>
    <param name="index">Index of the sheet to remove.</param>
    */
    virtual void Remove (int index);
    /*
    <summary>
        Removes specified worksheet from the collection.
    </summary>
    <param name="index">Index of the sheet to remove.</param>
    */
    void RemoveAt (int index);
    virtual intrusive_ptr<IWorksheet> AddCopyBefore (intrusive_ptr<IWorksheet> toCopy);
    virtual intrusive_ptr<IWorksheet> AddCopyBefore (intrusive_ptr<IWorksheet> toCopy,intrusive_ptr<IWorksheet> sheetAfter);
    virtual intrusive_ptr<IWorksheet> AddCopyAfter (intrusive_ptr<IWorksheet> toCopy);
    virtual intrusive_ptr<IWorksheet> AddCopyAfter (intrusive_ptr<IWorksheet> toCopy,intrusive_ptr<IWorksheet> sheetBefore);
    bool GetIsRightToLeft ();
    void SetIsRightToLeft (bool value);
    void InnerAdd (intrusive_ptr<IWorksheet> sheet);
    void Move (int oldIndex,int newIndex);
    void UpdateSheetIndex (intrusive_ptr<XlsWorksheet> sheet,int iOldRealIndex);
    //void UpdateStringIndexes (System.Collections.Generic.List`1[[System.Int32, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089]] newIndexes);
    intrusive_ptr<IWorksheet> Add (LPCWSTR_S sheetName);
    intrusive_ptr<IWorksheet> AddCopy (int sheetIndex);
    /*
    <summary>
        Adds copy of worksheet.
    </summary>
    <param name="sheet">Worksheet to copy.</param>
    <returns>Copy of worksheet that was added.</returns>
    */
    intrusive_ptr<IWorksheet> AddCopy (intrusive_ptr<IWorksheet> sheet);
    intrusive_ptr<IWorksheet> AddCopy (intrusive_ptr<IWorksheet> sheet,WorksheetCopyType flags);
    void AddCopy (intrusive_ptr<IWorksheets> worksheets);
    void AddCopy (intrusive_ptr<IWorksheets> worksheets,WorksheetCopyType flags);
    /*
    <summary>
        Add a copy of the specified worksheet to the worksheet collection.
    </summary>
    <param name="sheetIndex">Index of the workbook that should be copied</param>
    <param name="flags">Represents copy options flags.</param>
    <returns>Returns copied sheet.</returns>
    */
    intrusive_ptr<IWorksheet> AddCopy (int sheetIndex,WorksheetCopyType flags);

    virtual int GetCount();

private:
};
}}
