#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IDataValidationCollection.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS XlsDataValidationCollection : public virtual Object,public virtual IDataValidationCollection
{
    friend class IDataValidationTable;
    friend class XlsValidation;
    friend class XlsDataValidationTable;
public:
    virtual intrusive_ptr<IDataValidationTable> GetParentTable ();
    virtual intrusive_ptr<Workbook> GetWorkbook ();
    virtual intrusive_ptr<Worksheet> GetWorksheet ();
    virtual intrusive_ptr<IDataValidation> Get (int index);
    virtual int GetShapesCount ();
    /*
    <summary>
        Vertical position of the prompt box.
    </summary>
    */
    virtual int GetPromptBoxHPosition ();
    virtual void SetPromptBoxHPosition (int value);
    /*
    <summary>
        Vertical position of the prompt box.
    </summary>
    */
    virtual int GetPromptBoxVPosition ();
    virtual void SetPromptBoxVPosition (int value);
    /*
    <summary>
        Indicates whehter prompt box is visible..
    </summary>
    */
    virtual bool GetIsPromptBoxVisible ();
    void SetIsPromptBoxVisible (bool value);
    /*
    <summary>
        Indicates whehter prompt box has fixed position..
    </summary>
    */
    virtual bool GetIsPromptBoxPositionFixed ();
    void SetIsPromptBoxPositionFixed (bool value);
    virtual void Remove (std::vector<intrusive_ptr<Rectangle>> rectangles);
private:
};
}}
