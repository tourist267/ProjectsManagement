#pragma once
#include "pch.h"

//#pragma warning(push)
//#pragma warning(disable:4250)
//#include "OleLinkType.h"
//#include "IOleObject.h"
//#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS IOleObjects : public virtual Object
{
    friend class IWorksheet;
    friend class XlsWorksheet;
public:
    /*
    <summary>
        Adds new ole object to the collection.
    </summary>
    <param name="fileName">File name.</param>
    <param name="stream">File stream.</param>
    <param name="linkType">Link type.</param>
    */
    virtual intrusive_ptr<IOleObject> Add (LPCWSTR_S fileName,intrusive_ptr<Stream> stream,OleLinkType linkType);
private:
};
}}
