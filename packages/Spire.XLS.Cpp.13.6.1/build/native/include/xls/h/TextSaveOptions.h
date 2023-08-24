#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS TextSaveOptions : public virtual Object
{
public:
    /*
    <summary>
        Gets or sets whether retain hidden data. Default is true.
    </summary>
    */
    bool GetRetainHiddenData ();
    void SetRetainHiddenData (bool value);
    /*
    <summary>
        Gets or sets whether retain blank rows and columns. Default is false.
    </summary>
    */
    bool GetRetainBlankRowsAndCols ();
    void SetRetainBlankRowsAndCols (bool value);
    /*
    <summary>
        Gets or sets the separator. Default is ",".
    </summary>
    */
    LPCWSTR_S GetSeparator ();
    void SetSeparator (LPCWSTR_S value);
    /*
    <summary>
        Gets or sets the encoding. Default is UTF8.
    </summary>
    */
    intrusive_ptr<Encoding> GetEncoding ();
    void SetEncoding (intrusive_ptr<Encoding> value);
private:
};
}}
