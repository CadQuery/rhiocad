// File generated by CPPExt (MPV)
//
#ifndef _ChFi2d_Builder_OCWrappers_HeaderFile
#define _ChFi2d_Builder_OCWrappers_HeaderFile

// include native header
#include <ChFi2d_Builder.hxx>
#include "../Converter.h"


#include "ChFi2d_ConstructionError.h"
#include "../TopoDS/TopoDS_Face.h"
#include "../TopTools/TopTools_SequenceOfShape.h"
#include "../TopTools/TopTools_DataMapOfShapeShape.h"


namespace OCNaroWrappers
{

ref class OCTopoDS_Face;
ref class OCTopoDS_Edge;
ref class OCTopoDS_Vertex;
ref class OCTopTools_SequenceOfShape;


//! This  class contains  the algorithm  used to build <br>
//!          fillet on planar wire. <br>
public ref class OCChFi2d_Builder  {

protected:
  ChFi2d_Builder* nativeHandle;
  OCChFi2d_Builder(OCDummy^) {};

public:
  property ChFi2d_Builder* Handle
  {
    ChFi2d_Builder* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCChFi2d_Builder(ChFi2d_Builder* nativeHandle);

// Methods PUBLIC


OCChFi2d_Builder();

//! The face  <F> can be build  on a closed or an open <br>
//!          wire. <br>
OCChFi2d_Builder(OCNaroWrappers::OCTopoDS_Face^ F);


 /*instead*/  void Init(OCNaroWrappers::OCTopoDS_Face^ F) ;


 /*instead*/  void Init(OCNaroWrappers::OCTopoDS_Face^ RefFace, OCNaroWrappers::OCTopoDS_Face^ ModFace) ;

//! Add  a fillet  of   radius  <Radius> on  the  wire <br>
//!          between the two edges connected to the vertex <V>. <br>
//!          <AddFillet> returns the  fillet edge. The returned <br>
//!          edge has  sense only   if the status   <status> is <br>
//!          <IsDone> <br>
 /*instead*/  OCTopoDS_Edge^ AddFillet(OCNaroWrappers::OCTopoDS_Vertex^ V, Standard_Real Radius) ;

//! modify the fillet radius and return the new fillet <br>
//!          edge. this    edge has sense  only if   the status <br>
//!          <status> is <IsDone>. <br>
 /*instead*/  OCTopoDS_Edge^ ModifyFillet(OCNaroWrappers::OCTopoDS_Edge^ Fillet, Standard_Real Radius) ;

//! removes the fillet <Fillet> and returns the vertex <br>
//!          connecting the two adjacent edges to  this fillet. <br>
 /*instead*/  OCTopoDS_Vertex^ RemoveFillet(OCNaroWrappers::OCTopoDS_Edge^ Fillet) ;

//! Add a chamfer on  the  wire between the two  edges <br>
//!          connected <E1> and  <E2>. <AddChamfer> returns the <br>
//!          chamfer  edge. This  edge  has  sense only if  the <br>
//!          status <status> is <IsDone>. <br>
 /*instead*/  OCTopoDS_Edge^ AddChamfer(OCNaroWrappers::OCTopoDS_Edge^ E1, OCNaroWrappers::OCTopoDS_Edge^ E2, Standard_Real D1, Standard_Real D2) ;

//! Add  a chamfer on the   wire between the two edges <br>
//!          connected to the vertex <V>. The chamfer will make <br>
//!          an  angle <Ang> with the edge  <E>, and one of its <br>
//!          extremities  will be on  <E>  at distance <D>. The <br>
//!          returned   edge has sense   only   if the   status <br>
//!          <status> is <IsDone>. <br>
//!  Warning: The value of <Ang> must be expressed in Radian. <br>
 /*instead*/  OCTopoDS_Edge^ AddChamfer(OCNaroWrappers::OCTopoDS_Edge^ E, OCNaroWrappers::OCTopoDS_Vertex^ V, Standard_Real D, Standard_Real Ang) ;

//! modify the chamfer <Chamfer>  and returns  the new <br>
//!          chamfer edge. <br>
//!          This edge as sense only  if the status <status> is <br>
//!          <IsDone>. <br>
 /*instead*/  OCTopoDS_Edge^ ModifyChamfer(OCNaroWrappers::OCTopoDS_Edge^ Chamfer, OCNaroWrappers::OCTopoDS_Edge^ E1, OCNaroWrappers::OCTopoDS_Edge^ E2, Standard_Real D1, Standard_Real D2) ;

//! modify the  chamfer <Chamfer>  and returns the new <br>
//!          chamfer edge. This    edge as sense  only   if the <br>
//!          status <status>   is  <IsDone>. <br>
//!  Warning: The value of <Ang> must be expressed in Radian. <br>
 /*instead*/  OCTopoDS_Edge^ ModifyChamfer(OCNaroWrappers::OCTopoDS_Edge^ Chamfer, OCNaroWrappers::OCTopoDS_Edge^ E, Standard_Real D, Standard_Real Ang) ;

//! removes   the chamfer  <Chamfer>   and returns the <br>
//!          vertex connecting  the two adjacent  edges to this <br>
//!          chamfer. <br>
 /*instead*/  OCTopoDS_Vertex^ RemoveChamfer(OCNaroWrappers::OCTopoDS_Edge^ Chamfer) ;

//! returns the modified face <br>
 /*instead*/  OCTopoDS_Face^ Result() ;


 /*instead*/  System::Boolean IsModified(OCNaroWrappers::OCTopoDS_Edge^ E) ;

//! returns the list of new edges <br>
 /*instead*/  OCTopTools_SequenceOfShape^ FilletEdges() ;


 /*instead*/  Standard_Integer NbFillet() ;

//! returns the list of new edges <br>
 /*instead*/  OCTopTools_SequenceOfShape^ ChamferEdges() ;


 /*instead*/  Standard_Integer NbChamfer() ;


 /*instead*/  System::Boolean HasDescendant(OCNaroWrappers::OCTopoDS_Edge^ E) ;

//! returns the modified edge if <E> has descendant or <br>
//!          <E> in the other case. <br>
 /*instead*/  OCTopoDS_Edge^ DescendantEdge(OCNaroWrappers::OCTopoDS_Edge^ E) ;

//! Returns the parent edge of  <E> <br>
//!  Warning: If <E>is a basis edge,  the returned edge would be <br>
//!          equal to <E> <br>
 /*instead*/  OCTopoDS_Edge^ BasisEdge(OCNaroWrappers::OCTopoDS_Edge^ E) ;


 /*instead*/  OCChFi2d_ConstructionError Status() ;

~OCChFi2d_Builder()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif