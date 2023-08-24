#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IPivotCache.h"
#include "XlsObject.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS XlsPivotCache : public virtual XlsObject,public virtual IPivotCache
{
public:
    virtual int GetIndex ();
    virtual DataSourceType GetSourceType ();
    virtual intrusive_ptr<IXLSRange> GetSourceRange ();
    intrusive_ptr<XlsPivotCachesCollection> GetParent ();
    /*
    <summary>
        Specifies a boolean value that indicates whether the cache is scheduled for version
            upgrade.
    </summary>
    */
    bool GetIsUpgradeOnRefresh ();
    void SetIsUpgradeOnRefresh (bool value);
    LPCWSTR_S GetRefreshedBy ();
    void SetRefreshedBy (LPCWSTR_S value);
    /*
    <summary>
        Specifies whether the cache's data source supports subqueries
    </summary>
    */
    bool GetIsSupportSubQuery ();
    void SetIsSupportSubQuery (bool value);
    /*
    <summary>
        Specifies a boolean value that indicates whether the pivot records are saved with the
            cache.
    </summary>
    */
    bool GetIsSaveData ();
    void SetIsSaveData (bool value);
    /*
    <summary>
        Specifies a boolean value that indicates whether the application will apply optimizations
            to the cache to reduce memory usage
    </summary>
    */
    bool GetIsOptimizedCache ();
    void SetIsOptimizedCache (bool value);
    /*
    <summary>
        Specifies a boolean value that indicates whether the user can refresh the cache. 
    </summary>
    */
    bool GetEnableRefresh ();
    void SetEnableRefresh (bool value);
    /*
    <summary>
        Specifies a boolean value that indicates whether the application should query and
               retrieve records asynchronously from the cache.
    </summary>
    */
    bool GetIsBackgroundQuery ();
    void SetIsBackgroundQuery (bool value);
    /*
    <summary>
        Specifies the version of the application that created the cache. This attribute is
            application-dependent.
    </summary>
    */
    int GetCreatedVersion ();
    void SetCreatedVersion (int value);
    int GetCalculatedItemIndex ();
    /*
    <summary>
        Specifies the earliest version of the application that is required to refresh the cache. 
    </summary>
    */
    int GetMinRefreshableVersion ();
    void SetMinRefreshableVersion (int value);
    /*
    <summary>
         Specifies the version of the application that last refreshed the cache. This attribute
            depends on whether the application exposes mechanisms via the user interface whereby
            the end-user can refresh the cache.
     </summary>
    */
    int GetRefreshedVersion ();
    void SetRefreshedVersion (int value);
    /*
    <summary>
        Specifies a boolean value that indicates whether the cache needs to be refreshed.
    </summary>
    */
    bool GetIsInvalidData ();
    void SetIsInvalidData (bool value);
    bool GetSupportAdvancedDrill ();
    void SetSupportAdvancedDrill (bool value);
    /*
    <summary>
        Specifies a boolean value that indicates whether the application will refresh the cache
    </summary>
    */
    bool GetIsRefreshOnLoad ();
    void SetIsRefreshOnLoad (bool value);
    bool GetNeedDataArray ();
    intrusive_ptr<DateTime> GetRefreshDate ();
    void SetRefreshDate (intrusive_ptr<DateTime> value);
    /*
    <summary>
        Contains the name of the pivot cache NamedRange
    </summary>
    */
    LPCWSTR_S GetRangeName ();
    void SetRangeName (LPCWSTR_S value);
    /*
    <summary>
        Indicates whether the pivot cache has named range
    </summary>
    */
    bool GetHasNamedRange ();
    static bool InRange (intrusive_ptr<IXLSRange> sourceRange,intrusive_ptr<XlsWorksheet> worksheet,int index,int count,bool isRow);
    //System.Object Clone (System.Object parent);
    //System.Object Clone (System.Object parent,System.Collections.Generic.Dictionary`2[[System.String, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089],[System.String, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089]] hashNewNames);
private:
};
}}
