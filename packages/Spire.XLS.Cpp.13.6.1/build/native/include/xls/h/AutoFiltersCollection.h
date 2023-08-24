#pragma once
#include "pch.h"
#pragma warning(push)
#pragma warning(disable:4250)
#include "XlsAutoFiltersCollection.h"
#include "CellRange.h"
#pragma warning(pop)
namespace Spire{namespace Xls{
class EXPORTS AutoFiltersCollection : public virtual XlsAutoFiltersCollection
{
    friend class Worksheet;
    friend class IListObject;
public:
    /*
    <summary>
        Returns parent worksheet. Read-only.
    </summary>
    */
    intrusive_ptr<Worksheet> GetWorksheet ();
    /*
    <summary>
        Get auto filter item..
    </summary>
    */
    //intrusive_ptr<IAutoFilter> Get (int columnIndex);
    /*
    <summary>
        Range to be filtered.
    </summary>
    */
    virtual intrusive_ptr<IXLSRange> GetRange ();
    void SetRange (intrusive_ptr<CellRange> value);
    /*
    <summary>
        Filter the data.
    </summary>
    */
    void Filter ();
    /*
    <summary>
        Gets all hidden rows's indexes. 
    </summary>
    <param name="hideRows">If true, hide the filtered rows. </param>
    <returns>Returns all hidden rows indexes. </returns>
    */
    std::vector<int> Filter (bool hideRows);
    /*
    <summary>
        Adds a filter for a filter column.
    </summary>
    <param name="column">The column field on which you want to base the filter . for exapmle: sheet.AutoFilters[0]
    </param>
    <param name="criteria">The specified criteria (a string; for example, "hello"). 
            It only can be null or be one of the cells' value in this column.
    </param>
    */
    void AddFilter (int columnIndex,LPCWSTR_S criteria);
    void AddFilter (intrusive_ptr<IAutoFilter> column,LPCWSTR_S criteria);
    /*
    <summary>
        Adds a date filter for a filter column.
    </summary>
    <param name="column">The column field on which you want to base the filter . for exapmle: sheet.AutoFilters[0]
    </param>
    <param name="dateTimeGroupingType">
  <see cref="T:Spire.Xls.Core.Spreadsheet.AutoFilter.DateTimeGroupingType" />
</param>
    <param name="year">The year.</param>
    <param name="month">The month.</param>
    <param name="day">The day.</param>
    <param name="hour">The hour.</param>
    <param name="minute">The minute.</param>
    <param name="second">The second.</param>
<remarks>
            If DateTimeGroupingType is Year, only the param year effects.
            If DateTiemGroupingType is Month, only the param year and month effect.
            and so on.
            </remarks>
    */
    void AddDateFilter (int columnIndex,DateTimeGroupingType dateTimeGroupingType,int year,int month,int day,int hour,int minute,int second);
    /*
    <summary>
        Removes a date filter.
    </summary>
    <param name="column">The column field on which you want to base the filter . for exapmle: sheet.AutoFilters[0]
    </param>
    <param name="dateTimeGroupingType">
  <see cref="T:Spire.Xls.Core.Spreadsheet.AutoFilter.DateTimeGroupingType" />
</param>
    <param name="year">The year.</param>
    <param name="month">The month.</param>
    <param name="day">The day.</param>
    <param name="hour">The hour.</param>
    <param name="minute">The minute.</param>
    <param name="second">The second.</param>
<remarks>
            If DateTimeGroupingType is Year, only the param year effects.
            If DateTiemGroupingType is Month, only the param year and month effect.
            </remarks>
    */
    void RemoveDateFilter (int columnIndex,DateTimeGroupingType dateTimeGroupingType,int year,int month,int day,int hour,int minute,int second);
    /*
    <summary>
        Removes a filter for a filter column.
    </summary>
    <param name="column">The column field on which you want to base the filter . for exapmle: sheet.AutoFilters[0]
    </param>
    <param name="criteria">The specified criteria (a string; for example, "hello"). 
            It only can be null or be one of the cells' value in this column.
    </param>
    */
    void RemoveFilter (int columnIndex,LPCWSTR_S criteria);
    /*
    <summary>
        Filters a list with specified criteria.
    </summary>
    <param name="column">The column field on which you want to base the filter . for exapmle: sheet.AutoFilters[0]
    </param>
    <param name="criteria">The specified criteria (a string; for example, "hello"). </param>
<remarks>
            will remove all other filter setting on this field as Ms Excel 97-2003.
            </remarks>
    */
    void QuickFilter (int columnIndex,LPCWSTR_S criteria);
    void QuickFilter (intrusive_ptr<IAutoFilter> column,LPCWSTR_S criteria);
    /*
    <summary>
        Adds a dynamic filter.
    </summary>
    <param name="column">The column field on which you want to base the filter. for exapmle: sheet.AutoFilters[0]</param>
    <param name="dynamicFilterType">Dynamic filter type.</param>
    */
    void DynamicFilter (int columnIndex,DynamicFilterType dynamicFilterType);
    /*
    <summary>
        Adds a font color filter.
    </summary>
    <param name="column">The column field on which you want to base the filter. for exapmle: sheet.AutoFilters[0]</param>
    <param name="color">Font Color.</param>
    */
    void AddFontColorFilter (int columnIndex,intrusive_ptr<Color> color);
    /*
    <summary>
        Adds a fill color filter.
    </summary>
    <param name="column">The column field on which you want to base the filter. for exapmle: sheet.AutoFilters[0] </param>
    <param name="pattern">The background pattern type.</param>
    <param name="foregroundColor">The foreground color.</param>
    <param name="backgroundColor">The background color.</param>
    */
    void AddFillColorFilter (int columnIndex,ExcelPatternType pattern,intrusive_ptr<Color> foreColor,intrusive_ptr<Color> backColor);
    /*
    <summary>
        Adds a fill color filter.
    </summary>
    <param name="filterColumnIndex">The column field index on which you want to base the filter (from the left of the list; the leftmost field is field 0).</param>
    <param name="color">Fill Color.</param>
    */
    void AddFillColorFilter (int filterColumnIndex,intrusive_ptr<Color> color);
    void AddFillColorFilter (intrusive_ptr<IAutoFilter> column,intrusive_ptr<Color> color);
    void AddFontColorFilter (intrusive_ptr<IAutoFilter> column,intrusive_ptr<Color> color);
    void AddIconFilter (int columnIndex,IconSetType iconSetType,int iconId);
    /*
    <summary>
        Match all blank cell in the list.
    </summary>
    <param name="column">The column field on which you want to base the filter . for exapmle: sheet.AutoFilters[0]</param>
    */
    void MatchBlanks (int columnIndex);
    /*
    <summary>
        Match all blank cell in the list.
    </summary>
    <param name="column">The column field on which you want to base the filter . for exapmle: sheet.AutoFilters[0]</param>
    */
    void MatchBlanks (intrusive_ptr<IAutoFilter> column);
    /*
    <summary>
        Filters a list with a custom criteria.
    </summary>
    <param name="column">The column field on which you want to base the filter . for exapmle: sheet.AutoFilters[0]</param>
    <param name="operatorType">The filter operator type</param>
    <param name="criteria">The custom criteria</param>
    */
    //void CustomFilter (int columnIndex,FilterOperatorType operatorType,System.Object criteria);
    /*
    <summary>
        Filters a list with custom criterias.
    </summary>
    <param name="column">The column field on which you want to base the filter. for exapmle: sheet.AutoFilters[0]</param>
    <param name="operatorType1">The first filter operator type</param>
    <param name="criteria1">The first custom criteria</param>
    <param name="isAnd"></param>
    <param name="operatorType2">The second filter operator type</param>
    <param name="criteria2">The second custom criteria</param>
    */
    //void CustomFilter (int columnIndex,FilterOperatorType operatorType1,System.Object criteria1,bool isAnd,FilterOperatorType operatorType2,System.Object criteria2);
    //void CustomFilter (intrusive_ptr<FilterColumn> column,FilterOperatorType operatorType,System.Object criteria);
    //void CustomFilter (intrusive_ptr<FilterColumn> column,FilterOperatorType operatorType1,System.Object criteria1,bool isAnd,FilterOperatorType operatorType2,System.Object criteria2);
    void DynamicFilter (intrusive_ptr<IAutoFilter> column,DynamicFilterType dynamicFilterType);
    /*
    <summary>
        Delete the column filter by column name
    </summary>
    <param name="columName">column name</param>
    */
    void ClearFilter (LPCWSTR_S columnName);
    /*
    <summary>
        Delete the column filter by column index(filters column index not sheet column index)
    </summary>
    <param name="columName">column index</param>
    */
    void ClearFilter (int filterColumnIndex);
    void AddDateFilter (intrusive_ptr<IAutoFilter> column,DateTimeGroupingType dateTimeGroupingType,int year,int month,int day,int hour,int minute,int second);
    /*
    <summary>
        Filter the top 10 item in the list
    </summary>
    <param name="filterColumnIndex">The column field index on which you want to base the filter (from the left of the list; the leftmost field is field 0). </param>
    <param name="isTop">Indicates whether filter from top or bottom</param>
    <param name="isPercent">Indicates whether the items is percent or count </param>
    <param name="itemCount">The item count</param>
    */
    void FilterTop10 (int filterColumnIndex,bool isTop,bool isPercent,int itemCount);
    /*
    <summary>
        Filter the top 10 item in the list
    </summary>
    <param name="column">The column field on which you want to base the filter. for exapmle: sheet.AutoFilters[0] </param>
    <param name="isTop">Indicates whether filter from top or bottom</param>
    <param name="isPercent">Indicates whether the items is percent or count </param>
    <param name="itemCount">The item count</param>
    */
    void FilterTop10 (intrusive_ptr<IAutoFilter> column,bool isTop,bool isPercent,int itemCount);
    /*
    <summary>
        Match all not blank cell in the list.
    </summary>
    <param name="filterColumnIndex">The column field index on which you want to base the filter (from the left of the list; the leftmost field is field 0).</param>
    */
    void MatchNonBlanks (int filterColumnIndex);
    /*
    <summary>
        Match all not blank cell in the list.
    </summary>
    <param name="column">The column field on which you want to base the filter . for exapmle: sheet.AutoFilters[0]</param>
    */
    void MatchNonBlanks (intrusive_ptr<FilterColumn> column);
    void Clear ();
private:
};
}}
