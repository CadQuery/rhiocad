// File generated by CPPExt (CPP file)
//

#include "gp_Trsf.h"
#include "../Converter.h"
#include "gp_GTrsf.h"
#include "gp_Trsf2d.h"
#include "gp_Pnt.h"
#include "gp_Ax1.h"
#include "gp_Ax2.h"
#include "gp_Quaternion.h"
#include "gp_Ax3.h"
#include "gp_Vec.h"
#include "gp_XYZ.h"
#include "gp_Mat.h"


using namespace OCNaroWrappers;

OCgp_Trsf::OCgp_Trsf(gp_Trsf* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCgp_Trsf::OCgp_Trsf() 
{
  nativeHandle = new gp_Trsf();
}

OCgp_Trsf::OCgp_Trsf(OCNaroWrappers::OCgp_Trsf2d^ T) 
{
  nativeHandle = new gp_Trsf(*((gp_Trsf2d*)T->Handle));
}

 void OCgp_Trsf::SetMirror(OCNaroWrappers::OCgp_Pnt^ P)
{
  ((gp_Trsf*)nativeHandle)->SetMirror(*((gp_Pnt*)P->Handle));
}

 void OCgp_Trsf::SetMirror(OCNaroWrappers::OCgp_Ax1^ A1)
{
  ((gp_Trsf*)nativeHandle)->SetMirror(*((gp_Ax1*)A1->Handle));
}

 void OCgp_Trsf::SetMirror(OCNaroWrappers::OCgp_Ax2^ A2)
{
  ((gp_Trsf*)nativeHandle)->SetMirror(*((gp_Ax2*)A2->Handle));
}

 void OCgp_Trsf::SetRotation(OCNaroWrappers::OCgp_Ax1^ A1, Standard_Real Ang)
{
  ((gp_Trsf*)nativeHandle)->SetRotation(*((gp_Ax1*)A1->Handle), Ang);
}

 void OCgp_Trsf::SetRotation(OCNaroWrappers::OCgp_Quaternion^ R)
{
  ((gp_Trsf*)nativeHandle)->SetRotation(*((gp_Quaternion*)R->Handle));
}

 void OCgp_Trsf::SetScale(OCNaroWrappers::OCgp_Pnt^ P, Standard_Real S)
{
  ((gp_Trsf*)nativeHandle)->SetScale(*((gp_Pnt*)P->Handle), S);
}

 void OCgp_Trsf::SetDisplacement(OCNaroWrappers::OCgp_Ax3^ FromSystem1, OCNaroWrappers::OCgp_Ax3^ ToSystem2)
{
  ((gp_Trsf*)nativeHandle)->SetDisplacement(*((gp_Ax3*)FromSystem1->Handle), *((gp_Ax3*)ToSystem2->Handle));
}

 void OCgp_Trsf::SetTransformation(OCNaroWrappers::OCgp_Ax3^ FromSystem1, OCNaroWrappers::OCgp_Ax3^ ToSystem2)
{
  ((gp_Trsf*)nativeHandle)->SetTransformation(*((gp_Ax3*)FromSystem1->Handle), *((gp_Ax3*)ToSystem2->Handle));
}

 void OCgp_Trsf::SetTransformation(OCNaroWrappers::OCgp_Ax3^ ToSystem)
{
  ((gp_Trsf*)nativeHandle)->SetTransformation(*((gp_Ax3*)ToSystem->Handle));
}

 void OCgp_Trsf::SetTransformation(OCNaroWrappers::OCgp_Quaternion^ R, OCNaroWrappers::OCgp_Vec^ T)
{
  ((gp_Trsf*)nativeHandle)->SetTransformation(*((gp_Quaternion*)R->Handle), *((gp_Vec*)T->Handle));
}

 void OCgp_Trsf::SetTranslation(OCNaroWrappers::OCgp_Vec^ V)
{
  ((gp_Trsf*)nativeHandle)->SetTranslation(*((gp_Vec*)V->Handle));
}

 void OCgp_Trsf::SetTranslation(OCNaroWrappers::OCgp_Pnt^ P1, OCNaroWrappers::OCgp_Pnt^ P2)
{
  ((gp_Trsf*)nativeHandle)->SetTranslation(*((gp_Pnt*)P1->Handle), *((gp_Pnt*)P2->Handle));
}

 void OCgp_Trsf::SetTranslationPart(OCNaroWrappers::OCgp_Vec^ V)
{
  ((gp_Trsf*)nativeHandle)->SetTranslationPart(*((gp_Vec*)V->Handle));
}

 void OCgp_Trsf::SetScaleFactor(Standard_Real S)
{
  ((gp_Trsf*)nativeHandle)->SetScaleFactor(S);
}

 void OCgp_Trsf::SetValues(Standard_Real a11, Standard_Real a12, Standard_Real a13, Standard_Real a14, Standard_Real a21, Standard_Real a22, Standard_Real a23, Standard_Real a24, Standard_Real a31, Standard_Real a32, Standard_Real a33, Standard_Real a34, Standard_Real Tolang, Standard_Real TolDist)
{
  ((gp_Trsf*)nativeHandle)->SetValues(a11, a12, a13, a14, a21, a22, a23, a24, a31, a32, a33, a34, Tolang, TolDist);
}

 System::Boolean OCgp_Trsf::IsNegative()
{
  return OCConverter::StandardBooleanToBoolean(((gp_Trsf*)nativeHandle)->IsNegative());
}

 OCgp_TrsfForm OCgp_Trsf::Form()
{
  return (OCgp_TrsfForm)(((gp_Trsf*)nativeHandle)->Form());
}

 Standard_Real OCgp_Trsf::ScaleFactor()
{
  return ((gp_Trsf*)nativeHandle)->ScaleFactor();
}

OCgp_XYZ^ OCgp_Trsf::TranslationPart()
{
  gp_XYZ* tmp = new gp_XYZ();
  *tmp = ((gp_Trsf*)nativeHandle)->TranslationPart();
  return gcnew OCgp_XYZ(tmp);
}

 System::Boolean OCgp_Trsf::GetRotation(OCNaroWrappers::OCgp_XYZ^ theAxis, Standard_Real& theAngle)
{
  return OCConverter::StandardBooleanToBoolean(((gp_Trsf*)nativeHandle)->GetRotation(*((gp_XYZ*)theAxis->Handle), theAngle));
}

OCgp_Quaternion^ OCgp_Trsf::GetRotation()
{
  gp_Quaternion* tmp = new gp_Quaternion();
  *tmp = ((gp_Trsf*)nativeHandle)->GetRotation();
  return gcnew OCgp_Quaternion(tmp);
}

OCgp_Mat^ OCgp_Trsf::VectorialPart()
{
  gp_Mat* tmp = new gp_Mat();
  *tmp = ((gp_Trsf*)nativeHandle)->VectorialPart();
  return gcnew OCgp_Mat(tmp);
}

OCgp_Mat^ OCgp_Trsf::HVectorialPart()
{
  gp_Mat* tmp = new gp_Mat();
  *tmp = ((gp_Trsf*)nativeHandle)->HVectorialPart();
  return gcnew OCgp_Mat(tmp);
}

 Standard_Real OCgp_Trsf::Value(Standard_Integer Row, Standard_Integer Col)
{
  return ((gp_Trsf*)nativeHandle)->Value(Row, Col);
}

 void OCgp_Trsf::Invert()
{
  ((gp_Trsf*)nativeHandle)->Invert();
}

OCgp_Trsf^ OCgp_Trsf::Inverted()
{
  gp_Trsf* tmp = new gp_Trsf();
  *tmp = ((gp_Trsf*)nativeHandle)->Inverted();
  return gcnew OCgp_Trsf(tmp);
}

OCgp_Trsf^ OCgp_Trsf::Multiplied(OCNaroWrappers::OCgp_Trsf^ T)
{
  gp_Trsf* tmp = new gp_Trsf();
  *tmp = ((gp_Trsf*)nativeHandle)->Multiplied(*((gp_Trsf*)T->Handle));
  return gcnew OCgp_Trsf(tmp);
}

 void OCgp_Trsf::Multiply(OCNaroWrappers::OCgp_Trsf^ T)
{
  ((gp_Trsf*)nativeHandle)->Multiply(*((gp_Trsf*)T->Handle));
}

 void OCgp_Trsf::PreMultiply(OCNaroWrappers::OCgp_Trsf^ T)
{
  ((gp_Trsf*)nativeHandle)->PreMultiply(*((gp_Trsf*)T->Handle));
}

 void OCgp_Trsf::Power(Standard_Integer N)
{
  ((gp_Trsf*)nativeHandle)->Power(N);
}

OCgp_Trsf^ OCgp_Trsf::Powered(Standard_Integer N)
{
  gp_Trsf* tmp = new gp_Trsf();
  *tmp = ((gp_Trsf*)nativeHandle)->Powered(N);
  return gcnew OCgp_Trsf(tmp);
}

 void OCgp_Trsf::Transforms(Standard_Real& X, Standard_Real& Y, Standard_Real& Z)
{
  ((gp_Trsf*)nativeHandle)->Transforms(X, Y, Z);
}

 void OCgp_Trsf::Transforms(OCNaroWrappers::OCgp_XYZ^ Coord)
{
  ((gp_Trsf*)nativeHandle)->Transforms(*((gp_XYZ*)Coord->Handle));
}


