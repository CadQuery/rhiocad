// File generated by CPPExt (MPV)
//
#ifndef _STEPConstruct_DataMapIteratorOfDataMapOfAsciiStringTransient_OCWrappers_HeaderFile
#define _STEPConstruct_DataMapIteratorOfDataMapOfAsciiStringTransient_OCWrappers_HeaderFile

// include native header
#include <STEPConstruct_DataMapIteratorOfDataMapOfAsciiStringTransient.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_BasicMapIterator.h"

#include "../TCollection/TCollection_BasicMapIterator.h"


namespace OCNaroWrappers
{

ref class OCTCollection_AsciiString;
ref class OCStandard_Transient;
ref class OCSTEPConstruct_DataMapOfAsciiStringTransient;
ref class OCSTEPConstruct_DataMapNodeOfDataMapOfAsciiStringTransient;



public ref class OCSTEPConstruct_DataMapIteratorOfDataMapOfAsciiStringTransient  : public OCTCollection_BasicMapIterator {

protected:
  // dummy constructor;
  OCSTEPConstruct_DataMapIteratorOfDataMapOfAsciiStringTransient(OCDummy^) : OCTCollection_BasicMapIterator((OCDummy^)nullptr) {};

public:

// constructor from native
OCSTEPConstruct_DataMapIteratorOfDataMapOfAsciiStringTransient(STEPConstruct_DataMapIteratorOfDataMapOfAsciiStringTransient* nativeHandle);

// Methods PUBLIC


OCSTEPConstruct_DataMapIteratorOfDataMapOfAsciiStringTransient();


OCSTEPConstruct_DataMapIteratorOfDataMapOfAsciiStringTransient(OCNaroWrappers::OCSTEPConstruct_DataMapOfAsciiStringTransient^ aMap);


 /*instead*/  void Initialize(OCNaroWrappers::OCSTEPConstruct_DataMapOfAsciiStringTransient^ aMap) ;


 /*instead*/  OCTCollection_AsciiString^ Key() ;


 /*instead*/  OCStandard_Transient^ Value() ;

~OCSTEPConstruct_DataMapIteratorOfDataMapOfAsciiStringTransient()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
