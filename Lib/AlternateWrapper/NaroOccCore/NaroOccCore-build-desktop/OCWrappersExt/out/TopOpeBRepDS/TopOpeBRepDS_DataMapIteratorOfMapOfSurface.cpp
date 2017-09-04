// File generated by CPPExt (CPP file)
//

#include "TopOpeBRepDS_DataMapIteratorOfMapOfSurface.h"
#include "../Converter.h"
#include "TopOpeBRepDS_SurfaceData.h"
#include "../TColStd/TColStd_MapIntegerHasher.h"
#include "TopOpeBRepDS_MapOfSurface.h"
#include "TopOpeBRepDS_DataMapNodeOfMapOfSurface.h"


using namespace OCNaroWrappers;

OCTopOpeBRepDS_DataMapIteratorOfMapOfSurface::OCTopOpeBRepDS_DataMapIteratorOfMapOfSurface(TopOpeBRepDS_DataMapIteratorOfMapOfSurface* nativeHandle) : OCTCollection_BasicMapIterator((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCTopOpeBRepDS_DataMapIteratorOfMapOfSurface::OCTopOpeBRepDS_DataMapIteratorOfMapOfSurface() : OCTCollection_BasicMapIterator((OCDummy^)nullptr)

{
  nativeHandle = new TopOpeBRepDS_DataMapIteratorOfMapOfSurface();
}

OCTopOpeBRepDS_DataMapIteratorOfMapOfSurface::OCTopOpeBRepDS_DataMapIteratorOfMapOfSurface(OCNaroWrappers::OCTopOpeBRepDS_MapOfSurface^ aMap) : OCTCollection_BasicMapIterator((OCDummy^)nullptr)

{
  nativeHandle = new TopOpeBRepDS_DataMapIteratorOfMapOfSurface(*((TopOpeBRepDS_MapOfSurface*)aMap->Handle));
}

 void OCTopOpeBRepDS_DataMapIteratorOfMapOfSurface::Initialize(OCNaroWrappers::OCTopOpeBRepDS_MapOfSurface^ aMap)
{
  ((TopOpeBRepDS_DataMapIteratorOfMapOfSurface*)nativeHandle)->Initialize(*((TopOpeBRepDS_MapOfSurface*)aMap->Handle));
}

 Standard_Integer OCTopOpeBRepDS_DataMapIteratorOfMapOfSurface::Key()
{
  return ((TopOpeBRepDS_DataMapIteratorOfMapOfSurface*)nativeHandle)->Key();
}

OCTopOpeBRepDS_SurfaceData^ OCTopOpeBRepDS_DataMapIteratorOfMapOfSurface::Value()
{
  TopOpeBRepDS_SurfaceData* tmp = new TopOpeBRepDS_SurfaceData();
  *tmp = ((TopOpeBRepDS_DataMapIteratorOfMapOfSurface*)nativeHandle)->Value();
  return gcnew OCTopOpeBRepDS_SurfaceData(tmp);
}

