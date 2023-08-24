#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "ICloneParent.h"
#include "IChartSeries.h"
#include "CollectionBase.h"
#include "XlsChartSerie.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS XlsChartSeries : public virtual CollectionBase<XlsChartSerie>, public virtual ICloneParent,public virtual IChartSeries
{
    friend class XlsChartSerie;
public:
    void AssignTrendDataLabel (intrusive_ptr<ChartTextArea> area);
    virtual void Remove (LPCWSTR_S serieName);
    //virtual System.Object Clone (System.Object parent);
    //intrusive_ptr<XlsChartSeries> Clone (System.Object parent,System.Collections.Generic.Dictionary`2[[System.String, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089],[System.String, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089]] hashNewNames,System.Collections.Generic.Dictionary`2[[System.Int32, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089],[System.Int32, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089]] fontIndexes);
    int FindOrderByType (ExcelChartType type);
    int GetLegendEntryOffset (int iSerIndex);
    ExcelChartType GetTypeByOrder (int order);
    virtual int GetCount();
    virtual void RemoveAt(int index);

private:
};
}}
