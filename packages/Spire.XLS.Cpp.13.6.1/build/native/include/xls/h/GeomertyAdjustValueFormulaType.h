#pragma once
#include "pch.h"
namespace Spire{
namespace Xls{
enum class GeomertyAdjustValueFormulaType : int
{
    MultiplyDivide = 0,
    AddSubtract = 1,
    AddDivide = 2,
    IfElse = 3,
    AbsoluteValue = 4,
    ArcTanFormula = 5,
    CosineArcTan = 6,
    Cosine = 7,
    MaximumValue = 8,
    MinimumValue = 9,
    Modulo = 10,
    PinTo = 11,
    SineArcTan = 12,
    Sine = 13,
    SquareRoot = 14,
    Tangent = 15,
    LiteralValue = 16,
};
using GeomertyAdjustValueFormulaType_Type = std::underlying_type<GeomertyAdjustValueFormulaType>::type;
}}
