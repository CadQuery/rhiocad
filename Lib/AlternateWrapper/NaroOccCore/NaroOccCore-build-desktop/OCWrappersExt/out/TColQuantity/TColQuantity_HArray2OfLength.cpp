// File generated by CPPExt (CPP file)
//

#include "TColQuantity_HArray2OfLength.h"
#include "../Converter.h"
#include "TColQuantity_Array2OfLength.h"


using namespace OCNaroWrappers;

OCTColQuantity_HArray2OfLength::OCTColQuantity_HArray2OfLength(Handle(TColQuantity_HArray2OfLength)* nativeHandle) : OCMMgt_TShared((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_TColQuantity_HArray2OfLength(*nativeHandle);
}

OCTColQuantity_HArray2OfLength::OCTColQuantity_HArray2OfLength(Standard_Integer R1, Standard_Integer R2, Standard_Integer C1, Standard_Integer C2) : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_TColQuantity_HArray2OfLength(new TColQuantity_HArray2OfLength(R1, R2, C1, C2));
}

OCTColQuantity_HArray2OfLength::OCTColQuantity_HArray2OfLength(Standard_Integer R1, Standard_Integer R2, Standard_Integer C1, Standard_Integer C2, Quantity_Length V) : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_TColQuantity_HArray2OfLength(new TColQuantity_HArray2OfLength(R1, R2, C1, C2, V));
}

 void OCTColQuantity_HArray2OfLength::Init(Quantity_Length V)
{
  (*((Handle_TColQuantity_HArray2OfLength*)nativeHandle))->Init(V);
}

 Standard_Integer OCTColQuantity_HArray2OfLength::ColLength()
{
  return (*((Handle_TColQuantity_HArray2OfLength*)nativeHandle))->ColLength();
}

 Standard_Integer OCTColQuantity_HArray2OfLength::RowLength()
{
  return (*((Handle_TColQuantity_HArray2OfLength*)nativeHandle))->RowLength();
}

 Standard_Integer OCTColQuantity_HArray2OfLength::LowerCol()
{
  return (*((Handle_TColQuantity_HArray2OfLength*)nativeHandle))->LowerCol();
}

 Standard_Integer OCTColQuantity_HArray2OfLength::LowerRow()
{
  return (*((Handle_TColQuantity_HArray2OfLength*)nativeHandle))->LowerRow();
}

 Standard_Integer OCTColQuantity_HArray2OfLength::UpperCol()
{
  return (*((Handle_TColQuantity_HArray2OfLength*)nativeHandle))->UpperCol();
}

 Standard_Integer OCTColQuantity_HArray2OfLength::UpperRow()
{
  return (*((Handle_TColQuantity_HArray2OfLength*)nativeHandle))->UpperRow();
}

 void OCTColQuantity_HArray2OfLength::SetValue(Standard_Integer Row, Standard_Integer Col, Quantity_Length Value)
{
  (*((Handle_TColQuantity_HArray2OfLength*)nativeHandle))->SetValue(Row, Col, Value);
}

 Quantity_Length OCTColQuantity_HArray2OfLength::Value(Standard_Integer Row, Standard_Integer Col)
{
  return (*((Handle_TColQuantity_HArray2OfLength*)nativeHandle))->Value(Row, Col);
}

 Quantity_Length OCTColQuantity_HArray2OfLength::ChangeValue(Standard_Integer Row, Standard_Integer Col)
{
  return (*((Handle_TColQuantity_HArray2OfLength*)nativeHandle))->ChangeValue(Row, Col);
}

OCTColQuantity_Array2OfLength^ OCTColQuantity_HArray2OfLength::Array2()
{
  TColQuantity_Array2OfLength* tmp = new TColQuantity_Array2OfLength(0, 0, 0, 0);
  *tmp = (*((Handle_TColQuantity_HArray2OfLength*)nativeHandle))->Array2();
  return gcnew OCTColQuantity_Array2OfLength(tmp);
}

OCTColQuantity_Array2OfLength^ OCTColQuantity_HArray2OfLength::ChangeArray2()
{
  TColQuantity_Array2OfLength* tmp = new TColQuantity_Array2OfLength(0, 0, 0, 0);
  *tmp = (*((Handle_TColQuantity_HArray2OfLength*)nativeHandle))->ChangeArray2();
  return gcnew OCTColQuantity_Array2OfLength(tmp);
}


