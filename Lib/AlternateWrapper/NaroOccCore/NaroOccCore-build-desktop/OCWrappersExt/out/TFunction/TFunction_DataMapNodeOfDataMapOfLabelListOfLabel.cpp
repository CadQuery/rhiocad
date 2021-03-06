// File generated by CPPExt (CPP file)
//

#include "TFunction_DataMapNodeOfDataMapOfLabelListOfLabel.h"
#include "../Converter.h"
#include "../TDF/TDF_Label.h"
#include "../TDF/TDF_LabelList.h"
#include "../TDF/TDF_LabelMapHasher.h"
#include "TFunction_DataMapOfLabelListOfLabel.h"
#include "TFunction_DataMapIteratorOfDataMapOfLabelListOfLabel.h"


using namespace OCNaroWrappers;

OCTFunction_DataMapNodeOfDataMapOfLabelListOfLabel::OCTFunction_DataMapNodeOfDataMapOfLabelListOfLabel(Handle(TFunction_DataMapNodeOfDataMapOfLabelListOfLabel)* nativeHandle) : OCTCollection_MapNode((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_TFunction_DataMapNodeOfDataMapOfLabelListOfLabel(*nativeHandle);
}

OCTFunction_DataMapNodeOfDataMapOfLabelListOfLabel::OCTFunction_DataMapNodeOfDataMapOfLabelListOfLabel(OCNaroWrappers::OCTDF_Label^ K, OCNaroWrappers::OCTDF_LabelList^ I, TCollection_MapNodePtr n) : OCTCollection_MapNode((OCDummy^)nullptr)

{
  nativeHandle = new Handle_TFunction_DataMapNodeOfDataMapOfLabelListOfLabel(new TFunction_DataMapNodeOfDataMapOfLabelListOfLabel(*((TDF_Label*)K->Handle), *((TDF_LabelList*)I->Handle), n));
}

OCTDF_Label^ OCTFunction_DataMapNodeOfDataMapOfLabelListOfLabel::Key()
{
  TDF_Label* tmp = new TDF_Label();
  *tmp = (*((Handle_TFunction_DataMapNodeOfDataMapOfLabelListOfLabel*)nativeHandle))->Key();
  return gcnew OCTDF_Label(tmp);
}

OCTDF_LabelList^ OCTFunction_DataMapNodeOfDataMapOfLabelListOfLabel::Value()
{
  TDF_LabelList* tmp = new TDF_LabelList();
  *tmp = (*((Handle_TFunction_DataMapNodeOfDataMapOfLabelListOfLabel*)nativeHandle))->Value();
  return gcnew OCTDF_LabelList(tmp);
}


