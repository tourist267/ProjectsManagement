#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IChartDataPoints.h"
#include "XlsObject.h"
#include "CollectionBase.h"
#include "XlsChartDataPoint.h"
//#include "../../common/h/IEnumerator.h"
//#include "../../common/h/IEnumerable.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS XlsChartDataPointsCollection : public virtual XlsObject,public virtual IEnumerable<XlsChartDataPoint>, public virtual IChartDataPoints
{
public:
    virtual intrusive_ptr<IChartDataPoint> Get (int index);
    virtual intrusive_ptr<IChartDataPoint> GetDefaultDataPoint ();
    //virtual System.Collections.IEnumerator GetEnumerator ();
    void Add (intrusive_ptr<XlsChartDataPoint> point);
    /*
    <summary>
        Removes all elements from the collection.
    </summary>
    */
    void Clear ();
    void ClearDataFormats (intrusive_ptr<XlsChartSerieDataFormat> format);
    intrusive_ptr<XlsChartSerieDataFormat> GetDefaultPointFormat ();
    //System.Object Clone (System.Object parent,intrusive_ptr<XlsWorkbook> book,System.Collections.Generic.Dictionary`2[[System.Int32, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089],[System.Int32, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089]] fontIndexes,System.Collections.Generic.Dictionary`2[[System.String, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089],[System.String, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089]] dicNewSheetNames);
    void UpdateSerieIndex ();
private:
};
}}
