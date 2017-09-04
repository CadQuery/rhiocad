// File generated by CPPExt (Transient)
//
#ifndef _HLRAlgo_HArray1OfPISeg_OCWrappers_HeaderFile
#define _HLRAlgo_HArray1OfPISeg_OCWrappers_HeaderFile

// include the wrapped class
#include <HLRAlgo_HArray1OfPISeg.hxx>
#include "../Converter.h"

#include "../MMgt/MMgt_TShared.h"

#include "HLRAlgo_Array1OfPISeg.h"


namespace OCNaroWrappers
{

ref class OCHLRAlgo_PolyInternalSegment;
ref class OCHLRAlgo_Array1OfPISeg;



public ref class OCHLRAlgo_HArray1OfPISeg : OCMMgt_TShared {

protected:
  // dummy constructor;
  OCHLRAlgo_HArray1OfPISeg(OCDummy^) : OCMMgt_TShared((OCDummy^)nullptr) {};

public:

// constructor from native
OCHLRAlgo_HArray1OfPISeg(Handle(HLRAlgo_HArray1OfPISeg)* nativeHandle);

// Methods PUBLIC


OCHLRAlgo_HArray1OfPISeg(Standard_Integer Low, Standard_Integer Up);


OCHLRAlgo_HArray1OfPISeg(Standard_Integer Low, Standard_Integer Up, OCNaroWrappers::OCHLRAlgo_PolyInternalSegment^ V);


 /*instead*/  void Init(OCNaroWrappers::OCHLRAlgo_PolyInternalSegment^ V) ;


 /*instead*/  Standard_Integer Length() ;


 /*instead*/  Standard_Integer Lower() ;


 /*instead*/  Standard_Integer Upper() ;


 /*instead*/  void SetValue(Standard_Integer Index, OCNaroWrappers::OCHLRAlgo_PolyInternalSegment^ Value) ;


 /*instead*/  OCHLRAlgo_PolyInternalSegment^ Value(Standard_Integer Index) ;


 /*instead*/  OCHLRAlgo_PolyInternalSegment^ ChangeValue(Standard_Integer Index) ;


 /*instead*/  OCHLRAlgo_Array1OfPISeg^ Array1() ;


 /*instead*/  OCHLRAlgo_Array1OfPISeg^ ChangeArray1() ;

~OCHLRAlgo_HArray1OfPISeg()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif