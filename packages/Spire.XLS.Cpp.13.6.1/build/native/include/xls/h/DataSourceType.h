#pragma once
#include "pch.h"
namespace Spire{
namespace Xls{
/*
    <summary>
        Data source type.
    </summary>
*/
enum class DataSourceType : int
{
    Worksheet = 1,
    ExternalData = 2,
    Consolidation = 4,
    ScenarioPivotTable = 8,
};
using DataSourceType_Type = std::underlying_type<DataSourceType>::type;
}}
