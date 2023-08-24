#pragma once
#include "pch.h"
namespace Spire{
namespace Xls{
enum class RenameStrategy : int
{
    Exception = 0,
    Digit = 1,
    Letter = 2,
};
using RenameStrategy_Type = std::underlying_type<RenameStrategy>::type;
}}
