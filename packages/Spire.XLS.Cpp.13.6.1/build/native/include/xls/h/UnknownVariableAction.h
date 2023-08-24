#pragma once
#include "pch.h"
namespace Spire{
namespace Xls{
/*
    <summary>
        Defines action that must be taken when meeting unknown variable during template markers processing.
    </summary>
*/
enum class UnknownVariableAction : int
{
    Exception = 0,
    Skip = 1,
    ReplaceBlank = 2,
};
using UnknownVariableAction_Type = std::underlying_type<UnknownVariableAction>::type;
}}
