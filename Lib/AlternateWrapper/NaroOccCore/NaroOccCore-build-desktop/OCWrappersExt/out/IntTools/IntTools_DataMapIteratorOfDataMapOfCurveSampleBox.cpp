// File generated by CPPExt (CPP file)
//

#include "IntTools_DataMapIteratorOfDataMapOfCurveSampleBox.h"
#include "../Converter.h"
#include "IntTools_CurveRangeSample.h"
#include "../Bnd/Bnd_Box.h"
#include "IntTools_CurveRangeSampleMapHasher.h"
#include "IntTools_DataMapOfCurveSampleBox.h"
#include "IntTools_DataMapNodeOfDataMapOfCurveSampleBox.h"


using namespace OCNaroWrappers;

OCIntTools_DataMapIteratorOfDataMapOfCurveSampleBox::OCIntTools_DataMapIteratorOfDataMapOfCurveSampleBox(IntTools_DataMapIteratorOfDataMapOfCurveSampleBox* nativeHandle) : OCTCollection_BasicMapIterator((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCIntTools_DataMapIteratorOfDataMapOfCurveSampleBox::OCIntTools_DataMapIteratorOfDataMapOfCurveSampleBox() : OCTCollection_BasicMapIterator((OCDummy^)nullptr)

{
  nativeHandle = new IntTools_DataMapIteratorOfDataMapOfCurveSampleBox();
}

OCIntTools_DataMapIteratorOfDataMapOfCurveSampleBox::OCIntTools_DataMapIteratorOfDataMapOfCurveSampleBox(OCNaroWrappers::OCIntTools_DataMapOfCurveSampleBox^ aMap) : OCTCollection_BasicMapIterator((OCDummy^)nullptr)

{
  nativeHandle = new IntTools_DataMapIteratorOfDataMapOfCurveSampleBox(*((IntTools_DataMapOfCurveSampleBox*)aMap->Handle));
}

 void OCIntTools_DataMapIteratorOfDataMapOfCurveSampleBox::Initialize(OCNaroWrappers::OCIntTools_DataMapOfCurveSampleBox^ aMap)
{
  ((IntTools_DataMapIteratorOfDataMapOfCurveSampleBox*)nativeHandle)->Initialize(*((IntTools_DataMapOfCurveSampleBox*)aMap->Handle));
}

OCIntTools_CurveRangeSample^ OCIntTools_DataMapIteratorOfDataMapOfCurveSampleBox::Key()
{
  IntTools_CurveRangeSample* tmp = new IntTools_CurveRangeSample();
  *tmp = ((IntTools_DataMapIteratorOfDataMapOfCurveSampleBox*)nativeHandle)->Key();
  return gcnew OCIntTools_CurveRangeSample(tmp);
}

OCBnd_Box^ OCIntTools_DataMapIteratorOfDataMapOfCurveSampleBox::Value()
{
  Bnd_Box* tmp = new Bnd_Box();
  *tmp = ((IntTools_DataMapIteratorOfDataMapOfCurveSampleBox*)nativeHandle)->Value();
  return gcnew OCBnd_Box(tmp);
}


