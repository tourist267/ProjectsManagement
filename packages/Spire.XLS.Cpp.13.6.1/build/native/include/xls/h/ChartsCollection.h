#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "XlsChartsCollection.h"
#include "IChart.h"
#include "XlsChart.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS ChartsCollection : public virtual XlsChartsCollection
{
    friend class Workbook;
public:
    /*
    <summary>
        Gets a chart object by item index.
    </summary>
    */
    intrusive_ptr<IChart> Get (int index);
    /*
    <summary>
        Get a chart object by name.
    </summary>
    */
    intrusive_ptr<IChart> Get (LPCWSTR_S name);
    /*
    <summary>
        Adds a new chart.
    </summary>
    <returns>Created chart object.</returns>
    */
    intrusive_ptr<IChart> Add ();
    /*
    <summary>
        Add a new chart with name.
    </summary>
    <param name="name">chart name.</param>
    <returns>Created chart object.</returns>
    */
    intrusive_ptr<IChart> Add (LPCWSTR_S name);
    /*
    <summary>
        Adds chart to the collection.
    </summary>
    <param name="chart">Chart to add.</param>
    <returns>Added chart object.</returns>
    */
    intrusive_ptr<ChartSheet> Add (intrusive_ptr<ChartSheet> chart);
    /*
    <summary>
        Removes chart object from the collection.
    </summary>
    <param name="name">Name of the chart to remove.</param>
    */
    intrusive_ptr<IChart> Remove (LPCWSTR_S name);
private:
};
}}
