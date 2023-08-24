#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IAddInFunctions.h"
#include "CollectionBase.h"
#include "XlsAddInFunction.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS XlsAddInFunctionsCollection : public virtual CollectionBase<XlsAddInFunction>,public virtual IAddInFunctions
{
    friend class XlsWorkbook;
public:
    virtual intrusive_ptr<XlsAddInFunction> Get (int index);
    /*
    <summary>
        Adds new add-in function.
    </summary>
    <param name="fileName">File name.</param>
    <param name="functionName">Function name.</param>
    <returns>Index of the new function.</returns>
    */
    virtual int Add (LPCWSTR_S fileName,LPCWSTR_S functionName);
    /*
    <summary>
        Adds new add-in function.
    </summary>
    <param name="functionName">Function to add.</param>
    <returns>Index of the added function.</returns>
    */
    virtual int Add (LPCWSTR_S functionName);
    void Add (int bookIndex,int nameIndex);
    /*
    <summary>
        Removes add-in function with specified index.
    </summary>
    <param name="index">Item index to remove.</param>
    */
    void RemoveAt (int index);
    bool Contains (LPCWSTR_S workbookName);
    void CopyFrom (intrusive_ptr<XlsAddInFunctionsCollection> addinFunctions);
    virtual int GetCount();
private:
};
}}
