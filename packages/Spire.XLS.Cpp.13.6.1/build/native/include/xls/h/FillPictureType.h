#pragma once
#include "pch.h"
namespace Spire{
namespace Xls{
enum class FillPictureType : int
{
    Stretch = 0,
    Stack = 1,
    StackAndScale = 2,
};
using FillPictureType_Type = std::underlying_type<FillPictureType>::type;
}}
