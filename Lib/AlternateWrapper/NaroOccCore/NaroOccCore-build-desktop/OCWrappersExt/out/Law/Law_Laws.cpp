// File generated by CPPExt (CPP file)
//

#include "Law_Laws.h"
#include "../Converter.h"
#include "Law_ListIteratorOfLaws.h"
#include "Law_Function.h"
#include "Law_ListNodeOfLaws.h"


using namespace OCNaroWrappers;

OCLaw_Laws::OCLaw_Laws(Law_Laws* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCLaw_Laws::OCLaw_Laws() 
{
  nativeHandle = new Law_Laws();
}

 void OCLaw_Laws::Assign(OCNaroWrappers::OCLaw_Laws^ Other)
{
  ((Law_Laws*)nativeHandle)->Assign(*((Law_Laws*)Other->Handle));
}

 Standard_Integer OCLaw_Laws::Extent()
{
  return ((Law_Laws*)nativeHandle)->Extent();
}

 System::Boolean OCLaw_Laws::IsEmpty()
{
  return OCConverter::StandardBooleanToBoolean(((Law_Laws*)nativeHandle)->IsEmpty());
}

 void OCLaw_Laws::Prepend(OCNaroWrappers::OCLaw_Function^ I)
{
  ((Law_Laws*)nativeHandle)->Prepend(*((Handle_Law_Function*)I->Handle));
}

 void OCLaw_Laws::Prepend(OCNaroWrappers::OCLaw_Function^ I, OCNaroWrappers::OCLaw_ListIteratorOfLaws^ theIt)
{
  ((Law_Laws*)nativeHandle)->Prepend(*((Handle_Law_Function*)I->Handle), *((Law_ListIteratorOfLaws*)theIt->Handle));
}

 void OCLaw_Laws::Prepend(OCNaroWrappers::OCLaw_Laws^ Other)
{
  ((Law_Laws*)nativeHandle)->Prepend(*((Law_Laws*)Other->Handle));
}

 void OCLaw_Laws::Append(OCNaroWrappers::OCLaw_Function^ I)
{
  ((Law_Laws*)nativeHandle)->Append(*((Handle_Law_Function*)I->Handle));
}

 void OCLaw_Laws::Append(OCNaroWrappers::OCLaw_Function^ I, OCNaroWrappers::OCLaw_ListIteratorOfLaws^ theIt)
{
  ((Law_Laws*)nativeHandle)->Append(*((Handle_Law_Function*)I->Handle), *((Law_ListIteratorOfLaws*)theIt->Handle));
}

 void OCLaw_Laws::Append(OCNaroWrappers::OCLaw_Laws^ Other)
{
  ((Law_Laws*)nativeHandle)->Append(*((Law_Laws*)Other->Handle));
}

OCLaw_Function^ OCLaw_Laws::First()
{
  Handle(Law_Function) tmp = ((Law_Laws*)nativeHandle)->First();
  return gcnew OCLaw_Function(&tmp);
}

OCLaw_Function^ OCLaw_Laws::Last()
{
  Handle(Law_Function) tmp = ((Law_Laws*)nativeHandle)->Last();
  return gcnew OCLaw_Function(&tmp);
}

 void OCLaw_Laws::RemoveFirst()
{
  ((Law_Laws*)nativeHandle)->RemoveFirst();
}

 void OCLaw_Laws::Remove(OCNaroWrappers::OCLaw_ListIteratorOfLaws^ It)
{
  ((Law_Laws*)nativeHandle)->Remove(*((Law_ListIteratorOfLaws*)It->Handle));
}

 void OCLaw_Laws::InsertBefore(OCNaroWrappers::OCLaw_Function^ I, OCNaroWrappers::OCLaw_ListIteratorOfLaws^ It)
{
  ((Law_Laws*)nativeHandle)->InsertBefore(*((Handle_Law_Function*)I->Handle), *((Law_ListIteratorOfLaws*)It->Handle));
}

 void OCLaw_Laws::InsertBefore(OCNaroWrappers::OCLaw_Laws^ Other, OCNaroWrappers::OCLaw_ListIteratorOfLaws^ It)
{
  ((Law_Laws*)nativeHandle)->InsertBefore(*((Law_Laws*)Other->Handle), *((Law_ListIteratorOfLaws*)It->Handle));
}

 void OCLaw_Laws::InsertAfter(OCNaroWrappers::OCLaw_Function^ I, OCNaroWrappers::OCLaw_ListIteratorOfLaws^ It)
{
  ((Law_Laws*)nativeHandle)->InsertAfter(*((Handle_Law_Function*)I->Handle), *((Law_ListIteratorOfLaws*)It->Handle));
}

 void OCLaw_Laws::InsertAfter(OCNaroWrappers::OCLaw_Laws^ Other, OCNaroWrappers::OCLaw_ListIteratorOfLaws^ It)
{
  ((Law_Laws*)nativeHandle)->InsertAfter(*((Law_Laws*)Other->Handle), *((Law_ListIteratorOfLaws*)It->Handle));
}


