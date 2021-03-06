// File generated by CPPExt (Transient)
//
#ifndef _TopOpeBRepDS_CurvePointInterference_OCWrappers_HeaderFile
#define _TopOpeBRepDS_CurvePointInterference_OCWrappers_HeaderFile

// include the wrapped class
#include <TopOpeBRepDS_CurvePointInterference.hxx>
#include "../Converter.h"

#include "TopOpeBRepDS_Interference.h"

#include "TopOpeBRepDS_Kind.h"


namespace OCNaroWrappers
{

ref class OCTopOpeBRepDS_Transition;


//! An interference with a parameter. <br>
public ref class OCTopOpeBRepDS_CurvePointInterference : OCTopOpeBRepDS_Interference {

protected:
  // dummy constructor;
  OCTopOpeBRepDS_CurvePointInterference(OCDummy^) : OCTopOpeBRepDS_Interference((OCDummy^)nullptr) {};

public:

// constructor from native
OCTopOpeBRepDS_CurvePointInterference(Handle(TopOpeBRepDS_CurvePointInterference)* nativeHandle);

// Methods PUBLIC


OCTopOpeBRepDS_CurvePointInterference(OCNaroWrappers::OCTopOpeBRepDS_Transition^ T, OCTopOpeBRepDS_Kind ST, Standard_Integer S, OCTopOpeBRepDS_Kind GT, Standard_Integer G, Standard_Real P);


 /*instead*/  Standard_Real Parameter() ;


 /*instead*/  void Parameter(Standard_Real P) ;


virtual /*instead*/  Standard_OStream& Dump(Standard_OStream& OS) override;

~OCTopOpeBRepDS_CurvePointInterference()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
