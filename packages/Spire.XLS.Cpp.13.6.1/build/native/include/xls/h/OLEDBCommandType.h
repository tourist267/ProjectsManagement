#pragma once
#include "pch.h"
namespace Spire{
namespace Xls{
enum class OLEDBCommandType : int
{
    None = 0,
    CubeName = 1,
    SqlStatement = 2,
    TableName = 3,
    DefaultInformation = 4,
    WebBasedList = 5,
};
using OLEDBCommandType_Type = std::underlying_type<OLEDBCommandType>::type;
}}
