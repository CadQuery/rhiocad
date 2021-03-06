// File generated by CPPExt (MPV)
//
#ifndef _gp_Ax2d_OCWrappers_HeaderFile
#define _gp_Ax2d_OCWrappers_HeaderFile

// include native header
#include <gp_Ax2d.hxx>
#include "../Converter.h"


#include "gp_Pnt2d.h"
#include "gp_Dir2d.h"
#include "../Standard/Standard_Storable.h"


namespace OCNaroWrappers
{

ref class OCgp_Pnt2d;
ref class OCgp_Dir2d;
ref class OCgp_Trsf2d;
ref class OCgp_Vec2d;



//! Describes an axis in the plane (2D space). <br>
//! An axis is defined by: <br>
//! -   its origin (also referred to as its "Location point"),   and <br>
//! -   its unit vector (referred to as its "Direction"). <br>
//! An axis implicitly defines a direct, right-handed <br>
//! coordinate system in 2D space by: <br>
//! -   its origin, <br>
//! - its "Direction" (giving the "X Direction" of the coordinate system), and <br>
//! -   the unit vector normal to "Direction" (positive angle <br>
//!   measured in the trigonometric sense). <br>
//! An axis is used: <br>
//! -   to describe 2D geometric entities (for example, the <br>
//!   axis which defines angular coordinates on a circle). <br>
//!   It serves for the same purpose as the STEP function <br>
//!   "axis placement one axis", or <br>
//! -   to define geometric transformations (axis of <br>
//!   symmetry, axis of rotation, and so on). <br>
//! Note: to define a left-handed 2D coordinate system, use gp_Ax22d. <br>
public ref class OCgp_Ax2d  {

protected:
  gp_Ax2d* nativeHandle;
  OCgp_Ax2d(OCDummy^) {};

public:
  property gp_Ax2d* Handle
  {
    gp_Ax2d* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCgp_Ax2d(gp_Ax2d* nativeHandle);

// Methods PUBLIC

//! Creates an axis object representing X axis of <br>
//!            the reference co-ordinate system. <br>
OCgp_Ax2d();


//!  Creates an Ax2d. <P> is the "Location" point of <br>
//!  the axis placement and V is the "Direction" of <br>
//!  the axis placement. <br>
OCgp_Ax2d(OCNaroWrappers::OCgp_Pnt2d^ P, OCNaroWrappers::OCgp_Dir2d^ V);

//!  Changes the "Location" point (origin) of <me>. <br>
 /*instead*/  void SetLocation(OCNaroWrappers::OCgp_Pnt2d^ Locat) ;

//! Changes the direction of <me>. <br>
 /*instead*/  void SetDirection(OCNaroWrappers::OCgp_Dir2d^ V) ;

//! Returns the origin of <me>. <br>
 /*instead*/  OCgp_Pnt2d^ Location() ;

//! Returns the direction of <me>. <br>
 /*instead*/  OCgp_Dir2d^ Direction() ;


//!  Returns True if  : <br>
//!  . the angle between <me> and <Other> is lower or equal <br>
//!    to <AngularTolerance> and <br>
//!  . the distance between <me>.Location() and <Other> is lower <br>
//!    or equal to <LinearTolerance> and <br>
//!  . the distance between <Other>.Location() and <me> is lower <br>
//!    or equal to LinearTolerance. <br>
 /*instead*/  System::Boolean IsCoaxial(OCNaroWrappers::OCgp_Ax2d^ Other, Standard_Real AngularTolerance, Standard_Real LinearTolerance) ;

//! Returns true if this axis and the axis Other are normal to <br>
//! each other. That is, if the angle between the two axes is equal to Pi/2 or -Pi/2. <br>
//! Note: the tolerance criterion is given by AngularTolerance. <br>
 /*instead*/  System::Boolean IsNormal(OCNaroWrappers::OCgp_Ax2d^ Other, Standard_Real AngularTolerance) ;

//! Returns true if this axis and the axis Other are parallel, <br>
//! and have opposite orientations. That is, if the angle <br>
//! between the two axes is equal to Pi or -Pi. <br>
//! Note: the tolerance criterion is given by AngularTolerance. <br>
 /*instead*/  System::Boolean IsOpposite(OCNaroWrappers::OCgp_Ax2d^ Other, Standard_Real AngularTolerance) ;

//!  Returns true if this axis and the axis Other are parallel, <br>
//! and have either the same or opposite orientations. That <br>
//! is, if the angle between the two axes is equal to 0, Pi or -Pi. <br>
//! Note: the tolerance criterion is given by AngularTolerance. <br>
 /*instead*/  System::Boolean IsParallel(OCNaroWrappers::OCgp_Ax2d^ Other, Standard_Real AngularTolerance) ;


//! Computes the angle, in radians, between this axis and <br>
//! the axis Other. The value of the angle is between -Pi and Pi. <br>
 /*instead*/  Standard_Real Angle(OCNaroWrappers::OCgp_Ax2d^ Other) ;

//! Reverses the direction of <me> and assigns the result to this axis. <br>
 /*instead*/  void Reverse() ;


//!  Computes a new axis placement with a direction opposite to <br>
//!  the direction of <me>. <br>
 /*instead*/  OCgp_Ax2d^ Reversed() ;


 /*instead*/  void Mirror(OCNaroWrappers::OCgp_Pnt2d^ P) ;


//!  Performs the symmetrical transformation of an axis <br>
//!  placement with respect to the point P which is the <br>
//!  center of the symmetry. <br>
 /*instead*/  OCgp_Ax2d^ Mirrored(OCNaroWrappers::OCgp_Pnt2d^ P) ;


 /*instead*/  void Mirror(OCNaroWrappers::OCgp_Ax2d^ A) ;


//!  Performs the symmetrical transformation of an axis <br>
//!  placement with respect to an axis placement which <br>
//!  is the axis of the symmetry. <br>
 /*instead*/  OCgp_Ax2d^ Mirrored(OCNaroWrappers::OCgp_Ax2d^ A) ;


 /*instead*/  void Rotate(OCNaroWrappers::OCgp_Pnt2d^ P, Standard_Real Ang) ;


//!  Rotates an axis placement. <P> is the center of the <br>
//!  rotation . Ang is the angular value of the rotation <br>
//!  in radians. <br>
 /*instead*/  OCgp_Ax2d^ Rotated(OCNaroWrappers::OCgp_Pnt2d^ P, Standard_Real Ang) ;


 /*instead*/  void Scale(OCNaroWrappers::OCgp_Pnt2d^ P, Standard_Real S) ;


//!  Applies a scaling transformation on the axis placement. <br>
//!  The "Location" point of the axisplacement is modified. <br>
//!  The "Direction" is reversed if the scale is negative. <br>
 /*instead*/  OCgp_Ax2d^ Scaled(OCNaroWrappers::OCgp_Pnt2d^ P, Standard_Real S) ;


 /*instead*/  void Transform(OCNaroWrappers::OCgp_Trsf2d^ T) ;

//!  Transforms an axis placement with a Trsf. <br>
 /*instead*/  OCgp_Ax2d^ Transformed(OCNaroWrappers::OCgp_Trsf2d^ T) ;


 /*instead*/  void Translate(OCNaroWrappers::OCgp_Vec2d^ V) ;


//!  Translates an axis placement in the direction of the vector <br>
//!  <V>. The magnitude of the translation is the vector's magnitude. <br>
 /*instead*/  OCgp_Ax2d^ Translated(OCNaroWrappers::OCgp_Vec2d^ V) ;


 /*instead*/  void Translate(OCNaroWrappers::OCgp_Pnt2d^ P1, OCNaroWrappers::OCgp_Pnt2d^ P2) ;


//!  Translates an axis placement from the point <P1> to the <br>
//!  point <P2>. <br>
 /*instead*/  OCgp_Ax2d^ Translated(OCNaroWrappers::OCgp_Pnt2d^ P1, OCNaroWrappers::OCgp_Pnt2d^ P2) ;

~OCgp_Ax2d()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
