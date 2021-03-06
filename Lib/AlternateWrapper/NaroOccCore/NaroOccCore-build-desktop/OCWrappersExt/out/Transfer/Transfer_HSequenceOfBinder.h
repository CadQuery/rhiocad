// File generated by CPPExt (Transient)
//
#ifndef _Transfer_HSequenceOfBinder_OCWrappers_HeaderFile
#define _Transfer_HSequenceOfBinder_OCWrappers_HeaderFile

// include the wrapped class
#include <Transfer_HSequenceOfBinder.hxx>
#include "../Converter.h"

#include "../MMgt/MMgt_TShared.h"

#include "Transfer_SequenceOfBinder.h"


namespace OCNaroWrappers
{

ref class OCTransfer_Binder;
ref class OCTransfer_SequenceOfBinder;



public ref class OCTransfer_HSequenceOfBinder : OCMMgt_TShared {

protected:
  // dummy constructor;
  OCTransfer_HSequenceOfBinder(OCDummy^) : OCMMgt_TShared((OCDummy^)nullptr) {};

public:

// constructor from native
OCTransfer_HSequenceOfBinder(Handle(Transfer_HSequenceOfBinder)* nativeHandle);

// Methods PUBLIC


OCTransfer_HSequenceOfBinder();


 /*instead*/  System::Boolean IsEmpty() ;


 /*instead*/  Standard_Integer Length() ;


 /*instead*/  void Clear() ;


 /*instead*/  void Append(OCNaroWrappers::OCTransfer_Binder^ anItem) ;


 /*instead*/  void Append(OCNaroWrappers::OCTransfer_HSequenceOfBinder^ aSequence) ;


 /*instead*/  void Prepend(OCNaroWrappers::OCTransfer_Binder^ anItem) ;


 /*instead*/  void Prepend(OCNaroWrappers::OCTransfer_HSequenceOfBinder^ aSequence) ;


 /*instead*/  void Reverse() ;


 /*instead*/  void InsertBefore(Standard_Integer anIndex, OCNaroWrappers::OCTransfer_Binder^ anItem) ;


 /*instead*/  void InsertBefore(Standard_Integer anIndex, OCNaroWrappers::OCTransfer_HSequenceOfBinder^ aSequence) ;


 /*instead*/  void InsertAfter(Standard_Integer anIndex, OCNaroWrappers::OCTransfer_Binder^ anItem) ;


 /*instead*/  void InsertAfter(Standard_Integer anIndex, OCNaroWrappers::OCTransfer_HSequenceOfBinder^ aSequence) ;


 /*instead*/  void Exchange(Standard_Integer anIndex, Standard_Integer anOtherIndex) ;


 /*instead*/  OCTransfer_HSequenceOfBinder^ Split(Standard_Integer anIndex) ;


 /*instead*/  void SetValue(Standard_Integer anIndex, OCNaroWrappers::OCTransfer_Binder^ anItem) ;


 /*instead*/  OCTransfer_Binder^ Value(Standard_Integer anIndex) ;


 /*instead*/  OCTransfer_Binder^ ChangeValue(Standard_Integer anIndex) ;


 /*instead*/  void Remove(Standard_Integer anIndex) ;


 /*instead*/  void Remove(Standard_Integer fromIndex, Standard_Integer toIndex) ;


 /*instead*/  OCTransfer_SequenceOfBinder^ Sequence() ;


 /*instead*/  OCTransfer_SequenceOfBinder^ ChangeSequence() ;


 /*instead*/  OCTransfer_HSequenceOfBinder^ ShallowCopy() ;

~OCTransfer_HSequenceOfBinder()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
