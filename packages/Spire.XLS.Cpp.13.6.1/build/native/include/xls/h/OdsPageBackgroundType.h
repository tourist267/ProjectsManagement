#pragma once
#include "pch.h"
namespace Spire{
namespace Xls{
enum class OdsPageBackgroundType : int
{
    None = 0,
    Color = 1,
    Image = 2,
};
using OdsPageBackgroundType_Type = std::underlying_type<OdsPageBackgroundType>::type;
}}
