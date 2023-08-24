#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "XlsObject.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS XlsHPageBreak : public virtual XlsObject
{
public:
    /*
    <summary>
        Gets the row index. 
    </summary>
    */
    int GetRow ();
    /*
    <summary>
        Type of the page break.
    </summary>
    */
    PageBreakType GetType ();
    void SetType (PageBreakType value);
    /*
    <summary>
        Gets the start column index of this horizontal page break
    </summary>
    */
    int GetStartColumn ();
    void SetStartColumn (int value);
    /*
    <summary>
        Gets the end column index of this horizontal page break. 
    </summary>
    */
    int GetEndColumn ();
    void SetEndColumn (int value);
    /*
    <summary>
        Returns page break extent.
    </summary>
    */
    PageBreakExtentType GetExtent ();
    //intrusive_ptr<XlsHPageBreak> Clone (System.Object parent);
private:
};
}}
