// File generated by CPPExt (Transient)
//
#ifndef _AIS2D_DataMapNodeOfDataMapOfLocStat_OCWrappers_HeaderFile
#define _AIS2D_DataMapNodeOfDataMapOfLocStat_OCWrappers_HeaderFile

// include the wrapped class
#include <AIS2D_DataMapNodeOfDataMapOfLocStat.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_MapNode.h"



namespace OCNaroWrappers
{

ref class OCAIS2D_InteractiveObject;
ref class OCAIS2D_LocalStatus;
ref class OCTColStd_MapTransientHasher;
ref class OCAIS2D_DataMapOfLocStat;
ref class OCAIS2D_DataMapIteratorOfDataMapOfLocStat;



public ref class OCAIS2D_DataMapNodeOfDataMapOfLocStat : OCTCollection_MapNode {

protected:
  // dummy constructor;
  OCAIS2D_DataMapNodeOfDataMapOfLocStat(OCDummy^) : OCTCollection_MapNode((OCDummy^)nullptr) {};

public:

// constructor from native
OCAIS2D_DataMapNodeOfDataMapOfLocStat(Handle(AIS2D_DataMapNodeOfDataMapOfLocStat)* nativeHandle);

// Methods PUBLIC


OCAIS2D_DataMapNodeOfDataMapOfLocStat(OCNaroWrappers::OCAIS2D_InteractiveObject^ K, OCNaroWrappers::OCAIS2D_LocalStatus^ I, TCollection_MapNodePtr n);


 /*instead*/  OCAIS2D_InteractiveObject^ Key() ;


 /*instead*/  OCAIS2D_LocalStatus^ Value() ;

~OCAIS2D_DataMapNodeOfDataMapOfLocStat()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif