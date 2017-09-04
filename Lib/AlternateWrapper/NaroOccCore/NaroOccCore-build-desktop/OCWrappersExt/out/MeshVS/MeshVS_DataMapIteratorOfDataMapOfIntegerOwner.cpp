// File generated by CPPExt (CPP file)
//

#include "MeshVS_DataMapIteratorOfDataMapOfIntegerOwner.h"
#include "../Converter.h"
#include "../SelectMgr/SelectMgr_EntityOwner.h"
#include "../TColStd/TColStd_MapIntegerHasher.h"
#include "MeshVS_DataMapOfIntegerOwner.h"
#include "MeshVS_DataMapNodeOfDataMapOfIntegerOwner.h"


using namespace OCNaroWrappers;

OCMeshVS_DataMapIteratorOfDataMapOfIntegerOwner::OCMeshVS_DataMapIteratorOfDataMapOfIntegerOwner(MeshVS_DataMapIteratorOfDataMapOfIntegerOwner* nativeHandle) : OCTCollection_BasicMapIterator((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCMeshVS_DataMapIteratorOfDataMapOfIntegerOwner::OCMeshVS_DataMapIteratorOfDataMapOfIntegerOwner() : OCTCollection_BasicMapIterator((OCDummy^)nullptr)

{
  nativeHandle = new MeshVS_DataMapIteratorOfDataMapOfIntegerOwner();
}

OCMeshVS_DataMapIteratorOfDataMapOfIntegerOwner::OCMeshVS_DataMapIteratorOfDataMapOfIntegerOwner(OCNaroWrappers::OCMeshVS_DataMapOfIntegerOwner^ aMap) : OCTCollection_BasicMapIterator((OCDummy^)nullptr)

{
  nativeHandle = new MeshVS_DataMapIteratorOfDataMapOfIntegerOwner(*((MeshVS_DataMapOfIntegerOwner*)aMap->Handle));
}

 void OCMeshVS_DataMapIteratorOfDataMapOfIntegerOwner::Initialize(OCNaroWrappers::OCMeshVS_DataMapOfIntegerOwner^ aMap)
{
  ((MeshVS_DataMapIteratorOfDataMapOfIntegerOwner*)nativeHandle)->Initialize(*((MeshVS_DataMapOfIntegerOwner*)aMap->Handle));
}

 Standard_Integer OCMeshVS_DataMapIteratorOfDataMapOfIntegerOwner::Key()
{
  return ((MeshVS_DataMapIteratorOfDataMapOfIntegerOwner*)nativeHandle)->Key();
}

OCSelectMgr_EntityOwner^ OCMeshVS_DataMapIteratorOfDataMapOfIntegerOwner::Value()
{
  Handle(SelectMgr_EntityOwner) tmp = ((MeshVS_DataMapIteratorOfDataMapOfIntegerOwner*)nativeHandle)->Value();
  return gcnew OCSelectMgr_EntityOwner(&tmp);
}

