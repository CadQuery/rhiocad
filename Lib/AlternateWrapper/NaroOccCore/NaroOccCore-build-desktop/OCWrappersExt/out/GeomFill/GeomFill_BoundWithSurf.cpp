// File generated by CPPExt (CPP file)
//

#include "GeomFill_BoundWithSurf.h"
#include "../Converter.h"
#include "../Law/Law_Function.h"
#include "../Adaptor3d/Adaptor3d_CurveOnSurface.h"
#include "../gp/gp_Pnt.h"
#include "../gp/gp_Vec.h"


using namespace OCNaroWrappers;

OCGeomFill_BoundWithSurf::OCGeomFill_BoundWithSurf(Handle(GeomFill_BoundWithSurf)* nativeHandle) : OCGeomFill_Boundary((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_GeomFill_BoundWithSurf(*nativeHandle);
}

OCGeomFill_BoundWithSurf::OCGeomFill_BoundWithSurf(OCNaroWrappers::OCAdaptor3d_CurveOnSurface^ CurveOnSurf, Standard_Real Tol3d, Standard_Real Tolang) : OCGeomFill_Boundary((OCDummy^)nullptr)

{
  nativeHandle = new Handle_GeomFill_BoundWithSurf(new GeomFill_BoundWithSurf(*((Adaptor3d_CurveOnSurface*)CurveOnSurf->Handle), Tol3d, Tolang));
}

OCgp_Pnt^ OCGeomFill_BoundWithSurf::Value(Standard_Real U)
{
  gp_Pnt* tmp = new gp_Pnt();
  *tmp = (*((Handle_GeomFill_BoundWithSurf*)nativeHandle))->Value(U);
  return gcnew OCgp_Pnt(tmp);
}

 void OCGeomFill_BoundWithSurf::D1(Standard_Real U, OCNaroWrappers::OCgp_Pnt^ P, OCNaroWrappers::OCgp_Vec^ V)
{
  (*((Handle_GeomFill_BoundWithSurf*)nativeHandle))->D1(U, *((gp_Pnt*)P->Handle), *((gp_Vec*)V->Handle));
}

 System::Boolean OCGeomFill_BoundWithSurf::HasNormals()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_GeomFill_BoundWithSurf*)nativeHandle))->HasNormals());
}

OCgp_Vec^ OCGeomFill_BoundWithSurf::Norm(Standard_Real U)
{
  gp_Vec* tmp = new gp_Vec();
  *tmp = (*((Handle_GeomFill_BoundWithSurf*)nativeHandle))->Norm(U);
  return gcnew OCgp_Vec(tmp);
}

 void OCGeomFill_BoundWithSurf::D1Norm(Standard_Real U, OCNaroWrappers::OCgp_Vec^ N, OCNaroWrappers::OCgp_Vec^ DN)
{
  (*((Handle_GeomFill_BoundWithSurf*)nativeHandle))->D1Norm(U, *((gp_Vec*)N->Handle), *((gp_Vec*)DN->Handle));
}

 void OCGeomFill_BoundWithSurf::Reparametrize(Standard_Real First, Standard_Real Last, System::Boolean HasDF, System::Boolean HasDL, Standard_Real DF, Standard_Real DL, System::Boolean Rev)
{
  (*((Handle_GeomFill_BoundWithSurf*)nativeHandle))->Reparametrize(First, Last, OCConverter::BooleanToStandardBoolean(HasDF), OCConverter::BooleanToStandardBoolean(HasDL), DF, DL, OCConverter::BooleanToStandardBoolean(Rev));
}

 void OCGeomFill_BoundWithSurf::Bounds(Standard_Real& First, Standard_Real& Last)
{
  (*((Handle_GeomFill_BoundWithSurf*)nativeHandle))->Bounds(First, Last);
}

 System::Boolean OCGeomFill_BoundWithSurf::IsDegenerated()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_GeomFill_BoundWithSurf*)nativeHandle))->IsDegenerated());
}


