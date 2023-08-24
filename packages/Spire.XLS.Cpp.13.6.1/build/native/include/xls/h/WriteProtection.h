#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS WriteProtection : public virtual Object
{
    friend class Workbook;
public:
    /*
    <summary>
        Gets and sets the author.
    </summary>
    */
    LPCWSTR_S GetAuthor ();
    void SetAuthor (LPCWSTR_S value);
    /*
    <summary>
        Gets whether this workbook is write protected.
    </summary>
    */
    bool GetIsWriteProtected ();
    void SetPassword (LPCWSTR_S value);
    /*
    <summary>
        Gets or sets whether the Read Only Recommended option is selected.
    </summary>
    */
    bool GetRecommendReadOnly ();
    void SetRecommendReadOnly (bool value);
private:
};
}}
