#pragma once
#include "pch.h"

//#pragma warning(push)
//#pragma warning(disable:4250)
//#include "IDataValidation.h"
//#include "Workbook.h"
//#include "IDataValidationTable.h"
//#include "Worksheet.h"
//#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS IDataValidationCollection 
{
public:
    /*
    <summary>
        Indicates whehter prompt box has fixed position..
    </summary>
    */
    virtual bool GetIsPromptBoxPositionFixed ()=0;
    /*
    <summary>
        Indicates whehter prompt box is visible..
    </summary>
    */
    virtual bool GetIsPromptBoxVisible ()=0;
    virtual intrusive_ptr<IDataValidationTable> GetParentTable ()=0;
    /*
    <summary>
        Vertical position of the prompt box.
    </summary>
    */
    virtual int GetPromptBoxHPosition ()=0;
    virtual void SetPromptBoxHPosition (int value)=0;
    /*
    <summary>
        Vertical position of the prompt box.
    </summary>
    */
    virtual int GetPromptBoxVPosition ()=0;
    virtual void SetPromptBoxVPosition (int value)=0;
    virtual int GetShapesCount ()=0;
    virtual intrusive_ptr<IDataValidation> Get (int index)=0;
    virtual intrusive_ptr<Workbook> GetWorkbook ()=0;
    virtual intrusive_ptr<Worksheet> GetWorksheet ()=0;
    virtual void Remove (std::vector<intrusive_ptr<Rectangle>> rectangles)=0;
private:
};
}}
