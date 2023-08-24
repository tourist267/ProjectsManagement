#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Xls{
/*
    <summary>
        Convert Setting
    </summary>
*/
class EXPORTS ConverterSetting : public virtual Object
{
    friend class Workbook;
public:
    //void SetPrintPageEventHandler (System.Drawing.Printing.PrintPageEventHandler value);
    //System.Drawing.Printing.PrintPageEventHandler GetPrintPageEventHandler ();
    /*
    <summary>
        Gets or sets the horizontal resolution, in dots per inch (DPI). Default value is 96.
    </summary>
    */
    int GetXDpi ();
    void SetXDpi (int value);
    /*
    <summary>
        Gets or sets the vertical resolution, in dots per inch (DPI). Default value is 96.
    </summary>
    */
    int GetYDpi ();
    void SetYDpi (int value);
    /*
    <summary>
        If PrintWithSheetPageSetting = false(Default) . printing all pages with default page settings
            If PrintWithSheetPageSetting = true . printing each page with its owning sheet's page settings
    </summary>
    */
    bool GetPrintWithSheetPageSetting ();
    void SetPrintWithSheetPageSetting (bool value);
    /*
    <summary>
        Gets or sets a value determining the quality.
    </summary>
    */
    int GetJPEGQuality ();
    void SetJPEGQuality (int value);
    intrusive_ptr<ImageFormat> GetImageFormat ();
    void SetImageFormat (intrusive_ptr<ImageFormat> value);
    /*
    <summary>
        Indicates whether the width and height of the cells is automatically fitted by cell value. 
            The default value is false.
    </summary>
    */
    bool GetIsCellAutoFit ();
    void SetIsCellAutoFit (bool value);
    /*
    <summary>
        One sheet context render to only one page. 
    </summary>
    */
    bool GetSheetFitToPage ();
    void SetSheetFitToPage (bool value);
    /*
    <summary>
        Sheet content fit to page width.
    </summary>
    */
    bool GetSheetFitToWidth ();
    void SetSheetFitToWidth (bool value);
    bool GetIsReCalculateOnConvert ();
    void SetIsReCalculateOnConvert (bool value);
    /*
    <summary>
        Ignore error calculate result when calculating formula.
            Default is false.
    </summary>
    */
    bool GetIgnoreErrorCalculateResult ();
    void SetIgnoreErrorCalculateResult (bool value);
    bool GetClearCacheOnConverted ();
    void SetClearCacheOnConverted (bool value);
    /*
    <summary>
        Gets or sets the Pdf document's Conformance-level.
    </summary>
    */
    PdfConformanceLevel GetPdfConformanceLevel ();
    void SetPdfConformanceLevel (PdfConformanceLevel value);
    //Spire.Pdf.Security.PdfSecurity GetPdfSecurity ();
    /*
    <summary>
         Indicate the chart render image type.
     </summary>
    */
    intrusive_ptr<ImageFormat> GetChartImageType ();
    void SetChartImageType (intrusive_ptr<ImageFormat> value);
    /*
    <summary>
        Enables or disables clipping the image to the region
    </summary>
    */
    bool GetIsRegionClip ();
    void SetIsRegionClip (bool value);
private:
};
}}
