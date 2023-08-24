#pragma once
#include "pch.h"
namespace Spire{
namespace Xls{
enum class RelationShip : int
{
    And = 0,
    Or = 1,
};
using RelationShip_Type = std::underlying_type<RelationShip>::type;
}}
