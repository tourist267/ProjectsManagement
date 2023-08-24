#pragma once
#define FOR_OUT
#define _SPIRE_XLS
#undef _SPIRE_DOC
#undef _SPIRE_PDF
#undef _SPIRE_PPT
#undef REFERENCE_COUNTER_H

#include "xls/h/pch.h"
#include "common/h/Object.h"
#include "common/h/common.h"
#include "common/h/license.h"

#include "common/h/Stream.h"
#include "common/h/EmfType.h"
#include "common/h/ImageFormat.h"
#include "common/h/FontStyle.h"
#include "common/h/GraphicsUnit.h"
#include "common/h/Point.h"
#include "common/h/PointF.h"
#include "common/h/Size.h"
#include "common/h/SizeF.h"
#include "common/h/Rectangle.h"
#include "common/h/RectangleF.h"
#include "common/h/Encoding.h"
#include "common/h/Color.h"
#include "common/h/Font.h"
#include "common/h/CultureInfo.h"
#include "common/h/Image.h"
#include "common/h/Bitmap.h"
#include "common/h/DateTime.h"
#include "common/h/TimeSpan.h"
#include "common/h/TimeSpan.h"
#include "common/h/IEnumerator.h"
#include "common/h/IEnumerable.h"
#include "common/h/IList.h"
#include "common/h/ICollection.h"
#include "common/h/IDictionary.h"
#include "common/h/IDictionaryEnumerator.h"
#include "common/h/Single.h"
#include "common/h/Int16.h"
#include "common/h/Int32.h"
#include "common/h/Int64.h"
#include "common/h/UInt16.h"
#include "common/h/UInt32.h"
#include "common/h/UInt64.h"
#include "common/h/Double.h"
#include "common/h/SpireString.h"
#include "common/h/Boolean.h"
#include "common/h/Byte.h"
#include "common/h/Char.h"
#include "common/h/Regex.h"
#include "common/h/RegexOptions.h"
#include "common/h/ReferenceCounter.h"


namespace Spire {
    namespace Xls {
        enum class EmfType;
        enum class FontStyle;
        enum class GraphicsUnit;
        enum class PixelFormat;
        enum class RegexOptions;
        class CultureInfo;
        class Color;
        class Font;
        class Bitmap;
        class Stream;
        class Encoding;
        class Image;
        class ImageFormat;
        class Point;
        class PointF;
        class Size;
        class SizeF;
        class Rectangle;
        class RectangleF;
        class DateTime;
        class TimeSpan;
        class Int16;
        class Int32;
        class Int64;
        class UInt16;
        class UInt32;
        class UInt64;
        class Single;
        class Double;
        class Char;
        class SpireString;
        class Byte;
        class Regex;
        template<typename T> class IEnumerator;
        template<typename T> class IEnumerable;
        template<typename T> class IList;
        template<typename T> class ICollection;
        template<typename K, typename V> class IDictionary;
        template<typename K, typename V> class IDictionaryEnumerator;

        class ReferenceCounter;
        //class IRef;
        //template <typename T> void intrusive_ptr_add_ref(T* t);
        //template <typename T> void intrusive_ptr_release(T* t);

        enum class EmfType;
        enum class FontStyle;
        enum class GraphicsUnit;
        enum class PixelFormat;
        enum class RegexOptions;
        class CultureInfo;
        class Color;
        class Font;
        class Bitmap;
        class Stream;
        class Encoding;
        class Image;
        class ImageFormat;
        class Point;
        class PointF;
        class Size;
        class SizeF;
        class Rectangle;
        class RectangleF;
        class DateTime;
        class TimeSpan;
        class Int16;
        class Int32;
        class Int64;
        class UInt16;
        class UInt32;
        class UInt64;
        class Single;
        class Double;
        class Char;
        class SpireString;
        class Byte;
        class Regex;
        template<typename T> class IEnumerator;
        template<typename T> class IEnumerable;
        template<typename T> class IList;
        template<typename T> class ICollection;
        template<typename K, typename V> class IDictionary;
        template<typename K, typename V> class IDictionaryEnumerator;
        class ReferenceCounter;
        //class IRef;
        //template <typename T> void intrusive_ptr_add_ref(T*);
        //template <typename T> void intrusive_ptr_release(T*);

