// File generated by CPPExt (CPP file)
//

#include "Geom2d_VectorWithMagnitude.h"
#include "../Converter.h"
#include "../gp/gp_Vec2d.h"
#include "../gp/gp_Pnt2d.h"
#include "Geom2d_Vector.h"
#include "../gp/gp_Trsf2d.h"
#include "Geom2d_Geometry.h"


using namespace OCNaroWrappers;

OCGeom2d_VectorWithMagnitude::OCGeom2d_VectorWithMagnitude(Handle(Geom2d_VectorWithMagnitude)* nativeHandle) : OCGeom2d_Vector((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_Geom2d_VectorWithMagnitude(*nativeHandle);
}

OCGeom2d_VectorWithMagnitude::OCGeom2d_VectorWithMagnitude(OCNaroWrappers::OCgp_Vec2d^ V) : OCGeom2d_Vector((OCDummy^)nullptr)

{
  nativeHandle = new Handle_Geom2d_VectorWithMagnitude(new Geom2d_VectorWithMagnitude(*((gp_Vec2d*)V->Handle)));
}

OCGeom2d_VectorWithMagnitude::OCGeom2d_VectorWithMagnitude(Standard_Real X, Standard_Real Y) : OCGeom2d_Vector((OCDummy^)nullptr)

{
  nativeHandle = new Handle_Geom2d_VectorWithMagnitude(new Geom2d_VectorWithMagnitude(X, Y));
}

OCGeom2d_VectorWithMagnitude::OCGeom2d_VectorWithMagnitude(OCNaroWrappers::OCgp_Pnt2d^ P1, OCNaroWrappers::OCgp_Pnt2d^ P2) : OCGeom2d_Vector((OCDummy^)nullptr)

{
  nativeHandle = new Handle_Geom2d_VectorWithMagnitude(new Geom2d_VectorWithMagnitude(*((gp_Pnt2d*)P1->Handle), *((gp_Pnt2d*)P2->Handle)));
}

 void OCGeom2d_VectorWithMagnitude::SetCoord(Standard_Real X, Standard_Real Y)
{
  (*((Handle_Geom2d_VectorWithMagnitude*)nativeHandle))->SetCoord(X, Y);
}

 void OCGeom2d_VectorWithMagnitude::SetVec2d(OCNaroWrappers::OCgp_Vec2d^ V)
{
  (*((Handle_Geom2d_VectorWithMagnitude*)nativeHandle))->SetVec2d(*((gp_Vec2d*)V->Handle));
}

 void OCGeom2d_VectorWithMagnitude::SetX(Standard_Real X)
{
  (*((Handle_Geom2d_VectorWithMagnitude*)nativeHandle))->SetX(X);
}

 void OCGeom2d_VectorWithMagnitude::SetY(Standard_Real Y)
{
  (*((Handle_Geom2d_VectorWithMagnitude*)nativeHandle))->SetY(Y);
}

 Standard_Real OCGeom2d_VectorWithMagnitude::Magnitude()
{
  return (*((Handle_Geom2d_VectorWithMagnitude*)nativeHandle))->Magnitude();
}

 Standard_Real OCGeom2d_VectorWithMagnitude::SquareMagnitude()
{
  return (*((Handle_Geom2d_VectorWithMagnitude*)nativeHandle))->SquareMagnitude();
}

 void OCGeom2d_VectorWithMagnitude::Add(OCNaroWrappers::OCGeom2d_Vector^ Other)
{
  (*((Handle_Geom2d_VectorWithMagnitude*)nativeHandle))->Add(*((Handle_Geom2d_Vector*)Other->Handle));
}

OCGeom2d_VectorWithMagnitude^ OCGeom2d_VectorWithMagnitude::Added(OCNaroWrappers::OCGeom2d_Vector^ Other)
{
  Handle(Geom2d_VectorWithMagnitude) tmp = (*((Handle_Geom2d_VectorWithMagnitude*)nativeHandle))->Added(*((Handle_Geom2d_Vector*)Other->Handle));
  return gcnew OCGeom2d_VectorWithMagnitude(&tmp);
}

 Standard_Real OCGeom2d_VectorWithMagnitude::Crossed(OCNaroWrappers::OCGeom2d_Vector^ Other)
{
  return (*((Handle_Geom2d_VectorWithMagnitude*)nativeHandle))->Crossed(*((Handle_Geom2d_Vector*)Other->Handle));
}

 void OCGeom2d_VectorWithMagnitude::Divide(Standard_Real Scalar)
{
  (*((Handle_Geom2d_VectorWithMagnitude*)nativeHandle))->Divide(Scalar);
}

OCGeom2d_VectorWithMagnitude^ OCGeom2d_VectorWithMagnitude::Divided(Standard_Real Scalar)
{
  Handle(Geom2d_VectorWithMagnitude) tmp = (*((Handle_Geom2d_VectorWithMagnitude*)nativeHandle))->Divided(Scalar);
  return gcnew OCGeom2d_VectorWithMagnitude(&tmp);
}

OCGeom2d_VectorWithMagnitude^ OCGeom2d_VectorWithMagnitude::Multiplied(Standard_Real Scalar)
{
  Handle(Geom2d_VectorWithMagnitude) tmp = (*((Handle_Geom2d_VectorWithMagnitude*)nativeHandle))->Multiplied(Scalar);
  return gcnew OCGeom2d_VectorWithMagnitude(&tmp);
}

 void OCGeom2d_VectorWithMagnitude::Multiply(Standard_Real Scalar)
{
  (*((Handle_Geom2d_VectorWithMagnitude*)nativeHandle))->Multiply(Scalar);
}

 void OCGeom2d_VectorWithMagnitude::Normalize()
{
  (*((Handle_Geom2d_VectorWithMagnitude*)nativeHandle))->Normalize();
}

OCGeom2d_VectorWithMagnitude^ OCGeom2d_VectorWithMagnitude::Normalized()
{
  Handle(Geom2d_VectorWithMagnitude) tmp = (*((Handle_Geom2d_VectorWithMagnitude*)nativeHandle))->Normalized();
  return gcnew OCGeom2d_VectorWithMagnitude(&tmp);
}

 void OCGeom2d_VectorWithMagnitude::Subtract(OCNaroWrappers::OCGeom2d_Vector^ Other)
{
  (*((Handle_Geom2d_VectorWithMagnitude*)nativeHandle))->Subtract(*((Handle_Geom2d_Vector*)Other->Handle));
}

OCGeom2d_VectorWithMagnitude^ OCGeom2d_VectorWithMagnitude::Subtracted(OCNaroWrappers::OCGeom2d_Vector^ Other)
{
  Handle(Geom2d_VectorWithMagnitude) tmp = (*((Handle_Geom2d_VectorWithMagnitude*)nativeHandle))->Subtracted(*((Handle_Geom2d_Vector*)Other->Handle));
  return gcnew OCGeom2d_VectorWithMagnitude(&tmp);
}

 void OCGeom2d_VectorWithMagnitude::Transform(OCNaroWrappers::OCgp_Trsf2d^ T)
{
  (*((Handle_Geom2d_VectorWithMagnitude*)nativeHandle))->Transform(*((gp_Trsf2d*)T->Handle));
}

OCGeom2d_Geometry^ OCGeom2d_VectorWithMagnitude::Copy()
{
  Handle(Geom2d_Geometry) tmp = (*((Handle_Geom2d_VectorWithMagnitude*)nativeHandle))->Copy();
  return gcnew OCGeom2d_Geometry(&tmp);
}

