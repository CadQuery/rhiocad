// File generated by CPPExt (MPV)
//
#ifndef _GeomFill_QuasiAngularConvertor_OCWrappers_HeaderFile
#define _GeomFill_QuasiAngularConvertor_OCWrappers_HeaderFile

// include native header
#include <GeomFill_QuasiAngularConvertor.hxx>
#include "../Converter.h"


#include "../math/math_Matrix.h"
#include "../math/math_Vector.h"


namespace OCNaroWrappers
{

ref class OCgp_Pnt;
ref class OCgp_Vec;
ref class OCTColgp_Array1OfPnt;
ref class OCTColStd_Array1OfReal;
ref class OCTColgp_Array1OfVec;


//! To convert circular section in QuasiAngular Bezier <br>
//!          form <br>
public ref class OCGeomFill_QuasiAngularConvertor  {

protected:
  GeomFill_QuasiAngularConvertor* nativeHandle;
  OCGeomFill_QuasiAngularConvertor(OCDummy^) {};

public:
  property GeomFill_QuasiAngularConvertor* Handle
  {
    GeomFill_QuasiAngularConvertor* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCGeomFill_QuasiAngularConvertor(GeomFill_QuasiAngularConvertor* nativeHandle);

// Methods PUBLIC


OCGeomFill_QuasiAngularConvertor();

//! say if <me> is Initialized <br>
 /*instead*/  System::Boolean Initialized() ;


 /*instead*/  void Init() ;


 /*instead*/  void Section(OCNaroWrappers::OCgp_Pnt^ FirstPnt, OCNaroWrappers::OCgp_Pnt^ Center, OCNaroWrappers::OCgp_Vec^ Dir, Standard_Real Angle, OCNaroWrappers::OCTColgp_Array1OfPnt^ Poles, OCNaroWrappers::OCTColStd_Array1OfReal^ Weights) ;


 /*instead*/  void Section(OCNaroWrappers::OCgp_Pnt^ FirstPnt, OCNaroWrappers::OCgp_Vec^ DFirstPnt, OCNaroWrappers::OCgp_Pnt^ Center, OCNaroWrappers::OCgp_Vec^ DCenter, OCNaroWrappers::OCgp_Vec^ Dir, OCNaroWrappers::OCgp_Vec^ DDir, Standard_Real Angle, Standard_Real DAngle, OCNaroWrappers::OCTColgp_Array1OfPnt^ Poles, OCNaroWrappers::OCTColgp_Array1OfVec^ DPoles, OCNaroWrappers::OCTColStd_Array1OfReal^ Weights, OCNaroWrappers::OCTColStd_Array1OfReal^ DWeights) ;


 /*instead*/  void Section(OCNaroWrappers::OCgp_Pnt^ FirstPnt, OCNaroWrappers::OCgp_Vec^ DFirstPnt, OCNaroWrappers::OCgp_Vec^ D2FirstPnt, OCNaroWrappers::OCgp_Pnt^ Center, OCNaroWrappers::OCgp_Vec^ DCenter, OCNaroWrappers::OCgp_Vec^ D2Center, OCNaroWrappers::OCgp_Vec^ Dir, OCNaroWrappers::OCgp_Vec^ DDir, OCNaroWrappers::OCgp_Vec^ D2Dir, Standard_Real Angle, Standard_Real DAngle, Standard_Real D2Angle, OCNaroWrappers::OCTColgp_Array1OfPnt^ Poles, OCNaroWrappers::OCTColgp_Array1OfVec^ DPoles, OCNaroWrappers::OCTColgp_Array1OfVec^ D2Poles, OCNaroWrappers::OCTColStd_Array1OfReal^ Weights, OCNaroWrappers::OCTColStd_Array1OfReal^ DWeights, OCNaroWrappers::OCTColStd_Array1OfReal^ D2Weights) ;

~OCGeomFill_QuasiAngularConvertor()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
