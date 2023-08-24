#pragma once
#include "pch.h"
namespace Spire{
namespace Xls{
/*
    <summary>
        Excel shapes.
    </summary>
*/
enum class ExcelShapeType : int
{
    Unknown = 0,
    Chart = 3,
    Comment = 4,
    Group = 6,
    EmbeddedOLEObject = 7,
    FormControl = 8,
    Picture = 13,
    TextBox = 17,
    Oval = 22,
    PrstGomShape = 24,
    OleObject = 7,
    Arc = 260,
    ScrollBar = 273,
    Button = 263,
    Line = 1,
    Rectangle = 2,
    Polygon = 9,
    CheckBox = 11,
    RadioButton = 12,
    Label = 14,
    DialogBox = 15,
    Spinner = 16,
    ListBox = 18,
    GroupBox = 19,
    ComboBox = 20,
    CellsDrawing = 30,
};
using ExcelShapeType_Type = std::underlying_type<ExcelShapeType>::type;
}}