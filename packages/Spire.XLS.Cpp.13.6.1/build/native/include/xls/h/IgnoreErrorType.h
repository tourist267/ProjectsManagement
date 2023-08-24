#pragma once
#include "pch.h"
namespace Spire{namespace Xls{
/*
    <summary>
        Represents flags of excel ignore error indicator.
    </summary>
*/
enum class IgnoreErrorType : int
{
    None = 0,
    EvaluateToError = 1,
    EmptyCellReferences = 2,
    NumberAsText = 4,
    OmittedCells = 8,
    InconsistentFormula = 16,
    TextDate = 32,
    UnlockedFormulaCells = 64,
    All = 127,
};
using IgnoreErrorType_Type = std::underlying_type<IgnoreErrorType>::type;
}}
