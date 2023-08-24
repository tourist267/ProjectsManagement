#pragma once
#include "pch.h"
namespace Spire{
namespace Xls{
enum class LineShapeType : int
{
    Line = 0,
    ElbowLine = 1,
    CurveLine = 2,
    LineInv = 3,
};
using LineShapeType_Type = std::underlying_type<LineShapeType>::type;
}}
