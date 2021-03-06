// File generated by CPPExt (CPP file)
//

#include "AIS_DataMapOfSelStat.h"
#include "../Converter.h"
#include "../SelectMgr/SelectMgr_SelectableObject.h"
#include "AIS_LocalStatus.h"
#include "../TColStd/TColStd_MapTransientHasher.h"
#include "AIS_DataMapNodeOfDataMapOfSelStat.h"
#include "AIS_DataMapIteratorOfDataMapOfSelStat.h"


using namespace OCNaroWrappers;

OCAIS_DataMapOfSelStat::OCAIS_DataMapOfSelStat(AIS_DataMapOfSelStat* nativeHandle) : OCTCollection_BasicMap((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCAIS_DataMapOfSelStat::OCAIS_DataMapOfSelStat(Standard_Integer NbBuckets) : OCTCollection_BasicMap((OCDummy^)nullptr)

{
  nativeHandle = new AIS_DataMapOfSelStat(NbBuckets);
}

OCAIS_DataMapOfSelStat^ OCAIS_DataMapOfSelStat::Assign(OCNaroWrappers::OCAIS_DataMapOfSelStat^ Other)
{
  AIS_DataMapOfSelStat* tmp = new AIS_DataMapOfSelStat(0);
  *tmp = ((AIS_DataMapOfSelStat*)nativeHandle)->Assign(*((AIS_DataMapOfSelStat*)Other->Handle));
  return gcnew OCAIS_DataMapOfSelStat(tmp);
}

 void OCAIS_DataMapOfSelStat::ReSize(Standard_Integer NbBuckets)
{
  ((AIS_DataMapOfSelStat*)nativeHandle)->ReSize(NbBuckets);
}

 System::Boolean OCAIS_DataMapOfSelStat::Bind(OCNaroWrappers::OCSelectMgr_SelectableObject^ K, OCNaroWrappers::OCAIS_LocalStatus^ I)
{
  return OCConverter::StandardBooleanToBoolean(((AIS_DataMapOfSelStat*)nativeHandle)->Bind(*((Handle_SelectMgr_SelectableObject*)K->Handle), *((Handle_AIS_LocalStatus*)I->Handle)));
}

 System::Boolean OCAIS_DataMapOfSelStat::IsBound(OCNaroWrappers::OCSelectMgr_SelectableObject^ K)
{
  return OCConverter::StandardBooleanToBoolean(((AIS_DataMapOfSelStat*)nativeHandle)->IsBound(*((Handle_SelectMgr_SelectableObject*)K->Handle)));
}

 System::Boolean OCAIS_DataMapOfSelStat::UnBind(OCNaroWrappers::OCSelectMgr_SelectableObject^ K)
{
  return OCConverter::StandardBooleanToBoolean(((AIS_DataMapOfSelStat*)nativeHandle)->UnBind(*((Handle_SelectMgr_SelectableObject*)K->Handle)));
}

OCAIS_LocalStatus^ OCAIS_DataMapOfSelStat::Find(OCNaroWrappers::OCSelectMgr_SelectableObject^ K)
{
  Handle(AIS_LocalStatus) tmp = ((AIS_DataMapOfSelStat*)nativeHandle)->Find(*((Handle_SelectMgr_SelectableObject*)K->Handle));
  return gcnew OCAIS_LocalStatus(&tmp);
}

OCAIS_LocalStatus^ OCAIS_DataMapOfSelStat::ChangeFind(OCNaroWrappers::OCSelectMgr_SelectableObject^ K)
{
  Handle(AIS_LocalStatus) tmp = ((AIS_DataMapOfSelStat*)nativeHandle)->ChangeFind(*((Handle_SelectMgr_SelectableObject*)K->Handle));
  return gcnew OCAIS_LocalStatus(&tmp);
}

 Standard_Address OCAIS_DataMapOfSelStat::Find1(OCNaroWrappers::OCSelectMgr_SelectableObject^ K)
{
  return ((AIS_DataMapOfSelStat*)nativeHandle)->Find1(*((Handle_SelectMgr_SelectableObject*)K->Handle));
}

 Standard_Address OCAIS_DataMapOfSelStat::ChangeFind1(OCNaroWrappers::OCSelectMgr_SelectableObject^ K)
{
  return ((AIS_DataMapOfSelStat*)nativeHandle)->ChangeFind1(*((Handle_SelectMgr_SelectableObject*)K->Handle));
}


