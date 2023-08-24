#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS LOGFONT : public virtual Object
{
public:
    int lfHeight ();
    int lfWidth ();
    int lfEscapement ();
    int lfOrientation ();
    int lfWeight ();
    BYTE lfItalic ();
    BYTE lfUnderline ();
    BYTE lfStrikeOut ();
    BYTE lfCharSet ();
    BYTE lfOutPrecision ();
    BYTE lfClipPrecision ();
    BYTE lfQuality ();
    BYTE lfPitchAndFamily ();
    LPCWSTR_S lfFaceName ();
private:
};
}}
