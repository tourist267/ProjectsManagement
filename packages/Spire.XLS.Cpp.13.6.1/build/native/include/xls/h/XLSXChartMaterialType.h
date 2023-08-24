#pragma once
#include "pch.h"
namespace Spire{
namespace Xls{
/*
    <summary>
        Indicates the Material property values fro the chart
    </summary>
*/
enum class XLSXChartMaterialType : int
{
    None = 0,
    Matte = 1,
    WarmMatte = 2,
    Plastic = 3,
    Metal = 4,
    DarkEdge = 5,
    SoftEdge = 6,
    Flat = 7,
    WireFrame = 8,
    Powder = 9,
    TranslucentPowder = 10,
    Clear = 11,
    SoftMetal = 12,
    LegacyMatte = 13,
    LegacyMetal = 14,
    LegacyPlastic = 15,
    LegacyWireframe = 16,
};
using XLSXChartMaterialType_Type = std::underlying_type<XLSXChartMaterialType>::type;
}}
