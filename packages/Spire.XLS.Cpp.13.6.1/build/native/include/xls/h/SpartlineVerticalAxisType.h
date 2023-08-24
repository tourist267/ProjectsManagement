#pragma once
#include "pch.h"
namespace Spire{
namespace Xls{
enum class SpartlineVerticalAxisType : int
{
    Automatic = 0,
    Same = 1,
    Custom = 2,
};
using SpartlineVerticalAxisType_Type = std::underlying_type<SpartlineVerticalAxisType>::type;
}}
