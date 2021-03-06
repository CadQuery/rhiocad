// File generated by CPPExt (MPV)
//
#ifndef _TColStd_QueueOfInteger_OCWrappers_HeaderFile
#define _TColStd_QueueOfInteger_OCWrappers_HeaderFile

// include native header
#include <TColStd_QueueOfInteger.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{

ref class OCTColStd_QueueNodeOfQueueOfInteger;



public ref class OCTColStd_QueueOfInteger  {

protected:
  TColStd_QueueOfInteger* nativeHandle;
  OCTColStd_QueueOfInteger(OCDummy^) {};

public:
  property TColStd_QueueOfInteger* Handle
  {
    TColStd_QueueOfInteger* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCTColStd_QueueOfInteger(TColStd_QueueOfInteger* nativeHandle);

// Methods PUBLIC


OCTColStd_QueueOfInteger();


 /*instead*/  OCTColStd_QueueOfInteger^ Assign(OCNaroWrappers::OCTColStd_QueueOfInteger^ Other) ;


 /*instead*/  Standard_Integer Length() ;


 /*instead*/  System::Boolean IsEmpty() ;


 /*instead*/  Standard_Integer Front() ;


 /*instead*/  void Push(Standard_Integer T) ;


 /*instead*/  void Pop() ;


 /*instead*/  Standard_Integer ChangeFront() ;

~OCTColStd_QueueOfInteger()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
