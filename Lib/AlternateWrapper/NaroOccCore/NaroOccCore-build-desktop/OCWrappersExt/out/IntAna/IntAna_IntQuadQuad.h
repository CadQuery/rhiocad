// File generated by CPPExt (MPV)
//
#ifndef _IntAna_IntQuadQuad_OCWrappers_HeaderFile
#define _IntAna_IntQuadQuad_OCWrappers_HeaderFile

// include native header
#include <IntAna_IntQuadQuad.hxx>
#include "../Converter.h"


#include "IntAna_Curve.h"
#include "../gp/gp_Pnt.h"


namespace OCNaroWrappers
{

ref class OCgp_Cylinder;
ref class OCIntAna_Quadric;
ref class OCgp_Cone;
ref class OCIntAna_Curve;
ref class OCgp_Pnt;


//! This class provides the analytic intersection between a <br>
//!          cylinder or a cone from gp and another quadric, as defined <br>
//!          in the class Quadric from IntAna. <br>
//!          This algorithm is used when the geometric intersection <br>
//!          (class QuadQuadGeo from IntAna) returns no geometric <br>
//!          solution. <br>
//!          The result of the intersection may be <br>
//!           - Curves as defined in the class Curve from IntAna <br>
//!           - Points (Pnt from gp) <br>
public ref class OCIntAna_IntQuadQuad  {

protected:
  IntAna_IntQuadQuad* nativeHandle;
  OCIntAna_IntQuadQuad(OCDummy^) {};

public:
  property IntAna_IntQuadQuad* Handle
  {
    IntAna_IntQuadQuad* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCIntAna_IntQuadQuad(IntAna_IntQuadQuad* nativeHandle);

// Methods PUBLIC

//! Empty Constructor <br>
OCIntAna_IntQuadQuad();

//! Creates the intersection between a cylinder and a quadric . <br>
//!          Tol est a definir plus precisemment. <br>
OCIntAna_IntQuadQuad(OCNaroWrappers::OCgp_Cylinder^ C, OCNaroWrappers::OCIntAna_Quadric^ Q, Standard_Real Tol);

//! Creates the intersection between a cone and a quadric. <br>
//!          Tol est a definir plus precisemment. <br>
OCIntAna_IntQuadQuad(OCNaroWrappers::OCgp_Cone^ C, OCNaroWrappers::OCIntAna_Quadric^ Q, Standard_Real Tol);

//! Intersects a cylinder and a quadric . <br>
//!          Tol est a definir plus precisemment. <br>
 /*instead*/  void Perform(OCNaroWrappers::OCgp_Cylinder^ C, OCNaroWrappers::OCIntAna_Quadric^ Q, Standard_Real Tol) ;

//! Intersects a cone and a quadric. <br>
//!          Tol est a definir plus precisemment. <br>
 /*instead*/  void Perform(OCNaroWrappers::OCgp_Cone^ C, OCNaroWrappers::OCIntAna_Quadric^ Q, Standard_Real Tol) ;

//! Returns True if the computation was successful. <br>
//! <br>
 /*instead*/  System::Boolean IsDone() ;

//! Returns TRUE if the cylinder, the cone or the sphere <br>
//!          is identical to the quadric. <br>
//! <br>
 /*instead*/  System::Boolean IdenticalElements() ;

//! Returns the number of curves solution. <br>
//! <br>
 /*instead*/  Standard_Integer NbCurve() ;

//! Returns the curve of range N. <br>
//! <br>
 /*instead*/  OCIntAna_Curve^ Curve(Standard_Integer N) ;

//! Returns the number of contact point. <br>
//! <br>
 /*instead*/  Standard_Integer NbPnt() ;

//! Returns the point of range N. <br>
//! <br>
 /*instead*/  OCgp_Pnt^ Point(Standard_Integer N) ;

//! Returns  the paramaters on the  "explicit quadric" <br>
//!          (i.e  the cylinder or the  cone, the <br>
//!          first argument   given to the constructor)  of the <br>
//!          point of  range  N. <br>
 /*instead*/  void Parameters(Standard_Integer N, Standard_Real& U1, Standard_Real& U2) ;

//! Returns True if the Curve I  shares its last bound <br>
//!          with another curve. <br>
 /*instead*/  System::Boolean HasNextCurve(Standard_Integer I) ;

//! If  HasNextCurve(I)  returns True,  this  function <br>
//!          returns  the  Index J  of the curve  which   has a <br>
//!          common bound  with the curve   I.  If  Opposite == <br>
//!          True , then the last parameter of the curve I, and <br>
//!          the last parameter of  the curve J  give  the same <br>
//!          point. Else the last  parameter of the curve I and <br>
//!          the first parameter  of  the curve J are  the same <br>
//!          point. <br>
 /*instead*/  Standard_Integer NextCurve(Standard_Integer I, System::Boolean& Opposite) ;

//! Returns True if the Curve I shares its first bound <br>
//!          with another curve. <br>
 /*instead*/  System::Boolean HasPreviousCurve(Standard_Integer I) ;

//! if HasPreviousCurve(I) returns True, this function <br>
//!          returns the   Index  J of the   curve  which has a <br>
//!          common  bound with the  curve  I.  If Opposite  == <br>
//!          True  , then the  first parameter of  the curve I, <br>
//!          and the first parameter of the curve  J  give  the <br>
//!          same point. Else the first  parameter of the curve <br>
//!          I and the last  parameter  of the curve J  are the <br>
//!          same point. <br>
 /*instead*/  Standard_Integer PreviousCurve(Standard_Integer I, System::Boolean& Opposite) ;

~OCIntAna_IntQuadQuad()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
