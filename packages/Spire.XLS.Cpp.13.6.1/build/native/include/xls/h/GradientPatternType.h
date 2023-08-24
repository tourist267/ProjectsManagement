#pragma once
#include "pch.h"
namespace Spire{
namespace Xls{
/*
    <summary>
        Represents excel gradient pattern.
    </summary>
*/
enum class GradientPatternType : int
{
    Pat5Percent = 1,
    Pat10Percent = 2,
    Pat20Percent = 3,
    Pat25Percent = 4,
    Pat30Percent = 5,
    Pat40Percent = 6,
    Pat50Percent = 7,
    Pat60Percent = 8,
    Pat70Percent = 9,
    Pat75Percent = 10,
    Pat80Percent = 11,
    Pat90Percent = 12,
    PatDarkDownwardDiagonal = 15,
    PatDarkHorizontal = 13,
    PatDarkUpwardDiagonal = 16,
    PatDarkVertical = 14,
    PatDashedDownwardDiagonal = 28,
    PatDashedHorizontal = 32,
    PatDashedUpwardDiagonal = 27,
    PatDashedVertical = 31,
    PatDiagonalBrick = 40,
    PatDivot = 46,
    PatDottedDiamond = 24,
    PatDottedGrid = 45,
    PatHorizontalBrick = 35,
    PatLargeCheckerBoard = 36,
    PatLargeConfetti = 33,
    PatLargeGrid = 34,
    PatLightDownwardDiagonal = 21,
    PatLightHorizontal = 19,
    PatLightUpwardDiagonal = 22,
    PatLightVertical = 20,
    PatMixed = -2,
    PatNarrowHorizontal = 30,
    PatNarrowVertical = 29,
    PatOutlinedDiamond = 41,
    PatPlaid = 42,
    PatShingle = 47,
    PatSmallCheckerBoard = 17,
    PatSmallConfetti = 37,
    PatSmallGrid = 23,
    PatSolidDiamond = 39,
    PatSphere = 43,
    PatTrellis = 18,
    PatWave = 48,
    PatWeave = 44,
    PatWideDownwardDiagonal = 25,
    PatWideUpwardDiagonal = 26,
    PatZigZag = 38,
};
using GradientPatternType_Type = std::underlying_type<GradientPatternType>::type;
}}