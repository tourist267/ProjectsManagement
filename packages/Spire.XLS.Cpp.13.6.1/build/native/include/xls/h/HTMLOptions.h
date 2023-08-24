#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS HTMLOptions : public virtual Object
{
public:
    HTMLOptions();
    LPCWSTR_S GetImagePath ();
    void SetImagePath (LPCWSTR_S value);
    GetText GetTextMode ();
    void SetTextMode (GetText value);
    /*
    <summary>
        Gets or sets the Image Location type.
            GlobalAbsolute or Relative to Table
    </summary>
    */
    ImageLocationTypes GetImageLocationType ();
    void SetImageLocationType (ImageLocationTypes value);
    /*
    <summary>
        If false,indicates exporting the image as a single file; 
            If true, embedding the image into the html code using Data URI scheme.
            The default value is false.
            Note: Internet Explorer 8 limits data URIs to a maximum length of 32KB.
    </summary>
    <value>The value of the HTML export image style sheet.</value>
    */
    bool GetImageEmbedded ();
    void SetImageEmbedded (bool value);
    /*
    <summary>
        where is the style defined; default : head
    </summary>
    */
    StyleDefineType GetStyleDefine ();
    void SetStyleDefine (StyleDefineType value);
    static intrusive_ptr<HTMLOptions> Default ();
private:
};
}}
