// File generated by CPPExt (Transient)
//
#ifndef _BRep_PointOnCurveOnSurface_OCWrappers_HeaderFile
#define _BRep_PointOnCurveOnSurface_OCWrappers_HeaderFile

// include the wrapped class
#include <BRep_PointOnCurveOnSurface.hxx>
#include "../Converter.h"

#include "BRep_PointsOnSurface.h"



namespace OCNaroWrappers
{

ref class OCGeom2d_Curve;
ref class OCGeom_Surface;
ref class OCTopLoc_Location;



public ref class OCBRep_PointOnCurveOnSurface : OCBRep_PointsOnSurface {

protected:
  // dummy constructor;
  OCBRep_PointOnCurveOnSurface(OCDummy^) : OCBRep_PointsOnSurface((OCDummy^)nullptr) {};

public:

// constructor from native
OCBRep_PointOnCurveOnSurface(Handle(BRep_PointOnCurveOnSurface)* nativeHandle);

// Methods PUBLIC


OCBRep_PointOnCurveOnSurface(Standard_Real P, OCNaroWrappers::OCGeom2d_Curve^ C, OCNaroWrappers::OCGeom_Surface^ S, OCNaroWrappers::OCTopLoc_Location^ L);

//! Returns True <br>
virtual /*instead*/  System::Boolean IsPointOnCurveOnSurface() override;


virtual /*instead*/  System::Boolean IsPointOnCurveOnSurface(OCNaroWrappers::OCGeom2d_Curve^ PC, OCNaroWrappers::OCGeom_Surface^ S, OCNaroWrappers::OCTopLoc_Location^ L) override;


virtual /*instead*/  OCGeom2d_Curve^ PCurve() override;


virtual /*instead*/  void PCurve(OCNaroWrappers::OCGeom2d_Curve^ C) override;

~OCBRep_PointOnCurveOnSurface()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif