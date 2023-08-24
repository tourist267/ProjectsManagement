#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "XlsObject.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS XlsVPageBreak : public virtual XlsObject
{
public:
    /*
    <summary>
        Type of the page break.
    </summary>
    */
    PageBreakType GetType ();
    void SetType (PageBreakType value);
    /*
    <summary>
        Gets the column index of the vertical page break. 
    </summary>
    */
    int GetColumn ();
    void SetColumn (int value);
    /*
    <summary>
        Gets the start row index of the vertical page break. 
    </summary>
    */
    int GetStartRow ();
    void SetStartRow (int value);
    /*
    <summary>
        Gets the end row index of the vertical page break. 
    </summary>
    */
    int GetEndRow ();
    void SetEndRow (int value);
    //intrusive_ptr<XlsVPageBreak> Clone (System.Object parent);
private:
};
}}
