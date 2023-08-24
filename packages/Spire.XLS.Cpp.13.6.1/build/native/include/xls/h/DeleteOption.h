#pragma once
#include "pch.h"
namespace Spire{
namespace Xls{
enum class DeleteOption : int
{
    MoveUp = 0,
    MoveLeft = 1,
};
using DeleteOption_Type = std::underlying_type<DeleteOption>::type;
}}
