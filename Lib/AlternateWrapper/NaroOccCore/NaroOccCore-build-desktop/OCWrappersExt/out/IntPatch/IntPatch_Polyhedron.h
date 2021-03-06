// File generated by CPPExt (MPV)
//
#ifndef _IntPatch_Polyhedron_OCWrappers_HeaderFile
#define _IntPatch_Polyhedron_OCWrappers_HeaderFile

// include native header
#include <IntPatch_Polyhedron.hxx>
#include "../Converter.h"


#include "../Bnd/Bnd_Box.h"


namespace OCNaroWrappers
{

ref class OCBnd_HArray1OfBox;
ref class OCAdaptor3d_HSurface;
ref class OCgp_Pnt;
ref class OCBnd_Box;
ref class OCgp_XYZ;


//! This class provides a linear approximation of the PSurface. <br>
//! preview a constructor on a zone of  a surface <br>
public ref class OCIntPatch_Polyhedron  {

protected:
  IntPatch_Polyhedron* nativeHandle;
  OCIntPatch_Polyhedron(OCDummy^) {};

public:
  property IntPatch_Polyhedron* Handle
  {
    IntPatch_Polyhedron* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCIntPatch_Polyhedron(IntPatch_Polyhedron* nativeHandle);

// Methods PUBLIC

//! MaTriangle constructor with an double array of pnt for the <br>
//!          representation of a double array of triangles. <br>
OCIntPatch_Polyhedron(OCNaroWrappers::OCAdaptor3d_HSurface^ Surface, Standard_Integer nbdU, Standard_Integer nbdV);


OCIntPatch_Polyhedron(OCNaroWrappers::OCAdaptor3d_HSurface^ Surface);


 /*instead*/  void Perform(OCNaroWrappers::OCAdaptor3d_HSurface^ Surface, Standard_Integer nbdU, Standard_Integer nbdV) ;


 /*instead*/  void DeflectionOverEstimation(Standard_Real flec) ;


 /*instead*/  Standard_Real DeflectionOnTriangle(OCNaroWrappers::OCAdaptor3d_HSurface^ Surface, Standard_Integer Index) ;


 /*instead*/  void UMinSingularity(System::Boolean Sing) ;


 /*instead*/  void UMaxSingularity(System::Boolean Sing) ;


 /*instead*/  void VMinSingularity(System::Boolean Sing) ;


 /*instead*/  void VMaxSingularity(System::Boolean Sing) ;

//! Get the size of the MaTriangle. <br>
 /*instead*/  void Size(Standard_Integer& nbdu, Standard_Integer& nbdv) ;

//! Give the number of triangles in this double array of <br>
//!          triangles (nbdu*nbdv*2). <br>
 /*instead*/  Standard_Integer NbTriangles() ;

//! Give the 3 points of the triangle of addresse Index in <br>
//!          the double array of triangles. <br>
 /*instead*/  void Triangle(Standard_Integer Index, Standard_Integer& P1, Standard_Integer& P2, Standard_Integer& P3) ;

//! Give the addresse Tricon of the triangle connexe to the <br>
//!          triangle of address Triang by the edge Pivot Pedge and <br>
//!          the third point of this connexe triangle. When we are <br>
//!          on a free edge TriCon==0 but the function return the <br>
//!          value of the triangle in the other side of Pivot on <br>
//!          the free edge. Used to turn around a vertex. <br>
 /*instead*/  Standard_Integer TriConnex(Standard_Integer Triang, Standard_Integer Pivot, Standard_Integer Pedge, Standard_Integer& TriCon, Standard_Integer& OtherP) ;

//! Give the number of point in the double array of <br>
//!          triangles ((nbdu+1)*(nbdv+1)). <br>
 /*instead*/  Standard_Integer NbPoints() ;

//! Set the value of a field of the double array of <br>
//!          points. <br>
 /*instead*/  void Point(OCNaroWrappers::OCgp_Pnt^ thePnt, Standard_Integer lig, Standard_Integer col, Standard_Real U, Standard_Real V) ;

//! Give the point of index i in the MaTriangle. <br>
 /*instead*/  OCgp_Pnt^ Point(Standard_Integer Index, Standard_Real& U, Standard_Real& V) ;

//! Give the point of index i in the MaTriangle. <br>
 /*instead*/  OCgp_Pnt^ Point(Standard_Integer Index) ;

//! Give the point of index i in the MaTriangle. <br>
 /*instead*/  void Point(Standard_Integer Index, OCNaroWrappers::OCgp_Pnt^ P) ;

//! Give the bounding box of the MaTriangle. <br>
 /*instead*/  OCBnd_Box^ Bounding() ;

//! Compute the array of boxes. The box <n> corresponding <br>
//!          to the triangle <n>. <br>
 /*instead*/  void FillBounding() ;

//! Give the array of boxes. The box <n> corresponding <br>
//!          to the triangle <n>. <br>
 /*instead*/  OCBnd_HArray1OfBox^ ComponentsBounding() ;


 /*instead*/  Standard_Real DeflectionOverEstimation() ;


 /*instead*/  System::Boolean HasUMinSingularity() ;


 /*instead*/  System::Boolean HasUMaxSingularity() ;


 /*instead*/  System::Boolean HasVMinSingularity() ;


 /*instead*/  System::Boolean HasVMaxSingularity() ;

//! Give the plane equation of the triangle of addresse Triang. <br>
 /*instead*/  void PlaneEquation(Standard_Integer Triang, OCNaroWrappers::OCgp_XYZ^ NormalVector, Standard_Real& PolarDistance) ;

//! Give the plane equation of the triangle of addresse Triang. <br>
 /*instead*/  System::Boolean Contain(Standard_Integer Triang, OCNaroWrappers::OCgp_Pnt^ ThePnt) ;


 /*instead*/  void Parameters(Standard_Integer Index, Standard_Real& U, Standard_Real& V) ;


 /*instead*/  void Dump() ;

~OCIntPatch_Polyhedron()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
