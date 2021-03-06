// File generated by CPPExt (CPP file)
//

#include "TColStd_Array1OfInteger.h"
#include "../Converter.h"


using namespace OCNaroWrappers;

OCTColStd_Array1OfInteger::OCTColStd_Array1OfInteger(TColStd_Array1OfInteger* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCTColStd_Array1OfInteger::OCTColStd_Array1OfInteger(Standard_Integer Low, Standard_Integer Up) 
{
  nativeHandle = new TColStd_Array1OfInteger(Low, Up);
}

OCTColStd_Array1OfInteger::OCTColStd_Array1OfInteger(Standard_Integer Item, Standard_Integer Low, Standard_Integer Up) 
{
  nativeHandle = new TColStd_Array1OfInteger(Item, Low, Up);
}

 void OCTColStd_Array1OfInteger::Init(Standard_Integer V)
{
  ((TColStd_Array1OfInteger*)nativeHandle)->Init(V);
}

 System::Boolean OCTColStd_Array1OfInteger::IsAllocated()
{
  return OCConverter::StandardBooleanToBoolean(((TColStd_Array1OfInteger*)nativeHandle)->IsAllocated());
}

OCTColStd_Array1OfInteger^ OCTColStd_Array1OfInteger::Assign(OCNaroWrappers::OCTColStd_Array1OfInteger^ Other)
{
  TColStd_Array1OfInteger* tmp = new TColStd_Array1OfInteger(0, 0);
  *tmp = ((TColStd_Array1OfInteger*)nativeHandle)->Assign(*((TColStd_Array1OfInteger*)Other->Handle));
  return gcnew OCTColStd_Array1OfInteger(tmp);
}

 Standard_Integer OCTColStd_Array1OfInteger::Length()
{
  return ((TColStd_Array1OfInteger*)nativeHandle)->Length();
}

 Standard_Integer OCTColStd_Array1OfInteger::Lower()
{
  return ((TColStd_Array1OfInteger*)nativeHandle)->Lower();
}

 Standard_Integer OCTColStd_Array1OfInteger::Upper()
{
  return ((TColStd_Array1OfInteger*)nativeHandle)->Upper();
}

 void OCTColStd_Array1OfInteger::SetValue(Standard_Integer Index, Standard_Integer Value)
{
  ((TColStd_Array1OfInteger*)nativeHandle)->SetValue(Index, Value);
}

 Standard_Integer OCTColStd_Array1OfInteger::Value(Standard_Integer Index)
{
  return ((TColStd_Array1OfInteger*)nativeHandle)->Value(Index);
}

 Standard_Integer OCTColStd_Array1OfInteger::ChangeValue(Standard_Integer Index)
{
  return ((TColStd_Array1OfInteger*)nativeHandle)->ChangeValue(Index);
}


