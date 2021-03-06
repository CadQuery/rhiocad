// File generated by CPPExt (CPP file)
//

#include "gce_MakeHypr.h"
#include "../Converter.h"
#include "../gp/gp_Ax2.h"
#include "../gp/gp_Pnt.h"
#include "../gp/gp_Hypr.h"


using namespace OCNaroWrappers;

OCgce_MakeHypr::OCgce_MakeHypr(gce_MakeHypr* nativeHandle) : OCgce_Root((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCgce_MakeHypr::OCgce_MakeHypr(OCNaroWrappers::OCgp_Ax2^ A2, Standard_Real MajorRadius, Standard_Real MinorRadius) : OCgce_Root((OCDummy^)nullptr)

{
  nativeHandle = new gce_MakeHypr(*((gp_Ax2*)A2->Handle), MajorRadius, MinorRadius);
}

OCgce_MakeHypr::OCgce_MakeHypr(OCNaroWrappers::OCgp_Pnt^ S1, OCNaroWrappers::OCgp_Pnt^ S2, OCNaroWrappers::OCgp_Pnt^ Center) : OCgce_Root((OCDummy^)nullptr)

{
  nativeHandle = new gce_MakeHypr(*((gp_Pnt*)S1->Handle), *((gp_Pnt*)S2->Handle), *((gp_Pnt*)Center->Handle));
}

OCgp_Hypr^ OCgce_MakeHypr::Value()
{
  gp_Hypr* tmp = new gp_Hypr();
  *tmp = ((gce_MakeHypr*)nativeHandle)->Value();
  return gcnew OCgp_Hypr(tmp);
}

OCgp_Hypr^ OCgce_MakeHypr::Operator()
{
  gp_Hypr* tmp = new gp_Hypr();
  *tmp = ((gce_MakeHypr*)nativeHandle)->Operator();
  return gcnew OCgp_Hypr(tmp);
}


