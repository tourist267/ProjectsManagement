#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
//#include "ExcelColors.h"
//#include "SheetProtectionType.h"
//#include "WorksheetVisibility.h"
#include "IExcelApplication.h"
//#include "IPictures.h"
//#include "ICheckBoxes.h"
//#include "IComboBoxes.h"
//#include "IRadioButtons.h"
//#include "ITextBoxes.h"
//#include "IWorkbook.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS ITabSheet : public virtual IExcelApplication
{
    friend class ITabSheets;
    friend class XlsWorkbookObjectsCollection;
public:
    virtual ExcelColors GetTabKnownColor ()=0;
    virtual void SetTabKnownColor (ExcelColors value)=0;
    virtual intrusive_ptr<Color> GetTabColor ()=0;
    virtual void SetTabColor (intrusive_ptr<Color> value)=0;
    virtual intrusive_ptr<IPictures> GetPictures ()=0;
    virtual intrusive_ptr<IWorkbook> GetWorkbook ()=0;
    virtual bool GetIsRightToLeft ()=0;
    virtual void SetIsRightToLeft (bool value)=0;
    virtual bool GetIsSelected ()=0;
    virtual int GetTabIndex ()=0;
    virtual LPCWSTR_S GetName ()=0;
    virtual void SetName (LPCWSTR_S value)=0;
    virtual WorksheetVisibility GetVisibility ()=0;
    virtual void SetVisibility (WorksheetVisibility value)=0;
    virtual intrusive_ptr<ITextBoxes> GetTextBoxes ()=0;
    virtual intrusive_ptr<ICheckBoxes> GetCheckBoxes ()=0;
    virtual intrusive_ptr<IComboBoxes> GetComboBoxes ()=0;
    virtual intrusive_ptr<IRadioButtons> GetRadioButtons ()=0;
    virtual LPCWSTR_S GetCodeName ()=0;
    virtual void SetCodeName (LPCWSTR_S value)=0;
    virtual bool GetProtectContents ()=0;
    virtual bool GetProtectDrawingObjects ()=0;
    virtual bool GetProtectScenarios ()=0;
    virtual SheetProtectionType GetProtection ()=0;
    virtual bool GetIsPasswordProtected ()=0;
    virtual void Activate ()=0;
    virtual void Select ()=0;
    virtual void Unselect ()=0;
    virtual void Protect (LPCWSTR_S password)=0;
    virtual void Protect (LPCWSTR_S password,SheetProtectionType options)=0;
    virtual void Unprotect (LPCWSTR_S password)=0;
private:
};
}}
