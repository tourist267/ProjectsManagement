#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Xls{
/*
    <summary>
        Specifies the shape type that needs to be converted to a picture, and defaults to all types
    </summary>
*/
class EXPORTS SaveShapeTypeOption : public virtual Object
{
public:
    /*
    <summary>
        Identifies whether Group shape converted to a picture.(Child of this group shape will not convert)
    </summary>
    */
    bool GetSaveGroupShape ();
    void SetSaveGroupShape (bool value);
    /*
    <summary>
        Identifies whether Picture shape converted to a picture
    </summary>
    */
    bool GetSavePicture ();
    void SetSavePicture (bool value);
    /*
    <summary>
        Identifies whether TextBox shape converted to a picture
    </summary>
    */
    bool GetSaveTextBox ();
    void SetSaveTextBox (bool value);
    /*
    <summary>
        Identifies whether Button shape converted to a picture
    </summary>
    */
    bool GetSaveButton ();
    void SetSaveButton (bool value);
    /*
    <summary>
        Identifies whether CheckBox shape converted to a picture
    </summary>
    */
    bool GetSaveCheckBox ();
    void SetSaveCheckBox (bool value);
    /*
    <summary>
        Identifies whether RadioButton shape converted to a picture
    </summary>
    */
    bool GetSaveRadioButton ();
    void SetSaveRadioButton (bool value);
    /*
    <summary>
        Identifies whether GroupBox shape converted to a picture
    </summary>
    */
    bool GetSaveGroupBox ();
    void SetSaveGroupBox (bool value);
    /*
    <summary>
        Identifies whether Label shape converted to a picture
    </summary>
    */
    bool GetSaveLabel ();
    void SetSaveLabel (bool value);
    /*
    <summary>
        Identifies whether ListBox shape converted to a picture
    </summary>
    */
    bool GetSaveListBox ();
    void SetSaveListBox (bool value);
    /*
    <summary>
        Identifies whether ComboBox shape converted to a picture
    </summary>
    */
    bool GetSaveComboBox ();
    void SetSaveComboBox (bool value);
    /*
    <summary>
        Identifies whether Arc shape converted to a picture
    </summary>
    */
    bool GetSaveArc ();
    void SetSaveArc (bool value);
    /*
    <summary>
        Identifies whether Line shape converted to a picture
    </summary>
    */
    bool GetSaveLine ();
    void SetSaveLine (bool value);
    /*
    <summary>
        Identifies whether eOval shape converted to a picture
    </summary>
    */
    bool GetSaveOval ();
    void SetSaveOval (bool value);
    /*
    <summary>
        Identifies whether Rectangle shape converted to a picture
    </summary>
    */
    bool GetSaveRectangle ();
    void SetSaveRectangle (bool value);
    /*
    <summary>
        Identifies whether PrstGomShape shape converted to a picture
    </summary>
    */
    bool GetSavePrstGomShape ();
    void SetSavePrstGomShape (bool value);
    /*
    <summary>
        Identifies whether Dml shape converted to a picture
    </summary>
    */
    bool GetSaveDml ();
    void SetSaveDml (bool value);
    /*
    <summary>
        Identifies whether All shape converted to a picture
    </summary>
    */
    bool GetSaveAll ();
    void SetSaveAll (bool value);
private:
};
}}
