#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IChartLegendEntry.h"
#include "XlsObject.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS XlsChartLegendEntry : public virtual XlsObject,public virtual IChartLegendEntry
{
    friend class ChartLegendEntriesColl;
public:
    /*
    <summary>
        Represents index in collection.
    </summary>
    */
    int GetIndex ();
    void SetIndex (int value);
    /*
    <summary>
        Legend-entry index.
    </summary>
    */
    int GetLegendEntityIndex ();
    void SetLegendEntityIndex (int value);
    virtual intrusive_ptr<IChartTextArea> GetTextArea ();
    virtual bool GetIsDeleted ();
    virtual void SetIsDeleted (bool value);
    /*
    <summary>
        Indicates whether the legend entry has been formatted.
    </summary>
    */
    virtual bool GetIsFormatted ();
    virtual void SetIsFormatted (bool value);
    /*
    <summary>
        Display mode of the background.
    </summary>
    */
    virtual ChartBackgroundMode GetBackgroundMode ();
    virtual void SetBackgroundMode (ChartBackgroundMode value);
    void BeginUpdate ();
    void EndUpdate ();
    void Clear ();
    virtual void Delete ();
    //intrusive_ptr<XlsChartLegendEntry> Clone (System.Object parent,System.Collections.Generic.Dictionary`2[[System.Int32, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089],[System.Int32, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089]] dicIndexes,System.Collections.Generic.Dictionary`2[[System.String, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089],[System.String, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089]] dicNewSheetNames);
private:
};
}}
