// File generated by CPPExt (MPV)
//
#ifndef _ChFi3d_SearchSing_OCWrappers_HeaderFile
#define _ChFi3d_SearchSing_OCWrappers_HeaderFile

// include native header
#include <ChFi3d_SearchSing.hxx>
#include "../Converter.h"

#include "../math/math_FunctionWithDerivative.h"

#include "../math/math_FunctionWithDerivative.h"


namespace OCNaroWrappers
{

ref class OCGeom_Curve;


//! F(t) = (C1(t) - C2(t)).(C1'(t) - C2'(t)); <br>
public ref class OCChFi3d_SearchSing  : public OCmath_FunctionWithDerivative {

protected:
  // dummy constructor;
  OCChFi3d_SearchSing(OCDummy^) : OCmath_FunctionWithDerivative((OCDummy^)nullptr) {};

public:

// constructor from native
OCChFi3d_SearchSing(ChFi3d_SearchSing* nativeHandle);

// Methods PUBLIC


OCChFi3d_SearchSing(OCNaroWrappers::OCGeom_Curve^ C1, OCNaroWrappers::OCGeom_Curve^ C2);

//! computes the value of the function <F> for the <br>
//!          variable <X>. <br>
//!          returns True if the computation was done successfully, <br>
//!          False otherwise. <br>
 /*instead*/  System::Boolean Value(Standard_Real X, Standard_Real& F) ;

//! computes the derivative <D> of the function <br>
//!          for the variable <X>. <br>
//!           Returns True if the calculation were successfully done, <br>
//!           False otherwise. <br>
 /*instead*/  System::Boolean Derivative(Standard_Real X, Standard_Real& D) ;

//! computes the value <F> and the derivative <D> of the <br>
//!          function for the variable <X>. <br>
//!          Returns True if the calculation were successfully done, <br>
//!          False otherwise. <br>
 /*instead*/  System::Boolean Values(Standard_Real X, Standard_Real& F, Standard_Real& D) ;

~OCChFi3d_SearchSing()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
