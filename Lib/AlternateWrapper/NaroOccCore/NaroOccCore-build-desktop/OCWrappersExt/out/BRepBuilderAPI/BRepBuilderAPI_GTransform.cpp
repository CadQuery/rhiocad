// File generated by CPPExt (CPP file)
//

#include "BRepBuilderAPI_GTransform.h"
#include "../Converter.h"
#include "../gp/gp_GTrsf.h"
#include "../TopoDS/TopoDS_Shape.h"
#include "../TopTools/TopTools_ListOfShape.h"


using namespace OCNaroWrappers;

OCBRepBuilderAPI_GTransform::OCBRepBuilderAPI_GTransform(BRepBuilderAPI_GTransform* nativeHandle) : OCBRepBuilderAPI_ModifyShape((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCBRepBuilderAPI_GTransform::OCBRepBuilderAPI_GTransform(OCNaroWrappers::OCgp_GTrsf^ T) : OCBRepBuilderAPI_ModifyShape((OCDummy^)nullptr)

{
  nativeHandle = new BRepBuilderAPI_GTransform(*((gp_GTrsf*)T->Handle));
}

OCBRepBuilderAPI_GTransform::OCBRepBuilderAPI_GTransform(OCNaroWrappers::OCTopoDS_Shape^ S, OCNaroWrappers::OCgp_GTrsf^ T, System::Boolean Copy) : OCBRepBuilderAPI_ModifyShape((OCDummy^)nullptr)

{
  nativeHandle = new BRepBuilderAPI_GTransform(*((TopoDS_Shape*)S->Handle), *((gp_GTrsf*)T->Handle), OCConverter::BooleanToStandardBoolean(Copy));
}

 void OCBRepBuilderAPI_GTransform::Perform(OCNaroWrappers::OCTopoDS_Shape^ S, System::Boolean Copy)
{
  ((BRepBuilderAPI_GTransform*)nativeHandle)->Perform(*((TopoDS_Shape*)S->Handle), OCConverter::BooleanToStandardBoolean(Copy));
}

OCTopTools_ListOfShape^ OCBRepBuilderAPI_GTransform::Modified(OCNaroWrappers::OCTopoDS_Shape^ S)
{
  TopTools_ListOfShape* tmp = new TopTools_ListOfShape();
  *tmp = ((BRepBuilderAPI_GTransform*)nativeHandle)->Modified(*((TopoDS_Shape*)S->Handle));
  return gcnew OCTopTools_ListOfShape(tmp);
}

OCTopoDS_Shape^ OCBRepBuilderAPI_GTransform::ModifiedShape(OCNaroWrappers::OCTopoDS_Shape^ S)
{
  TopoDS_Shape* tmp = new TopoDS_Shape();
  *tmp = ((BRepBuilderAPI_GTransform*)nativeHandle)->ModifiedShape(*((TopoDS_Shape*)S->Handle));
  return gcnew OCTopoDS_Shape(tmp);
}


