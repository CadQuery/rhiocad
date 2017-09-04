// File generated by CPPExt (CPP file)
//

#include "BRepAlgo_NormalProjection.h"
#include "../Converter.h"
#include "../TopoDS/TopoDS_Shape.h"
#include "../TopoDS/TopoDS_Edge.h"
#include "../TopTools/TopTools_ListOfShape.h"
#include "../Adaptor3d/Adaptor3d_Curve.h"


using namespace OCNaroWrappers;

OCBRepAlgo_NormalProjection::OCBRepAlgo_NormalProjection(BRepAlgo_NormalProjection* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCBRepAlgo_NormalProjection::OCBRepAlgo_NormalProjection() 
{
  nativeHandle = new BRepAlgo_NormalProjection();
}

OCBRepAlgo_NormalProjection::OCBRepAlgo_NormalProjection(OCNaroWrappers::OCTopoDS_Shape^ S) 
{
  nativeHandle = new BRepAlgo_NormalProjection(*((TopoDS_Shape*)S->Handle));
}

 void OCBRepAlgo_NormalProjection::Init(OCNaroWrappers::OCTopoDS_Shape^ S)
{
  ((BRepAlgo_NormalProjection*)nativeHandle)->Init(*((TopoDS_Shape*)S->Handle));
}

 void OCBRepAlgo_NormalProjection::Add(OCNaroWrappers::OCTopoDS_Shape^ ToProj)
{
  ((BRepAlgo_NormalProjection*)nativeHandle)->Add(*((TopoDS_Shape*)ToProj->Handle));
}

 void OCBRepAlgo_NormalProjection::SetParams(Standard_Real Tol3D, Standard_Real Tol2D, OCGeomAbs_Shape InternalContinuity, Standard_Integer MaxDegree, Standard_Integer MaxSeg)
{
  ((BRepAlgo_NormalProjection*)nativeHandle)->SetParams(Tol3D, Tol2D, (GeomAbs_Shape)InternalContinuity, MaxDegree, MaxSeg);
}

 void OCBRepAlgo_NormalProjection::SetDefaultParams()
{
  ((BRepAlgo_NormalProjection*)nativeHandle)->SetDefaultParams();
}

 void OCBRepAlgo_NormalProjection::SetMaxDistance(Standard_Real MaxDist)
{
  ((BRepAlgo_NormalProjection*)nativeHandle)->SetMaxDistance(MaxDist);
}

 void OCBRepAlgo_NormalProjection::Compute3d(System::Boolean With3d)
{
  ((BRepAlgo_NormalProjection*)nativeHandle)->Compute3d(OCConverter::BooleanToStandardBoolean(With3d));
}

 void OCBRepAlgo_NormalProjection::SetLimit(System::Boolean FaceBoundaries)
{
  ((BRepAlgo_NormalProjection*)nativeHandle)->SetLimit(OCConverter::BooleanToStandardBoolean(FaceBoundaries));
}

 void OCBRepAlgo_NormalProjection::Build()
{
  ((BRepAlgo_NormalProjection*)nativeHandle)->Build();
}

 System::Boolean OCBRepAlgo_NormalProjection::IsDone()
{
  return OCConverter::StandardBooleanToBoolean(((BRepAlgo_NormalProjection*)nativeHandle)->IsDone());
}

OCTopoDS_Shape^ OCBRepAlgo_NormalProjection::Projection()
{
  TopoDS_Shape* tmp = new TopoDS_Shape();
  *tmp = ((BRepAlgo_NormalProjection*)nativeHandle)->Projection();
  return gcnew OCTopoDS_Shape(tmp);
}

OCTopoDS_Shape^ OCBRepAlgo_NormalProjection::Ancestor(OCNaroWrappers::OCTopoDS_Edge^ E)
{
  TopoDS_Shape* tmp = new TopoDS_Shape();
  *tmp = ((BRepAlgo_NormalProjection*)nativeHandle)->Ancestor(*((TopoDS_Edge*)E->Handle));
  return gcnew OCTopoDS_Shape(tmp);
}

OCTopoDS_Shape^ OCBRepAlgo_NormalProjection::Couple(OCNaroWrappers::OCTopoDS_Edge^ E)
{
  TopoDS_Shape* tmp = new TopoDS_Shape();
  *tmp = ((BRepAlgo_NormalProjection*)nativeHandle)->Couple(*((TopoDS_Edge*)E->Handle));
  return gcnew OCTopoDS_Shape(tmp);
}

OCTopTools_ListOfShape^ OCBRepAlgo_NormalProjection::Generated(OCNaroWrappers::OCTopoDS_Shape^ S)
{
  TopTools_ListOfShape* tmp = new TopTools_ListOfShape();
  *tmp = ((BRepAlgo_NormalProjection*)nativeHandle)->Generated(*((TopoDS_Shape*)S->Handle));
  return gcnew OCTopTools_ListOfShape(tmp);
}

 System::Boolean OCBRepAlgo_NormalProjection::IsElementary(OCNaroWrappers::OCAdaptor3d_Curve^ C)
{
  return OCConverter::StandardBooleanToBoolean(((BRepAlgo_NormalProjection*)nativeHandle)->IsElementary(*((Adaptor3d_Curve*)C->Handle)));
}

 System::Boolean OCBRepAlgo_NormalProjection::BuildWire(OCNaroWrappers::OCTopTools_ListOfShape^ Liste)
{
  return OCConverter::StandardBooleanToBoolean(((BRepAlgo_NormalProjection*)nativeHandle)->BuildWire(*((TopTools_ListOfShape*)Liste->Handle)));
}

