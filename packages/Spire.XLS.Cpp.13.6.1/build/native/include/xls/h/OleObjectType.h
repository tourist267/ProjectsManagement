#pragma once
#include "pch.h"
namespace Spire{
namespace Xls{
/*
    <summary>
        defines the types of OLE object
    </summary>
*/
enum class OleObjectType : int
{
    None = 0,
    AdobeAcrobatDocument = 1,
    Bitmap = 2,
    MediaClip = 3,
    Equation = 4,
    GraphChart = 5,
    Excel97to2003Worksheet = 6,
    ExcelBinaryWorksheet = 7,
    ExcelChart = 8,
    ExcelMacroWorksheet = 9,
    ExcelWorksheet = 10,
    PowerPoint97to2003Presentation = 11,
    PowerPoint_97_2003_Slide = 12,
    PowerPointMacroPresentation = 13,
    PowerPointMacroSlide = 14,
    PowerPointPresentation = 15,
    PowerPointSlide = 16,
    Word97to2003Document = 17,
    WordDocument = 18,
    WordMacroDocument = 19,
    VisioDrawing = 20,
    MIDISequence = 21,
    OpenDocumentPresentation = 22,
    OpenDocumentSpreadsheet = 23,
    OpenDocumentText = 24,
    OpenOfficeSpreadsheet1_1 = 25,
    OpenOfficeText_1_1 = 26,
    Package = 27,
    VideoClip = 28,
    WaveSound = 29,
    WordPadDocument = 30,
    OpenOfficeSpreadsheet = 31,
    OpenOfficeText = 32,
    Xml = 33,
    Png = 34,
    Emf = 35,
};
using OleObjectType_Type = std::underlying_type<OleObjectType>::type;
}}