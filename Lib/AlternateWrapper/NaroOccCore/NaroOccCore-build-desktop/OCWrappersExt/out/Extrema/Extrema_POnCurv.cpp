// File generated by CPPExt (CPP file)
//

#include "Extrema_POnCurv.h"
#include "../Converter.h"
#include "../gp/gp_Pnt.h"


using namespace OCNaroWrappers;

OCExtrema_POnCurv::OCExtrema_POnCurv(Extrema_POnCurv* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCExtrema_POnCurv::OCExtrema_POnCurv() 
{
  nativeHandle = new Extrema_POnCurv();
}

OCExtrema_POnCurv::OCExtrema_POnCurv(Standard_Real U, OCNaroWrappers::OCgp_Pnt^ P) 
{
  nativeHandle = new Extrema_POnCurv(U, *((gp_Pnt*)P->Handle));
}

 void OCExtrema_POnCurv::SetValues(Standard_Real U, OCNaroWrappers::OCgp_Pnt^ P)
{
  ((Extrema_POnCurv*)nativeHandle)->SetValues(U, *((gp_Pnt*)P->Handle));
}

OCgp_Pnt^ OCExtrema_POnCurv::Value()
{
  gp_Pnt* tmp = new gp_Pnt();
  *tmp = ((Extrema_POnCurv*)nativeHandle)->Value();
  return gcnew OCgp_Pnt(tmp);
}

 Standard_Real OCExtrema_POnCurv::Parameter()
{
  return ((Extrema_POnCurv*)nativeHandle)->Parameter();
}