        enum class AlertStyleType;
        enum class AutoFormatOptions;
        enum class AutoFormatType;
        enum class AverageType;
        enum class AxisLineIdentifierType;
        enum class AxisTextDirectionType;
        enum class AxisType;
        enum class AxisTypes;
        enum class BaseFormatType;
        enum class BordersLineType;
        enum class BubbleSizeType;
        enum class BuiltInPropertyType;
        enum class BuiltInStyles;
        enum class CategoryType;
        enum class CellDataType;
        enum class CellFormatType;
        enum class ChartBackgroundMode;
        enum class ChartBaseUnitType;
        enum class ChartDisplayUnitType;
        enum class ChartLinePatternType;
        enum class ChartLineWeightType;
        enum class ChartMarkerType;
        enum class ChartParagraphType;
        enum class ChartPieType;
        enum class ChartPlotEmptyType;
        enum class CheckState;
        enum class ColorType;
        enum class CommentHAlignType;
        enum class CommentVAlignType;
        enum class ComparisonOperatorType;
        enum class CompoundLineType;
        enum class ConditionalFormatScope;
        enum class ConditionalFormatType;
        enum class ConditionalTopNType;
        enum class ConditionValuePosition;
        enum class ConditionValueType;
        enum class ConnectionDataSourceType;
        enum class CopyRangeOptions;
        enum class DataBarAxisPosition;
        enum class DataBarBorderType;
        enum class DataBarFillType;
        enum class DataBarNegativeColorType;
        enum class DataLabelPositionType;
        enum class DataMarkerDirection;
        enum class DataSourceType;
        enum class DateTimeGroupingType;
        enum class DeleteOption;
        enum class DropLineStyleType;
        enum class DVAspect;
        enum class DynamicFilterType;
        enum class ErrorBarIncludeType;
        enum class ErrorBarType;
        enum class Excel2016Charttype;
        enum class ExcelCalculationMode;
        enum class ExcelChartType;
        enum class ExcelClearOptions;
        enum class ExcelColors;
        enum class ExcelComboType;
        enum class ExcelFindOptions;
        enum class ExcelHorizontalAlignment;
        enum class ExcelPatternType;
        enum class ExcelQuartileCalculation;
        enum class ExcelSaveType;
        enum class ExcelShapeType;
        enum class ExcelSheetType;
        enum class ExcelTotalsCalculation;
        enum class ExcelTreeMapLabelOption;
        enum class ExcelVersion;
        enum class ExcelVerticalAlignment;
        enum class ExpandCollapseFlags;
        enum class FileFormat;
        enum class FillPictureType;
        enum class FilterConditionType;
        enum class FilterDataType;
        enum class FilterOperatorType;
        enum class FilterType;
        enum class FindType;
        enum class FontUnderlineType;
        enum class FontVertialAlignmentType;
        enum class GeomertyAdjustValueFormulaType;
        enum class GetText;
        enum class GradientColorType;
        enum class GradientPatternType;
        enum class GradientPresetType;
        enum class GradientStyleType;
        enum class GradientTextureType;
        enum class GradientType;
        enum class GradientVariantsType;
        enum class GroupByType;
        enum class HorizontalAlignType;
        enum class HttpContentType;
        enum class HyperLinkType;
        enum class IconSetType;
        enum class IgnoreErrorType;
        enum class ImageFormatType;
        enum class ImageLocationTypes;
        enum class ImageType;
        enum class InsertMoveOption;
        enum class InsertOptionsType;
        enum class LegendPositionType;
        enum class LegendSpacingType;
        enum class LineShapeType;
        enum class LineStyleType;
        enum class MeasureUnits;
        enum class MsoPathType;
        enum class OdsPageBackgroundImagePositionType;
        enum class OdsPageBackgroundImageType;
        enum class OdsPageBackgroundType;
        enum class OLEDBCommandType;
        enum class OleLinkType;
        enum class OleObjectType;
        enum class OrderBy;
        enum class OrderType;
        enum class PageBreakExtentType;
        enum class PageBreakType;
        enum class PageOrientationType;
        enum class PagesOrderType;
        enum class PaperSizeType;
        enum class PathFillMode;
        enum class PivotAutoFomatTypes;
        enum class PivotBuiltInStyles;
        enum class PivotDataType;
        enum class PivotFieldFormatType;
        enum class PivotFieldSortType;
        enum class PivotItemType;
        enum class PivotPageAreaFieldsOrderType;
        enum class PivotTableElement;
        enum class PivotTableLayoutType;
        enum class PresetTextEffect;
        enum class PrintCommentType;
        enum class PrintErrorsType;
        enum class PrintingPageType;
        enum class PropertyType;
        enum class PrstGeomShapeType;
        enum class ReadingOrderType;
        enum class RectangleShapeType;
        enum class RectangleStyleType;
        enum class RelationShip;
        enum class RenameStrategy;
        enum class ResizeBehaveType;
        enum class RtfTags;
        enum class SelectionType;
        enum class ShapeArrowLengthType;
        enum class ShapeArrowStyleType;
        enum class ShapeArrowWidthType;
        enum class ShapeDashLineStyleType;
        enum class ShapeFillType;
        enum class ShapeLayerChangeType;
        enum class ShapeLineStyleType;
        enum class SheetProtectionType;
        enum class SortComparsionType;
        enum class SortedWayType;
        enum class SortOrientationType;
        enum class SparklineEmptyCells;
        enum class SparklineType;
        enum class SpartlineVerticalAxisType;
        enum class SplitType;
        enum class StrikeThroughStyle;
        enum class StyleDefineType;
        enum class SubtotalTypes;
        enum class TableBuiltInStyles;
        enum class TextDirection;
        enum class TextDirectionType;
        enum class TextRotationType;
        enum class ThemeColorType;
        enum class TickLabelPositionType;
        enum class TickMarkType;
        enum class TimePeriodType;
        enum class TopBottomType;
        enum class TopFormatType;
        enum class TRangeValueType;
        enum class TrendLineType;
        enum class UnderlineStyle;
        enum class UnknownVariableAction;
        enum class ValidationComparisonOperator;
        enum class VariableTypeAction;
        enum class VerticalAlignType;
        enum class ViewMode;
        enum class WorksheetCopyType;
        enum class WorksheetVisibility;
        enum class XLSXBorderJoinType;
        enum class XLSXChartBevelType;
        enum class XLSXChartLightingType;
        enum class XLSXChartMaterialType;
        enum class XLSXChartPrespectiveType;
        enum class XLSXChartShadowInnerType;
        enum class XLSXChartShadowOuterType;
        enum class XLSXPivotItemType;
        enum class XmlOpenType;
        enum class PdfConformanceLevel;

