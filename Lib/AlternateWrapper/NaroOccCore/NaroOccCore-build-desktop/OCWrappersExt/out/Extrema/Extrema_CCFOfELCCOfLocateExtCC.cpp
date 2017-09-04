// File generated by CPPExt (CPP file)
//

#include "Extrema_CCFOfELCCOfLocateExtCC.h"
#include "../Converter.h"
#include "../Adaptor3d/Adaptor3d_Curve.h"
#include "Extrema_CurveTool.h"
#include "Extrema_POnCurv.h"
#include "../gp/gp_Pnt.h"
#include "../gp/gp_Vec.h"
#include "Extrema_SeqPOnCOfCCFOfELCCOfLocateExtCC.h"
#include "Extrema_SequenceNodeOfSeqPOnCOfCCFOfELCCOfLocateExtCC.h"
#include "../math/math_Vector.h"
#include "../math/math_Matrix.h"


using namespace OCNaroWrappers;

OCExtrema_CCFOfELCCOfLocateExtCC::OCExtrema_CCFOfELCCOfLocateExtCC(Extrema_CCFOfELCCOfLocateExtCC* nativeHandle) : OCmath_FunctionSetWithDerivatives((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCExtrema_CCFOfELCCOfLocateExtCC::OCExtrema_CCFOfELCCOfLocateExtCC(Standard_Real thetol) : OCmath_FunctionSetWithDerivatives((OCDummy^)nullptr)

{
  nativeHandle = new Extrema_CCFOfELCCOfLocateExtCC(thetol);
}

OCExtrema_CCFOfELCCOfLocateExtCC::OCExtrema_CCFOfELCCOfLocateExtCC(OCNaroWrappers::OCAdaptor3d_Curve^ C1, OCNaroWrappers::OCAdaptor3d_Curve^ C2, Standard_Real thetol) : OCmath_FunctionSetWithDerivatives((OCDummy^)nullptr)

{
  nativeHandle = new Extrema_CCFOfELCCOfLocateExtCC(*((Adaptor3d_Curve*)C1->Handle), *((Adaptor3d_Curve*)C2->Handle), thetol);
}

 void OCExtrema_CCFOfELCCOfLocateExtCC::SetCurve(Standard_Integer theRank, OCNaroWrappers::OCAdaptor3d_Curve^ C1)
{
  ((Extrema_CCFOfELCCOfLocateExtCC*)nativeHandle)->SetCurve(theRank, *((Adaptor3d_Curve*)C1->Handle));
}

 void OCExtrema_CCFOfELCCOfLocateExtCC::SetTolerance(Standard_Real theTol)
{
  ((Extrema_CCFOfELCCOfLocateExtCC*)nativeHandle)->SetTolerance(theTol);
}

 Standard_Integer OCExtrema_CCFOfELCCOfLocateExtCC::NbVariables()
{
  return ((Extrema_CCFOfELCCOfLocateExtCC*)nativeHandle)->NbVariables();
}

 Standard_Integer OCExtrema_CCFOfELCCOfLocateExtCC::NbEquations()
{
  return ((Extrema_CCFOfELCCOfLocateExtCC*)nativeHandle)->NbEquations();
}

 System::Boolean OCExtrema_CCFOfELCCOfLocateExtCC::Value(OCNaroWrappers::OCmath_Vector^ UV, OCNaroWrappers::OCmath_Vector^ F)
{
  return OCConverter::StandardBooleanToBoolean(((Extrema_CCFOfELCCOfLocateExtCC*)nativeHandle)->Value(*((math_Vector*)UV->Handle), *((math_Vector*)F->Handle)));
}

 System::Boolean OCExtrema_CCFOfELCCOfLocateExtCC::Derivatives(OCNaroWrappers::OCmath_Vector^ UV, OCNaroWrappers::OCmath_Matrix^ DF)
{
  return OCConverter::StandardBooleanToBoolean(((Extrema_CCFOfELCCOfLocateExtCC*)nativeHandle)->Derivatives(*((math_Vector*)UV->Handle), *((math_Matrix*)DF->Handle)));
}

 System::Boolean OCExtrema_CCFOfELCCOfLocateExtCC::Values(OCNaroWrappers::OCmath_Vector^ UV, OCNaroWrappers::OCmath_Vector^ F, OCNaroWrappers::OCmath_Matrix^ DF)
{
  return OCConverter::StandardBooleanToBoolean(((Extrema_CCFOfELCCOfLocateExtCC*)nativeHandle)->Values(*((math_Vector*)UV->Handle), *((math_Vector*)F->Handle), *((math_Matrix*)DF->Handle)));
}

 Standard_Integer OCExtrema_CCFOfELCCOfLocateExtCC::GetStateNumber()
{
  return ((Extrema_CCFOfELCCOfLocateExtCC*)nativeHandle)->GetStateNumber();
}

 Standard_Integer OCExtrema_CCFOfELCCOfLocateExtCC::NbExt()
{
  return ((Extrema_CCFOfELCCOfLocateExtCC*)nativeHandle)->NbExt();
}

 Standard_Real OCExtrema_CCFOfELCCOfLocateExtCC::SquareDistance(Standard_Integer N)
{
  return ((Extrema_CCFOfELCCOfLocateExtCC*)nativeHandle)->SquareDistance(N);
}

 void OCExtrema_CCFOfELCCOfLocateExtCC::Points(Standard_Integer N, OCNaroWrappers::OCExtrema_POnCurv^ P1, OCNaroWrappers::OCExtrema_POnCurv^ P2)
{
  ((Extrema_CCFOfELCCOfLocateExtCC*)nativeHandle)->Points(N, *((Extrema_POnCurv*)P1->Handle), *((Extrema_POnCurv*)P2->Handle));
}

 Standard_Address OCExtrema_CCFOfELCCOfLocateExtCC::CurvePtr(Standard_Integer theRank)
{
  return ((Extrema_CCFOfELCCOfLocateExtCC*)nativeHandle)->CurvePtr(theRank);
}

 Standard_Real OCExtrema_CCFOfELCCOfLocateExtCC::Tolerance()
{
  return ((Extrema_CCFOfELCCOfLocateExtCC*)nativeHandle)->Tolerance();
}

