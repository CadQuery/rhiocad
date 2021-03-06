// File generated by CPPExt (CPP file)
//

#include "Geom_Axis1Placement.h"
#include "../Converter.h"
#include "../gp/gp_Ax1.h"
#include "../gp/gp_Pnt.h"
#include "../gp/gp_Dir.h"
#include "../gp/gp_Trsf.h"
#include "Geom_Geometry.h"


using namespace OCNaroWrappers;

OCGeom_Axis1Placement::OCGeom_Axis1Placement(Handle(Geom_Axis1Placement)* nativeHandle) : OCGeom_AxisPlacement((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_Geom_Axis1Placement(*nativeHandle);
}

OCGeom_Axis1Placement::OCGeom_Axis1Placement(OCNaroWrappers::OCgp_Ax1^ A1) : OCGeom_AxisPlacement((OCDummy^)nullptr)

{
  nativeHandle = new Handle_Geom_Axis1Placement(new Geom_Axis1Placement(*((gp_Ax1*)A1->Handle)));
}

OCGeom_Axis1Placement::OCGeom_Axis1Placement(OCNaroWrappers::OCgp_Pnt^ P, OCNaroWrappers::OCgp_Dir^ V) : OCGeom_AxisPlacement((OCDummy^)nullptr)

{
  nativeHandle = new Handle_Geom_Axis1Placement(new Geom_Axis1Placement(*((gp_Pnt*)P->Handle), *((gp_Dir*)V->Handle)));
}

OCgp_Ax1^ OCGeom_Axis1Placement::Ax1()
{
  gp_Ax1* tmp = new gp_Ax1();
  *tmp = (*((Handle_Geom_Axis1Placement*)nativeHandle))->Ax1();
  return gcnew OCgp_Ax1(tmp);
}

 void OCGeom_Axis1Placement::Reverse()
{
  (*((Handle_Geom_Axis1Placement*)nativeHandle))->Reverse();
}

OCGeom_Axis1Placement^ OCGeom_Axis1Placement::Reversed()
{
  Handle(Geom_Axis1Placement) tmp = (*((Handle_Geom_Axis1Placement*)nativeHandle))->Reversed();
  return gcnew OCGeom_Axis1Placement(&tmp);
}

 void OCGeom_Axis1Placement::SetDirection(OCNaroWrappers::OCgp_Dir^ V)
{
  (*((Handle_Geom_Axis1Placement*)nativeHandle))->SetDirection(*((gp_Dir*)V->Handle));
}

 void OCGeom_Axis1Placement::Transform(OCNaroWrappers::OCgp_Trsf^ T)
{
  (*((Handle_Geom_Axis1Placement*)nativeHandle))->Transform(*((gp_Trsf*)T->Handle));
}

OCGeom_Geometry^ OCGeom_Axis1Placement::Copy()
{
  Handle(Geom_Geometry) tmp = (*((Handle_Geom_Axis1Placement*)nativeHandle))->Copy();
  return gcnew OCGeom_Geometry(&tmp);
}


