#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS DateTimeGroupItem : public virtual Object
{
public:
    intrusive_ptr<DateTime> GetMinValue ();
    DateTimeGroupingType GetDateTimeGroupingType ();
    void SetDateTimeGroupingType (DateTimeGroupingType value);
    int GetYear ();
    void SetYear (int value);
    int GetMonth ();
    void SetMonth (int value);
    int GetDay ();
    void SetDay (int value);
    int GetHour ();
    void SetHour (int value);
    int GetMinute ();
    void SetMinute (int value);
    int GetSecond ();
    void SetSecond (int value);
private:
};
}}
