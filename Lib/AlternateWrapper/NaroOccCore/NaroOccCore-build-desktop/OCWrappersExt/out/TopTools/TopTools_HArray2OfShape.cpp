// File generated by CPPExt (CPP file)
//

#include "TopTools_HArray2OfShape.h"
#include "../Converter.h"
#include "../TopoDS/TopoDS_Shape.h"
#include "TopTools_Array2OfShape.h"


using namespace OCNaroWrappers;

OCTopTools_HArray2OfShape::OCTopTools_HArray2OfShape(Handle(TopTools_HArray2OfShape)* nativeHandle) : OCMMgt_TShared((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_TopTools_HArray2OfShape(*nativeHandle);
}

OCTopTools_HArray2OfShape::OCTopTools_HArray2OfShape(Standard_Integer R1, Standard_Integer R2, Standard_Integer C1, Standard_Integer C2) : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_TopTools_HArray2OfShape(new TopTools_HArray2OfShape(R1, R2, C1, C2));
}

OCTopTools_HArray2OfShape::OCTopTools_HArray2OfShape(Standard_Integer R1, Standard_Integer R2, Standard_Integer C1, Standard_Integer C2, OCNaroWrappers::OCTopoDS_Shape^ V) : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_TopTools_HArray2OfShape(new TopTools_HArray2OfShape(R1, R2, C1, C2, *((TopoDS_Shape*)V->Handle)));
}

 void OCTopTools_HArray2OfShape::Init(OCNaroWrappers::OCTopoDS_Shape^ V)
{
  (*((Handle_TopTools_HArray2OfShape*)nativeHandle))->Init(*((TopoDS_Shape*)V->Handle));
}

 Standard_Integer OCTopTools_HArray2OfShape::ColLength()
{
  return (*((Handle_TopTools_HArray2OfShape*)nativeHandle))->ColLength();
}

 Standard_Integer OCTopTools_HArray2OfShape::RowLength()
{
  return (*((Handle_TopTools_HArray2OfShape*)nativeHandle))->RowLength();
}

 Standard_Integer OCTopTools_HArray2OfShape::LowerCol()
{
  return (*((Handle_TopTools_HArray2OfShape*)nativeHandle))->LowerCol();
}

 Standard_Integer OCTopTools_HArray2OfShape::LowerRow()
{
  return (*((Handle_TopTools_HArray2OfShape*)nativeHandle))->LowerRow();
}

 Standard_Integer OCTopTools_HArray2OfShape::UpperCol()
{
  return (*((Handle_TopTools_HArray2OfShape*)nativeHandle))->UpperCol();
}

 Standard_Integer OCTopTools_HArray2OfShape::UpperRow()
{
  return (*((Handle_TopTools_HArray2OfShape*)nativeHandle))->UpperRow();
}

 void OCTopTools_HArray2OfShape::SetValue(Standard_Integer Row, Standard_Integer Col, OCNaroWrappers::OCTopoDS_Shape^ Value)
{
  (*((Handle_TopTools_HArray2OfShape*)nativeHandle))->SetValue(Row, Col, *((TopoDS_Shape*)Value->Handle));
}

OCTopoDS_Shape^ OCTopTools_HArray2OfShape::Value(Standard_Integer Row, Standard_Integer Col)
{
  TopoDS_Shape* tmp = new TopoDS_Shape();
  *tmp = (*((Handle_TopTools_HArray2OfShape*)nativeHandle))->Value(Row, Col);
  return gcnew OCTopoDS_Shape(tmp);
}

OCTopoDS_Shape^ OCTopTools_HArray2OfShape::ChangeValue(Standard_Integer Row, Standard_Integer Col)
{
  TopoDS_Shape* tmp = new TopoDS_Shape();
  *tmp = (*((Handle_TopTools_HArray2OfShape*)nativeHandle))->ChangeValue(Row, Col);
  return gcnew OCTopoDS_Shape(tmp);
}

OCTopTools_Array2OfShape^ OCTopTools_HArray2OfShape::Array2()
{
  TopTools_Array2OfShape* tmp = new TopTools_Array2OfShape(0, 0, 0, 0);
  *tmp = (*((Handle_TopTools_HArray2OfShape*)nativeHandle))->Array2();
  return gcnew OCTopTools_Array2OfShape(tmp);
}

OCTopTools_Array2OfShape^ OCTopTools_HArray2OfShape::ChangeArray2()
{
  TopTools_Array2OfShape* tmp = new TopTools_Array2OfShape(0, 0, 0, 0);
  *tmp = (*((Handle_TopTools_HArray2OfShape*)nativeHandle))->ChangeArray2();
  return gcnew OCTopTools_Array2OfShape(tmp);
}


