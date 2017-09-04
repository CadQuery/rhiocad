// File generated by CPPExt (MPV)
//
#ifndef _StepGeom_Array1OfCurve_OCWrappers_HeaderFile
#define _StepGeom_Array1OfCurve_OCWrappers_HeaderFile

// include native header
#include <StepGeom_Array1OfCurve.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{

ref class OCStepGeom_Curve;



public ref class OCStepGeom_Array1OfCurve  {

protected:
  StepGeom_Array1OfCurve* nativeHandle;
  OCStepGeom_Array1OfCurve(OCDummy^) {};

public:
  property StepGeom_Array1OfCurve* Handle
  {
    StepGeom_Array1OfCurve* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCStepGeom_Array1OfCurve(StepGeom_Array1OfCurve* nativeHandle);

// Methods PUBLIC


OCStepGeom_Array1OfCurve(Standard_Integer Low, Standard_Integer Up);


OCStepGeom_Array1OfCurve(OCNaroWrappers::OCStepGeom_Curve^ Item, Standard_Integer Low, Standard_Integer Up);


 /*instead*/  void Init(OCNaroWrappers::OCStepGeom_Curve^ V) ;


 /*instead*/  System::Boolean IsAllocated() ;


 /*instead*/  OCStepGeom_Array1OfCurve^ Assign(OCNaroWrappers::OCStepGeom_Array1OfCurve^ Other) ;


 /*instead*/  Standard_Integer Length() ;


 /*instead*/  Standard_Integer Lower() ;


 /*instead*/  Standard_Integer Upper() ;


 /*instead*/  void SetValue(Standard_Integer Index, OCNaroWrappers::OCStepGeom_Curve^ Value) ;


 /*instead*/  OCStepGeom_Curve^ Value(Standard_Integer Index) ;


 /*instead*/  OCStepGeom_Curve^ ChangeValue(Standard_Integer Index) ;

~OCStepGeom_Array1OfCurve()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif