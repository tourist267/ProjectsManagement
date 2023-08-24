#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "XlsChartSeries.h"
#include "ChartSerie.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS ChartSeries : public virtual XlsChartSeries
{
    friend class Chart;
    friend class ChartSheet;
public:
    //void Add (intrusive_ptr<ChartSerie> serieToAdd);
    void ClearDataFormats (intrusive_ptr<ChartSerieDataFormat> format);
    /*
    <summary>
        Returns a single Name object from a Names collection.
    </summary>
    */
    intrusive_ptr<ChartSerie> Get (int index);
    /*
    <summary>
        Returns a single Name object from a Names collection.
    </summary>
    */
    intrusive_ptr<ChartSerie> Get (LPCWSTR_S name);
    intrusive_ptr<ChartSerie> Add ();
    intrusive_ptr<ChartSerie> Add (LPCWSTR_S name);
    intrusive_ptr<ChartSerie> Add (ExcelChartType serieType);
    intrusive_ptr<ChartSerie> Add (LPCWSTR_S name,ExcelChartType serieType);
    int Add (LPCWSTR_S area,bool isVertical);
    LPCWSTR_S GetCategoryData ();
    void SetCategoryData (LPCWSTR_S value);
private:
};
}}
