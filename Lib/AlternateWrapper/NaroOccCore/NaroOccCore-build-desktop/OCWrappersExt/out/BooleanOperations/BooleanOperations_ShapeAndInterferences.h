// File generated by CPPExt (MPV)
//
#ifndef _BooleanOperations_ShapeAndInterferences_OCWrappers_HeaderFile
#define _BooleanOperations_ShapeAndInterferences_OCWrappers_HeaderFile

// include native header
#include <BooleanOperations_ShapeAndInterferences.hxx>
#include "../Converter.h"


#include "../Bnd/Bnd_Box.h"
#include "BooleanOperations_AncestorsAndSuccessors.h"
#include "../TopoDS/TopoDS_Shape.h"
#include "BooleanOperations_StateOfShape.h"
#include "../TopAbs/TopAbs_ShapeEnum.h"
#include "../TopAbs/TopAbs_Orientation.h"


namespace OCNaroWrappers
{

ref class OCBooleanOperations_ShapesDataStructure;
ref class OCTopoDS_Shape;
ref class OCBnd_Box;



public ref class OCBooleanOperations_ShapeAndInterferences  {

protected:
  BooleanOperations_ShapeAndInterferences* nativeHandle;
  OCBooleanOperations_ShapeAndInterferences(OCDummy^) {};

public:
  property BooleanOperations_ShapeAndInterferences* Handle
  {
    BooleanOperations_ShapeAndInterferences* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCBooleanOperations_ShapeAndInterferences(BooleanOperations_ShapeAndInterferences* nativeHandle);

// Methods PUBLIC


OCBooleanOperations_ShapeAndInterferences();


 /*instead*/  OCTopoDS_Shape^ GetShape() ;


 /*instead*/  OCTopAbs_ShapeEnum GetShapeType() ;


 /*instead*/  OCBooleanOperations_StateOfShape GetState() ;


 /*instead*/  void SetState(OCBooleanOperations_StateOfShape theState) ;


 /*instead*/  OCBnd_Box^ GetBoundingBox() ;


 /*instead*/  Standard_Integer NumberOfAncestors() ;


 /*instead*/  Standard_Integer NumberOfSuccessors() ;


 /*instead*/  Standard_Integer GetAncestor(Standard_Integer index) ;


 /*instead*/  Standard_Integer GetSuccessor(Standard_Integer index) ;


 /*instead*/  void GetAncestors(Standard_Address& theArrayOfAncestors, Standard_Integer& AncestorsSize) ;


 /*instead*/  void GetSuccessors(Standard_Address& theArrayOfSuccessors, Standard_Integer& SuccessorsSize) ;


 /*instead*/  OCTopAbs_Orientation GetOrientation(Standard_Integer index) ;

//! sets an interference in <myInterferencesList>. <br>//! to display the fields. <br>
 /*instead*/  void GetOrientations(Standard_Address& theArrayOfOrientations, Standard_Integer& OrientationsSize) ;

~OCBooleanOperations_ShapeAndInterferences()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
