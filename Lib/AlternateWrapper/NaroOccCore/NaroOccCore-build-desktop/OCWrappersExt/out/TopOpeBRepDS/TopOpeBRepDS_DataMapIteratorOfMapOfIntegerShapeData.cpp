// File generated by CPPExt (CPP file)
//

#include "TopOpeBRepDS_DataMapIteratorOfMapOfIntegerShapeData.h"
#include "../Converter.h"
#include "TopOpeBRepDS_ShapeData.h"
#include "../TColStd/TColStd_MapIntegerHasher.h"
#include "TopOpeBRepDS_MapOfIntegerShapeData.h"
#include "TopOpeBRepDS_DataMapNodeOfMapOfIntegerShapeData.h"


using namespace OCNaroWrappers;

OCTopOpeBRepDS_DataMapIteratorOfMapOfIntegerShapeData::OCTopOpeBRepDS_DataMapIteratorOfMapOfIntegerShapeData(TopOpeBRepDS_DataMapIteratorOfMapOfIntegerShapeData* nativeHandle) : OCTCollection_BasicMapIterator((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCTopOpeBRepDS_DataMapIteratorOfMapOfIntegerShapeData::OCTopOpeBRepDS_DataMapIteratorOfMapOfIntegerShapeData() : OCTCollection_BasicMapIterator((OCDummy^)nullptr)

{
  nativeHandle = new TopOpeBRepDS_DataMapIteratorOfMapOfIntegerShapeData();
}

OCTopOpeBRepDS_DataMapIteratorOfMapOfIntegerShapeData::OCTopOpeBRepDS_DataMapIteratorOfMapOfIntegerShapeData(OCNaroWrappers::OCTopOpeBRepDS_MapOfIntegerShapeData^ aMap) : OCTCollection_BasicMapIterator((OCDummy^)nullptr)

{
  nativeHandle = new TopOpeBRepDS_DataMapIteratorOfMapOfIntegerShapeData(*((TopOpeBRepDS_MapOfIntegerShapeData*)aMap->Handle));
}

 void OCTopOpeBRepDS_DataMapIteratorOfMapOfIntegerShapeData::Initialize(OCNaroWrappers::OCTopOpeBRepDS_MapOfIntegerShapeData^ aMap)
{
  ((TopOpeBRepDS_DataMapIteratorOfMapOfIntegerShapeData*)nativeHandle)->Initialize(*((TopOpeBRepDS_MapOfIntegerShapeData*)aMap->Handle));
}

 Standard_Integer OCTopOpeBRepDS_DataMapIteratorOfMapOfIntegerShapeData::Key()
{
  return ((TopOpeBRepDS_DataMapIteratorOfMapOfIntegerShapeData*)nativeHandle)->Key();
}

OCTopOpeBRepDS_ShapeData^ OCTopOpeBRepDS_DataMapIteratorOfMapOfIntegerShapeData::Value()
{
  TopOpeBRepDS_ShapeData* tmp = new TopOpeBRepDS_ShapeData();
  *tmp = ((TopOpeBRepDS_DataMapIteratorOfMapOfIntegerShapeData*)nativeHandle)->Value();
  return gcnew OCTopOpeBRepDS_ShapeData(tmp);
}


