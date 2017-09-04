// File generated by CPPExt (CPP file)
//

#include "IntPatch_TheIWalkingOfTheIPIntOfIntersection.h"
#include "../Converter.h"
#include "../IntSurf/IntSurf_PathPoint.h"
#include "../IntSurf/IntSurf_PathPointTool.h"
#include "../IntSurf/IntSurf_SequenceOfPathPoint.h"
#include "../IntSurf/IntSurf_InteriorPoint.h"
#include "../IntSurf/IntSurf_InteriorPointTool.h"
#include "../IntSurf/IntSurf_SequenceOfInteriorPoint.h"
#include "../Adaptor3d/Adaptor3d_HSurface.h"
#include "IntPatch_HSurfaceTool.h"
#include "IntPatch_TheSurfFunctionOfTheIPIntOfIntersection.h"
#include "IntPatch_TheIWLineOfTheIWalkingOfTheIPIntOfIntersection.h"
#include "IntPatch_SequenceOfIWLineOfTheIWalkingOfTheIPIntOfIntersection.h"
#include "IntPatch_SequenceNodeOfSequenceOfIWLineOfTheIWalkingOfTheIPIntOfIntersection.h"
#include "../math/math_Vector.h"
#include "../TColStd/TColStd_SequenceOfReal.h"
#include "../IntSurf/IntSurf_PntOn2S.h"


using namespace OCNaroWrappers;

OCIntPatch_TheIWalkingOfTheIPIntOfIntersection::OCIntPatch_TheIWalkingOfTheIPIntOfIntersection(IntPatch_TheIWalkingOfTheIPIntOfIntersection* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCIntPatch_TheIWalkingOfTheIPIntOfIntersection::OCIntPatch_TheIWalkingOfTheIPIntOfIntersection() 
{
  nativeHandle = new IntPatch_TheIWalkingOfTheIPIntOfIntersection();
}

OCIntPatch_TheIWalkingOfTheIPIntOfIntersection::OCIntPatch_TheIWalkingOfTheIPIntOfIntersection(Standard_Real Epsilon, Standard_Real Deflection, Standard_Real Step) 
{
  nativeHandle = new IntPatch_TheIWalkingOfTheIPIntOfIntersection(Epsilon, Deflection, Step);
}

 void OCIntPatch_TheIWalkingOfTheIPIntOfIntersection::SetTolerance(Standard_Real Epsilon, Standard_Real Deflection, Standard_Real Step)
{
  ((IntPatch_TheIWalkingOfTheIPIntOfIntersection*)nativeHandle)->SetTolerance(Epsilon, Deflection, Step);
}

 void OCIntPatch_TheIWalkingOfTheIPIntOfIntersection::Perform(OCNaroWrappers::OCIntSurf_SequenceOfPathPoint^ Pnts1, OCNaroWrappers::OCIntSurf_SequenceOfInteriorPoint^ Pnts2, OCNaroWrappers::OCIntPatch_TheSurfFunctionOfTheIPIntOfIntersection^ Func, OCNaroWrappers::OCAdaptor3d_HSurface^ S, System::Boolean Reversed)
{
  ((IntPatch_TheIWalkingOfTheIPIntOfIntersection*)nativeHandle)->Perform(*((IntSurf_SequenceOfPathPoint*)Pnts1->Handle), *((IntSurf_SequenceOfInteriorPoint*)Pnts2->Handle), *((IntPatch_TheSurfFunctionOfTheIPIntOfIntersection*)Func->Handle), *((Handle_Adaptor3d_HSurface*)S->Handle), OCConverter::BooleanToStandardBoolean(Reversed));
}

 void OCIntPatch_TheIWalkingOfTheIPIntOfIntersection::Perform(OCNaroWrappers::OCIntSurf_SequenceOfPathPoint^ Pnts1, OCNaroWrappers::OCIntPatch_TheSurfFunctionOfTheIPIntOfIntersection^ Func, OCNaroWrappers::OCAdaptor3d_HSurface^ S, System::Boolean Reversed)
{
  ((IntPatch_TheIWalkingOfTheIPIntOfIntersection*)nativeHandle)->Perform(*((IntSurf_SequenceOfPathPoint*)Pnts1->Handle), *((IntPatch_TheSurfFunctionOfTheIPIntOfIntersection*)Func->Handle), *((Handle_Adaptor3d_HSurface*)S->Handle), OCConverter::BooleanToStandardBoolean(Reversed));
}

 System::Boolean OCIntPatch_TheIWalkingOfTheIPIntOfIntersection::IsDone()
{
  return OCConverter::StandardBooleanToBoolean(((IntPatch_TheIWalkingOfTheIPIntOfIntersection*)nativeHandle)->IsDone());
}

 Standard_Integer OCIntPatch_TheIWalkingOfTheIPIntOfIntersection::NbLines()
{
  return ((IntPatch_TheIWalkingOfTheIPIntOfIntersection*)nativeHandle)->NbLines();
}

OCIntPatch_TheIWLineOfTheIWalkingOfTheIPIntOfIntersection^ OCIntPatch_TheIWalkingOfTheIPIntOfIntersection::Value(Standard_Integer Index)
{
  Handle(IntPatch_TheIWLineOfTheIWalkingOfTheIPIntOfIntersection) tmp = ((IntPatch_TheIWalkingOfTheIPIntOfIntersection*)nativeHandle)->Value(Index);
  return gcnew OCIntPatch_TheIWLineOfTheIWalkingOfTheIPIntOfIntersection(&tmp);
}

 Standard_Integer OCIntPatch_TheIWalkingOfTheIPIntOfIntersection::NbSinglePnts()
{
  return ((IntPatch_TheIWalkingOfTheIPIntOfIntersection*)nativeHandle)->NbSinglePnts();
}

OCIntSurf_PathPoint^ OCIntPatch_TheIWalkingOfTheIPIntOfIntersection::SinglePnt(Standard_Integer Index)
{
  IntSurf_PathPoint* tmp = new IntSurf_PathPoint();
  *tmp = ((IntPatch_TheIWalkingOfTheIPIntOfIntersection*)nativeHandle)->SinglePnt(Index);
  return gcnew OCIntSurf_PathPoint(tmp);
}

