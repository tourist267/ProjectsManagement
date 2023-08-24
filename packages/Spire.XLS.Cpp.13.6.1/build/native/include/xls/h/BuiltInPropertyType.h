#pragma once
#include "pch.h"
namespace Spire{namespace Xls{
/*
    <summary>
        SummaryInformation property type.
    </summary>
*/
enum class BuiltInPropertyType : int
{
    Title = 2,
    Subject = 3,
    Author = 4,
    Keywords = 5,
    Comments = 6,
    Template = 7,
    LastAuthor = 8,
    RevisionNumber = 9,
    EditTime = 10,
    LastPrinted = 11,
    CreationDate = 12,
    LastSaveDate = 13,
    PageCount = 14,
    WordCount = 15,
    CharCount = 16,
    Thumbnail = 17,
    ApplicationName = 18,
    Security = 19,
    Category = 1000,
    PresentationTarget = 1001,
    ByteCount = 1002,
    LineCount = 1003,
    ParagraphCount = 1004,
    SlideCount = 1005,
    NoteCount = 1006,
    HiddenCount = 1007,
    MultimediaClipCount = 1008,
    ScaleCrop = 1009,
    HeadingPair = 1010,
    DocParts = 1011,
    Manager = 1012,
    Company = 1013,
    LinksDirty = 1014,
    DocumentVersion = 1015,
    Version = 1016,
};
using BuiltInPropertyType_Type = std::underlying_type<BuiltInPropertyType>::type;
}}