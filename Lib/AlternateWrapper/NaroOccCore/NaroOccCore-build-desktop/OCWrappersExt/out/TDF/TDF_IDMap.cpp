// File generated by CPPExt (CPP file)
//

#include "TDF_IDMap.h"
#include "../Converter.h"
#include "../Standard/Standard_GUID.h"
#include "TDF_StdMapNodeOfIDMap.h"
#include "TDF_MapIteratorOfIDMap.h"


using namespace OCNaroWrappers;

OCTDF_IDMap::OCTDF_IDMap(TDF_IDMap* nativeHandle) : OCTCollection_BasicMap((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCTDF_IDMap::OCTDF_IDMap(Standard_Integer NbBuckets) : OCTCollection_BasicMap((OCDummy^)nullptr)

{
  nativeHandle = new TDF_IDMap(NbBuckets);
}

OCTDF_IDMap^ OCTDF_IDMap::Assign(OCNaroWrappers::OCTDF_IDMap^ Other)
{
  TDF_IDMap* tmp = new TDF_IDMap(0);
  *tmp = ((TDF_IDMap*)nativeHandle)->Assign(*((TDF_IDMap*)Other->Handle));
  return gcnew OCTDF_IDMap(tmp);
}

 void OCTDF_IDMap::ReSize(Standard_Integer NbBuckets)
{
  ((TDF_IDMap*)nativeHandle)->ReSize(NbBuckets);
}

 System::Boolean OCTDF_IDMap::Add(OCNaroWrappers::OCStandard_GUID^ aKey)
{
  return OCConverter::StandardBooleanToBoolean(((TDF_IDMap*)nativeHandle)->Add(*((Standard_GUID*)aKey->Handle)));
}

 System::Boolean OCTDF_IDMap::Contains(OCNaroWrappers::OCStandard_GUID^ aKey)
{
  return OCConverter::StandardBooleanToBoolean(((TDF_IDMap*)nativeHandle)->Contains(*((Standard_GUID*)aKey->Handle)));
}

 System::Boolean OCTDF_IDMap::Remove(OCNaroWrappers::OCStandard_GUID^ aKey)
{
  return OCConverter::StandardBooleanToBoolean(((TDF_IDMap*)nativeHandle)->Remove(*((Standard_GUID*)aKey->Handle)));
}


