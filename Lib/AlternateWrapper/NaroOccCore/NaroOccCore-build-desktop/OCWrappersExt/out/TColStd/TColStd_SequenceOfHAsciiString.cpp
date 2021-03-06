// File generated by CPPExt (CPP file)
//

#include "TColStd_SequenceOfHAsciiString.h"
#include "../Converter.h"
#include "../TCollection/TCollection_HAsciiString.h"
#include "TColStd_SequenceNodeOfSequenceOfHAsciiString.h"


using namespace OCNaroWrappers;

OCTColStd_SequenceOfHAsciiString::OCTColStd_SequenceOfHAsciiString(TColStd_SequenceOfHAsciiString* nativeHandle) : OCTCollection_BaseSequence((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCTColStd_SequenceOfHAsciiString::OCTColStd_SequenceOfHAsciiString() : OCTCollection_BaseSequence((OCDummy^)nullptr)

{
  nativeHandle = new TColStd_SequenceOfHAsciiString();
}

OCTColStd_SequenceOfHAsciiString^ OCTColStd_SequenceOfHAsciiString::Assign(OCNaroWrappers::OCTColStd_SequenceOfHAsciiString^ Other)
{
  TColStd_SequenceOfHAsciiString* tmp = new TColStd_SequenceOfHAsciiString();
  *tmp = ((TColStd_SequenceOfHAsciiString*)nativeHandle)->Assign(*((TColStd_SequenceOfHAsciiString*)Other->Handle));
  return gcnew OCTColStd_SequenceOfHAsciiString(tmp);
}

 void OCTColStd_SequenceOfHAsciiString::Append(OCNaroWrappers::OCTCollection_HAsciiString^ T)
{
  ((TColStd_SequenceOfHAsciiString*)nativeHandle)->Append(*((Handle_TCollection_HAsciiString*)T->Handle));
}

 void OCTColStd_SequenceOfHAsciiString::Append(OCNaroWrappers::OCTColStd_SequenceOfHAsciiString^ S)
{
  ((TColStd_SequenceOfHAsciiString*)nativeHandle)->Append(*((TColStd_SequenceOfHAsciiString*)S->Handle));
}

 void OCTColStd_SequenceOfHAsciiString::Prepend(OCNaroWrappers::OCTCollection_HAsciiString^ T)
{
  ((TColStd_SequenceOfHAsciiString*)nativeHandle)->Prepend(*((Handle_TCollection_HAsciiString*)T->Handle));
}

 void OCTColStd_SequenceOfHAsciiString::Prepend(OCNaroWrappers::OCTColStd_SequenceOfHAsciiString^ S)
{
  ((TColStd_SequenceOfHAsciiString*)nativeHandle)->Prepend(*((TColStd_SequenceOfHAsciiString*)S->Handle));
}

 void OCTColStd_SequenceOfHAsciiString::InsertBefore(Standard_Integer Index, OCNaroWrappers::OCTCollection_HAsciiString^ T)
{
  ((TColStd_SequenceOfHAsciiString*)nativeHandle)->InsertBefore(Index, *((Handle_TCollection_HAsciiString*)T->Handle));
}

 void OCTColStd_SequenceOfHAsciiString::InsertBefore(Standard_Integer Index, OCNaroWrappers::OCTColStd_SequenceOfHAsciiString^ S)
{
  ((TColStd_SequenceOfHAsciiString*)nativeHandle)->InsertBefore(Index, *((TColStd_SequenceOfHAsciiString*)S->Handle));
}

 void OCTColStd_SequenceOfHAsciiString::InsertAfter(Standard_Integer Index, OCNaroWrappers::OCTCollection_HAsciiString^ T)
{
  ((TColStd_SequenceOfHAsciiString*)nativeHandle)->InsertAfter(Index, *((Handle_TCollection_HAsciiString*)T->Handle));
}

 void OCTColStd_SequenceOfHAsciiString::InsertAfter(Standard_Integer Index, OCNaroWrappers::OCTColStd_SequenceOfHAsciiString^ S)
{
  ((TColStd_SequenceOfHAsciiString*)nativeHandle)->InsertAfter(Index, *((TColStd_SequenceOfHAsciiString*)S->Handle));
}

OCTCollection_HAsciiString^ OCTColStd_SequenceOfHAsciiString::First()
{
  Handle(TCollection_HAsciiString) tmp = ((TColStd_SequenceOfHAsciiString*)nativeHandle)->First();
  return gcnew OCTCollection_HAsciiString(&tmp);
}

OCTCollection_HAsciiString^ OCTColStd_SequenceOfHAsciiString::Last()
{
  Handle(TCollection_HAsciiString) tmp = ((TColStd_SequenceOfHAsciiString*)nativeHandle)->Last();
  return gcnew OCTCollection_HAsciiString(&tmp);
}

 void OCTColStd_SequenceOfHAsciiString::Split(Standard_Integer Index, OCNaroWrappers::OCTColStd_SequenceOfHAsciiString^ Sub)
{
  ((TColStd_SequenceOfHAsciiString*)nativeHandle)->Split(Index, *((TColStd_SequenceOfHAsciiString*)Sub->Handle));
}

OCTCollection_HAsciiString^ OCTColStd_SequenceOfHAsciiString::Value(Standard_Integer Index)
{
  Handle(TCollection_HAsciiString) tmp = ((TColStd_SequenceOfHAsciiString*)nativeHandle)->Value(Index);
  return gcnew OCTCollection_HAsciiString(&tmp);
}

 void OCTColStd_SequenceOfHAsciiString::SetValue(Standard_Integer Index, OCNaroWrappers::OCTCollection_HAsciiString^ I)
{
  ((TColStd_SequenceOfHAsciiString*)nativeHandle)->SetValue(Index, *((Handle_TCollection_HAsciiString*)I->Handle));
}

OCTCollection_HAsciiString^ OCTColStd_SequenceOfHAsciiString::ChangeValue(Standard_Integer Index)
{
  Handle(TCollection_HAsciiString) tmp = ((TColStd_SequenceOfHAsciiString*)nativeHandle)->ChangeValue(Index);
  return gcnew OCTCollection_HAsciiString(&tmp);
}

 void OCTColStd_SequenceOfHAsciiString::Remove(Standard_Integer Index)
{
  ((TColStd_SequenceOfHAsciiString*)nativeHandle)->Remove(Index);
}

 void OCTColStd_SequenceOfHAsciiString::Remove(Standard_Integer FromIndex, Standard_Integer ToIndex)
{
  ((TColStd_SequenceOfHAsciiString*)nativeHandle)->Remove(FromIndex, ToIndex);
}


