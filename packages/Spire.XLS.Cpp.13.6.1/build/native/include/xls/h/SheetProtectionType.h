#pragma once
#include "pch.h"
namespace Spire{
namespace Xls{
/*
    <summary>
        Represents sheet protection flags enums.
    </summary>
*/
enum class SheetProtectionType : int
{
    None = 0,
    Objects = 1,
    Scenarios = 2,
    FormattingCells = 4,
    FormattingColumns = 8,
    FormattingRows = 16,
    InsertingColumns = 32,
    InsertingRows = 64,
    InsertingHyperlinks = 128,
    DeletingColumns = 256,
    DeletingRows = 512,
    LockedCells = 1024,
    Sorting = 2048,
    Filtering = 4096,
    UsingPivotTables = 8192,
    UnLockedCells = 16384,
    Content = 32768,
    All = 65535,
};
using SheetProtectionType_Type = std::underlying_type<SheetProtectionType>::type;
}}
