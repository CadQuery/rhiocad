// File generated by CPPExt (CPP file)
//

#include "PTColStd_DoubleMapOfTransientPersistent.h"
#include "../Converter.h"
#include "../Standard/Standard_Transient.h"
#include "../Standard/Standard_Persistent.h"
#include "../TColStd/TColStd_MapTransientHasher.h"
#include "PTColStd_MapPersistentHasher.h"
#include "PTColStd_DoubleMapNodeOfDoubleMapOfTransientPersistent.h"
#include "PTColStd_DoubleMapIteratorOfDoubleMapOfTransientPersistent.h"


using namespace OCNaroWrappers;

OCPTColStd_DoubleMapOfTransientPersistent::OCPTColStd_DoubleMapOfTransientPersistent(PTColStd_DoubleMapOfTransientPersistent* nativeHandle) : OCTCollection_BasicMap((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCPTColStd_DoubleMapOfTransientPersistent::OCPTColStd_DoubleMapOfTransientPersistent(Standard_Integer NbBuckets) : OCTCollection_BasicMap((OCDummy^)nullptr)

{
  nativeHandle = new PTColStd_DoubleMapOfTransientPersistent(NbBuckets);
}

OCPTColStd_DoubleMapOfTransientPersistent^ OCPTColStd_DoubleMapOfTransientPersistent::Assign(OCNaroWrappers::OCPTColStd_DoubleMapOfTransientPersistent^ Other)
{
  PTColStd_DoubleMapOfTransientPersistent* tmp = new PTColStd_DoubleMapOfTransientPersistent(0);
  *tmp = ((PTColStd_DoubleMapOfTransientPersistent*)nativeHandle)->Assign(*((PTColStd_DoubleMapOfTransientPersistent*)Other->Handle));
  return gcnew OCPTColStd_DoubleMapOfTransientPersistent(tmp);
}

 void OCPTColStd_DoubleMapOfTransientPersistent::ReSize(Standard_Integer NbBuckets)
{
  ((PTColStd_DoubleMapOfTransientPersistent*)nativeHandle)->ReSize(NbBuckets);
}

 void OCPTColStd_DoubleMapOfTransientPersistent::Bind(OCNaroWrappers::OCStandard_Transient^ K1, OCNaroWrappers::OCStandard_Persistent^ K2)
{
  ((PTColStd_DoubleMapOfTransientPersistent*)nativeHandle)->Bind(*((Handle_Standard_Transient*)K1->Handle), *((Handle_Standard_Persistent*)K2->Handle));
}

 System::Boolean OCPTColStd_DoubleMapOfTransientPersistent::AreBound(OCNaroWrappers::OCStandard_Transient^ K1, OCNaroWrappers::OCStandard_Persistent^ K2)
{
  return OCConverter::StandardBooleanToBoolean(((PTColStd_DoubleMapOfTransientPersistent*)nativeHandle)->AreBound(*((Handle_Standard_Transient*)K1->Handle), *((Handle_Standard_Persistent*)K2->Handle)));
}

 System::Boolean OCPTColStd_DoubleMapOfTransientPersistent::IsBound1(OCNaroWrappers::OCStandard_Transient^ K)
{
  return OCConverter::StandardBooleanToBoolean(((PTColStd_DoubleMapOfTransientPersistent*)nativeHandle)->IsBound1(*((Handle_Standard_Transient*)K->Handle)));
}

 System::Boolean OCPTColStd_DoubleMapOfTransientPersistent::IsBound2(OCNaroWrappers::OCStandard_Persistent^ K)
{
  return OCConverter::StandardBooleanToBoolean(((PTColStd_DoubleMapOfTransientPersistent*)nativeHandle)->IsBound2(*((Handle_Standard_Persistent*)K->Handle)));
}

OCStandard_Persistent^ OCPTColStd_DoubleMapOfTransientPersistent::Find1(OCNaroWrappers::OCStandard_Transient^ K)
{
  Handle(Standard_Persistent) tmp = ((PTColStd_DoubleMapOfTransientPersistent*)nativeHandle)->Find1(*((Handle_Standard_Transient*)K->Handle));
  return gcnew OCStandard_Persistent(&tmp);
}

OCStandard_Transient^ OCPTColStd_DoubleMapOfTransientPersistent::Find2(OCNaroWrappers::OCStandard_Persistent^ K)
{
  Handle(Standard_Transient) tmp = ((PTColStd_DoubleMapOfTransientPersistent*)nativeHandle)->Find2(*((Handle_Standard_Persistent*)K->Handle));
  return gcnew OCStandard_Transient(&tmp);
}

 System::Boolean OCPTColStd_DoubleMapOfTransientPersistent::UnBind1(OCNaroWrappers::OCStandard_Transient^ K)
{
  return OCConverter::StandardBooleanToBoolean(((PTColStd_DoubleMapOfTransientPersistent*)nativeHandle)->UnBind1(*((Handle_Standard_Transient*)K->Handle)));
}

 System::Boolean OCPTColStd_DoubleMapOfTransientPersistent::UnBind2(OCNaroWrappers::OCStandard_Persistent^ K)
{
  return OCConverter::StandardBooleanToBoolean(((PTColStd_DoubleMapOfTransientPersistent*)nativeHandle)->UnBind2(*((Handle_Standard_Persistent*)K->Handle)));
}


