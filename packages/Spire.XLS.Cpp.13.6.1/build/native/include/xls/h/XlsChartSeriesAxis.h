#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IChartSeriesAxis.h"
#include "XlsChartAxis.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS XlsChartSeriesAxis : public virtual XlsChartAxis,public virtual IChartSeriesAxis
{
public:
    /*
    <summary>
        Represents the number of categories or series between tick-mark labels.
    </summary>
    */
    virtual int GetLabelsFrequency ();
    virtual void SetLabelsFrequency (int value);
    /*
    <summary>
        Represents the number of categories or series between tick-mark labels.
    </summary>
    */
    virtual int GetTickLabelSpacing ();
    virtual void SetTickLabelSpacing (int value);
    virtual int GetTickMarksFrequency ();
    virtual void SetTickMarksFrequency (int value);
    /*
    <summary>
        Represents the number of categories or series between tick marks.
    </summary>
    */
    int GetTickMarkSpacing ();
    void SetTickMarkSpacing (int value);
    /*
    <summary>
        Display categories in reverse order.
    </summary>
    */
    bool GetIsReverseOrder ();
    void SetIsReverseOrder (bool value);
    int GetCrossesAt ();
    void SetCrossesAt (int value);
    bool GetIsBetween ();
    void SetIsBetween (bool value);
    virtual double GetLogBase ();
    virtual void SetLogBase (double value);
    virtual bool GetIsLogScale ();
    virtual void SetIsLogScale (bool value);
    virtual double GetMaxValue ();
    virtual void SetMaxValue (double value);
    virtual double GetMinValue ();
    virtual void SetMinValue (double value);
    //virtual intrusive_ptr<XlsChartAxis> Clone (System.Object parent,System.Collections.Generic.Dictionary`2[[System.Int32, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089],[System.Int32, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089]] dicFontIndexes,System.Collections.Generic.Dictionary`2[[System.String, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089],[System.String, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089]] dicNewSheetNames);
    static int DefaultSeriesAxisId ();
private:
};
}}
