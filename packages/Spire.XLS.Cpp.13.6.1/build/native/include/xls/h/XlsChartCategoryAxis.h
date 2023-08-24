#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IChartValueAxis.h"
#include "IChartCategoryAxis.h"
#include "XlsChartAxis.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS XlsChartCategoryAxis : public virtual XlsChartAxis,public virtual IChartCategoryAxis
{
public:
    virtual bool GetIsLogScale ();
    virtual void SetIsLogScale (bool value);
    virtual double GetMaxValue ();
    virtual void SetMaxValue (double value);
    virtual double GetMinValue ();
    virtual void SetMinValue (double value);
    virtual double GetLogBase ();
    virtual void SetLogBase (double value);
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
    /*
    <summary>
        Value axis crosses at the far right category.
    </summary>
    */
    virtual bool GetIsMaxCross ();
    void SetIsMaxCross (bool value);
    /*
    <summary>
        Represents the point on the axis another axis crosses it.
    </summary>
    */
    virtual double GetCrossingPoint ();
    virtual void SetCrossingPoint (double value);
    /*
    <summary>
        Frequency of labels.
    </summary>
    */
    virtual int GetLabelFrequency ();
    virtual void SetLabelFrequency (int value);
    /*
    <summary>
        Represents the number of categories or series between tick-mark labels.
    </summary>
    */
    virtual int GetTickLabelSpacing ();
    virtual void SetTickLabelSpacing (int value);
    /*
    <summary>
        Frequency of tick marks.
    </summary>
    */
    virtual int GetTickMarksFrequency ();
    virtual void SetTickMarksFrequency (int value);
    /*
    <summary>
        Represents the number of categories or series between tick marks.
    </summary>
    */
    virtual int GetTickMarkSpacing ();
    virtual void SetTickMarkSpacing (int value);
    /*
    <summary>
        True if the value axis crosses the category axis between categories
    </summary>
    */
    virtual bool GetAxisBetweenCategories ();
    virtual void SetAxisBetweenCategories (bool value);
    /*
    <summary>
        Categories in reverse order.
    </summary>
    */
    virtual bool GetIsReverseOrder ();
    virtual void SetIsReverseOrder (bool value);
    virtual intrusive_ptr<IXLSRange> GetCategoryLabels ();
    virtual void SetCategoryLabels (intrusive_ptr<IXLSRange> value);
    /*
    <summary>
        Entered directly category labels for the chart.
    </summary>
    */
    virtual std::vector<intrusive_ptr<Object>> GetEnteredDirectlyCategoryLabels ();
    virtual void SetEnteredDirectlyCategoryLabels (std::vector<intrusive_ptr<Object>> value);
    /*
    <summary>
        Represents axis category type.
    </summary>
    */
    virtual CategoryType GetCategoryType ();
    virtual void SetCategoryType (CategoryType value);
    /*
    <summary>
        Represents distance between the labels and axis line.
            The value can be from 0 through 1000.
    </summary>
    */
    virtual int GetOffset ();
    virtual void SetOffset (int value);
    /*
    <summary>
        Represents base unit for the specified category axis.
    </summary>
    */
    virtual ChartBaseUnitType GetBaseUnit ();
    virtual void SetBaseUnit (ChartBaseUnitType value);
    /*
    <summary>
        True if use automatic base units for the specified category axis.
    </summary>
    */
    virtual bool GetBaseUnitIsAuto ();
    virtual void SetBaseUnitIsAuto (bool value);
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
        Automatic maximum selected.
    </summary>
    */
    virtual bool GetIsAutoMax ();
    virtual void SetIsAutoMax (bool value);
    /*
    <summary>
        Automatic minimum selected.
    </summary>
    */
    virtual bool GetIsAutoMin ();
    virtual void SetIsAutoMin (bool value);
    /*
    <summary>
        Value of major increment.
    </summary>
    */
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
        Represens the major unit scale value for the category axis
             when the CategoryType property is set to TimeScale.
    </summary>
    */
    virtual ChartBaseUnitType GetMajorUnitScale ();
    virtual void SetMajorUnitScale (ChartBaseUnitType value);
    /*
    <summary>
        Represens the minor unit scale value for the category axis
             when the CategoryType property is set to TimeScale.
    </summary>
    */
    virtual ChartBaseUnitType GetMinorUnitScale ();
    virtual void SetMinorUnitScale (ChartBaseUnitType value);
    /*
    <summary>
        True if bins generated by category values. otherwise False
    </summary>
    <remarks>Applies only to Histogram and Pareto charts.</remarks>
    */
    bool GetIsBinningByCategory ();
    void SetIsBinningByCategory (bool value);
    /*
    <summary>
        True if bins generated are automatic. otherwise False
    </summary>
    <remarks>Applies only to Histogram and Pareto charts.</remarks>
    */
    bool GetHasAutomaticBins ();
    void SetHasAutomaticBins (bool value);
    /*
    <summary>
        Get or set the Number of Bins in the axis
    </summary>
    <remarks>Applies only to Histogram and Pareto charts.Can be a value from 1 through 31999.</remarks>
    */
    int GetNumberOfBins ();
    void SetNumberOfBins (int value);
    /*
    <summary>
        Get or Set the number of data points in each range.
    </summary>
    <remarks>Applies only to Histogram and Pareto charts.</remarks>
    */
    double GetBinWidth ();
    void SetBinWidth (double value);
    /*
    <summary>
        Get or Set the UnderFlow Bin value
    </summary>
    <remarks>Applies only to Histogram and Pareto charts.</remarks>
    */
    double GetUnderflowBinValue ();
    void SetUnderflowBinValue (double value);
    /*
    <summary>
        Get or Set the OverFlow Bin value
    </summary>
    <remarks>Applies only to Histogram and Pareto charts.</remarks>
    */
    double GetOverflowBinValue ();
    void SetOverflowBinValue (double value);
    //virtual intrusive_ptr<XlsChartAxis> Clone (System.Object parent,System.Collections.Generic.Dictionary`2[[System.Int32, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089],[System.Int32, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089]] dicFontIndexes,System.Collections.Generic.Dictionary`2[[System.String, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089],[System.String, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089]] dicNewSheetNames);
    static int DefaultCategoryAxisId ();
    static int DefaultSecondaryCategoryAxisId ();
private:
};
}}