        class TextSaveOptions;
        class IDocumentProperty;
        //class IPropertyData;
        class ConverterSetting;
        class PageColRow;
        class ExternalConnection;
        class ExportTableOptions;
        class DBConnection;
        class IExcelApplication;
        class ImportObjectOptions;
        class QueryTableXls;
        class ReferRangeArea;
        class ICloneParent;
        class WebQueryConnection;
        class IChart;
        class IShadow;
        class ITabSheet;
        class IConditionalFormats;
        class IPivotFields;
        class IConditionalFormat;
        class DocumentProperty;
        class IInterior;
        class IPivotCache;
        class IPivotField;
        class IPivotTable;
        class ISparkline;
        class ISparklines;
        class ISparklineGroup;
        class SparklineGroupCollection;
        class MarkerDesigner;
        class ColorScale;
        class XlsConditionalFormat;
        class DataBar;
        class IShape;
        class ITextBox;
        class IPictureShape;
        class IFormat3D;
        class IconSet;
        class IBorder;
        class IXLSRange;
        class CellStyleFlag;
        class IExtendedFormat;
        class IOptimizedUpdate;
        class IAddInFunction;
        class IFont;
        class IGradient;
        class IHPageBreak;
        class IHyperLink;
        class OColor;
        class IPageSetupBase;
        class IRichTextString;
        class RichTextObject;
        class IDataValidation;
        class IVPageBreak;
        class IWorksheet;
        class SaveShapeTypeOption;
        class Workbook;
        class IConditionValue;
        class XlsConditionValue;
        class ConditionValue;
        class OdsPageBackground;
        class IGlow;
        class IConditionalFormatsCollection;
        class DataConnections;
        class ExternalLinkCollection;
        class QueryTableCollection;
        class IBuiltInDocumentProperties;
        class IXLSRanges;
        class IPivotCaches;
        class IPivotTables;
        class ICharts;
        class IComments;
        class IPictures;
        class IChartShapes;
        class IAddInFunctions;
        class IBorders;
        class XlsFontsCollection;
        class IHPageBreaks;
        class IHyperLinks;
        class IVPageBreaks;
        class ITabSheets;
        class IWorksheets;
        class IStyles;
        class IAutoFilters;
        class XlsChartFormatCollection;
        class IChartFillBorder;
        class IChartBorder;
        class IChartAxis;
        class IChartTextArea;
        class IChartDataPoint;
        class IChartDataTable;
        class IChartDropBar;
        class IChartFormat;
        class IChartGridLine;
        class IChartInterior;
        class IChartLegend;
        class IChartLegendEntry;
        class IChartPageSetup;
        class IChartFrameFormat;
        class IChartSerie;
        class IChartSerieDataFormat;
        class IChartSeriesAxis;
        class IChartDataLabels;
        class XlsChartTitleArea;
        class IChartValueAxis;
        class IChartWallOrFloor;
        class IChartDataPoints;
        class IChartSeries;
        class XlsWorksheetConditionalFormats;
        class IDataValidationCollection;
        class IDataValidationTable;
        class XlsBuiltInDocumentProperties;
        class ICustomDocumentProperties;
        class IInternalWorksheet;
        class IMarkersDesigner;
        class IMigrantRange;
        class ICombinedRange;
        class XlsPivotCache;
        class XlsPivotCachesCollection;
        class IPivotCalculatedFields;
        class IPivotDataField;
        class IPivotDataFields;
        class XlsPivotField;
        class PivotTableFields;
        class XlsPivotTable;
        class IPivotTableOptions;
        class XlsPivotTablesCollection;
        class IArcShapes;
        class IButtonShapes;
        class XlsChartDataPointsCollection;
        class XlsChartsCollection;
        class XlsChartSeries;
        class XlsWorksheetChartsCollection;
        class IChartTrendLines;
        class ICheckBoxes;
        class IComboBoxes;
        class XlsCommentsCollection;
        class IGroupBoxes;
        class ILabelShapes;
        class ILines;
        class IListBoxes;
        class IOleObjects;
        class IOvalShapes;
        class XlsPicturesCollection;
        class IPrstGeomShapes;
        class IRadioButtons;
        class IRectangleShapes;
        class IScrollBarShapes;
        class IShapes;
        class ISpinnerShapes;
        class ITextBoxes;
        class IPrstGeomShape;
        class IButtonShape;
        class IChartShape;
        class IChartCategoryAxis;
        class XlsChartBorder;
        class XlsChartCategoryAxis;
        class XlsChartDataLabels;
        class XlsChartDataPoint;
        class XlsChartDataTable;
        class XlsChartDropBar;
        class IChartErrorBars;
        class XlsChartFrameFormat;
        class XlsChartFormat;
        class XlsChartPlotArea;
        class XlsChartGridLine;
        class XlsChartInterior;
        class XlsChartLegend;
        class IChartLegendEntries;
        class XlsChartLegendEntry;
        class XlsChartPageSetup;
        class INamedObject;
        class XlsChartSerieDataFormat;
        class XlsChartSeriesAxis;
        class XlsShape;
        class XlsObject;
        class IChartTrendLine;
        class XlsChartValueAxis;
        class XlsChartWallOrFloor;
        class ICheckBox;
        class IComboBoxShape;
        class ITextBoxShape;
        class IComment;
        class IGeomPathInfo;
        class IGeomPathShape;
        class IGroupBox;
        class ILabelShape;
        class ILineShape;
        class IListBox;
        class IOleObject;
        class IOvalShape;
        class XlsBitmapShape;
        class IArcShape;
        class IGeomPath;
        class IRadioButton;
        class IRectangleShape;
        class IScrollBarShape;
        class ICommentShape;
        class IShapeFill;
        class IShapeLineFormat;
        class ISpinnerShape;
        class ExcelCommentObject;
        class ExcelComment;
        class ITextBoxLinkShape;
        class TextBoxShapeBase;
        class ITextFrame;
        class IDataSort;
        class ISortColumn;
        class ISortColumns;
        class ISortedRule;
        class MsoPathInfo;
        class XlsAddInFunctionsCollection;
        class BordersCollection;
        class XlsHPageBreaksCollection;
        class XlsHyperLinksCollection;
        class IListObjects;
        class INameRanges;
        class XlsStylesCollection;
        class XlsWorkbookObjectsCollection;
        class XlsVPageBreaksCollection;
        class IWorksheetGroup;
        class XlsWorksheetsCollection;
        class XlsAddInFunction;
        class CellBorder;
        class IReflectionEffect;
        class XlsRange;
        class XlsValidationWrapper;
        class IErrorIndicator;
        class ExternalLink;
        class IStyle;
        class ExcelFont;
        class ExcelGradient;
        class XlsHPageBreak;
        class XlsHyperLink;
        class ExcelInterior;
        class IListObject;
        class IListObjectColumn;
        class INamedRange;
        class INumberFormat;
        class IPageSetup;
        class XlsRangesCollection;
        class RichText;
        class CellStyleObject;
        class XlsChart;
        class XlsVPageBreak;
        class IWorkbook;
        class XlsWorksheetBase;
        class XlsAutoFiltersCollection;
        class IAutoFilter;
        class CondFormatCollectionWrapper;
        class IColorConditionValue;
        class IColorScale;
        class CommonWrapper;
        class IDataBar;
        class IIconSet;
        class IAutoFilterCondition;
        class XlsDocumentProperty;
        class ShapeReflection;
        class Format3D;
        class ChartShadow;
        class IExtendIndex;
        class IInternalAddtionalFormat;
        class IInternalFont;
        class XlsChartSerie;
        class CellStyle;
        class XlsPageSetupBase;
        class ShapeGlow;
        class IDigitalSignature;
        class IDigitalSignatures;
        class WriteProtection;
        class AddtionalFormatWrapper;
        class Sparkline;
        class SparklineGroup;
        class SparklineCollection;
        class XlsFill;
        class RichTextShape;
        class RTFCommentArray;
        class CellBaseStyle;
        class ConditionalFormatWrapper;
        class FontArrayWrapper;
        class FontWrapper;
        class GradientArrayWrapper;
        class HTMLOptions;
        class InteriorArrayWrapper;
        class RichTextString;
        class RangeRichTextString;
        class RtfTextWriter;
        //class LOGFONT;
        class RTFStringArray;
        class StyleArrayWrapper;
        class UtilityMethods;
        class ExcelAddInFunction;
        class XlsBorder;
        class XlsBorderArrayWrapper;
        class XlsGradient;
        class HPageBreak;
        class XlsValidation;
        class XlsDataValidationTable;
        class XlsFont;
        class XlsFontStyle;
        class HyperLink;
        class XlsName;
        class ChartTextArea;
        class XlsEventArgs;
        class XlsEventHandler;
        class XlsPageSetup;
        class PageSetup;
        class CellRange;
        class CellValueChangedEventArgs;
        class XlsStyle;
        class Validation;
        class VPageBreak;
        class XlsWorkbook;
        class XlsWorksheet;
        class Worksheet;
        class ColorConditionValue;
        class ConditionalFormat;
        class Average;
        class DataBarBorder;
        class NegativeBarFormat;
        class TopBottom;
        class ColorFilter;
        class CustomFilter;
        class CustomFilterCollection;
        class DateTimeGroupItem;
        class DynamicFilter;
        class FilterColumn;
        class AutoFitterOptions;
        class MultipleFilterCollection;
        class Top10Filter;
        class DataSorter;
        class SortColumn;
        class SortColumns;
        class ListObjectCollection;
        //class EncryptedKeyInfo;
        class PivotCalculatedFieldsCollection;
        class PivotConditionalFormatCollection;
        class PivotDataFields;
        class AutoSortScope;
        class PivotConditionalFormat;
        class PivotDataField;
        class PivotItem;
        class PivotReportFilter;
        class PivotReportFilters;
        class PivotStyle;
        class PivotTableStyle;
        class PivotCache;
        class XlsPivotCacheField;
        class PivotField;
        class PivotTable;
        class ChartLegendEntriesColl;
        class ChartSheet;
        class XlsChartAxis;
        class ChartBorder;
        class ChartCategoryAxis;
        class XlsChartDataLabelArea;
        class ChartDataLabels;
        class ChartDataPoint;
        class ChartDataTable;
        class ChartDropBar;
        class XlsShapeFill;
        class ChartFormat;
        class ChartArea;
        class ChartGridLine;
        class ChartInterior;
        class ChartLegend;
        class XlsChartLegendArea;
        class ChartLegendEntry;
        class ChartPageSetup;
        class ChartPlotArea;
        class ChartSerie;
        class ChartSerieDataFormat;
        class HistogramAxisFormat;
        class ChartSeriesAxis;
        class ChartTitle;
        class ChartValueAxis;
        class ChartWallOrFloor;
        class ChartFormatCollection;
        class ChartDataPointsCollection;
        class ChartSeries;
        class GeomertyAdjustValue;
        class XlsChartShape;
        class XlsGradientStop;
        class GradientStops;
        class CommentsRange;
        class XlsPrstGeomShape;
        class ExcelPicture;
        class XlsButtonShape;
        class XlsCheckBoxShape;
        class XlsComboBoxShape;
        class XlsComment;
        class XlsGroupBoxShape;
        class XlsLabelShape;
        class XlsLineShape;
        class XlsListBoxShape;
        class XlsOvalShape;
        class XlsArcShape;
        class ShapeGeomPath;
        class ShapeSegmentPath;
        class XlsRadioButtonShape;
        class XlsRectangleShape;
        class XlsScrollBarShape;
        class Chart;
        class XlsShapeLineFormat;
        class XlsSpinnerShape;
        class XlsTextBoxShape;
        class XlsChartFill;
        class PicTile;
        class PicStretch;
        class GeomertyAdjustValuesCollection;
        class BuiltInDocumentProperties;
        class ShapeCollectionBase;
        class RangesCollection;
        class ConditionalFormats;
        class PivotCachesCollection;
        class PivotTablesCollection;
        class ArcShapeCollection;
        class ButtonShapeCollection;
        class CheckBoxCollection;
        class ComboBoxCollection;
        class GroupBoxCollection;
        class LabelShapeCollection;
        class LineCollection;
        class ListBoxCollection;
        class OvalShapeCollection;
        class PrstGeomShapeCollection;
        class RadioButtonCollection;
        class RectangleCollection;
        class ScrollBarCollection;
        class XlsHeaderFooterShapeCollection;
        class SpinnerShapeCollection;
        class TextBoxCollection;
        class ChartsCollection;
        class CommentsCollection;
        class PicturesCollection;
        class WorksheetChartsCollection;
        class BordersCollectionArrayWrapper;
        template<typename T> class CollectionBase;
        class AddInFunctionsCollection;
        class XlsBordersCollection;
        class XlsDataValidationCollection;
        class FontsCollection;
        class HPageBreaksCollection;
        class HyperLinksCollection;
        class StylesCollection;
        class VPageBreaksCollection;
        class WorkbookObjectsCollection;
        class WorksheetsCollection;
        template<typename T> class CollectionExtended;
        class CollectionChangeEventArgs;
        class AutoFiltersCollection;
        class XlsConditionalFormats;
        class WorksheetConditionalFormats;
        class PaperSizeEntry;
        class CellValueChangedEventHandler;
        class StringUtil;

