// File generated by CPPExt (MPV)
//
#ifndef _MAT_DataMapOfIntegerBisector_OCWrappers_HeaderFile
#define _MAT_DataMapOfIntegerBisector_OCWrappers_HeaderFile

// include native header
#include <MAT_DataMapOfIntegerBisector.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_BasicMap.h"

#include "../TCollection/TCollection_BasicMap.h"


namespace OCNaroWrappers
{

ref class OCMAT_Bisector;
ref class OCTColStd_MapIntegerHasher;
ref class OCMAT_DataMapNodeOfDataMapOfIntegerBisector;
ref class OCMAT_DataMapIteratorOfDataMapOfIntegerBisector;



public ref class OCMAT_DataMapOfIntegerBisector  : public OCTCollection_BasicMap {

protected:
  // dummy constructor;
  OCMAT_DataMapOfIntegerBisector(OCDummy^) : OCTCollection_BasicMap((OCDummy^)nullptr) {};

public:

// constructor from native
OCMAT_DataMapOfIntegerBisector(MAT_DataMapOfIntegerBisector* nativeHandle);

// Methods PUBLIC


OCMAT_DataMapOfIntegerBisector(Standard_Integer NbBuckets);


 /*instead*/  OCMAT_DataMapOfIntegerBisector^ Assign(OCNaroWrappers::OCMAT_DataMapOfIntegerBisector^ Other) ;


 /*instead*/  void ReSize(Standard_Integer NbBuckets) ;


 /*instead*/  System::Boolean Bind(Standard_Integer K, OCNaroWrappers::OCMAT_Bisector^ I) ;


 /*instead*/  System::Boolean IsBound(Standard_Integer K) ;


 /*instead*/  System::Boolean UnBind(Standard_Integer K) ;


 /*instead*/  OCMAT_Bisector^ Find(Standard_Integer K) ;


 /*instead*/  OCMAT_Bisector^ ChangeFind(Standard_Integer K) ;


 /*instead*/  Standard_Address Find1(Standard_Integer K) ;


 /*instead*/  Standard_Address ChangeFind1(Standard_Integer K) ;

~OCMAT_DataMapOfIntegerBisector()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif