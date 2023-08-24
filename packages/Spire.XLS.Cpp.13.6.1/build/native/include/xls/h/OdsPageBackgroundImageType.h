#pragma once
#include "pch.h"
namespace Spire{
namespace Xls{
enum class OdsPageBackgroundImageType : int
{
    Position = 0,
    Area = 1,
    Tile = 2,
};
using OdsPageBackgroundImageType_Type = std::underlying_type<OdsPageBackgroundImageType>::type;
}}
