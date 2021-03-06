// File generated by CPPExt (MPV)
//
#ifndef _SelectMgr_DataMapOfIntegerSensitive_OCWrappers_HeaderFile
#define _SelectMgr_DataMapOfIntegerSensitive_OCWrappers_HeaderFile

// include native header
#include <SelectMgr_DataMapOfIntegerSensitive.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_BasicMap.h"

#include "../TCollection/TCollection_BasicMap.h"


namespace OCNaroWrappers
{

ref class OCSelectBasics_SensitiveEntity;
ref class OCTColStd_MapIntegerHasher;
ref class OCSelectMgr_DataMapNodeOfDataMapOfIntegerSensitive;
ref class OCSelectMgr_DataMapIteratorOfDataMapOfIntegerSensitive;



public ref class OCSelectMgr_DataMapOfIntegerSensitive  : public OCTCollection_BasicMap {

protected:
  // dummy constructor;
  OCSelectMgr_DataMapOfIntegerSensitive(OCDummy^) : OCTCollection_BasicMap((OCDummy^)nullptr) {};

public:

// constructor from native
OCSelectMgr_DataMapOfIntegerSensitive(SelectMgr_DataMapOfIntegerSensitive* nativeHandle);

// Methods PUBLIC


OCSelectMgr_DataMapOfIntegerSensitive(Standard_Integer NbBuckets);


 /*instead*/  OCSelectMgr_DataMapOfIntegerSensitive^ Assign(OCNaroWrappers::OCSelectMgr_DataMapOfIntegerSensitive^ Other) ;


 /*instead*/  void ReSize(Standard_Integer NbBuckets) ;


 /*instead*/  System::Boolean Bind(Standard_Integer K, OCNaroWrappers::OCSelectBasics_SensitiveEntity^ I) ;


 /*instead*/  System::Boolean IsBound(Standard_Integer K) ;


 /*instead*/  System::Boolean UnBind(Standard_Integer K) ;


 /*instead*/  OCSelectBasics_SensitiveEntity^ Find(Standard_Integer K) ;


 /*instead*/  OCSelectBasics_SensitiveEntity^ ChangeFind(Standard_Integer K) ;


 /*instead*/  Standard_Address Find1(Standard_Integer K) ;


 /*instead*/  Standard_Address ChangeFind1(Standard_Integer K) ;

~OCSelectMgr_DataMapOfIntegerSensitive()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
