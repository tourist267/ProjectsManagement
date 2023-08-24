#pragma once
#include "pch.h"

//#pragma warning(push)
//#pragma warning(disable:4250)
//#include "AxisTextDirectionType.h"
//#include "AxisType.h"
//#include "TickLabelPositionType.h"
//#include "TickMarkType.h"
//#include "IFormat3D.h"
//#include "IFont.h"
//#include "IChartTextArea.h"
//#include "IChartGridLine.h"
//#include "ChartShadow.h"
//#include "ChartBorder.h"
//#pragma warning(pop)

namespace Spire{
namespace Xls{
/*
    <summary>
        Represents an axis on the chart.
    </summary>
*/
class EXPORTS IChartAxis : public virtual Object
{
public:
    /*
    <summary>
         Gets or sets number format string.
        <example>The following code illustrates how to set currency format "$#,##0_);($#,##0)" to 
             NumberFormat to display value in the PrimaryValueAxis as currency:
        <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        Worksheet worksheet = workbook.Worksheets[0];
        //Add data
        worksheet.Range["A1"].Text = "Jan";
                       worksheet.Range["B1"].Text = "Feb";
                       worksheet.Range["C1"].Text = "Mar";
                       worksheet.Range["A2"].Text = "10000";
                       worksheet.Range["B2"].Text = "20000";
                       worksheet.Range["C2"].Text = "30000";
        //Create chart and set range
        Chart chart = worksheet.Charts.Add();
        chart.DataRange = worksheet.Range["A1:C2"];
        //Set chart value axis
        IChartAxis chartAxis = chart.PrimaryValueAxis;
        //Set number format
        chartAxis.NumberFormat = @"$#,##0_);($#,##0)";
        //Save to file
        workbook.SaveToFile("Chart.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual LPCWSTR_S GetNumberFormat ()=0;
    virtual void SetNumberFormat (LPCWSTR_S value)=0;
    /*
    <summary>
         Returns type of the axis. Read-only.
        <example>The following code illustrates how to access the AxisType property:
        <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        Worksheet worksheet = workbook.Worksheets[0];
        //Add data
        worksheet.Range["A1"].Text = "Jan";
                       worksheet.Range["B1"].Text = "Feb";
                       worksheet.Range["C1"].Text = "Mar";
                       worksheet.Range["A2"].Text = "10000";
                       worksheet.Range["B2"].Text = "20000";
                       worksheet.Range["C2"].Text = "30000";
        //Create chart and set range
        Chart chart = worksheet.Charts.Add();
        chart.DataRange = worksheet.Range["A1:C2"];
        //Set chart value axis
        IChartAxis chartAxis = chart.PrimaryValueAxis;
        //Get axis type
        Console.WriteLine(chartAxis.AxisType);
        //Save to file
        workbook.SaveToFile("Chart.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual AxisType GetAxisType ()=0;
    /*
    <summary>
         Axis title.
        <example>The following code illustrates how to set Title for the IChart.PrimaryCategoryAxis:
        <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        Worksheet worksheet = workbook.Worksheets[0];
        //Add data
        worksheet.Range["A1"].Text = "Jan";
                       worksheet.Range["B1"].Text = "Feb";
                       worksheet.Range["C1"].Text = "Mar";
                       worksheet.Range["A2"].Text = "10";
                       worksheet.Range["B2"].Text = "20";
                       worksheet.Range["C2"].Text = "30";
        //Create chart and set range
        Chart chart = worksheet.Charts.Add();
        chart.DataRange = worksheet.Range["A1:C2"];
        //Set chart category axis
        IChartAxis categoryAxis = chart.PrimaryCategoryAxis;
        //Set category title
        categoryAxis.Title = "Categories";
        //Save to file
        workbook.SaveToFile("Chart.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual LPCWSTR_S GetTitle ()=0;
    virtual void SetTitle (LPCWSTR_S value)=0;
    /*
    <summary>
         Text rotation angle. Should be integer value between -90 and 90.
        <example>The following code illustrates how to set TextRotationAngle for 
             IChart.PrimaryCategoryAxis:
        <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        Worksheet worksheet = workbook.Worksheets[0];
        //Add data
        worksheet.Range["A1"].Text = "Jan";
                       worksheet.Range["B1"].Text = "Feb";
                       worksheet.Range["C1"].Text = "Mar";
                       worksheet.Range["A2"].Text = "10";
                       worksheet.Range["B2"].Text = "20";
                       worksheet.Range["C2"].Text = "30";
        //Create chart and set range
        Chart chart = worksheet.Charts.Add();
        chart.DataRange = worksheet.Range["A1:C2"];
        //Set chart category axis
        IChartAxis chartAxis =  chart.PrimaryCategoryAxis;
        //Set text rotation angle
        chartAxis.TextRotationAngle = 90;
        //Save to file
        workbook.SaveToFile("Chart.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual int GetTextRotationAngle ()=0;
    virtual void SetTextRotationAngle (int value)=0;
    /*
    <summary>
         Returns text area for the axis title. Read-only.
        <example>The following code illustrates how to set foreground color to 
             IChart.PrimaryCategoryAxis's title area using TitleArea property:
        <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        Worksheet worksheet = workbook.Worksheets[0];
        //Add data
        worksheet.Range["A1"].Text = "Jan";
                       worksheet.Range["B1"].Text = "Feb";
                       worksheet.Range["C1"].Text = "Mar";
                       worksheet.Range["A2"].Text = "10";
                       worksheet.Range["B2"].Text = "20";
                       worksheet.Range["C2"].Text = "30";
        //Create chart and set range
        Chart chart = worksheet.Charts.Add();
        chart.DataRange = worksheet.Range["A1:C2"];
        //Set chart category axis
        IChartAxis categoryAxis = chart.PrimaryCategoryAxis;
        //Set category title
        categoryAxis.Title = "Categories";
        //Set title area
        IChartTextArea titleArea = categoryAxis.TitleArea;
        //Set color
        titleArea.FrameFormat.Fill.ForeKnownColor = ExcelColors.Red;
        //Save to file
        workbook.SaveToFile("Chart.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual intrusive_ptr<IChartTextArea> GetTitleArea ()=0;
    /*
    <summary>
         Returns font used for axis text displaying. Read-only.
        <example>The following code illustrates how to set font color to the 
             IChart.PrimaryCategoryAxis's category labels using Font property:
        <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        Worksheet worksheet = workbook.Worksheets[0];
        //Add data
        worksheet.Range["A1"].Text = "Jan";
                       worksheet.Range["B1"].Text = "Feb";
                       worksheet.Range["C1"].Text = "Mar";
                       worksheet.Range["A2"].Text = "10";
                       worksheet.Range["B2"].Text = "20";
                       worksheet.Range["C2"].Text = "30";
        //Create chart and set range
        Chart chart = worksheet.Charts.Add();
        chart.DataRange = worksheet.Range["A1:C2"];
        //Set chart axis
        IChartAxis chartAxis =  chart.PrimaryCategoryAxis;
        //Set font color
        chartAxis.Font.Color = Color.Red;
        //Save to file
        workbook.SaveToFile("Chart.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual intrusive_ptr<IFont> GetFont ()=0;
    /*
    <summary>
         Represents major gridLines. Read-only.
        <example>The following code illustrates how to access MajorGridLines of 
             IChart.PrimaryCategoryAxis and set colors to it:
        <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        Worksheet worksheet = workbook.Worksheets[0];
        //Add data
        worksheet.Range["A1"].Text = "Jan";
                       worksheet.Range["B1"].Text = "Feb";
                       worksheet.Range["C1"].Text = "Mar";
                       worksheet.Range["A2"].Text = "10";
                       worksheet.Range["B2"].Text = "20";
                       worksheet.Range["C2"].Text = "30";
        //Create chart and set range
        Chart chart = worksheet.Charts.Add();
        chart.DataRange = worksheet.Range["A1:C2"];
        //Set chart axis
        IChartAxis chartAxis =  chart.PrimaryCategoryAxis;
        //Set visibility
        chartAxis.HasMajorGridLines = true;
        //Set grid lines
        IChartGridLine gridLine = chartAxis.MajorGridLines;
        gridLine.LineProperties.Color = Color.Red;
        //Save to file
        workbook.SaveToFile("Chart.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual intrusive_ptr<IChartGridLine> GetMajorGridLines ()=0;
    /*
    <summary>
         Represents minor gridLines. Read-only.
        <example>The following code illustrates how to access MinorGridLines of 
             IChart.PrimaryCategoryAxis and set colors to it:
        <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        Worksheet worksheet = workbook.Worksheets[0];
        //Add data
        worksheet.Range["A1"].Text = "Jan";
                       worksheet.Range["B1"].Text = "Feb";
                       worksheet.Range["C1"].Text = "Mar";
                       worksheet.Range["A2"].Text = "10";
                       worksheet.Range["B2"].Text = "20";
                       worksheet.Range["C2"].Text = "30";
        //Create chart and set range
        Chart chart = worksheet.Charts.Add();
        chart.DataRange = worksheet.Range["A1:C2"];
        //Set chart axis
        IChartAxis chartAxis =  chart.PrimaryCategoryAxis;
        //Set visibility
        chartAxis.HasMinorGridLines = true;
        //Set grid lines
        IChartGridLine gridLine = chartAxis.MinorGridLines;
        gridLine.LineProperties.Color = Color.Red;
        //Save to file
        workbook.SaveToFile("Chart.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual intrusive_ptr<IChartGridLine> GetMinorGridLines ()=0;
    /*
    <summary>
         Gets or sets if axis has minor gridlines.
        <example>The following code illustrates how to set visibility of MinorGridLines of 
             IChart.PrimaryCategoryAxis:
        <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        Worksheet worksheet = workbook.Worksheets[0];
        //Add data
        worksheet.Range["A1"].Text = "Jan";
                       worksheet.Range["B1"].Text = "Feb";
                       worksheet.Range["C1"].Text = "Mar";
                       worksheet.Range["A2"].Text = "10";
                       worksheet.Range["B2"].Text = "20";
                       worksheet.Range["C2"].Text = "30";
        //Create chart and set range
        Chart chart = worksheet.Charts.Add();
        chart.DataRange = worksheet.Range["A1:C2"];
        //Set chart axis
        IChartAxis chartAxis =  chart.PrimaryCategoryAxis;
        //Set visibility
        chartAxis.HasMinorGridLines = true;
        //Save to file
        workbook.SaveToFile("Chart.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual bool GetHasMinorGridLines ()=0;
    virtual void SetHasMinorGridLines (bool value)=0;
    /*
    <summary>
         Gets or sets if axis has major gridlines.
        <example>The following code illustrates how to set visibility of MajorGridLines of 
             IChart.PrimaryCategoryAxis:
        <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        Worksheet worksheet = workbook.Worksheets[0];
        //Add data
        worksheet.Range["A1"].Text = "Jan";
                       worksheet.Range["B1"].Text = "Feb";
                       worksheet.Range["C1"].Text = "Mar";
                       worksheet.Range["A2"].Text = "10";
                       worksheet.Range["B2"].Text = "20";
                       worksheet.Range["C2"].Text = "30";
        //Create chart and set range
        Chart chart = worksheet.Charts.Add();
        chart.DataRange = worksheet.Range["A1:C2"];
        //Set chart axis
        IChartAxis chartAxis =  chart.PrimaryCategoryAxis;
        //Set visibility
        chartAxis.HasMajorGridLines = true;
        //Save to file
        workbook.SaveToFile("Chart.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual bool GetHasMajorGridLines ()=0;
    virtual void SetHasMajorGridLines (bool value)=0;
    /*
    <summary>
         Represents minor tick marks.
        <example>The following code illustrates how to set TickMarkType.TickMarkCross to MinorTickMark:
        <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        Worksheet worksheet = workbook.Worksheets[0];
        //Add data
        worksheet.Range["A1"].Text = "Jan";
                       worksheet.Range["B1"].Text = "Feb";
                       worksheet.Range["C1"].Text = "Mar";
                       worksheet.Range["A2"].Text = "10";
                       worksheet.Range["B2"].Text = "20";
                       worksheet.Range["C2"].Text = "30";
        //Create chart and set range
        Chart chart = worksheet.Charts.Add();
        chart.DataRange = worksheet.Range["A1:C2"];
        //Set chart category axis
        IChartAxis categoryAxis = chart.PrimaryCategoryAxis;
        //Set category minor tick type
        categoryAxis.MinorTickMark = TickMarkType.TickMarkCross;
        //Save to file
        workbook.SaveToFile("Chart.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual TickMarkType GetMinorTickMark ()=0;
    virtual void SetMinorTickMark (TickMarkType value)=0;
    /*
    <summary>
         Represents major tick marks.
        <example>The following code illustrates how to set TickMarkType.TickMarkCross to MajorTickMark:
        <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        Worksheet worksheet = workbook.Worksheets[0];
        //Add data
        worksheet.Range["A1"].Text = "Jan";
                       worksheet.Range["B1"].Text = "Feb";
                       worksheet.Range["C1"].Text = "Mar";
                       worksheet.Range["A2"].Text = "10";
                       worksheet.Range["B2"].Text = "20";
                       worksheet.Range["C2"].Text = "30";
        //Create chart and set range
        Chart chart = worksheet.Charts.Add();
        chart.DataRange = worksheet.Range["A1:C2"];
        //Set chart category axis
        IChartAxis categoryAxis = chart.PrimaryCategoryAxis;
        //Set category minor tick type
        categoryAxis.MajorTickMark = TickMarkType.TickMarkCross;
        //Save to file
        workbook.SaveToFile("Chart.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual TickMarkType GetMajorTickMark ()=0;
    virtual void SetMajorTickMark (TickMarkType value)=0;
    /*
    <summary>
         Represents chart border. Read only.
        <example>The following code illustrates how to set color to IChart.PrimaryCategoryAxis's 
             border using Border property:
        <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        Worksheet worksheet = workbook.Worksheets[0];
        //Add data
        worksheet.Range["A1"].Text = "Jan";
                       worksheet.Range["B1"].Text = "Feb";
                       worksheet.Range["C1"].Text = "Mar";
                       worksheet.Range["A2"].Text = "10";
                       worksheet.Range["B2"].Text = "20";
                       worksheet.Range["C2"].Text = "30";
        //Create chart and set range
        Chart chart = worksheet.Charts.Add();
        chart.DataRange = worksheet.Range["A1:C2"];
        //Set chart category axis
        IChartAxis categoryAxis = chart.PrimaryCategoryAxis;
        //Set border and color
        IChartBorder border = categoryAxis.Border;
        border.Color = Color.Red;
        //Save to file
        workbook.SaveToFile("Chart.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual intrusive_ptr<ChartBorder> GetBorder ()=0;
    /*
    <summary>
         Represents tick label position.
        <example>The following code illustrates how to set TickLabelPositionType.TickLabelPositionHigh 
             to TickLabelPosition property:
        <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        Worksheet worksheet = workbook.Worksheets[0];
        //Add data
        worksheet.Range["A1"].Text = "Jan";
                       worksheet.Range["B1"].Text = "Feb";
                       worksheet.Range["C1"].Text = "Mar";
                       worksheet.Range["A2"].Text = "10";
                       worksheet.Range["B2"].Text = "20";
                       worksheet.Range["C2"].Text = "30";
        //Create chart and set range
        Chart chart = worksheet.Charts.Add();
        chart.DataRange = worksheet.Range["A1:C2"];
        //Set chart category axis
        IChartAxis categoryAxis = chart.PrimaryCategoryAxis;
        //Set category tick labels position
        categoryAxis.TickLabelPosition = TickLabelPositionType.TickLabelPositionHigh;
        //Save to file
        workbook.SaveToFile("Chart.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual TickLabelPositionType GetTickLabelPosition ()=0;
    virtual void SetTickLabelPosition (TickLabelPositionType value)=0;
    /*
    <summary>
         Indicates is axis is visible.
        <example>The following code illustrates how to set visibility of IChart.PrimaryCategoryAxis:
        <code>
        //Create worksheet
        Workbook workbook = new Workbook();
        Worksheet worksheet = workbook.Worksheets[0];
        //Add data
        worksheet.Range["A1"].Text = "Jan";
                       worksheet.Range["B1"].Text = "Feb";
                       worksheet.Range["C1"].Text = "Mar";
                       worksheet.Range["A2"].Text = "10";
                       worksheet.Range["B2"].Text = "20";
                       worksheet.Range["C2"].Text = "30";
        //Create chart and set range
        Chart chart = worksheet.Charts.Add();
        chart.DataRange = worksheet.Range["A1:C2"];
        //Set chart axis
        IChartAxis chartAxis =  chart.PrimaryCategoryAxis;
        //Set visibility
        chartAxis.Visible = false;
        //Save to file
        workbook.SaveToFile("Chart.xlsx");
        </code>
        </example>
    </summary>
    */
    virtual bool GetVisible ()=0;
    virtual void SetVisible (bool value)=0;
    /*
    <summary>
        Represents alignment for the tick label.
    </summary>
    */
    virtual AxisTextDirectionType GetAlignment ()=0;
    virtual void SetAlignment (AxisTextDirectionType value)=0;
    /*
    <summary>
        Returns the Shadow properties.Read-only.
    </summary>
    */
    virtual intrusive_ptr<ChartShadow> GetShadow ()=0;
    /*
    <summary>
        Gets the three_ D.
    </summary>
    <value>The three_ D.</value>
    */
    virtual intrusive_ptr<IFormat3D> GetChart3DOptions ()=0;
    virtual bool GetIsSourceLinked ()=0;
    virtual void SetIsSourceLinked (bool value)=0;
private:
};
}}
