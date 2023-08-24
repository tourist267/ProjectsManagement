#pragma once
#include "pch.h"
namespace Spire{
namespace Xls{
/*
    <summary>
        Change target type of shape.
    </summary>
*/
enum class ShapeLayerChangeType : int
{
    BringToFront = 0,
    SendToBack = 1,
    BringForward = 2,
    SendBackward = 3,
};
using ShapeLayerChangeType_Type = std::underlying_type<ShapeLayerChangeType>::type;
}}
