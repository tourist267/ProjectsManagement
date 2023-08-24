#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IRadioButtons.h"
#include "CollectionBase.h"
#include "XlsRadioButtonShape.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS RadioButtonCollection : public virtual CollectionBase<XlsRadioButtonShape>,public virtual IRadioButtons
{
    friend class XlsWorksheetBase;
public:
    /*
    <summary>
        Returns single item from the collection.
    </summary>
    */
    virtual intrusive_ptr<IRadioButton> Get (int index);
    /*
    <summary>
        Gets single item from the collection.
    </summary>
    */
    virtual intrusive_ptr<IRadioButton> Get (LPCWSTR_S name);
    /*
    <summary>
        Adds Option button default Dimension
    </summary>
    <returns>returns option button shape</returns>
    */
    virtual intrusive_ptr<IRadioButton> Add ();
    /*
    <summary>
        Adds the Shape with default size
    </summary>
    <param name="row">Top row for the new shape.</param>
    <param name="column">Left column for the new shape</param>
    <returns></returns>
    */
    virtual intrusive_ptr<IRadioButton> Add (int row,int column);
    /*
    <summary>
        Adds new RadioButton to the collection.
    </summary>
    <param name="row">Top row for the new shape.</param>
    <param name="column">Left column for the new shape.</param>
    <param name="height">Height in pixels of the new shape.</param>
    <param name="width">Width in pixels of the new shape.</param>
    <returns>Newly created TextBox object.</returns>
    */
    virtual intrusive_ptr<IRadioButton> Add (int row,int column,int height,int width);
    void AddCopy (intrusive_ptr<IRadioButton> source);
    void Clear ();
    static int AverageWidth ();
    static int AverageHeight ();

    virtual int GetCount();

private:
};
}}
