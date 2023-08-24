#pragma once
#include "pch.h"
namespace Spire{
namespace Xls{
/*
    <summary>
        Represents preset gradient type.
    </summary>
*/
enum class GradientPresetType : int
{
    GradEarlySunset = 1,
    GradLateSunset = 2,
    GradNightfall = 3,
    GradDaybreak = 4,
    GradHorizon = 5,
    GradDesert = 6,
    GradOcean = 7,
    GradCalmWater = 8,
    GradFire = 9,
    GradFog = 10,
    GradMoss = 11,
    GradPeacock = 12,
    GradWheat = 13,
    GradParchment = 14,
    GradMahogany = 15,
    GradRainbow = 16,
    GradRainbow2 = 17,
    GradGold = 18,
    GradGold2 = 19,
    GradBrass = 20,
    GradChrome = 21,
    GradChrome2 = 22,
    GradSilver = 23,
    GradSapphire = 24,
};
using GradientPresetType_Type = std::underlying_type<GradientPresetType>::type;
}}
