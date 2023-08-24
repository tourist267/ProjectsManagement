#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "ICloneParent.h"
#include "IConditionalFormats.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS XlsConditionalFormats : public virtual Object,public virtual ICloneParent,public virtual IConditionalFormats
{
    friend class IConditionalFormatsCollection;
    friend class XlsWorksheetConditionalFormats;
public:
    virtual intrusive_ptr<IConditionalFormat> AddCondition ();
    /*
    <summary>
        Add new cell value condition to the collection.
    </summary>
    <param name="operatorType">The Comparison operator for conditional formatting in Excel.</param>
    <param name="value1">The first value</param>
    <param name="value2">The second value .If the operatorTypy is Equal or NotEqual or Greater or Less or GreaterOrEqual or LessOrEqual,
            then this parameter must use string.Empty or null</param>
    <returns></returns>
    */
    intrusive_ptr<IConditionalFormat> AddCellValueCondition (ComparisonOperatorType operatorType,LPCWSTR_S value1,LPCWSTR_S value2);
    /*
    <summary>
        Add new cell value condition to the collection.
    </summary>
    <param name="operatorType">The Comparison operator for conditional formatting in Excel.</param>
    <param name="value1">The first value</param>
    <param name="value2">The second value.If the operatorTypy is Equal or NotEqual or Greater or Less or GreaterOrEqual or LessOrEqual,
            then this parameter must use ***double.NaN***.Don't use null</param>
    <returns></returns>
    */
    intrusive_ptr<IConditionalFormat> AddCellValueCondition (ComparisonOperatorType operatorType,double value1,double value2);
    /*
    <summary>
        Add new begin with condition to the collection.
    </summary>
    <param name="text">begin with text</param>
    <returns></returns>
    */
    intrusive_ptr<IConditionalFormat> AddBeginsWithCondition (LPCWSTR_S text);
    /*
    <summary>
        Add new contain condition to the collection.
    </summary>
    <param name="text">contain text</param>
    <returns></returns>
    */
    intrusive_ptr<IConditionalFormat> AddContainsTextCondition (LPCWSTR_S text);
    /*
    <summary>
        Add new end with condition to the collection.
    </summary>
    <param name="text">end with text</param>
    <returns></returns>
    */
    intrusive_ptr<IConditionalFormat> AddEndsWithCondition (LPCWSTR_S text);
    /*
    <summary>
        Add new not contain condition to the collection.
    </summary>
    <param name="text">not contain text</param>
    <returns></returns>
    */
    intrusive_ptr<IConditionalFormat> AddNotContainsTextCondition (LPCWSTR_S text);
    /*
    <summary>
        Add new contain blanks condition to the collection.
    </summary>
    <returns></returns>
    */
    intrusive_ptr<IConditionalFormat> AddContainsBlanksCondition ();
    /*
    <summary>
        Add new contain errors condition to the collection.
    </summary>
    <returns></returns>
    */
    intrusive_ptr<IConditionalFormat> AddContainsErrorsCondition ();
    /*
    <summary>
        Add new duplicate values condition to the collection.
    </summary>
    <returns></returns>
    */
    intrusive_ptr<IConditionalFormat> AddDuplicateValuesCondition ();
    /*
    <summary>
        Add new not contain blanks condition to the collection.
    </summary>
    <returns></returns>
    */
    intrusive_ptr<IConditionalFormat> AddNotContainsBlanksCondition ();
    /*
    <summary>
        Add new not contain errors condition to the collection.
    </summary>
    <returns></returns>
    */
    intrusive_ptr<IConditionalFormat> AddNotContainsErrorsCondition ();
    /*
    <summary>
        Add new unique values condition to the collection.
    </summary>
    <returns></returns>
    */
    intrusive_ptr<IConditionalFormat> AddUniqueValuesCondition ();
    /*
    <summary>
        Add new time period condition to the collection.
    </summary>
    <param name="timePeriodType">type of the time period</param>
    <returns></returns>
    */
    intrusive_ptr<IConditionalFormat> AddTimePeriodCondition (TimePeriodType timePeriodType);
    /*
    <summary>
        Add new above or below the average condition to the collection.
    </summary>
    <param name="averageType">type of the average</param>
    <returns></returns>
    */
    intrusive_ptr<IConditionalFormat> AddAverageCondition (AverageType averageType);
    /*
    <summary>
        Add new TopN or BottomN condition to the collection.
    </summary>
    <param name="TopBottomType">type of the Top or Bottom</param>
    <param name="rank">rank of the Top or Bottom</param>
    <returns></returns>
    */
    intrusive_ptr<IConditionalFormat> AddTopBottomCondition (TopBottomType topBottomType,int rank);
    void Remove (int startRow,int startColumn,int totalRows,int totalColumns);
    virtual void RemoveAt (int index);
    bool CompareTo (intrusive_ptr<XlsConditionalFormats> formats);
    //bool CompareFormats (intrusive_ptr<IConditionalFormat> firstFormat,intrusive_ptr<IConditionalFormat> secondFormat);
    void AddCells (intrusive_ptr<XlsConditionalFormats> formats);
    bool Contains (std::vector<intrusive_ptr<Rectangle>> arrRanges);
    int ContainsCount (intrusive_ptr<Rectangle> range);
    //void AddCells (System.Collections.IList arrCells);
    void AddRange (intrusive_ptr<IXLSRange> range);
    void Remove (std::vector<intrusive_ptr<Rectangle>> arrRanges);
    void ClearCells ();
    void BeginUpdate ();
    void EndUpdate ();
    virtual int GetHashCode ();
    //virtual bool Equals (System.Object obj);
    //virtual System.Object Clone (System.Object parent);
    bool GetIsEmpty ();
    LPCWSTR_S GetAddress ();
    LPCWSTR_S GetAddressR1C1 ();
    //System.Collections.Generic.List`1[[intrusive_ptr<Rectangle>, System.Drawing, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b03f5f7f11d50a3a]] GetCellRectangles ();
    intrusive_ptr<IConditionalFormat> GetByIndex (int index);
    virtual intrusive_ptr<IConditionalFormat> Get (int fieldIndex);
    //virtual System.Collections.IEnumerator GetEnumerator ();
    void Clear ();
    int GetCapacity ();
    void SetCapacity (int value);
    virtual int GetCount ();
    static int MAXIMUM_CF_NUMBER ();
private:
};
}}
