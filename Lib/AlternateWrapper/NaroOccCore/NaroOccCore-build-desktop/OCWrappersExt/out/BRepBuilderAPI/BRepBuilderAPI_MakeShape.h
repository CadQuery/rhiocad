// File generated by CPPExt (MPV)
//
#ifndef _BRepBuilderAPI_MakeShape_OCWrappers_HeaderFile
#define _BRepBuilderAPI_MakeShape_OCWrappers_HeaderFile

// include native header
#include <BRepBuilderAPI_MakeShape.hxx>
#include "../Converter.h"

#include "BRepBuilderAPI_Command.h"

#include "../TopoDS/TopoDS_Shape.h"
#include "../TopTools/TopTools_ListOfShape.h"
#include "BRepBuilderAPI_Command.h"


namespace OCNaroWrappers
{

ref class OCTopoDS_Shape;
ref class OCTopTools_ListOfShape;


//! This    is  the  root     class for     all  shape <br>
//!          constructions.  It stores the result. <br>
//! <br>
//!          It  provides deferred methods to trace the history <br>
//!          of sub-shapes. <br>
public ref class OCBRepBuilderAPI_MakeShape  : public OCBRepBuilderAPI_Command {

protected:
  // dummy constructor;
  OCBRepBuilderAPI_MakeShape(OCDummy^) : OCBRepBuilderAPI_Command((OCDummy^)nullptr) {};

public:

// constructor from native
OCBRepBuilderAPI_MakeShape(BRepBuilderAPI_MakeShape* nativeHandle);

// Methods PUBLIC


virtual /*instead*/  void Delete() override;


OCBRepBuilderAPI_MakeShape();

//! This is  called by  Shape().  It does  nothing but <br>
//!          may be redefined. <br>
virtual /*instead*/  void Build() ;

//! Returns a shape built by the shape construction algorithm. <br>
//! Raises exception StdFail_NotDone if the shape was not built. <br>
 /*instead*/  OCTopoDS_Shape^ Shape() ;

//! Returns the  list   of shapes generated   from the <br>
//!          shape <S>. <br>
virtual /*instead*/  OCTopTools_ListOfShape^ Generated(OCNaroWrappers::OCTopoDS_Shape^ S) ;

//! Returns the list  of shapes modified from the shape <br>
//!          <S>. <br>
virtual /*instead*/  OCTopTools_ListOfShape^ Modified(OCNaroWrappers::OCTopoDS_Shape^ S) ;

//! Returns true if the shape S has been deleted. <br>
virtual /*instead*/  System::Boolean IsDeleted(OCNaroWrappers::OCTopoDS_Shape^ S) ;

~OCBRepBuilderAPI_MakeShape()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif