#pragma once
#include "pch.h"
namespace Spire{namespace Xls{
enum class InsertMoveOption : int
{
    MoveDown = 0,
    MoveRight = 1,
};
using InsertMoveOption_Type = std::underlying_type<InsertMoveOption>::type;
}}