        typedef CellRange Range;
        typedef WorksheetsCollection Worksheets;
        typedef WorksheetChartsCollection Charts;
    }
}

#include "xls/h/AlertStyleType.h"
#include "xls/h/AutoFormatOptions.h"
#include "xls/h/AutoFormatType.h"
#include "xls/h/AverageType.h"
#include "xls/h/AxisLineIdentifierType.h"
#include "xls/h/AxisTextDirectionType.h"
#include "xls/h/AxisType.h"
#include "xls/h/AxisTypes.h"
#include "xls/h/BaseFormatType.h"
#include "xls/h/BordersLineType.h"
#include "xls/h/BubbleSizeType.h"
#include "xls/h/BuiltInPropertyType.h"
#include "xls/h/BuiltInStyles.h"
#include "xls/h/CategoryType.h"
#include "xls/h/CellDataType.h"
#include "xls/h/CellFormatType.h"
#include "xls/h/ChartBackgroundMode.h"
#include "xls/h/ChartBaseUnitType.h"
#include "xls/h/ChartDisplayUnitType.h"
#include "xls/h/ChartLinePatternType.h"
#include "xls/h/ChartLineWeightType.h"
#include "xls/h/ChartMarkerType.h"
#include "xls/h/ChartParagraphType.h"
#include "xls/h/ChartPieType.h"
#include "xls/h/ChartPlotEmptyType.h"
#include "xls/h/CheckState.h"
#include "xls/h/ColorType.h"
#include "xls/h/CommentHAlignType.h"
#include "xls/h/CommentVAlignType.h"
#include "xls/h/ComparisonOperatorType.h"
#include "xls/h/CompoundLineType.h"
#include "xls/h/ConditionalFormatScope.h"
#include "xls/h/ConditionalFormatType.h"
#include "xls/h/ConditionalTopNType.h"
#include "xls/h/ConditionValuePosition.h"
#include "xls/h/ConditionValueType.h"
#include "xls/h/ConnectionDataSourceType.h"
#include "xls/h/CopyRangeOptions.h"
#include "xls/h/DataBarAxisPosition.h"
#include "xls/h/DataBarBorderType.h"
#include "xls/h/DataBarFillType.h"
#include "xls/h/DataBarNegativeColorType.h"
#include "xls/h/DataLabelPositionType.h"
#include "xls/h/DataMarkerDirection.h"
#include "xls/h/DataSourceType.h"
#include "xls/h/DateTimeGroupingType.h"
#include "xls/h/DeleteOption.h"
#include "xls/h/DropLineStyleType.h"
#include "xls/h/DVAspect.h"
#include "xls/h/DynamicFilterType.h"
#include "xls/h/ErrorBarIncludeType.h"
#include "xls/h/ErrorBarType.h"
#include "xls/h/Excel2016Charttype.h"
#include "xls/h/ExcelCalculationMode.h"
#include "xls/h/ExcelChartType.h"
#include "xls/h/ExcelClearOptions.h"
#include "xls/h/ExcelColors.h"
#include "xls/h/ExcelComboType.h"
#include "xls/h/ExcelFindOptions.h"
#include "xls/h/ExcelHorizontalAlignment.h"
#include "xls/h/ExcelPatternType.h"
#include "xls/h/ExcelQuartileCalculation.h"
#include "xls/h/ExcelSaveType.h"
#include "xls/h/ExcelShapeType.h"
#include "xls/h/ExcelSheetType.h"
#include "xls/h/ExcelTotalsCalculation.h"
#include "xls/h/ExcelTreeMapLabelOption.h"
#include "xls/h/ExcelVersion.h"
#include "xls/h/ExcelVerticalAlignment.h"
#include "xls/h/ExpandCollapseFlags.h"
#include "xls/h/FileFormat.h"
#include "xls/h/FillPictureType.h"
#include "xls/h/FilterConditionType.h"
#include "xls/h/FilterDataType.h"
#include "xls/h/FilterOperatorType.h"
#include "xls/h/FilterType.h"
#include "xls/h/FindType.h"
#include "xls/h/FontUnderlineType.h"
#include "xls/h/FontVertialAlignmentType.h"
#include "xls/h/GeomertyAdjustValueFormulaType.h"
#include "xls/h/GetText.h"
#include "xls/h/GradientColorType.h"
#include "xls/h/GradientPatternType.h"
#include "xls/h/GradientPresetType.h"
#include "xls/h/GradientStyleType.h"
#include "xls/h/GradientTextureType.h"
#include "xls/h/GradientType.h"
#include "xls/h/GradientVariantsType.h"
#include "xls/h/GroupByType.h"
#include "xls/h/HorizontalAlignType.h"
#include "xls/h/HttpContentType.h"
#include "xls/h/HyperLinkType.h"
#include "xls/h/IconSetType.h"
#include "xls/h/IgnoreErrorType.h"
#include "xls/h/ImageFormatType.h"
#include "xls/h/ImageLocationTypes.h"
#include "xls/h/ImageType.h"
#include "xls/h/InsertMoveOption.h"
#include "xls/h/InsertOptionsType.h"
#include "xls/h/LegendPositionType.h"
#include "xls/h/LegendSpacingType.h"
#include "xls/h/LineShapeType.h"
#include "xls/h/LineStyleType.h"
#include "xls/h/MeasureUnits.h"
#include "xls/h/MsoPathType.h"
#include "xls/h/OdsPageBackgroundImagePositionType.h"
#include "xls/h/OdsPageBackgroundImageType.h"
#include "xls/h/OdsPageBackgroundType.h"
#include "xls/h/OLEDBCommandType.h"
#include "xls/h/OleLinkType.h"
#include "xls/h/OleObjectType.h"
#include "xls/h/OrderBy.h"
#include "xls/h/OrderType.h"
#include "xls/h/PageBreakExtentType.h"
#include "xls/h/PageBreakType.h"
#include "xls/h/PageOrientationType.h"
#include "xls/h/PagesOrderType.h"
#include "xls/h/PaperSizeType.h"
#include "xls/h/PathFillMode.h"
#include "xls/h/PivotAutoFomatTypes.h"
#include "xls/h/PivotBuiltInStyles.h"
#include "xls/h/PivotDataType.h"
#include "xls/h/PivotFieldFormatType.h"
#include "xls/h/PivotFieldSortType.h"
#include "xls/h/PivotItemType.h"
#include "xls/h/PivotPageAreaFieldsOrderType.h"
#include "xls/h/PivotTableElement.h"
#include "xls/h/PivotTableLayoutType.h"
#include "xls/h/PresetTextEffect.h"
#include "xls/h/PrintCommentType.h"
#include "xls/h/PrintErrorsType.h"
#include "xls/h/PrintingPageType.h"
#include "xls/h/PropertyType.h"
#include "xls/h/PrstGeomShapeType.h"
#include "xls/h/ReadingOrderType.h"
#include "xls/h/RectangleShapeType.h"
#include "xls/h/RectangleStyleType.h"
#include "xls/h/RelationShip.h"
#include "xls/h/RenameStrategy.h"
#include "xls/h/ResizeBehaveType.h"
#include "xls/h/RtfTags.h"
#include "xls/h/SelectionType.h"
#include "xls/h/ShapeArrowLengthType.h"
#include "xls/h/ShapeArrowStyleType.h"
#include "xls/h/ShapeArrowWidthType.h"
#include "xls/h/ShapeDashLineStyleType.h"
#include "xls/h/ShapeFillType.h"
#include "xls/h/ShapeLayerChangeType.h"
#include "xls/h/ShapeLineStyleType.h"
#include "xls/h/SheetProtectionType.h"
#include "xls/h/SortComparsionType.h"
#include "xls/h/SortedWayType.h"
#include "xls/h/SortOrientationType.h"
#include "xls/h/SparklineEmptyCells.h"
#include "xls/h/SparklineType.h"
#include "xls/h/SpartlineVerticalAxisType.h"
#include "xls/h/SplitType.h"
#include "xls/h/StrikeThroughStyle.h"
#include "xls/h/StyleDefineType.h"
#include "xls/h/SubtotalTypes.h"
#include "xls/h/TableBuiltInStyles.h"
#include "xls/h/TextDirection.h"
#include "xls/h/TextDirectionType.h"
#include "xls/h/TextRotationType.h"
#include "xls/h/ThemeColorType.h"
#include "xls/h/TickLabelPositionType.h"
#include "xls/h/TickMarkType.h"
#include "xls/h/TimePeriodType.h"
#include "xls/h/TopBottomType.h"
#include "xls/h/TopFormatType.h"
#include "xls/h/TRangeValueType.h"
#include "xls/h/TrendLineType.h"
#include "xls/h/UnderlineStyle.h"
#include "xls/h/UnknownVariableAction.h"
#include "xls/h/ValidationComparisonOperator.h"
#include "xls/h/VariableTypeAction.h"
#include "xls/h/VerticalAlignType.h"
#include "xls/h/ViewMode.h"
#include "xls/h/WorksheetCopyType.h"
#include "xls/h/WorksheetVisibility.h"
#include "xls/h/XLSXBorderJoinType.h"
#include "xls/h/XLSXChartBevelType.h"
#include "xls/h/XLSXChartLightingType.h"
#include "xls/h/XLSXChartMaterialType.h"
#include "xls/h/XLSXChartPrespectiveType.h"
#include "xls/h/XLSXChartShadowInnerType.h"
#include "xls/h/XLSXChartShadowOuterType.h"
#include "xls/h/XLSXPivotItemType.h"
#include "xls/h/XmlOpenType.h"

