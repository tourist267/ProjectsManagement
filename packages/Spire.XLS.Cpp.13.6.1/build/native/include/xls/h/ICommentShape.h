#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
//#include "IExcelApplication.h"
//#include "IShape.h"
//#include "ITextBox.h"
//#include "ITextBoxShape.h"
#include "IComment.h"
#pragma warning(pop)

namespace Spire{namespace Xls{
class EXPORTS ICommentShape : public virtual IComment
{
    friend class IComments;
    friend class IShapes;
    friend class IXLSRange;
    friend class XlsName;
    friend class XlsRange;
    friend class XlsRangesCollection;
    friend class XlsCommentsCollection;
public:
private:
};
}}
