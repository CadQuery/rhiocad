// File generated by CPPExt (MPV)
//
#ifndef _Visual3d_SetOfClipPlane_OCWrappers_HeaderFile
#define _Visual3d_SetOfClipPlane_OCWrappers_HeaderFile

// include native header
#include <Visual3d_SetOfClipPlane.hxx>
#include "../Converter.h"


#include "Visual3d_SetListOfSetOfClipPlane.h"


namespace OCNaroWrappers
{

ref class OCVisual3d_SetIteratorOfSetOfClipPlane;
ref class OCVisual3d_ClipPlane;
ref class OCVisual3d_SetListOfSetOfClipPlane;
ref class OCVisual3d_ListNodeOfSetListOfSetOfClipPlane;
ref class OCVisual3d_ListIteratorOfSetListOfSetOfClipPlane;



public ref class OCVisual3d_SetOfClipPlane  {

protected:
  Visual3d_SetOfClipPlane* nativeHandle;
  OCVisual3d_SetOfClipPlane(OCDummy^) {};

public:
  property Visual3d_SetOfClipPlane* Handle
  {
    Visual3d_SetOfClipPlane* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCVisual3d_SetOfClipPlane(Visual3d_SetOfClipPlane* nativeHandle);

// Methods PUBLIC


OCVisual3d_SetOfClipPlane();


 /*instead*/  Standard_Integer Extent() ;


 /*instead*/  System::Boolean IsEmpty() ;


 /*instead*/  void Clear() ;


 /*instead*/  System::Boolean Add(OCNaroWrappers::OCVisual3d_ClipPlane^ T) ;


 /*instead*/  System::Boolean Remove(OCNaroWrappers::OCVisual3d_ClipPlane^ T) ;


 /*instead*/  void Union(OCNaroWrappers::OCVisual3d_SetOfClipPlane^ B) ;


 /*instead*/  void Intersection(OCNaroWrappers::OCVisual3d_SetOfClipPlane^ B) ;


 /*instead*/  void Difference(OCNaroWrappers::OCVisual3d_SetOfClipPlane^ B) ;


 /*instead*/  System::Boolean Contains(OCNaroWrappers::OCVisual3d_ClipPlane^ T) ;


 /*instead*/  System::Boolean IsASubset(OCNaroWrappers::OCVisual3d_SetOfClipPlane^ S) ;


 /*instead*/  System::Boolean IsAProperSubset(OCNaroWrappers::OCVisual3d_SetOfClipPlane^ S) ;

~OCVisual3d_SetOfClipPlane()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif