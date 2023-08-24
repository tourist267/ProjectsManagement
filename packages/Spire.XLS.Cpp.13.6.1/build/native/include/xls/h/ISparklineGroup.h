#pragma once
#include "pch.h"

//#pragma warning(push)
//#pragma warning(disable:4250)
//#include "SparklineEmptyCells.h"
//#include "SparklineType.h"
//#include "SparklineCollection.h"
//#include "CellRange.h"
//#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS ISparklineGroup 
{
public:
    virtual bool GetShowHorizontalAxis ()=0;
    virtual void SetShowHorizontalAxis (bool value)=0;
    virtual bool GetIsDisplayHidden ()=0;
    virtual void SetIsDisplayHidden (bool value)=0;
    virtual bool GetPlotRightToLeft ()=0;
    virtual void SetPlotRightToLeft (bool value)=0;
    virtual bool GetShowFirstPoint ()=0;
    virtual void SetShowFirstPoint (bool value)=0;
    virtual bool GetShowLastPoint ()=0;
    virtual void SetShowLastPoint (bool value)=0;
    virtual bool GetShowLowPoint ()=0;
    virtual void SetShowLowPoint (bool value)=0;
    virtual bool GetShowHighPoint ()=0;
    virtual void SetShowHighPoint (bool value)=0;
    virtual bool GetShowNegativePoint ()=0;
    virtual void SetShowNegativePoint (bool value)=0;
    virtual bool GetShowMarkers ()=0;
    virtual void SetShowMarkers (bool value)=0;
    virtual SparklineType GetSparklineType ()=0;
    virtual void SetSparklineType (SparklineType value)=0;
    virtual bool GetIsHorizontalDateAxis ()=0;
    virtual void SetIsHorizontalDateAxis (bool value)=0;
    virtual SparklineEmptyCells GetEmptyCellsType ()=0;
    virtual void SetEmptyCellsType (SparklineEmptyCells value)=0;
    virtual intrusive_ptr<CellRange> GetHorizontalDateAxisRange ()=0;
    virtual void SetHorizontalDateAxisRange (intrusive_ptr<CellRange> value)=0;
    virtual intrusive_ptr<Color> GetHorizontalAxisColor ()=0;
    virtual void SetHorizontalAxisColor (intrusive_ptr<Color> value)=0;
    virtual intrusive_ptr<Color> GetFirstPointColor ()=0;
    virtual void SetFirstPointColor (intrusive_ptr<Color> value)=0;
    virtual intrusive_ptr<Color> GetHighPointColor ()=0;
    virtual void SetHighPointColor (intrusive_ptr<Color> value)=0;
    virtual intrusive_ptr<Color> GetLastPointColor ()=0;
    virtual void SetLastPointColor (intrusive_ptr<Color> value)=0;
    virtual double GetLineWeight ()=0;
    virtual void SetLineWeight (double value)=0;
    virtual intrusive_ptr<Color> GetLowPointColor ()=0;
    virtual void SetLowPointColor (intrusive_ptr<Color> value)=0;
    virtual intrusive_ptr<Color> GetMarkersColor ()=0;
    virtual void SetMarkersColor (intrusive_ptr<Color> value)=0;
    virtual intrusive_ptr<Color> GetNegativePointColor ()=0;
    virtual void SetNegativePointColor (intrusive_ptr<Color> value)=0;
    virtual intrusive_ptr<Color> GetSparklineColor ()=0;
    virtual void SetSparklineColor (intrusive_ptr<Color> value)=0;
    virtual intrusive_ptr<SparklineCollection> Add ()=0;
private:
};
}}
