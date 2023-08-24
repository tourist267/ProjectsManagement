#pragma once
#include "pch.h"
namespace Spire{
namespace Xls{
enum class ConnectionDataSourceType : int
{
    ODBCBasedSource = 1,
    DAOBasedSource = 2,
    FileBasedDataBaseSource = 3,
    WebQuery = 4,
    OLEDBBasedSource = 5,
    TextBasedSource = 6,
    ADORecordSet = 7,
    DSP = 8,
    OLEDBDataModel = 100,
    DataFeedDataModel = 101,
    WorksheetDataModel = 102,
    TextDataModel = 103,
    Unknown = 255,
};
using ConnectionDataSourceType_Type = std::underlying_type<ConnectionDataSourceType>::type;
}}
