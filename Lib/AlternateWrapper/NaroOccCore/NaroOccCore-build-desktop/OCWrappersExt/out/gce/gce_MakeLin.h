// File generated by CPPExt (MPV)
//
#ifndef _gce_MakeLin_OCWrappers_HeaderFile
#define _gce_MakeLin_OCWrappers_HeaderFile

// include native header
#include <gce_MakeLin.hxx>
#include "../Converter.h"

#include "gce_Root.h"

#include "../gp/gp_Lin.h"
#include "gce_Root.h"


namespace OCNaroWrappers
{

ref class OCgp_Ax1;
ref class OCgp_Pnt;
ref class OCgp_Dir;
ref class OCgp_Lin;


//! This class implements the following algorithms used <br>
//!           to create a Lin from gp. <br>
//!           * Create a Lin parallel to another and passing <br>
//!             through a point. <br>
//!           * Create a Lin passing through 2 points. <br>
//!           * Create a lin from its axis (Ax1 from gp). <br>
//!           * Create a lin from a point and a direction. <br>
public ref class OCgce_MakeLin  : public OCgce_Root {

protected:
  // dummy constructor;
  OCgce_MakeLin(OCDummy^) : OCgce_Root((OCDummy^)nullptr) {};

public:

// constructor from native
OCgce_MakeLin(gce_MakeLin* nativeHandle);

// Methods PUBLIC

//! Creates a line located along the axis A1. <br>
OCgce_MakeLin(OCNaroWrappers::OCgp_Ax1^ A1);


//!  <P> is the location point (origin) of the line and <br>
//!  <V> is the direction of the line. <br>
OCgce_MakeLin(OCNaroWrappers::OCgp_Pnt^ P, OCNaroWrappers::OCgp_Dir^ V);

//! Make a Lin from gp <TheLin> parallel to another <br>
//!           Lin <Lin> and passing through a Pnt <Point>. <br>
OCgce_MakeLin(OCNaroWrappers::OCgp_Lin^ Lin, OCNaroWrappers::OCgp_Pnt^ Point);

//! Make a Lin from gp <TheLin> passing through 2 <br>
//!           Pnt <P1>,<P2>. <br>
//!           It returns false if <p1> and <P2> are confused. <br>
OCgce_MakeLin(OCNaroWrappers::OCgp_Pnt^ P1, OCNaroWrappers::OCgp_Pnt^ P2);

//! Returns the constructed line. <br>
//! Exceptions StdFail_NotDone is raised if no line is constructed. <br>
 /*instead*/  OCgp_Lin^ Value() ;


 /*instead*/  OCgp_Lin^ Operator() ;

~OCgce_MakeLin()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
