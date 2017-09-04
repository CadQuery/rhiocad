// File generated by CPPExt (MPV)
//
#ifndef _TColStd_MapOfAsciiString_OCWrappers_HeaderFile
#define _TColStd_MapOfAsciiString_OCWrappers_HeaderFile

// include native header
#include <TColStd_MapOfAsciiString.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_BasicMap.h"

#include "../TCollection/TCollection_BasicMap.h"


namespace OCNaroWrappers
{

ref class OCTCollection_AsciiString;
ref class OCTColStd_StdMapNodeOfMapOfAsciiString;
ref class OCTColStd_MapIteratorOfMapOfAsciiString;



public ref class OCTColStd_MapOfAsciiString  : public OCTCollection_BasicMap {

protected:
  // dummy constructor;
  OCTColStd_MapOfAsciiString(OCDummy^) : OCTCollection_BasicMap((OCDummy^)nullptr) {};

public:

// constructor from native
OCTColStd_MapOfAsciiString(TColStd_MapOfAsciiString* nativeHandle);

// Methods PUBLIC


OCTColStd_MapOfAsciiString(Standard_Integer NbBuckets);


 /*instead*/  OCTColStd_MapOfAsciiString^ Assign(OCNaroWrappers::OCTColStd_MapOfAsciiString^ Other) ;


 /*instead*/  void ReSize(Standard_Integer NbBuckets) ;


 /*instead*/  System::Boolean Add(OCNaroWrappers::OCTCollection_AsciiString^ aKey) ;


 /*instead*/  System::Boolean Contains(OCNaroWrappers::OCTCollection_AsciiString^ aKey) ;


 /*instead*/  System::Boolean Remove(OCNaroWrappers::OCTCollection_AsciiString^ aKey) ;

~OCTColStd_MapOfAsciiString()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif