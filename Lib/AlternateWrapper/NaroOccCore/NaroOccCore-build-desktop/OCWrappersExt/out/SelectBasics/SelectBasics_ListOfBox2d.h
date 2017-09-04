// File generated by CPPExt (MPV)
//
#ifndef _SelectBasics_ListOfBox2d_OCWrappers_HeaderFile
#define _SelectBasics_ListOfBox2d_OCWrappers_HeaderFile

// include native header
#include <SelectBasics_ListOfBox2d.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{

ref class OCSelectBasics_ListIteratorOfListOfBox2d;
ref class OCBnd_Box2d;
ref class OCSelectBasics_ListNodeOfListOfBox2d;



public ref class OCSelectBasics_ListOfBox2d  {

protected:
  SelectBasics_ListOfBox2d* nativeHandle;
  OCSelectBasics_ListOfBox2d(OCDummy^) {};

public:
  property SelectBasics_ListOfBox2d* Handle
  {
    SelectBasics_ListOfBox2d* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCSelectBasics_ListOfBox2d(SelectBasics_ListOfBox2d* nativeHandle);

// Methods PUBLIC


OCSelectBasics_ListOfBox2d();


 /*instead*/  void Assign(OCNaroWrappers::OCSelectBasics_ListOfBox2d^ Other) ;


 /*instead*/  Standard_Integer Extent() ;


 /*instead*/  System::Boolean IsEmpty() ;


 /*instead*/  void Prepend(OCNaroWrappers::OCBnd_Box2d^ I) ;


 /*instead*/  void Prepend(OCNaroWrappers::OCBnd_Box2d^ I, OCNaroWrappers::OCSelectBasics_ListIteratorOfListOfBox2d^ theIt) ;


 /*instead*/  void Prepend(OCNaroWrappers::OCSelectBasics_ListOfBox2d^ Other) ;


 /*instead*/  void Append(OCNaroWrappers::OCBnd_Box2d^ I) ;


 /*instead*/  void Append(OCNaroWrappers::OCBnd_Box2d^ I, OCNaroWrappers::OCSelectBasics_ListIteratorOfListOfBox2d^ theIt) ;


 /*instead*/  void Append(OCNaroWrappers::OCSelectBasics_ListOfBox2d^ Other) ;


 /*instead*/  OCBnd_Box2d^ First() ;


 /*instead*/  OCBnd_Box2d^ Last() ;


 /*instead*/  void RemoveFirst() ;


 /*instead*/  void Remove(OCNaroWrappers::OCSelectBasics_ListIteratorOfListOfBox2d^ It) ;


 /*instead*/  void InsertBefore(OCNaroWrappers::OCBnd_Box2d^ I, OCNaroWrappers::OCSelectBasics_ListIteratorOfListOfBox2d^ It) ;


 /*instead*/  void InsertBefore(OCNaroWrappers::OCSelectBasics_ListOfBox2d^ Other, OCNaroWrappers::OCSelectBasics_ListIteratorOfListOfBox2d^ It) ;


 /*instead*/  void InsertAfter(OCNaroWrappers::OCBnd_Box2d^ I, OCNaroWrappers::OCSelectBasics_ListIteratorOfListOfBox2d^ It) ;


 /*instead*/  void InsertAfter(OCNaroWrappers::OCSelectBasics_ListOfBox2d^ Other, OCNaroWrappers::OCSelectBasics_ListIteratorOfListOfBox2d^ It) ;

~OCSelectBasics_ListOfBox2d()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif