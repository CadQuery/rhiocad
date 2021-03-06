// File generated by CPPExt (Transient)
//
#ifndef _Geom_SequenceNodeOfSequenceOfBSplineSurface_OCWrappers_HeaderFile
#define _Geom_SequenceNodeOfSequenceOfBSplineSurface_OCWrappers_HeaderFile

// include the wrapped class
#include <Geom_SequenceNodeOfSequenceOfBSplineSurface.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_SeqNode.h"



namespace OCNaroWrappers
{

ref class OCGeom_BSplineSurface;
ref class OCGeom_SequenceOfBSplineSurface;



public ref class OCGeom_SequenceNodeOfSequenceOfBSplineSurface : OCTCollection_SeqNode {

protected:
  // dummy constructor;
  OCGeom_SequenceNodeOfSequenceOfBSplineSurface(OCDummy^) : OCTCollection_SeqNode((OCDummy^)nullptr) {};

public:

// constructor from native
OCGeom_SequenceNodeOfSequenceOfBSplineSurface(Handle(Geom_SequenceNodeOfSequenceOfBSplineSurface)* nativeHandle);

// Methods PUBLIC


OCGeom_SequenceNodeOfSequenceOfBSplineSurface(OCNaroWrappers::OCGeom_BSplineSurface^ I, TCollection_SeqNodePtr n, TCollection_SeqNodePtr p);


 /*instead*/  OCGeom_BSplineSurface^ Value() ;

~OCGeom_SequenceNodeOfSequenceOfBSplineSurface()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
