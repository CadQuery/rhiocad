// File generated by CPPExt (CPP file)
//

#include "Extrema_EPCOfExtPC.h"
#include "../Converter.h"
#include "../Adaptor3d/Adaptor3d_Curve.h"
#include "Extrema_CurveTool.h"
#include "Extrema_POnCurv.h"
#include "../gp/gp_Pnt.h"
#include "../gp/gp_Vec.h"
#include "Extrema_PCFOfEPCOfExtPC.h"
#include "Extrema_SeqPCOfPCFOfEPCOfExtPC.h"


using namespace OCNaroWrappers;

OCExtrema_EPCOfExtPC::OCExtrema_EPCOfExtPC(Extrema_EPCOfExtPC* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCExtrema_EPCOfExtPC::OCExtrema_EPCOfExtPC() 
{
  nativeHandle = new Extrema_EPCOfExtPC();
}

OCExtrema_EPCOfExtPC::OCExtrema_EPCOfExtPC(OCNaroWrappers::OCgp_Pnt^ P, OCNaroWrappers::OCAdaptor3d_Curve^ C, Standard_Integer NbU, Standard_Real TolU, Standard_Real TolF) 
{
  nativeHandle = new Extrema_EPCOfExtPC(*((gp_Pnt*)P->Handle), *((Adaptor3d_Curve*)C->Handle), NbU, TolU, TolF);
}

OCExtrema_EPCOfExtPC::OCExtrema_EPCOfExtPC(OCNaroWrappers::OCgp_Pnt^ P, OCNaroWrappers::OCAdaptor3d_Curve^ C, Standard_Integer NbU, Standard_Real Umin, Standard_Real Usup, Standard_Real TolU, Standard_Real TolF) 
{
  nativeHandle = new Extrema_EPCOfExtPC(*((gp_Pnt*)P->Handle), *((Adaptor3d_Curve*)C->Handle), NbU, Umin, Usup, TolU, TolF);
}

 void OCExtrema_EPCOfExtPC::Initialize(OCNaroWrappers::OCAdaptor3d_Curve^ C, Standard_Integer NbU, Standard_Real TolU, Standard_Real TolF)
{
  ((Extrema_EPCOfExtPC*)nativeHandle)->Initialize(*((Adaptor3d_Curve*)C->Handle), NbU, TolU, TolF);
}

 void OCExtrema_EPCOfExtPC::Initialize(OCNaroWrappers::OCAdaptor3d_Curve^ C, Standard_Integer NbU, Standard_Real Umin, Standard_Real Usup, Standard_Real TolU, Standard_Real TolF)
{
  ((Extrema_EPCOfExtPC*)nativeHandle)->Initialize(*((Adaptor3d_Curve*)C->Handle), NbU, Umin, Usup, TolU, TolF);
}

 void OCExtrema_EPCOfExtPC::Initialize(OCNaroWrappers::OCAdaptor3d_Curve^ C)
{
  ((Extrema_EPCOfExtPC*)nativeHandle)->Initialize(*((Adaptor3d_Curve*)C->Handle));
}

 void OCExtrema_EPCOfExtPC::Initialize(Standard_Integer NbU, Standard_Real Umin, Standard_Real Usup, Standard_Real TolU, Standard_Real TolF)
{
  ((Extrema_EPCOfExtPC*)nativeHandle)->Initialize(NbU, Umin, Usup, TolU, TolF);
}

 void OCExtrema_EPCOfExtPC::Perform(OCNaroWrappers::OCgp_Pnt^ P)
{
  ((Extrema_EPCOfExtPC*)nativeHandle)->Perform(*((gp_Pnt*)P->Handle));
}

 System::Boolean OCExtrema_EPCOfExtPC::IsDone()
{
  return OCConverter::StandardBooleanToBoolean(((Extrema_EPCOfExtPC*)nativeHandle)->IsDone());
}

 Standard_Integer OCExtrema_EPCOfExtPC::NbExt()
{
  return ((Extrema_EPCOfExtPC*)nativeHandle)->NbExt();
}

 Standard_Real OCExtrema_EPCOfExtPC::SquareDistance(Standard_Integer N)
{
  return ((Extrema_EPCOfExtPC*)nativeHandle)->SquareDistance(N);
}

 System::Boolean OCExtrema_EPCOfExtPC::IsMin(Standard_Integer N)
{
  return OCConverter::StandardBooleanToBoolean(((Extrema_EPCOfExtPC*)nativeHandle)->IsMin(N));
}

OCExtrema_POnCurv^ OCExtrema_EPCOfExtPC::Point(Standard_Integer N)
{
  Extrema_POnCurv* tmp = new Extrema_POnCurv();
  *tmp = ((Extrema_EPCOfExtPC*)nativeHandle)->Point(N);
  return gcnew OCExtrema_POnCurv(tmp);
}

