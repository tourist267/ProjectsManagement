#pragma once
#include "pch.h"
namespace Spire{
namespace Xls{
enum class MsoPathType : int
{
    MsopathLineTo = 0,
    MsopathCurveTo = 1,
    MsopathMoveTo = 2,
    MsopathClose = 3,
    MsopathEnd = 4,
    MsopathEscape = 5,
    MsopathArcTo = 6,
    Unknown = 7,
};
using MsoPathType_Type = std::underlying_type<MsoPathType>::type;
}}
