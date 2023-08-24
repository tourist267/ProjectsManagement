#pragma once
#include "pch.h"
namespace Spire{namespace Xls{
enum class IconSetType : int
{
    ThreeArrows = 0,
    ThreeArrowsGray = 1,
    ThreeFlags = 2,
    ThreeTrafficLights1 = 3,
    ThreeTrafficLights2 = 4,
    ThreeSigns = 5,
    ThreeSymbols = 6,
    ThreeSymbols2 = 7,
    ThreeTriangles = 8,
    ThreeStars = 9,
    FiveBoxes = 10,
    FourArrows = 11,
    FourArrowsGray = 12,
    FourRedToBlack = 13,
    FourRating = 14,
    FourTrafficLights = 15,
    FiveArrows = 16,
    FiveArrowsGray = 17,
    FiveRating = 18,
    FiveQuarters = 19,
    None = 20,
    CustomSet = 21,
};
using IconSetType_Type = std::underlying_type<IconSetType>::type;
}}