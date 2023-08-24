#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "XlsChartFormatCollection.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS ChartFormatCollection : public virtual XlsChartFormatCollection
{
public:
    void Add (intrusive_ptr<ChartFormat> format);
    intrusive_ptr<ChartFormat> GetFormat (int index);
    void Remove (int index);
    /*
    <summary>
        Gets chart format.
    </summary>
    */
    intrusive_ptr<ChartFormat> Get (int index);
private:
};
}}
