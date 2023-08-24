#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS OdsPageBackground : public virtual Object
{
    friend class XlsPageSetupBase;
public:
    /*
    <summary>
        Gets the type of background. Read-only.
    </summary>
    */
    OdsPageBackgroundType GetType ();
    /*
    <summary>
        Gets/sets the color of background.
    </summary>
    */
    intrusive_ptr<Color> GetColor ();
    void SetColor (intrusive_ptr<Color> value);
    //std::vector<System.Byte> GetImageData ();
    //void SetImageData (std::vector<System.Byte> value);
    /*
    <summary>
        Gets/sets the link file path of image.
    </summary>
    */
    LPCWSTR_S GetImageLink ();
    void SetImageLink (LPCWSTR_S value);
    /*
    <summary>
        Gets/sets the image type of image background.
    </summary>
    */
    OdsPageBackgroundImageType GetImageType ();
    void SetImageType (OdsPageBackgroundImageType value);
    /*
    <summary>
        Gets/sets the position type of image background.
    </summary>
    */
    OdsPageBackgroundImagePositionType GetImagePositonType ();
    void SetImagePositonType (OdsPageBackgroundImagePositionType value);
private:
};
}}
