// File generated by CPPExt (CPP file)
//

#include "TColStd_IndexedMapOfReal.h"
#include "../Converter.h"
#include "TColStd_MapRealHasher.h"
#include "TColStd_IndexedMapNodeOfIndexedMapOfReal.h"


using namespace OCNaroWrappers;

OCTColStd_IndexedMapOfReal::OCTColStd_IndexedMapOfReal(TColStd_IndexedMapOfReal* nativeHandle) : OCTCollection_BasicMap((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCTColStd_IndexedMapOfReal::OCTColStd_IndexedMapOfReal(Standard_Integer NbBuckets) : OCTCollection_BasicMap((OCDummy^)nullptr)

{
  nativeHandle = new TColStd_IndexedMapOfReal(NbBuckets);
}

OCTColStd_IndexedMapOfReal^ OCTColStd_IndexedMapOfReal::Assign(OCNaroWrappers::OCTColStd_IndexedMapOfReal^ Other)
{
  TColStd_IndexedMapOfReal* tmp = new TColStd_IndexedMapOfReal(0);
  *tmp = ((TColStd_IndexedMapOfReal*)nativeHandle)->Assign(*((TColStd_IndexedMapOfReal*)Other->Handle));
  return gcnew OCTColStd_IndexedMapOfReal(tmp);
}

 void OCTColStd_IndexedMapOfReal::ReSize(Standard_Integer NbBuckets)
{
  ((TColStd_IndexedMapOfReal*)nativeHandle)->ReSize(NbBuckets);
}

 Standard_Integer OCTColStd_IndexedMapOfReal::Add(Standard_Real K)
{
  return ((TColStd_IndexedMapOfReal*)nativeHandle)->Add(K);
}

 void OCTColStd_IndexedMapOfReal::Substitute(Standard_Integer I, Standard_Real K)
{
  ((TColStd_IndexedMapOfReal*)nativeHandle)->Substitute(I, K);
}

 void OCTColStd_IndexedMapOfReal::RemoveLast()
{
  ((TColStd_IndexedMapOfReal*)nativeHandle)->RemoveLast();
}

 System::Boolean OCTColStd_IndexedMapOfReal::Contains(Standard_Real K)
{
  return OCConverter::StandardBooleanToBoolean(((TColStd_IndexedMapOfReal*)nativeHandle)->Contains(K));
}

 Standard_Real OCTColStd_IndexedMapOfReal::FindKey(Standard_Integer I)
{
  return ((TColStd_IndexedMapOfReal*)nativeHandle)->FindKey(I);
}

 Standard_Integer OCTColStd_IndexedMapOfReal::FindIndex(Standard_Real K)
{
  return ((TColStd_IndexedMapOfReal*)nativeHandle)->FindIndex(K);
}

