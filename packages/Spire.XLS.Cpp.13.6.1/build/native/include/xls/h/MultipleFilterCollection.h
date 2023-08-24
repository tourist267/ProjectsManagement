#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS MultipleFilterCollection : public virtual Object
{
public:
    //System.Collections.IEnumerator GetEnumerator ();
    void Clear ();
    int GetCapacity ();
    void SetCapacity (int value);
    int GetCount ();
    /*
    <summary>
        Remove a date in the filter.
    </summary>
    <param name="type"></param>
    <param name="year"></param>
    <param name="month"></param>
    <param name="day"></param>
    <param name="hour"></param>
    <param name="minute"></param>
    <param name="second"></param>
    */
    void RemoveDateFilter (DateTimeGroupingType type,int year,int month,int day,int hour,int minute,int second);
    void RemoveAt (int index);
    void RemoveFilter (LPCWSTR_S filter);
    bool GetMatchBlank ();
    void SetMatchBlank (bool value);
    //System.Object Get (int index);
    //System.Object GetByIndex (int index);
    void Add (LPCWSTR_S filter);
    void Add (intrusive_ptr<DateTimeGroupItem> filter);
    void Add (DateTimeGroupingType type,int year,int month,int day);
private:
};
}}
