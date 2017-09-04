// File generated by CPPExt (Transient)
//
#ifndef _ShapeAnalysis_TransferParametersProj_OCWrappers_HeaderFile
#define _ShapeAnalysis_TransferParametersProj_OCWrappers_HeaderFile

// include the wrapped class
#include <ShapeAnalysis_TransferParametersProj.hxx>
#include "../Converter.h"

#include "ShapeAnalysis_TransferParameters.h"

#include "../Adaptor3d/Adaptor3d_CurveOnSurface.h"
#include "../TopLoc/TopLoc_Location.h"


namespace OCNaroWrappers
{

ref class OCGeom_Curve;
ref class OCGeom2d_Curve;
ref class OCTopoDS_Edge;
ref class OCTopoDS_Face;
ref class OCTColStd_HSequenceOfReal;
ref class OCTopoDS_Vertex;


//! This tool is used for transferring parameters <br>
//!          from 3d curve of the edge to pcurve and vice versa. <br>
//!          This tool transfers parameters with help of <br>
//!          projection points from curve 3d on curve 2d and <br>
//!          vice versa <br>
public ref class OCShapeAnalysis_TransferParametersProj : OCShapeAnalysis_TransferParameters {

protected:
  // dummy constructor;
  OCShapeAnalysis_TransferParametersProj(OCDummy^) : OCShapeAnalysis_TransferParameters((OCDummy^)nullptr) {};

public:

// constructor from native
OCShapeAnalysis_TransferParametersProj(Handle(ShapeAnalysis_TransferParametersProj)* nativeHandle);

// Methods PUBLIC

//! Creats empty constructor. <br>
OCShapeAnalysis_TransferParametersProj();


OCShapeAnalysis_TransferParametersProj(OCNaroWrappers::OCTopoDS_Edge^ E, OCNaroWrappers::OCTopoDS_Face^ F);


virtual /*instead*/  void Init(OCNaroWrappers::OCTopoDS_Edge^ E, OCNaroWrappers::OCTopoDS_Face^ F) override;

//! Transfers parameters given by sequence Params from 3d curve <br>
//!          to pcurve (if To2d is True) or back (if To2d is False) <br>
virtual /*instead*/  OCTColStd_HSequenceOfReal^ Perform(OCNaroWrappers::OCTColStd_HSequenceOfReal^ Papams, System::Boolean To2d) override;

//!Transfers parameter given by  Param from 3d curve <br>
//!          to pcurve (if To2d is True) or back (if To2d is False) <br>
virtual /*instead*/  Standard_Real Perform(Standard_Real Param, System::Boolean To2d) override;

//! Returns modifiable flag forcing projection <br>
//!          If it is False (default), projection is done only <br>
//!          if edge is not SameParameter or if tolerance of edge <br>
//!          is greater than MaxTolerance() <br>
 /*instead*/  System::Boolean ForceProjection() ;

//! Recomputes range of curves from NewEdge. <br>
//!	    If Is2d equals True parameters are recomputed by curve2d else by curve3d. <br>
virtual /*instead*/  void TransferRange(OCNaroWrappers::OCTopoDS_Edge^ newEdge, Standard_Real prevPar, Standard_Real currPar, System::Boolean Is2d) override;

//! Returns False; <br>
//! <br>
virtual /*instead*/  System::Boolean IsSameRange() override;

//! Make a copy of non-manifold vertex theVert <br>
//!          (i.e. create new  TVertex and replace PointRepresentations for this vertex <br>
//!          from fromedge to toedge. Other representations were copied) <br>
static /*instead*/  OCTopoDS_Vertex^ CopyNMVertex(OCNaroWrappers::OCTopoDS_Vertex^ theVert, OCNaroWrappers::OCTopoDS_Edge^ toedge, OCNaroWrappers::OCTopoDS_Edge^ fromedge) ;

//! Make a copy of non-manifold vertex theVert <br>
//!          (i.e. create new  TVertex and replace PointRepresentations for this vertex <br>
//!          from fromFace to toFace. Other representations were copied) <br>
static /*instead*/  OCTopoDS_Vertex^ CopyNMVertex(OCNaroWrappers::OCTopoDS_Vertex^ theVert, OCNaroWrappers::OCTopoDS_Face^ toFace, OCNaroWrappers::OCTopoDS_Face^ fromFace) ;

~OCShapeAnalysis_TransferParametersProj()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif