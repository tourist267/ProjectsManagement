#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IChartPageSetup.h"
#include "XlsPageSetupBase.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS XlsChartPageSetup : public virtual XlsPageSetupBase,public virtual IChartPageSetup
{
public:
    virtual bool GetFitToPagesTall ();
    virtual void SetFitToPagesTall (bool value);
    virtual bool GetFitToPagesWide ();
    virtual void SetFitToPagesWide (bool value);
    //intrusive_ptr<XlsChartPageSetup> Clone (System.Object parent);
private:
};
}}
