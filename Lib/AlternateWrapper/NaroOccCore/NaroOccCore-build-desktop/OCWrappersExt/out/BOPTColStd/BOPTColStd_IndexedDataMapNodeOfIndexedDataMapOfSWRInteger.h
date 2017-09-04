// File generated by CPPExt (Transient)
//
#ifndef _BOPTColStd_IndexedDataMapNodeOfIndexedDataMapOfSWRInteger_OCWrappers_HeaderFile
#define _BOPTColStd_IndexedDataMapNodeOfIndexedDataMapOfSWRInteger_OCWrappers_HeaderFile

// include the wrapped class
#include <BOPTColStd_IndexedDataMapNodeOfIndexedDataMapOfSWRInteger.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_MapNode.h"

#include "BOPTColStd_ShapeWithRank.h"


namespace OCNaroWrappers
{

ref class OCBOPTColStd_ShapeWithRank;
ref class OCBOPTColStd_ShapeWithRankHasher;
ref class OCBOPTColStd_IndexedDataMapOfSWRInteger;



public ref class OCBOPTColStd_IndexedDataMapNodeOfIndexedDataMapOfSWRInteger : OCTCollection_MapNode {

protected:
  // dummy constructor;
  OCBOPTColStd_IndexedDataMapNodeOfIndexedDataMapOfSWRInteger(OCDummy^) : OCTCollection_MapNode((OCDummy^)nullptr) {};

public:

// constructor from native
OCBOPTColStd_IndexedDataMapNodeOfIndexedDataMapOfSWRInteger(Handle(BOPTColStd_IndexedDataMapNodeOfIndexedDataMapOfSWRInteger)* nativeHandle);

// Methods PUBLIC


OCBOPTColStd_IndexedDataMapNodeOfIndexedDataMapOfSWRInteger(OCNaroWrappers::OCBOPTColStd_ShapeWithRank^ K1, Standard_Integer K2, Standard_Integer I, TCollection_MapNodePtr n1, TCollection_MapNodePtr n2);


 /*instead*/  OCBOPTColStd_ShapeWithRank^ Key1() ;


 /*instead*/  Standard_Integer Key2() ;


 /*instead*/  TCollection_MapNodePtr& Next2() ;


 /*instead*/  Standard_Integer Value() ;

~OCBOPTColStd_IndexedDataMapNodeOfIndexedDataMapOfSWRInteger()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif