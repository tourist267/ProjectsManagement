#pragma once
#include "pch.h"
namespace Spire{
namespace Xls{
enum class XmlOpenType : int
{
    MSExcel = 0,
};
using XmlOpenType_Type = std::underlying_type<XmlOpenType>::type;
}}
