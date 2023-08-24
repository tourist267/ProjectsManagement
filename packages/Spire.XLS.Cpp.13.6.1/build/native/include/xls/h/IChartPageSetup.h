#pragma once
#include "pch.h"
//#pragma warning(push)
//#pragma warning(disable:4250)
//#include "IExcelApplication.h"
#include "IPageSetupBase.h"
//#pragma warning(pop)

namespace Spire{
namespace Xls{
/*
    <summary>
        Represent page setup options for the chart sheet.
    </summary>
*/
class EXPORTS IChartPageSetup : public virtual IPageSetupBase
{
    friend class IChart;
    friend class XlsChart;
    friend class XlsChartShape;
public:
    /*
    <summary>
        Returns or sets the number of pages tall the worksheet will be scaled
            to when it is printed. Applies only to worksheets. Read / write Boolean.
    </summary>
    */
    virtual bool GetFitToPagesTall ()=0;
    virtual void SetFitToPagesTall (bool value)=0;
    /*
    <summary>
        Returns or sets the number of pages wide the worksheet will be scaled
            to when it is printed. Applies only to worksheets. Read / write Boolean.
    </summary>
    */
    virtual bool GetFitToPagesWide ()=0;
    virtual void SetFitToPagesWide (bool value)=0;
private:
};
}}
