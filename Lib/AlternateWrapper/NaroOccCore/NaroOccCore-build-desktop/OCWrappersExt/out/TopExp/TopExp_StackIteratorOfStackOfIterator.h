// File generated by CPPExt (MPV)
//
#ifndef _TopExp_StackIteratorOfStackOfIterator_OCWrappers_HeaderFile
#define _TopExp_StackIteratorOfStackOfIterator_OCWrappers_HeaderFile

// include native header
#include <TopExp_StackIteratorOfStackOfIterator.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{

ref class OCTopoDS_Iterator;
ref class OCTopExp_StackOfIterator;
ref class OCTopExp_StackNodeOfStackOfIterator;



public ref class OCTopExp_StackIteratorOfStackOfIterator  {

protected:
  TopExp_StackIteratorOfStackOfIterator* nativeHandle;
  OCTopExp_StackIteratorOfStackOfIterator(OCDummy^) {};

public:
  property TopExp_StackIteratorOfStackOfIterator* Handle
  {
    TopExp_StackIteratorOfStackOfIterator* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCTopExp_StackIteratorOfStackOfIterator(TopExp_StackIteratorOfStackOfIterator* nativeHandle);

// Methods PUBLIC


OCTopExp_StackIteratorOfStackOfIterator();


OCTopExp_StackIteratorOfStackOfIterator(OCNaroWrappers::OCTopExp_StackOfIterator^ S);


 /*instead*/  void Initialize(OCNaroWrappers::OCTopExp_StackOfIterator^ S) ;


 /*instead*/  System::Boolean More() ;


 /*instead*/  void Next() ;


 /*instead*/  OCTopoDS_Iterator^ Value() ;

~OCTopExp_StackIteratorOfStackOfIterator()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
