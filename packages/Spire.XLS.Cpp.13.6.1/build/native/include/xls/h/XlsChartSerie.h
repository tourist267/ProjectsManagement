#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IChartSerie.h"
#include "INamedObject.h"
#include "XlsObject.h"
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS XlsChartSerie : public virtual XlsObject,public virtual IChartSerie,public virtual INamedObject
{
    friend class XlsChartSerieDataFormat;
public:
    int GetChartGroup ();
    virtual intrusive_ptr<IXLSRange> GetValues ();
    virtual void SetValues (intrusive_ptr<IXLSRange> value);
    virtual intrusive_ptr<IXLSRange> GetCategoryLabels ();
    virtual void SetCategoryLabels (intrusive_ptr<IXLSRange> value);
    virtual intrusive_ptr<IXLSRange> GetBubbles ();
    virtual void SetBubbles (intrusive_ptr<IXLSRange> value);
    virtual LPCWSTR_S GetName ();
    virtual void SetName (LPCWSTR_S value);
    virtual intrusive_ptr<CellRange> GetNamedRange ();
    LPCWSTR_S GetNameOrFormula ();
    /*
    <summary>
        Number of the series.
    </summary>
    */
    int GetNumber ();
    /*
    <summary>
        Gets parent serie collection. Read - only.
    </summary>
    */
    intrusive_ptr<XlsChartSeries> GetParentSeries ();
    virtual bool GetUsePrimaryAxis ();
    virtual void SetUsePrimaryAxis (bool value);
    void SetHasDroplines (bool value);
    virtual intrusive_ptr<IChartDataPoints> GetDataPoints ();
    /*
    <summary>
        Returns number of points in the series. Read-only.
    </summary>
    */
    int GetPointNumber ();
    virtual int GetRealIndex ();
    virtual void SetRealIndex (int value);
    virtual intrusive_ptr<IChartSerieDataFormat> GetFormat ();
    virtual ExcelChartType GetSerieType ();
    virtual void SetSerieType (ExcelChartType value);
    /*
    <summary>
        Returns serie start type. Read-only.
    </summary>
    */
    LPCWSTR_S GetStartType ();
    virtual std::vector<intrusive_ptr<Object>> GetEnteredDirectlyValues ();
    virtual void SetEnteredDirectlyValues (std::vector<intrusive_ptr<Object>> value);
    virtual std::vector<intrusive_ptr<Object>> GetEnteredDirectlyCategoryLabels ();
    virtual void SetEnteredDirectlyCategoryLabels (std::vector<intrusive_ptr<Object>> value);
    virtual std::vector<intrusive_ptr<Object>> GetEnteredDirectlyBubbles ();
    virtual void SetEnteredDirectlyBubbles (std::vector<intrusive_ptr<Object>> value);
    /*
    <summary>
        Represents Y error bars. Read only.
    </summary>
    */
    virtual intrusive_ptr<IChartErrorBars> GetErrorBarsY ();
    /*
    <summary>
        Indicates if serie contains Y error bars.
    </summary>
    */
    virtual bool GetHasErrorBarsY ();
    virtual void SetHasErrorBarsY (bool value);
    /*
    <summary>
        Represents X error bars. Read only.
    </summary>
    */
    virtual intrusive_ptr<IChartErrorBars> GetErrorBarsX ();
    /*
    <summary>
        Indicates if serie contains X error bars.
    </summary>
    */
    virtual bool GetHasErrorBarsX ();
    virtual void SetHasErrorBarsX (bool value);
    /*
    <summary>
        Represents serie trend lines collection. Read only.
    </summary>
    */
    virtual intrusive_ptr<IChartTrendLines> GetTrendLines ();
    //System.Nullable`1[[System.Boolean, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089]] GetInvertNegaColor ();
    //void SetInvertNegaColor (System.Nullable`1[[System.Boolean, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089]] value);
    /*
    <summary>
        Represents index of the series.
    </summary>
    */
    int GetIndex ();
    virtual intrusive_ptr<IChartDataLabels> GetDataLabels ();
    intrusive_ptr<IChartFrameFormat> GetParetoLineFormat ();
    //intrusive_ptr<XlsChartSerie> Clone (System.Object parent,System.Collections.Generic.Dictionary`2[[System.String, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089],[System.String, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089]] newNames,System.Collections.Generic.Dictionary`2[[System.Int32, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089],[System.Int32, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089]] fontIndexes);
    virtual intrusive_ptr<IChartErrorBars> ErrorBar (bool bIsY);
    virtual intrusive_ptr<IChartErrorBars> ErrorBar (bool bIsY,ErrorBarIncludeType include);
    virtual intrusive_ptr<IChartErrorBars> ErrorBar (bool bIsY,ErrorBarIncludeType include,ErrorBarType type);
    virtual intrusive_ptr<IChartErrorBars> ErrorBar (bool bIsY,ErrorBarIncludeType include,ErrorBarType type,double numberValue);
    virtual intrusive_ptr<IChartErrorBars> ErrorBar (bool bIsY,intrusive_ptr<IXLSRange> plusRange,intrusive_ptr<IXLSRange> minusRange);
    /*
    <summary>
        Gets common serie format.
    </summary>
    <returns>Returns common serie format.</returns>
    */
    intrusive_ptr<XlsChartFormat> GetCommonSerieFormat ();
    intrusive_ptr<IXLSRange> GetSerieNameRange ();
    void SetDefaultName (LPCWSTR_S defaultName);
private:
};
}}
