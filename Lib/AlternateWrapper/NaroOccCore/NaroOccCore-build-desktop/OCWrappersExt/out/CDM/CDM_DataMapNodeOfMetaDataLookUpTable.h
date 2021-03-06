// File generated by CPPExt (Transient)
//
#ifndef _CDM_DataMapNodeOfMetaDataLookUpTable_OCWrappers_HeaderFile
#define _CDM_DataMapNodeOfMetaDataLookUpTable_OCWrappers_HeaderFile

// include the wrapped class
#include <CDM_DataMapNodeOfMetaDataLookUpTable.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_MapNode.h"

#include "../TCollection/TCollection_ExtendedString.h"


namespace OCNaroWrappers
{

ref class OCCDM_MetaData;
ref class OCTCollection_ExtendedString;
ref class OCCDM_MetaDataLookUpTable;
ref class OCCDM_DataMapIteratorOfMetaDataLookUpTable;



public ref class OCCDM_DataMapNodeOfMetaDataLookUpTable : OCTCollection_MapNode {

protected:
  // dummy constructor;
  OCCDM_DataMapNodeOfMetaDataLookUpTable(OCDummy^) : OCTCollection_MapNode((OCDummy^)nullptr) {};

public:

// constructor from native
OCCDM_DataMapNodeOfMetaDataLookUpTable(Handle(CDM_DataMapNodeOfMetaDataLookUpTable)* nativeHandle);

// Methods PUBLIC


OCCDM_DataMapNodeOfMetaDataLookUpTable(OCNaroWrappers::OCTCollection_ExtendedString^ K, OCNaroWrappers::OCCDM_MetaData^ I, TCollection_MapNodePtr n);


 /*instead*/  OCTCollection_ExtendedString^ Key() ;


 /*instead*/  OCCDM_MetaData^ Value() ;

~OCCDM_DataMapNodeOfMetaDataLookUpTable()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
