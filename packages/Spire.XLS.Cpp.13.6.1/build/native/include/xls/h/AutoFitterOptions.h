#pragma once
#include "pch.h"
namespace Spire{namespace Xls{
class EXPORTS AutoFitterOptions : public virtual Object
{
public:
    AutoFitterOptions();
    /*
    <summary>
        Indicates whether auto fit row height when the cells is merged in a row.
            The default value is false.
    </summary>
    */
    bool GetAutoFitMergedCells ();
    void SetAutoFitMergedCells (bool value);
    /*
    <summary>
        Indicates whether only fit the rows which height are not customed.
            The default value is false.
    </summary>
    */
    bool GetOnlyAuto ();
    void SetOnlyAuto (bool value);
    /*
    <summary>
        Ingored the hidden rows/columns.
            The default value is false.
    </summary>
    */
    bool GetIgnoreHidden ();
    void SetIgnoreHidden (bool value);
private:
};
}}
