// File generated by CPPExt (CPP file)
//

#include "Storage_DataMapIteratorOfMapOfCallBack.h"
#include "../Converter.h"
#include "../TCollection/TCollection_AsciiString.h"
#include "Storage_TypedCallBack.h"
#include "Storage_MapOfCallBack.h"
#include "Storage_DataMapNodeOfMapOfCallBack.h"


using namespace OCNaroWrappers;

OCStorage_DataMapIteratorOfMapOfCallBack::OCStorage_DataMapIteratorOfMapOfCallBack(Storage_DataMapIteratorOfMapOfCallBack* nativeHandle) : OCTCollection_BasicMapIterator((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCStorage_DataMapIteratorOfMapOfCallBack::OCStorage_DataMapIteratorOfMapOfCallBack() : OCTCollection_BasicMapIterator((OCDummy^)nullptr)

{
  nativeHandle = new Storage_DataMapIteratorOfMapOfCallBack();
}

OCStorage_DataMapIteratorOfMapOfCallBack::OCStorage_DataMapIteratorOfMapOfCallBack(OCNaroWrappers::OCStorage_MapOfCallBack^ aMap) : OCTCollection_BasicMapIterator((OCDummy^)nullptr)

{
  nativeHandle = new Storage_DataMapIteratorOfMapOfCallBack(*((Storage_MapOfCallBack*)aMap->Handle));
}

 void OCStorage_DataMapIteratorOfMapOfCallBack::Initialize(OCNaroWrappers::OCStorage_MapOfCallBack^ aMap)
{
  ((Storage_DataMapIteratorOfMapOfCallBack*)nativeHandle)->Initialize(*((Storage_MapOfCallBack*)aMap->Handle));
}

OCTCollection_AsciiString^ OCStorage_DataMapIteratorOfMapOfCallBack::Key()
{
  TCollection_AsciiString* tmp = new TCollection_AsciiString();
  *tmp = ((Storage_DataMapIteratorOfMapOfCallBack*)nativeHandle)->Key();
  return gcnew OCTCollection_AsciiString(tmp);
}

OCStorage_TypedCallBack^ OCStorage_DataMapIteratorOfMapOfCallBack::Value()
{
  Handle(Storage_TypedCallBack) tmp = ((Storage_DataMapIteratorOfMapOfCallBack*)nativeHandle)->Value();
  return gcnew OCStorage_TypedCallBack(&tmp);
}