#pragma warning(push)
#pragma warning(disable:4250)

#include "xls/h/CollectionBase.h"
#include "xls/h/TextSaveOptions.h"
#include "xls/h/IDocumentProperty.h"
//#include "xls/h/IPropertyData.h"
#include "xls/h/ConverterSetting.h"
#include "xls/h/PageColRow.h"
#include "xls/h/ExternalConnection.h"
#include "xls/h/ExportTableOptions.h"
#include "xls/h/DBConnection.h"
#include "xls/h/IExcelApplication.h"
#include "xls/h/XlsObject.h"
#include "xls/h/ImportObjectOptions.h"
#include "xls/h/QueryTableXls.h"
#include "xls/h/ReferRangeArea.h"
#include "xls/h/ICloneParent.h"
#include "xls/h/WebQueryConnection.h"
#include "xls/h/IChart.h"
#include "xls/h/IShadow.h"
#include "xls/h/ITabSheet.h"
#include "xls/h/IConditionalFormats.h"
#include "xls/h/IPivotFields.h"
#include "xls/h/IConditionalFormat.h"
#include "xls/h/DocumentProperty.h"
#include "xls/h/IInterior.h"
#include "xls/h/IPivotCache.h"
#include "xls/h/IPivotField.h"
#include "xls/h/IPivotTable.h"
#include "xls/h/ISparkline.h"
#include "xls/h/ISparklines.h"
#include "xls/h/ISparklineGroup.h"
#include "xls/h/SparklineGroupCollection.h"
#include "xls/h/MarkerDesigner.h"
#include "xls/h/ColorScale.h"
#include "xls/h/XlsConditionalFormat.h"
#include "xls/h/DataBar.h"
#include "xls/h/IShape.h"
#include "xls/h/ITextBox.h"
#include "xls/h/IPictureShape.h"
#include "xls/h/IFormat3D.h"
#include "xls/h/IconSet.h"
#include "xls/h/IBorder.h"
#include "xls/h/IXLSRange.h"
#include "xls/h/CellStyleFlag.h"
#include "xls/h/IExtendedFormat.h"
#include "xls/h/IOptimizedUpdate.h"
#include "xls/h/IAddInFunction.h"
#include "xls/h/IFont.h"
#include "xls/h/IGradient.h"
#include "xls/h/IHPageBreak.h"
#include "xls/h/IHyperLink.h"
#include "xls/h/OColor.h"
#include "xls/h/IPageSetupBase.h"
#include "xls/h/IRichTextString.h"
#include "xls/h/RichTextObject.h"
#include "xls/h/IDataValidation.h"
#include "xls/h/IVPageBreak.h"
#include "xls/h/IWorksheet.h"
#include "xls/h/SaveShapeTypeOption.h"
#include "xls/h/Workbook.h"
#include "xls/h/IConditionValue.h"
#include "xls/h/XlsConditionValue.h"
#include "xls/h/ConditionValue.h"
#include "xls/h/OdsPageBackground.h"
#include "xls/h/IGlow.h"
#include "xls/h/IConditionalFormatsCollection.h"
#include "xls/h/DataConnections.h"
#include "xls/h/ExternalLinkCollection.h"
#include "xls/h/QueryTableCollection.h"
#include "xls/h/IBuiltInDocumentProperties.h"
#include "xls/h/IXLSRanges.h"
#include "xls/h/IPivotCaches.h"
#include "xls/h/IPivotTables.h"
#include "xls/h/ICharts.h"
#include "xls/h/IComments.h"
#include "xls/h/IPictures.h"
#include "xls/h/IChartShapes.h"
#include "xls/h/IAddInFunctions.h"
#include "xls/h/IBorders.h"
#include "xls/h/XlsFontsCollection.h"
#include "xls/h/IHPageBreaks.h"
#include "xls/h/IHyperLinks.h"
#include "xls/h/IVPageBreaks.h"
#include "xls/h/ITabSheets.h"
#include "xls/h/IWorksheets.h"
#include "xls/h/IStyles.h"
#include "xls/h/IAutoFilters.h"
#include "xls/h/XlsChartFormatCollection.h"
#include "xls/h/IChartFillBorder.h"
#include "xls/h/IChartBorder.h"
#include "xls/h/IChartAxis.h"
#include "xls/h/IChartTextArea.h"
#include "xls/h/IChartDataPoint.h"
#include "xls/h/IChartDataTable.h"
#include "xls/h/IChartDropBar.h"
#include "xls/h/IChartFormat.h"
#include "xls/h/IChartGridLine.h"
#include "xls/h/IChartInterior.h"
#include "xls/h/IChartLegend.h"
#include "xls/h/IChartLegendEntry.h"
#include "xls/h/IChartPageSetup.h"
#include "xls/h/IChartFrameFormat.h"
#include "xls/h/IChartSerie.h"
#include "xls/h/IChartSerieDataFormat.h"
#include "xls/h/IChartSeriesAxis.h"
#include "xls/h/IChartDataLabels.h"
#include "xls/h/XlsChartTitleArea.h"
#include "xls/h/IChartValueAxis.h"
#include "xls/h/IChartWallOrFloor.h"
#include "xls/h/IChartDataPoints.h"
#include "xls/h/IChartSeries.h"
#include "xls/h/XlsWorksheetConditionalFormats.h"
#include "xls/h/IDataValidationCollection.h"
#include "xls/h/IDataValidationTable.h"
#include "xls/h/XlsBuiltInDocumentProperties.h"
#include "xls/h/ICustomDocumentProperties.h"
#include "xls/h/IInternalWorksheet.h"
#include "xls/h/IMarkersDesigner.h"
#include "xls/h/IMigrantRange.h"
#include "xls/h/ICombinedRange.h"
#include "xls/h/XlsPivotCache.h"
#include "xls/h/XlsPivotCachesCollection.h"
#include "xls/h/IPivotCalculatedFields.h"
#include "xls/h/IPivotDataField.h"
#include "xls/h/IPivotDataFields.h"
#include "xls/h/XlsPivotField.h"
#include "xls/h/PivotTableFields.h"
#include "xls/h/XlsPivotTable.h"
#include "xls/h/IPivotTableOptions.h"
#include "xls/h/XlsPivotTablesCollection.h"
#include "xls/h/IArcShapes.h"
#include "xls/h/IButtonShapes.h"
#include "xls/h/XlsChartDataPointsCollection.h"
#include "xls/h/XlsChartsCollection.h"
#include "xls/h/XlsChartSeries.h"
#include "xls/h/XlsWorksheetChartsCollection.h"
#include "xls/h/IChartTrendLines.h"
#include "xls/h/ICheckBoxes.h"
#include "xls/h/IComboBoxes.h"
#include "xls/h/XlsCommentsCollection.h"
#include "xls/h/IGroupBoxes.h"
#include "xls/h/ILabelShapes.h"
#include "xls/h/ILines.h"
#include "xls/h/IListBoxes.h"
#include "xls/h/IOleObjects.h"
#include "xls/h/IOvalShapes.h"
#include "xls/h/XlsPicturesCollection.h"
#include "xls/h/IPrstGeomShapes.h"
#include "xls/h/IRadioButtons.h"
#include "xls/h/IRectangleShapes.h"
#include "xls/h/IScrollBarShapes.h"
#include "xls/h/IShapes.h"
#include "xls/h/ISpinnerShapes.h"
#include "xls/h/ITextBoxes.h"
#include "xls/h/IPrstGeomShape.h"
#include "xls/h/IButtonShape.h"
#include "xls/h/INamedObject.h"
#include "xls/h/XlsPageSetupBase.h"
#include "xls/h/CommonWrapper.h"
#include "xls/h/XlsWorksheetBase.h"
#include "xls/h/IChartShape.h"
#include "xls/h/IChartCategoryAxis.h"
#include "xls/h/XlsChartBorder.h"
#include "xls/h/XlsChartAxis.h"
#include "xls/h/XlsChartCategoryAxis.h"
#include "xls/h/XlsChartDataLabels.h"
#include "xls/h/XlsChartDataPoint.h"
#include "xls/h/XlsChartDataTable.h"
#include "xls/h/XlsChartDropBar.h"
#include "xls/h/IChartErrorBars.h"
#include "xls/h/XlsChartFrameFormat.h"
#include "xls/h/XlsChartFormat.h"
#include "xls/h/XlsChartPlotArea.h"
#include "xls/h/XlsChartGridLine.h"
#include "xls/h/XlsChartInterior.h"
#include "xls/h/XlsChartLegend.h"
#include "xls/h/IChartLegendEntries.h"
#include "xls/h/XlsChartLegendEntry.h"
#include "xls/h/XlsChartPageSetup.h"
#include "xls/h/XlsChartSerieDataFormat.h"
#include "xls/h/XlsChartSeriesAxis.h"
#include "xls/h/XlsShape.h"
#include "xls/h/IChartTrendLine.h"
#include "xls/h/XlsChartValueAxis.h"
#include "xls/h/XlsChartWallOrFloor.h"
#include "xls/h/ICheckBox.h"
#include "xls/h/IComboBoxShape.h"
#include "xls/h/ITextBoxShape.h"
#include "xls/h/IComment.h"
#include "xls/h/IGeomPathInfo.h"
#include "xls/h/IGeomPathShape.h"
#include "xls/h/IGroupBox.h"
#include "xls/h/ILabelShape.h"
#include "xls/h/ILineShape.h"
#include "xls/h/IListBox.h"
#include "xls/h/IOleObject.h"
#include "xls/h/IOvalShape.h"
#include "xls/h/XlsBitmapShape.h"
#include "xls/h/IArcShape.h"
#include "xls/h/IGeomPath.h"
#include "xls/h/IRadioButton.h"
#include "xls/h/IRectangleShape.h"
#include "xls/h/IScrollBarShape.h"
#include "xls/h/ICommentShape.h"
#include "xls/h/IShapeFill.h"
#include "xls/h/IShapeLineFormat.h"
#include "xls/h/ISpinnerShape.h"
#include "xls/h/ExcelCommentObject.h"
#include "xls/h/ExcelComment.h"
#include "xls/h/ITextBoxLinkShape.h"
#include "xls/h/TextBoxShapeBase.h"
#include "xls/h/ITextFrame.h"
#include "xls/h/IDataSort.h"
#include "xls/h/ISortColumn.h"
#include "xls/h/ISortColumns.h"
#include "xls/h/ISortedRule.h"
#include "xls/h/MsoPathInfo.h"
#include "xls/h/XlsAddInFunctionsCollection.h"
#include "xls/h/BordersCollection.h"
#include "xls/h/XlsHPageBreaksCollection.h"
#include "xls/h/XlsHyperLinksCollection.h"
#include "xls/h/IListObjects.h"
#include "xls/h/INameRanges.h"
#include "xls/h/XlsStylesCollection.h"
#include "xls/h/XlsWorkbookObjectsCollection.h"
#include "xls/h/XlsVPageBreaksCollection.h"
#include "xls/h/IWorksheetGroup.h"
#include "xls/h/XlsWorksheetsCollection.h"
#include "xls/h/XlsAddInFunction.h"
#include "xls/h/CellBorder.h"
#include "xls/h/IReflectionEffect.h"
#include "xls/h/XlsRange.h"
#include "xls/h/XlsValidationWrapper.h"
#include "xls/h/IErrorIndicator.h"
#include "xls/h/ExternalLink.h"
#include "xls/h/IStyle.h"
#include "xls/h/ExcelFont.h"
#include "xls/h/ExcelGradient.h"
#include "xls/h/XlsHPageBreak.h"
#include "xls/h/XlsHyperLink.h"
#include "xls/h/ExcelInterior.h"
#include "xls/h/IListObject.h"
#include "xls/h/IListObjectColumn.h"
#include "xls/h/INamedRange.h"
#include "xls/h/INumberFormat.h"
#include "xls/h/IPageSetup.h"
#include "xls/h/XlsRangesCollection.h"
#include "xls/h/RichText.h"
#include "xls/h/CellStyleObject.h"
#include "xls/h/XlsChart.h"
#include "xls/h/XlsVPageBreak.h"
#include "xls/h/IWorkbook.h"
#include "xls/h/XlsAutoFiltersCollection.h"
#include "xls/h/IAutoFilter.h"
#include "xls/h/CondFormatCollectionWrapper.h"
#include "xls/h/IColorConditionValue.h"
#include "xls/h/IColorScale.h"
#include "xls/h/IDataBar.h"
#include "xls/h/IIconSet.h"
#include "xls/h/IAutoFilterCondition.h"
#include "xls/h/XlsDocumentProperty.h"
#include "xls/h/ShapeReflection.h"
#include "xls/h/Format3D.h"
#include "xls/h/ChartShadow.h"
#include "xls/h/IExtendIndex.h"
#include "xls/h/IInternalAddtionalFormat.h"
#include "xls/h/IInternalFont.h"
#include "xls/h/XlsChartSerie.h"
#include "xls/h/CellStyle.h"
#include "xls/h/ShapeGlow.h"
#include "xls/h/IDigitalSignature.h"
#include "xls/h/IDigitalSignatures.h"
#include "xls/h/WriteProtection.h"
#include "xls/h/AddtionalFormatWrapper.h"
#include "xls/h/Sparkline.h"
#include "xls/h/SparklineGroup.h"
#include "xls/h/SparklineCollection.h"
#include "xls/h/XlsFill.h"
#include "xls/h/RichTextShape.h"
#include "xls/h/RTFCommentArray.h"
#include "xls/h/CellBaseStyle.h"
#include "xls/h/ConditionalFormatWrapper.h"
#include "xls/h/FontArrayWrapper.h"
#include "xls/h/FontWrapper.h"
#include "xls/h/GradientArrayWrapper.h"
#include "xls/h/HTMLOptions.h"
#include "xls/h/InteriorArrayWrapper.h"
#include "xls/h/RichTextString.h"
#include "xls/h/RangeRichTextString.h"
#include "xls/h/RtfTextWriter.h"
#include "xls/h/LOGFONT.h"
#include "xls/h/RTFStringArray.h"
#include "xls/h/StyleArrayWrapper.h"
#include "xls/h/UtilityMethods.h"
#include "xls/h/ExcelAddInFunction.h"
#include "xls/h/XlsBorder.h"
#include "xls/h/XlsBorderArrayWrapper.h"
#include "xls/h/XlsGradient.h"
#include "xls/h/HPageBreak.h"
#include "xls/h/XlsValidation.h"
#include "xls/h/XlsDataValidationTable.h"
#include "xls/h/XlsFont.h"
#include "xls/h/XlsFontStyle.h"
#include "xls/h/HyperLink.h"
#include "xls/h/XlsName.h"
#include "xls/h/ChartTextArea.h"
#include "xls/h/XlsEventArgs.h"
#include "xls/h/XlsEventHandler.h"
#include "xls/h/XlsPageSetup.h"
#include "xls/h/PageSetup.h"
#include "xls/h/CellRange.h"
#include "xls/h/CellValueChangedEventArgs.h"
#include "xls/h/XlsStyle.h"
#include "xls/h/Validation.h"
#include "xls/h/VPageBreak.h"
#include "xls/h/XlsWorkbook.h"
#include "xls/h/XlsWorksheet.h"
#include "xls/h/Worksheet.h"
#include "xls/h/ColorConditionValue.h"
#include "xls/h/ConditionalFormat.h"
#include "xls/h/Average.h"
#include "xls/h/DataBarBorder.h"
#include "xls/h/NegativeBarFormat.h"
#include "xls/h/TopBottom.h"
#include "xls/h/ColorFilter.h"
#include "xls/h/CustomFilter.h"
#include "xls/h/CustomFilterCollection.h"
#include "xls/h/DateTimeGroupItem.h"
#include "xls/h/DynamicFilter.h"
#include "xls/h/FilterColumn.h"
#include "xls/h/AutoFitterOptions.h"
#include "xls/h/MultipleFilterCollection.h"
#include "xls/h/Top10Filter.h"
#include "xls/h/DataSorter.h"
#include "xls/h/SortColumn.h"
#include "xls/h/SortColumns.h"
#include "xls/h/ListObjectCollection.h"
//#include "xls/h/EncryptedKeyInfo.h"
#include "xls/h/PivotCalculatedFieldsCollection.h"
#include "xls/h/PivotConditionalFormatCollection.h"
#include "xls/h/PivotDataFields.h"
#include "xls/h/AutoSortScope.h"
#include "xls/h/PivotConditionalFormat.h"
#include "xls/h/PivotDataField.h"
#include "xls/h/PivotItem.h"
#include "xls/h/PivotReportFilter.h"
#include "xls/h/PivotReportFilters.h"
#include "xls/h/PivotStyle.h"
#include "xls/h/PivotTableStyle.h"
#include "xls/h/PivotCache.h"
#include "xls/h/XlsPivotCacheField.h"
#include "xls/h/PivotField.h"
#include "xls/h/PivotTable.h"
#include "xls/h/ChartLegendEntriesColl.h"
#include "xls/h/ChartSheet.h"
#include "xls/h/ChartBorder.h"
#include "xls/h/ChartCategoryAxis.h"
#include "xls/h/XlsChartDataLabelArea.h"
#include "xls/h/ChartDataLabels.h"
#include "xls/h/ChartDataPoint.h"
#include "xls/h/ChartDataTable.h"
#include "xls/h/ChartDropBar.h"
#include "xls/h/XlsShapeFill.h"
#include "xls/h/ChartFormat.h"
#include "xls/h/ChartArea.h"
#include "xls/h/ChartGridLine.h"
#include "xls/h/ChartInterior.h"
#include "xls/h/ChartLegend.h"
#include "xls/h/XlsChartLegendArea.h"
#include "xls/h/ChartLegendEntry.h"
#include "xls/h/ChartPageSetup.h"
#include "xls/h/ChartPlotArea.h"
#include "xls/h/ChartSerie.h"
#include "xls/h/ChartSerieDataFormat.h"
#include "xls/h/HistogramAxisFormat.h"
#include "xls/h/ChartSeriesAxis.h"
#include "xls/h/ChartTitle.h"
#include "xls/h/ChartValueAxis.h"
#include "xls/h/ChartWallOrFloor.h"
#include "xls/h/ChartFormatCollection.h"
#include "xls/h/ChartDataPointsCollection.h"
#include "xls/h/ChartSeries.h"
#include "xls/h/GeomertyAdjustValue.h"
#include "xls/h/XlsChartShape.h"
#include "xls/h/XlsGradientStop.h"
#include "xls/h/GradientStops.h"
#include "xls/h/CommentsRange.h"
#include "xls/h/XlsPrstGeomShape.h"
#include "xls/h/ExcelPicture.h"
#include "xls/h/XlsButtonShape.h"
#include "xls/h/XlsCheckBoxShape.h"
#include "xls/h/XlsComboBoxShape.h"
#include "xls/h/XlsComment.h"
#include "xls/h/XlsGroupBoxShape.h"
#include "xls/h/XlsLabelShape.h"
#include "xls/h/XlsLineShape.h"
#include "xls/h/XlsListBoxShape.h"
#include "xls/h/XlsOvalShape.h"
#include "xls/h/XlsArcShape.h"
#include "xls/h/ShapeGeomPath.h"
#include "xls/h/ShapeSegmentPath.h"
#include "xls/h/XlsRadioButtonShape.h"
#include "xls/h/XlsRectangleShape.h"
#include "xls/h/XlsScrollBarShape.h"
#include "xls/h/Chart.h"
#include "xls/h/XlsShapeLineFormat.h"
#include "xls/h/XlsSpinnerShape.h"
#include "xls/h/XlsTextBoxShape.h"
#include "xls/h/XlsChartFill.h"
#include "xls/h/PicTile.h"
#include "xls/h/PicStretch.h"
#include "xls/h/GeomertyAdjustValuesCollection.h"
#include "xls/h/BuiltInDocumentProperties.h"
#include "xls/h/ShapeCollectionBase.h"
#include "xls/h/RangesCollection.h"
#include "xls/h/ConditionalFormats.h"
#include "xls/h/PivotCachesCollection.h"
#include "xls/h/PivotTablesCollection.h"
#include "xls/h/ArcShapeCollection.h"
#include "xls/h/ButtonShapeCollection.h"
#include "xls/h/CheckBoxCollection.h"
#include "xls/h/ComboBoxCollection.h"
#include "xls/h/GroupBoxCollection.h"
#include "xls/h/LabelShapeCollection.h"
#include "xls/h/LineCollection.h"
#include "xls/h/ListBoxCollection.h"
#include "xls/h/OvalShapeCollection.h"
#include "xls/h/PrstGeomShapeCollection.h"
#include "xls/h/RadioButtonCollection.h"
#include "xls/h/RectangleCollection.h"
#include "xls/h/ScrollBarCollection.h"
#include "xls/h/XlsHeaderFooterShapeCollection.h"
#include "xls/h/SpinnerShapeCollection.h"
#include "xls/h/TextBoxCollection.h"
#include "xls/h/ChartsCollection.h"
#include "xls/h/CommentsCollection.h"
#include "xls/h/PicturesCollection.h"
#include "xls/h/WorksheetChartsCollection.h"
#include "xls/h/BordersCollectionArrayWrapper.h"
#include "xls/h/AddInFunctionsCollection.h"
#include "xls/h/XlsBordersCollection.h"
#include "xls/h/XlsDataValidationCollection.h"
#include "xls/h/FontsCollection.h"
#include "xls/h/HPageBreaksCollection.h"
#include "xls/h/HyperLinksCollection.h"
#include "xls/h/StylesCollection.h"
#include "xls/h/VPageBreaksCollection.h"
#include "xls/h/WorkbookObjectsCollection.h"
#include "xls/h/WorksheetsCollection.h"
#include "xls/h/CollectionExtended.h"
//#include "xls/h/CollectionChangeEventArgs.h"
#include "xls/h/AutoFiltersCollection.h"
#include "xls/h/XlsConditionalFormats.h"
#include "xls/h/WorksheetConditionalFormats.h"
#include "xls/h/PaperSizeEntry.h"
#include "xls/h/CellValueChangedEventHandler.h"
#include "xls/h/StringUtil.h"

#pragma warning(pop)
