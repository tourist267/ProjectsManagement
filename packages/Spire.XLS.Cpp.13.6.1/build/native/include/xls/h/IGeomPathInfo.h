#pragma once
#include "pch.h"

//#pragma warning(push)
//#pragma warning(disable:4250)
//#include "MsoPathType.h"
//#include "PathFillMode.h"
//#include "MsoPathInfo.h"
//#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS IGeomPathInfo 
{
    friend class IGeomPathShape;
public:
    virtual bool GetShowStroke ()=0;
    virtual void SetShowStroke (bool value)=0;
    virtual bool GetExtrusionOk ()=0;
    virtual void SetExtrusionOk (bool value)=0;
    virtual long GetHeight ()=0;
    virtual long GetWidth ()=0;
    virtual PathFillMode GetFillMode ()=0;
    virtual void SetFillMode (PathFillMode value)=0;
    virtual int GetMsoLstCount ()=0;
    virtual intrusive_ptr<MsoPathInfo> Get (int index)=0;
    virtual intrusive_ptr<MsoPathInfo> AddMso (MsoPathType type)=0;
private:
};
}}
