// File generated by CPPExt (CPP file)
//

#include "Prs3d_ShapeTool.h"
#include "../Converter.h"
#include "../TopoDS/TopoDS_Shape.h"
#include "../TopoDS/TopoDS_Face.h"
#include "../Bnd/Bnd_Box.h"
#include "../TopoDS/TopoDS_Edge.h"
#include "../TopTools/TopTools_HSequenceOfShape.h"
#include "../TopoDS/TopoDS_Vertex.h"
#include "../Poly/Poly_Triangulation.h"
#include "../TopLoc/TopLoc_Location.h"
#include "../Poly/Poly_PolygonOnTriangulation.h"
#include "../Poly/Poly_Polygon3D.h"


using namespace OCNaroWrappers;

OCPrs3d_ShapeTool::OCPrs3d_ShapeTool(Prs3d_ShapeTool* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCPrs3d_ShapeTool::OCPrs3d_ShapeTool(OCNaroWrappers::OCTopoDS_Shape^ TheShape) 
{
  nativeHandle = new Prs3d_ShapeTool(*((TopoDS_Shape*)TheShape->Handle));
}

 void OCPrs3d_ShapeTool::InitFace()
{
  ((Prs3d_ShapeTool*)nativeHandle)->InitFace();
}

 System::Boolean OCPrs3d_ShapeTool::MoreFace()
{
  return OCConverter::StandardBooleanToBoolean(((Prs3d_ShapeTool*)nativeHandle)->MoreFace());
}

 void OCPrs3d_ShapeTool::NextFace()
{
  ((Prs3d_ShapeTool*)nativeHandle)->NextFace();
}

OCTopoDS_Face^ OCPrs3d_ShapeTool::GetFace()
{
  TopoDS_Face* tmp = new TopoDS_Face();
  *tmp = ((Prs3d_ShapeTool*)nativeHandle)->GetFace();
  return gcnew OCTopoDS_Face(tmp);
}

OCBnd_Box^ OCPrs3d_ShapeTool::FaceBound()
{
  Bnd_Box* tmp = new Bnd_Box();
  *tmp = ((Prs3d_ShapeTool*)nativeHandle)->FaceBound();
  return gcnew OCBnd_Box(tmp);
}

 System::Boolean OCPrs3d_ShapeTool::IsPlanarFace()
{
  return OCConverter::StandardBooleanToBoolean(((Prs3d_ShapeTool*)nativeHandle)->IsPlanarFace());
}

 void OCPrs3d_ShapeTool::InitCurve()
{
  ((Prs3d_ShapeTool*)nativeHandle)->InitCurve();
}

 System::Boolean OCPrs3d_ShapeTool::MoreCurve()
{
  return OCConverter::StandardBooleanToBoolean(((Prs3d_ShapeTool*)nativeHandle)->MoreCurve());
}

 void OCPrs3d_ShapeTool::NextCurve()
{
  ((Prs3d_ShapeTool*)nativeHandle)->NextCurve();
}

OCTopoDS_Edge^ OCPrs3d_ShapeTool::GetCurve()
{
  TopoDS_Edge* tmp = new TopoDS_Edge();
  *tmp = ((Prs3d_ShapeTool*)nativeHandle)->GetCurve();
  return gcnew OCTopoDS_Edge(tmp);
}

OCBnd_Box^ OCPrs3d_ShapeTool::CurveBound()
{
  Bnd_Box* tmp = new Bnd_Box();
  *tmp = ((Prs3d_ShapeTool*)nativeHandle)->CurveBound();
  return gcnew OCBnd_Box(tmp);
}

 Standard_Integer OCPrs3d_ShapeTool::Neighbours()
{
  return ((Prs3d_ShapeTool*)nativeHandle)->Neighbours();
}

OCTopTools_HSequenceOfShape^ OCPrs3d_ShapeTool::FacesOfEdge()
{
  Handle(TopTools_HSequenceOfShape) tmp = ((Prs3d_ShapeTool*)nativeHandle)->FacesOfEdge();
  return gcnew OCTopTools_HSequenceOfShape(&tmp);
}

 void OCPrs3d_ShapeTool::InitVertex()
{
  ((Prs3d_ShapeTool*)nativeHandle)->InitVertex();
}

 System::Boolean OCPrs3d_ShapeTool::MoreVertex()
{
  return OCConverter::StandardBooleanToBoolean(((Prs3d_ShapeTool*)nativeHandle)->MoreVertex());
}

 void OCPrs3d_ShapeTool::NextVertex()
{
  ((Prs3d_ShapeTool*)nativeHandle)->NextVertex();
}

OCTopoDS_Vertex^ OCPrs3d_ShapeTool::GetVertex()
{
  TopoDS_Vertex* tmp = new TopoDS_Vertex();
  *tmp = ((Prs3d_ShapeTool*)nativeHandle)->GetVertex();
  return gcnew OCTopoDS_Vertex(tmp);
}

 System::Boolean OCPrs3d_ShapeTool::HasSurface()
{
  return OCConverter::StandardBooleanToBoolean(((Prs3d_ShapeTool*)nativeHandle)->HasSurface());
}

OCPoly_Triangulation^ OCPrs3d_ShapeTool::CurrentTriangulation(OCNaroWrappers::OCTopLoc_Location^ l)
{
  Handle(Poly_Triangulation) tmp = ((Prs3d_ShapeTool*)nativeHandle)->CurrentTriangulation(*((TopLoc_Location*)l->Handle));
  return gcnew OCPoly_Triangulation(&tmp);
}

 System::Boolean OCPrs3d_ShapeTool::HasCurve()
{
  return OCConverter::StandardBooleanToBoolean(((Prs3d_ShapeTool*)nativeHandle)->HasCurve());
}

 void OCPrs3d_ShapeTool::PolygonOnTriangulation(OCNaroWrappers::OCPoly_PolygonOnTriangulation^ Indices, OCNaroWrappers::OCPoly_Triangulation^ T, OCNaroWrappers::OCTopLoc_Location^ l)
{
  ((Prs3d_ShapeTool*)nativeHandle)->PolygonOnTriangulation(*((Handle_Poly_PolygonOnTriangulation*)Indices->Handle), *((Handle_Poly_Triangulation*)T->Handle), *((TopLoc_Location*)l->Handle));
}

OCPoly_Polygon3D^ OCPrs3d_ShapeTool::Polygon3D(OCNaroWrappers::OCTopLoc_Location^ l)
{
  Handle(Poly_Polygon3D) tmp = ((Prs3d_ShapeTool*)nativeHandle)->Polygon3D(*((TopLoc_Location*)l->Handle));
  return gcnew OCPoly_Polygon3D(&tmp);
}


