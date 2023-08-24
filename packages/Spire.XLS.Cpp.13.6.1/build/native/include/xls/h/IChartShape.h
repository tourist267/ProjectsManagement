#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
//#include "IExcelApplication.h"
#include "IChart.h"
#include "IShape.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS IChartShape : public virtual IShape,public virtual IChart
{
    friend class IChartShapes;
    friend class IShapes;
    friend class XlsWorksheetChartsCollection;
public:
    /*
    <summary>
        Top row of the chart in the worksheet.
    </summary>
    */
    virtual int GetTopRow ()=0;
    virtual void SetTopRow (int value)=0;
    /*
    <summary>
        Bottom row of the chart in the worksheet.
    </summary>
    */
    virtual int GetBottomRow ()=0;
    virtual void SetBottomRow (int value)=0;
    /*
    <summary>
        Left column of the chart in the worksheet.
    </summary>
    */
    virtual int GetLeftColumn ()=0;
    virtual void SetLeftColumn (int value)=0;
    /*
    <summary>
        Right column of the chart in the worksheet.
    </summary>
    */
    virtual int GetRightColumn ()=0;
    virtual void SetRightColumn (int value)=0;
private:
};
}}
