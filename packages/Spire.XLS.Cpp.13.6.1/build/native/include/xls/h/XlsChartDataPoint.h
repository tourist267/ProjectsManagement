#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IChartDataPoint.h"
#include "XlsObject.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS XlsChartDataPoint : public virtual XlsObject,public virtual IChartDataPoint
{
public:
    virtual intrusive_ptr<IChartSerieDataFormat> GetDataFormat ();
    virtual intrusive_ptr<IChartDataLabels> GetDataLabels ();
    /*
    <summary>
        Gets or sets index of the point in the points collection.
    </summary>
    */
    virtual int GetIndex ();
    virtual bool GetIsDefault ();
    bool GetHasDataLabels ();
    /*
    <summary>
         True if the data point is considered as Subtotals or Totals. otherwise False.
    </summary>
    <remarks>Applies only to Waterfall charts.</remarks>
    */
    bool GetSetAsTotal ();
    void SetSetAsTotal (bool value);
    void ClearDataFormats (intrusive_ptr<XlsChartSerieDataFormat> format);
    void CloneDataFormat (intrusive_ptr<XlsChartSerieDataFormat> serieFormat);
private:
};
}}
