#pragma once
#include "pch.h"
namespace Spire{
namespace Xls{
/*
    <summary>
        Represents gradient texture.
    </summary>
*/
enum class GradientTextureType : int
{
    Newsprint = 13,
    Recycled_Paper = 14,
    Parchment = 15,
    Stationery = 16,
    GreenMarble = 9,
    WhiteMarble = 10,
    BrownMarble = 11,
    Granite = 12,
    BlueTissuePaper = 17,
    PinkTissuePaper = 18,
    PurpleMesh = 19,
    Bouquet = 20,
    Papyrus = 1,
    Canvas = 2,
    Denim = 3,
    WovenMat = 4,
    WaterDroplets = 5,
    PaperBag = 6,
    FishFossil = 7,
    Sand = 8,
    Cork = 21,
    Walnut = 22,
    Oak = 23,
    MediumWood = 24,
    UserDefined = -1,
};
using GradientTextureType_Type = std::underlying_type<GradientTextureType>::type;
}}
