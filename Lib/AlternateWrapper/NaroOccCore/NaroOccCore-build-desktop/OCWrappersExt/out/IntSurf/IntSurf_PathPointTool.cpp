// File generated by CPPExt (CPP file)
//

#include "IntSurf_PathPointTool.h"
#include "../Converter.h"
#include "IntSurf_PathPoint.h"


using namespace OCNaroWrappers;

OCIntSurf_PathPointTool::OCIntSurf_PathPointTool(IntSurf_PathPointTool* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCgp_Pnt^ OCIntSurf_PathPointTool::Value3d(OCNaroWrappers::OCIntSurf_PathPoint^ PStart)
{
  gp_Pnt* tmp = new gp_Pnt();
  *tmp = IntSurf_PathPointTool::Value3d(*((IntSurf_PathPoint*)PStart->Handle));
  return gcnew OCgp_Pnt(tmp);
}

 void OCIntSurf_PathPointTool::Value2d(OCNaroWrappers::OCIntSurf_PathPoint^ PStart, Standard_Real& U, Standard_Real& V)
{
  IntSurf_PathPointTool::Value2d(*((IntSurf_PathPoint*)PStart->Handle), U, V);
}

 System::Boolean OCIntSurf_PathPointTool::IsPassingPnt(OCNaroWrappers::OCIntSurf_PathPoint^ PStart)
{
  return OCConverter::StandardBooleanToBoolean(IntSurf_PathPointTool::IsPassingPnt(*((IntSurf_PathPoint*)PStart->Handle)));
}

 System::Boolean OCIntSurf_PathPointTool::IsTangent(OCNaroWrappers::OCIntSurf_PathPoint^ PStart)
{
  return OCConverter::StandardBooleanToBoolean(IntSurf_PathPointTool::IsTangent(*((IntSurf_PathPoint*)PStart->Handle)));
}

OCgp_Vec^ OCIntSurf_PathPointTool::Direction3d(OCNaroWrappers::OCIntSurf_PathPoint^ PStart)
{
  gp_Vec* tmp = new gp_Vec();
  *tmp = IntSurf_PathPointTool::Direction3d(*((IntSurf_PathPoint*)PStart->Handle));
  return gcnew OCgp_Vec(tmp);
}

OCgp_Dir2d^ OCIntSurf_PathPointTool::Direction2d(OCNaroWrappers::OCIntSurf_PathPoint^ PStart)
{
  gp_Dir2d* tmp = new gp_Dir2d();
  *tmp = IntSurf_PathPointTool::Direction2d(*((IntSurf_PathPoint*)PStart->Handle));
  return gcnew OCgp_Dir2d(tmp);
}

 Standard_Integer OCIntSurf_PathPointTool::Multiplicity(OCNaroWrappers::OCIntSurf_PathPoint^ PStart)
{
  return IntSurf_PathPointTool::Multiplicity(*((IntSurf_PathPoint*)PStart->Handle));
}

 void OCIntSurf_PathPointTool::Parameters(OCNaroWrappers::OCIntSurf_PathPoint^ PStart, Standard_Integer Mult, Standard_Real& U, Standard_Real& V)
{
  IntSurf_PathPointTool::Parameters(*((IntSurf_PathPoint*)PStart->Handle), Mult, U, V);
}

