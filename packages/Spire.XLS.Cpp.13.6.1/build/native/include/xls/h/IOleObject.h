#pragma once
#include "pch.h"

//#pragma warning(push)
//#pragma warning(disable:4250)
//#include "OleObjectType.h"
//#include "IPictureShape.h"
//#include "IXLSRange.h"
//#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS IOleObject : public virtual Object
{
    friend class IOleObjects;
public:
    /*
    <summary>
        Gets or sets the location.
    </summary>
    <value>The location.</value>
    */
    virtual intrusive_ptr<IXLSRange> GetLocation ();
    virtual void SetLocation (intrusive_ptr<IXLSRange> value);
    /*
    <summary>
        Gets or sets the size.
    </summary>
    <value>The size.</value>
    */
    virtual intrusive_ptr<Size> GetSize ();
    virtual void SetSize (intrusive_ptr<Size> value);
    /*
    <summary>
        Gets or sets the picture.
    </summary>
    <value>The picture.</value>
    */
    virtual intrusive_ptr<Image> GetPicture ();
    /*
    <summary>
        Gets or sets picture shape object that defines look and position of the OleObject inside parent worksheet.
    </summary>
    */
    virtual intrusive_ptr<IPictureShape> GetShape ();
    /*
    <summary>
        Gets or sets a value indicating whether [display as icon].
    </summary>
    <value>
    <c>true</c> if [display as icon]; otherwise, <c>false</c>.</value>
    */
    virtual bool GetDisplayAsIcon ();
    virtual void SetDisplayAsIcon (bool value);
    /*
    <summary>
        Gets or sets the type of the object.
    </summary>
    */
    virtual OleObjectType GetObjectType ();
    virtual void SetObjectType (OleObjectType value);
    //virtual std::vector<System.Byte> GetOleData ();
    //virtual void SetOleData (std::vector<System.Byte> value);
    //virtual System.Guid GetOleObjectGuid ();
private:
};
}}
