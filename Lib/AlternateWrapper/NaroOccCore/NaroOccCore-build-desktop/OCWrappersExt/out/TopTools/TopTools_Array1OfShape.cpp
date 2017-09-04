// File generated by CPPExt (CPP file)
//

#include "TopTools_Array1OfShape.h"
#include "../Converter.h"
#include "../TopoDS/TopoDS_Shape.h"


using namespace OCNaroWrappers;

OCTopTools_Array1OfShape::OCTopTools_Array1OfShape(TopTools_Array1OfShape* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCTopTools_Array1OfShape::OCTopTools_Array1OfShape(Standard_Integer Low, Standard_Integer Up) 
{
  nativeHandle = new TopTools_Array1OfShape(Low, Up);
}

OCTopTools_Array1OfShape::OCTopTools_Array1OfShape(OCNaroWrappers::OCTopoDS_Shape^ Item, Standard_Integer Low, Standard_Integer Up) 
{
  nativeHandle = new TopTools_Array1OfShape(*((TopoDS_Shape*)Item->Handle), Low, Up);
}

 void OCTopTools_Array1OfShape::Init(OCNaroWrappers::OCTopoDS_Shape^ V)
{
  ((TopTools_Array1OfShape*)nativeHandle)->Init(*((TopoDS_Shape*)V->Handle));
}

 System::Boolean OCTopTools_Array1OfShape::IsAllocated()
{
  return OCConverter::StandardBooleanToBoolean(((TopTools_Array1OfShape*)nativeHandle)->IsAllocated());
}

OCTopTools_Array1OfShape^ OCTopTools_Array1OfShape::Assign(OCNaroWrappers::OCTopTools_Array1OfShape^ Other)
{
  TopTools_Array1OfShape* tmp = new TopTools_Array1OfShape(0, 0);
  *tmp = ((TopTools_Array1OfShape*)nativeHandle)->Assign(*((TopTools_Array1OfShape*)Other->Handle));
  return gcnew OCTopTools_Array1OfShape(tmp);
}

 Standard_Integer OCTopTools_Array1OfShape::Length()
{
  return ((TopTools_Array1OfShape*)nativeHandle)->Length();
}

 Standard_Integer OCTopTools_Array1OfShape::Lower()
{
  return ((TopTools_Array1OfShape*)nativeHandle)->Lower();
}

 Standard_Integer OCTopTools_Array1OfShape::Upper()
{
  return ((TopTools_Array1OfShape*)nativeHandle)->Upper();
}

 void OCTopTools_Array1OfShape::SetValue(Standard_Integer Index, OCNaroWrappers::OCTopoDS_Shape^ Value)
{
  ((TopTools_Array1OfShape*)nativeHandle)->SetValue(Index, *((TopoDS_Shape*)Value->Handle));
}

OCTopoDS_Shape^ OCTopTools_Array1OfShape::Value(Standard_Integer Index)
{
  TopoDS_Shape* tmp = new TopoDS_Shape();
  *tmp = ((TopTools_Array1OfShape*)nativeHandle)->Value(Index);
  return gcnew OCTopoDS_Shape(tmp);
}

OCTopoDS_Shape^ OCTopTools_Array1OfShape::ChangeValue(Standard_Integer Index)
{
  TopoDS_Shape* tmp = new TopoDS_Shape();
  *tmp = ((TopTools_Array1OfShape*)nativeHandle)->ChangeValue(Index);
  return gcnew OCTopoDS_Shape(tmp);
}

