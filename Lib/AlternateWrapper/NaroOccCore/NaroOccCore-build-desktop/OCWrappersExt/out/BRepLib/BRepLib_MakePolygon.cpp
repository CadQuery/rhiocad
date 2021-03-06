// File generated by CPPExt (CPP file)
//

#include "BRepLib_MakePolygon.h"
#include "../Converter.h"
#include "../gp/gp_Pnt.h"
#include "../TopoDS/TopoDS_Vertex.h"
#include "../TopoDS/TopoDS_Edge.h"
#include "../TopoDS/TopoDS_Wire.h"


using namespace OCNaroWrappers;

OCBRepLib_MakePolygon::OCBRepLib_MakePolygon(BRepLib_MakePolygon* nativeHandle) : OCBRepLib_MakeShape((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCBRepLib_MakePolygon::OCBRepLib_MakePolygon() : OCBRepLib_MakeShape((OCDummy^)nullptr)

{
  nativeHandle = new BRepLib_MakePolygon();
}

OCBRepLib_MakePolygon::OCBRepLib_MakePolygon(OCNaroWrappers::OCgp_Pnt^ P1, OCNaroWrappers::OCgp_Pnt^ P2) : OCBRepLib_MakeShape((OCDummy^)nullptr)

{
  nativeHandle = new BRepLib_MakePolygon(*((gp_Pnt*)P1->Handle), *((gp_Pnt*)P2->Handle));
}

OCBRepLib_MakePolygon::OCBRepLib_MakePolygon(OCNaroWrappers::OCgp_Pnt^ P1, OCNaroWrappers::OCgp_Pnt^ P2, OCNaroWrappers::OCgp_Pnt^ P3, System::Boolean Close) : OCBRepLib_MakeShape((OCDummy^)nullptr)

{
  nativeHandle = new BRepLib_MakePolygon(*((gp_Pnt*)P1->Handle), *((gp_Pnt*)P2->Handle), *((gp_Pnt*)P3->Handle), OCConverter::BooleanToStandardBoolean(Close));
}

OCBRepLib_MakePolygon::OCBRepLib_MakePolygon(OCNaroWrappers::OCgp_Pnt^ P1, OCNaroWrappers::OCgp_Pnt^ P2, OCNaroWrappers::OCgp_Pnt^ P3, OCNaroWrappers::OCgp_Pnt^ P4, System::Boolean Close) : OCBRepLib_MakeShape((OCDummy^)nullptr)

{
  nativeHandle = new BRepLib_MakePolygon(*((gp_Pnt*)P1->Handle), *((gp_Pnt*)P2->Handle), *((gp_Pnt*)P3->Handle), *((gp_Pnt*)P4->Handle), OCConverter::BooleanToStandardBoolean(Close));
}

OCBRepLib_MakePolygon::OCBRepLib_MakePolygon(OCNaroWrappers::OCTopoDS_Vertex^ V1, OCNaroWrappers::OCTopoDS_Vertex^ V2) : OCBRepLib_MakeShape((OCDummy^)nullptr)

{
  nativeHandle = new BRepLib_MakePolygon(*((TopoDS_Vertex*)V1->Handle), *((TopoDS_Vertex*)V2->Handle));
}

OCBRepLib_MakePolygon::OCBRepLib_MakePolygon(OCNaroWrappers::OCTopoDS_Vertex^ V1, OCNaroWrappers::OCTopoDS_Vertex^ V2, OCNaroWrappers::OCTopoDS_Vertex^ V3, System::Boolean Close) : OCBRepLib_MakeShape((OCDummy^)nullptr)

{
  nativeHandle = new BRepLib_MakePolygon(*((TopoDS_Vertex*)V1->Handle), *((TopoDS_Vertex*)V2->Handle), *((TopoDS_Vertex*)V3->Handle), OCConverter::BooleanToStandardBoolean(Close));
}

OCBRepLib_MakePolygon::OCBRepLib_MakePolygon(OCNaroWrappers::OCTopoDS_Vertex^ V1, OCNaroWrappers::OCTopoDS_Vertex^ V2, OCNaroWrappers::OCTopoDS_Vertex^ V3, OCNaroWrappers::OCTopoDS_Vertex^ V4, System::Boolean Close) : OCBRepLib_MakeShape((OCDummy^)nullptr)

{
  nativeHandle = new BRepLib_MakePolygon(*((TopoDS_Vertex*)V1->Handle), *((TopoDS_Vertex*)V2->Handle), *((TopoDS_Vertex*)V3->Handle), *((TopoDS_Vertex*)V4->Handle), OCConverter::BooleanToStandardBoolean(Close));
}

 void OCBRepLib_MakePolygon::Add(OCNaroWrappers::OCgp_Pnt^ P)
{
  ((BRepLib_MakePolygon*)nativeHandle)->Add(*((gp_Pnt*)P->Handle));
}

 void OCBRepLib_MakePolygon::Add(OCNaroWrappers::OCTopoDS_Vertex^ V)
{
  ((BRepLib_MakePolygon*)nativeHandle)->Add(*((TopoDS_Vertex*)V->Handle));
}

 System::Boolean OCBRepLib_MakePolygon::Added()
{
  return OCConverter::StandardBooleanToBoolean(((BRepLib_MakePolygon*)nativeHandle)->Added());
}

 void OCBRepLib_MakePolygon::Close()
{
  ((BRepLib_MakePolygon*)nativeHandle)->Close();
}

OCTopoDS_Vertex^ OCBRepLib_MakePolygon::FirstVertex()
{
  TopoDS_Vertex* tmp = new TopoDS_Vertex();
  *tmp = ((BRepLib_MakePolygon*)nativeHandle)->FirstVertex();
  return gcnew OCTopoDS_Vertex(tmp);
}

OCTopoDS_Vertex^ OCBRepLib_MakePolygon::LastVertex()
{
  TopoDS_Vertex* tmp = new TopoDS_Vertex();
  *tmp = ((BRepLib_MakePolygon*)nativeHandle)->LastVertex();
  return gcnew OCTopoDS_Vertex(tmp);
}

OCTopoDS_Edge^ OCBRepLib_MakePolygon::Edge()
{
  TopoDS_Edge* tmp = new TopoDS_Edge();
  *tmp = ((BRepLib_MakePolygon*)nativeHandle)->Edge();
  return gcnew OCTopoDS_Edge(tmp);
}

OCTopoDS_Wire^ OCBRepLib_MakePolygon::Wire()
{
  TopoDS_Wire* tmp = new TopoDS_Wire();
  *tmp = ((BRepLib_MakePolygon*)nativeHandle)->Wire();
  return gcnew OCTopoDS_Wire(tmp);
}


