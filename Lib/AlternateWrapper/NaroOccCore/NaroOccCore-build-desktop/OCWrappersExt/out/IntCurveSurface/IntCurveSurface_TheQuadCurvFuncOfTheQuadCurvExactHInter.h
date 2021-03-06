// File generated by CPPExt (MPV)
//
#ifndef _IntCurveSurface_TheQuadCurvFuncOfTheQuadCurvExactHInter_OCWrappers_HeaderFile
#define _IntCurveSurface_TheQuadCurvFuncOfTheQuadCurvExactHInter_OCWrappers_HeaderFile

// include native header
#include <IntCurveSurface_TheQuadCurvFuncOfTheQuadCurvExactHInter.hxx>
#include "../Converter.h"

#include "../math/math_FunctionWithDerivative.h"

#include "../IntSurf/IntSurf_Quadric.h"
#include "../math/math_FunctionWithDerivative.h"


namespace OCNaroWrappers
{

ref class OCAdaptor3d_HCurve;
ref class OCIntSurf_Quadric;
ref class OCIntCurveSurface_TheHCurveTool;



public ref class OCIntCurveSurface_TheQuadCurvFuncOfTheQuadCurvExactHInter  : public OCmath_FunctionWithDerivative {

protected:
  // dummy constructor;
  OCIntCurveSurface_TheQuadCurvFuncOfTheQuadCurvExactHInter(OCDummy^) : OCmath_FunctionWithDerivative((OCDummy^)nullptr) {};

public:

// constructor from native
OCIntCurveSurface_TheQuadCurvFuncOfTheQuadCurvExactHInter(IntCurveSurface_TheQuadCurvFuncOfTheQuadCurvExactHInter* nativeHandle);

// Methods PUBLIC


OCIntCurveSurface_TheQuadCurvFuncOfTheQuadCurvExactHInter(OCNaroWrappers::OCIntSurf_Quadric^ Q, OCNaroWrappers::OCAdaptor3d_HCurve^ C);


virtual /*instead*/  System::Boolean Value(Standard_Real Param, Standard_Real& F) ;


virtual /*instead*/  System::Boolean Derivative(Standard_Real Param, Standard_Real& D) ;


virtual /*instead*/  System::Boolean Values(Standard_Real Param, Standard_Real& F, Standard_Real& D) ;

~OCIntCurveSurface_TheQuadCurvFuncOfTheQuadCurvExactHInter()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
