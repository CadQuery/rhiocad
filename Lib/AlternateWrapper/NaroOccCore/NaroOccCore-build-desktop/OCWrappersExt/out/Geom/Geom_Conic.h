// File generated by CPPExt (Transient)
//
#ifndef _Geom_Conic_OCWrappers_HeaderFile
#define _Geom_Conic_OCWrappers_HeaderFile

// include the wrapped class
#include <Geom_Conic.hxx>
#include "../Converter.h"

#include "Geom_Curve.h"

#include "../gp/gp_Ax2.h"
#include "../GeomAbs/GeomAbs_Shape.h"


namespace OCNaroWrappers
{

ref class OCgp_Ax1;
ref class OCgp_Pnt;
ref class OCgp_Ax2;


//! The abstract class Conic describes the common <br>
//! behavior of conic curves in 3D space and, in <br>
//! particular, their general characteristics. The Geom <br>
//! package provides four concrete classes of conics: <br>
//! Geom_Circle, Geom_Ellipse, Geom_Hyperbola and Geom_Parabola. <br>
//! A conic is positioned in space with a right-handed <br>
//! coordinate system (gp_Ax2 object), where: <br>
//! - the origin is the center of the conic (or the apex in <br>
//!   the case of a parabola), <br>
//! - the origin, "X Direction" and "Y Direction" define the <br>
//!   plane of the conic. <br>
//! This coordinate system is the local coordinate <br>
//! system of the conic. <br>
//! The "main Direction" of this coordinate system is the <br>
//! vector normal to the plane of the conic. The axis, of <br>
//! which the origin and unit vector are respectively the <br>
//! origin and "main Direction" of the local coordinate <br>
//! system, is termed the "Axis" or "main Axis" of the conic. <br>
//! The "main Direction" of the local coordinate system <br>
//! gives an explicit orientation to the conic, determining <br>
//! the direction in which the parameter increases along <br>
//! the conic. The "X Axis" of the local coordinate system <br>
//! also defines the origin of the parameter of the conic. <br>
public ref class OCGeom_Conic : OCGeom_Curve {

protected:
  // dummy constructor;
  OCGeom_Conic(OCDummy^) : OCGeom_Curve((OCDummy^)nullptr) {};

public:

// constructor from native
OCGeom_Conic(Handle(Geom_Conic)* nativeHandle);

// Methods PUBLIC

//! Changes the orientation of the conic's plane. The normal <br>
//!  axis to the plane is A1. The XAxis and the YAxis are recomputed. <br>
//!  raised if the A1 is parallel to the XAxis of the conic. <br>
 /*instead*/  void SetAxis(OCNaroWrappers::OCgp_Ax1^ A1) ;

//! changes the location point of the conic. <br>
 /*instead*/  void SetLocation(OCNaroWrappers::OCgp_Pnt^ P) ;

//! changes the local coordinate system of the conic. <br>
 /*instead*/  void SetPosition(OCNaroWrappers::OCgp_Ax2^ A2) ;

//! Returns the "main Axis" of this conic. This axis is <br>
//! normal to the plane of the conic. <br>
 /*instead*/  OCgp_Ax1^ Axis() ;


//!  Returns the location point of the conic. <br>
//!  For the circle, the ellipse and the hyperbola it is the center of <br>
//!  the conic. For the parabola it is the Apex of the parabola. <br>
 /*instead*/  OCgp_Pnt^ Location() ;


//!  Returns the local coordinates system of the conic. <br>
//!  The main direction of the Axis2Placement is normal to the <br>
//!  plane of the conic. The X direction of the Axis2placement <br>
//!  is in the plane of the conic and corresponds to the origin <br>
//!  for the conic's parametric value u. <br>
 /*instead*/  OCgp_Ax2^ Position() ;


//! Returns the XAxis of the conic. <br>
//! This axis defines the origin of parametrization of the conic. <br>
//! This axis is perpendicular to the Axis of the conic. <br>
//! This axis and the Yaxis define the plane of the conic. <br>
 /*instead*/  OCgp_Ax1^ XAxis() ;


//!  Returns the YAxis of the conic. <br>
//!  The YAxis is perpendicular to the Xaxis. <br>
//!  This axis and the Xaxis define the plane of the conic. <br>
 /*instead*/  OCgp_Ax1^ YAxis() ;


//!  Reverses the direction of parameterization of <me>. <br>
//!  The local coordinate system of the conic is modified. <br>
 /*instead*/  void Reverse() ;

//! The continuity of the conic is Cn. <br>
 /*instead*/  OCGeomAbs_Shape Continuity() ;

//! Returns True. <br>//! Raised if N < 0. <br>
 /*instead*/  System::Boolean IsCN(Standard_Integer N) ;

~OCGeom_Conic()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif