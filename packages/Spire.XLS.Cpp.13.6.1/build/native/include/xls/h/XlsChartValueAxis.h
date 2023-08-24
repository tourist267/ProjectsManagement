#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IChartValueAxis.h"
#include "XlsChartAxis.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS XlsChartValueAxis : public virtual XlsChartAxis,public virtual IChartValueAxis
{
public:
    /*
    <summary>
        Represents the logarithmic base. 
    </summary>
    */
    virtual double GetLogBase ();
    virtual void SetLogBase (double value);
    /*
    <summary>
        Minimum value on axis.
    </summary>
    */
    virtual double GetMinValue ();
    virtual void SetMinValue (double value);
    virtual double GetMaxValue ();
    virtual void SetMaxValue (double value);
    virtual double GetMajorUnit ();
    virtual void SetMajorUnit (double value);
    /*
    <summary>
        Value of minor increment.
    </summary>
    */
    virtual double GetMinorUnit ();
    virtual void SetMinorUnit (double value);
    /*
    <summary>
        Value of category axis crosses.
    </summary>
    */
    virtual double GetCrossValue ();
    virtual void SetCrossValue (double value);
    /*
    <summary>
        Represents the point on the axis another axis crosses it.
    </summary>
    */
    virtual double GetCrossesAt ();
    virtual void SetCrossesAt (double value);
    virtual bool GetIsAutoMin ();
    virtual void SetIsAutoMin (bool value);
    virtual bool GetIsAutoMax ();
    virtual void SetIsAutoMax (bool value);
    /*
    <summary>
        Automatic major selected.
    </summary>
    */
    virtual bool GetIsAutoMajor ();
    virtual void SetIsAutoMajor (bool value);
    /*
    <summary>
        Automatic minor selected.
    </summary>
    */
    virtual bool GetIsAutoMinor ();
    virtual void SetIsAutoMinor (bool value);
    /*
    <summary>
        Automatic category crossing point selected.
    </summary>
    */
    virtual bool GetIsAutoCross ();
    /*
    <summary>
        Logarithmic scale.
    </summary>
    */
    virtual bool GetIsLogScale ();
    virtual void SetIsLogScale (bool value);
    /*
    <summary>
        Values in reverse order.
    </summary>
    */
    virtual bool GetIsReverseOrder ();
    virtual void SetIsReverseOrder (bool value);
    virtual bool GetIsMaxCross ();
    /*
    <summary>
        Represents custom unit to display.
    </summary>
    */
    double GetDisplayUnitCustom ();
    void SetDisplayUnitCustom (double value);
    /*
    <summary>
        Returns or sets the unit label for the specified axis.
    </summary>
    */
    ChartDisplayUnitType GetDisplayUnit ();
    void SetDisplayUnit (ChartDisplayUnitType value);
    /*
    <summary>
        True if the label is displayed on the specified axis.
    </summary>
    */
    bool GetHasDisplayUnitLabel ();
    void SetHasDisplayUnitLabel (bool value);
    //virtual intrusive_ptr<XlsChartAxis> Clone (System.Object parent,System.Collections.Generic.Dictionary`2[[System.Int32, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089],[System.Int32, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089]] dicFontIndexes,System.Collections.Generic.Dictionary`2[[System.String, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089],[System.String, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089]] dicNewSheetNames);
private:
};
}}
