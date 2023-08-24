#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "ICloneParent.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS XlsChartFormatCollection : public virtual Object,public virtual ICloneParent
{
    friend class XlsChartShape;
public:
    intrusive_ptr<XlsChartFormat> Get (int index);
    bool GetIsPrimary ();
    /*
    <summary>
        Returns true if this collection is primary and contain series that need
            secondary axis.
    </summary>
    */
    bool GetNeedSecondaryAxis ();
    intrusive_ptr<XlsChartFormat> Add (intrusive_ptr<XlsChartFormat> format);
    intrusive_ptr<XlsChartFormat> Add (intrusive_ptr<XlsChartFormat> format,bool bCanReplace);
    intrusive_ptr<XlsChartFormat> FindOrAdd (intrusive_ptr<XlsChartFormat> formatToAdd);
    bool ContainsIndex (int index);
    //virtual System.Object Clone (System.Object parent);
    void SetIndex (int index,int Value);
    void UpdateIndexesAfterRemove (int removeIndex);
    void UpdateSeriesByChartGroup (int newIndex,int OldIndex);
    void UpdateFormatsOnAdding (int index);
    void UpdateFormatsOnRemoving (int index);
private:
};
}}
