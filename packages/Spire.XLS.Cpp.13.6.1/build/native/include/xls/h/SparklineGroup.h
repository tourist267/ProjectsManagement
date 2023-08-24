#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "ISparklineGroup.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS SparklineGroup : public virtual Object,public virtual ISparklineGroup
{
    friend class SparklineGroupCollection;
public:
    intrusive_ptr<SparklineCollection> GetSparklineList ();
    /*
    <summary>
        Indicates whether to show the sparkline horizontal axis. The horizontal axis appears if the sparkline has data that crosses the zero axis.
    </summary>
    */
    virtual bool GetShowHorizontalAxis ();
    virtual void SetShowHorizontalAxis (bool value);
    /*
    <summary>
        Indicates whether to show data in hidden rows and columns.
    </summary>
    */
    virtual bool GetIsDisplayHidden ();
    virtual void SetIsDisplayHidden (bool value);
    virtual bool GetPlotRightToLeft ();
    virtual void SetPlotRightToLeft (bool value);
    /*
    <summary>
        Indicates whether to highlight the first point of data in the sparkline group. 
    </summary>
    */
    virtual bool GetShowFirstPoint ();
    virtual void SetShowFirstPoint (bool value);
    /*
    <summary>
        Indicates whether to highlight the last point of data in the sparkline group. 
    </summary>
    */
    virtual bool GetShowLastPoint ();
    virtual void SetShowLastPoint (bool value);
    /*
    <summary>
        Indicates whether to highlight the lowest points of data in the sparkline group.
    </summary>
    */
    virtual bool GetShowLowPoint ();
    virtual void SetShowLowPoint (bool value);
    /*
    <summary>
        Indicates whether to highlight the highest points of data in the sparkline group. 
     </summary>
    */
    virtual bool GetShowHighPoint ();
    virtual void SetShowHighPoint (bool value);
    /*
    <summary>
        Indicates whether to highlight the negative values on the sparkline group with a different color or marker.
    </summary>
    */
    virtual bool GetShowNegativePoint ();
    virtual void SetShowNegativePoint (bool value);
    /*
    <summary>
        Indicates whether to highlight each point in each line sparkline in the sparkline group.  
    </summary>
    */
    virtual bool GetShowMarkers ();
    virtual void SetShowMarkers (bool value);
    /*
    <summary>
        Gets and sets the custom maximum value for the vertical axis. 
    </summary>
    */
    double GetVerticalAxisMaxValue ();
    void SetVerticalAxisMaxValue (double value);
    /*
    <summary>
        Represents the vertical axis maximum value type. 
    </summary>
    */
    SpartlineVerticalAxisType GetVerticalAxisMaxType ();
    void SetVerticalAxisMaxType (SpartlineVerticalAxisType value);
    /*
    <summary>
        Gets and sets the custom minimum value for the vertical axis. 
    </summary>
    */
    double GetVerticalAxisMinValue ();
    void SetVerticalAxisMinValue (double value);
    /*
    <summary>
        Represents the vertical axis minimum value type. 
    </summary>
    */
    SpartlineVerticalAxisType GetVerticalAxisMinValueType ();
    void SetVerticalAxisMinValueType (SpartlineVerticalAxisType value);
    /*
    <summary>
        Indicates the sparkline type of the sparkline group.
    </summary>
    */
    virtual SparklineType GetSparklineType ();
    virtual void SetSparklineType (SparklineType value);
    /*
    <summary>
        Indicates wheter represents the horizontal axis type as Dateaxis.
    </summary>
    */
    virtual bool GetIsHorizontalDateAxis ();
    virtual void SetIsHorizontalDateAxis (bool value);
    virtual SparklineEmptyCells GetEmptyCellsType ();
    virtual void SetEmptyCellsType (SparklineEmptyCells value);
    /*
    <summary>
        Represents the range that contains the date values for the sparkline data.
    </summary>
    */
    virtual intrusive_ptr<CellRange> GetHorizontalDateAxisRange ();
    virtual void SetHorizontalDateAxisRange (intrusive_ptr<CellRange> value);
    /*
    <summary>
        Gets and sets the color of the horizontal axis in the sparkline group.
    </summary>
    */
    virtual intrusive_ptr<Color> GetHorizontalAxisColor ();
    virtual void SetHorizontalAxisColor (intrusive_ptr<Color> value);
    /*
    <summary>
        Gets and sets the color of the first point of data in the sparkline group. 
    </summary>
    */
    virtual intrusive_ptr<Color> GetFirstPointColor ();
    virtual void SetFirstPointColor (intrusive_ptr<Color> value);
    /*
    <summary>
        Gets and sets the color of the highest points of data in the sparkline group. 
    </summary>
    */
    virtual intrusive_ptr<Color> GetHighPointColor ();
    virtual void SetHighPointColor (intrusive_ptr<Color> value);
    /*
    <summary>
        Gets and sets the color of the last point of data in the sparkline group.
    </summary>
    */
    virtual intrusive_ptr<Color> GetLastPointColor ();
    virtual void SetLastPointColor (intrusive_ptr<Color> value);
    /*
    <summary>
        Gets and sets the line weight in each line sparkline in the sparkline group, in the unit of points. 
    </summary>
    */
    virtual double GetLineWeight ();
    virtual void SetLineWeight (double value);
    /*
    <summary>
        Gets and sets the color of the lowest points of data in the sparkline group.
    </summary>
    */
    virtual intrusive_ptr<Color> GetLowPointColor ();
    virtual void SetLowPointColor (intrusive_ptr<Color> value);
    /*
    <summary>
        Gets and sets the color of points in each line sparkline in the sparkline group.
     </summary>
    */
    virtual intrusive_ptr<Color> GetMarkersColor ();
    virtual void SetMarkersColor (intrusive_ptr<Color> value);
    /*
    <summary>
        Gets and sets the color of the negative values on the sparkline group.
    </summary>
    */
    virtual intrusive_ptr<Color> GetNegativePointColor ();
    virtual void SetNegativePointColor (intrusive_ptr<Color> value);
    /*
    <summary>
        Gets and sets the color of the sparklines in the sparkline group. 
    </summary>
    */
    virtual intrusive_ptr<Color> GetSparklineColor ();
    virtual void SetSparklineColor (intrusive_ptr<Color> value);
    virtual intrusive_ptr<SparklineCollection> Add ();
    intrusive_ptr<SparklineCollection> Get (int index);
private:
};
}}
