#pragma once
#include "pch.h"
namespace Spire{
namespace Xls{
enum class XLSXChartLightingType : int
{
    ThreePoint = 0,
    Balance = 1,
    BrightRoom = 2,
    Chilly = 3,
    Contrasting = 4,
    Flat = 5,
    Flood = 6,
    Freezing = 7,
    Glow = 8,
    Harsh = 9,
    Morning = 10,
    Soft = 11,
    Sunrise = 12,
    SunSet = 13,
    TwoPoint = 14,
    LegacyFlat1 = 15,
    LegacyFlat2 = 16,
    LegacyFlat3 = 17,
    LegacyFlat4 = 18,
    LegacyHarsh1 = 19,
    LegacyHarsh2 = 20,
    LegacyHarsh3 = 21,
    LegacyHarsh4 = 22,
    LegacyNormal1 = 23,
    LegacyNormal2 = 24,
    LegacyNormal3 = 25,
    LegacyNormal4 = 26,
};
using XLSXChartLightingType_Type = std::underlying_type<XLSXChartLightingType>::type;
}}