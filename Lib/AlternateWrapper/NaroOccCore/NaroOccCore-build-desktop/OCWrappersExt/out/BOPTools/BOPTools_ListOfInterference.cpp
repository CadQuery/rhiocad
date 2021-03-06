// File generated by CPPExt (CPP file)
//

#include "BOPTools_ListOfInterference.h"
#include "../Converter.h"
#include "BOPTools_ListIteratorOfListOfInterference.h"
#include "BOPTools_Interference.h"
#include "BOPTools_ListNodeOfListOfInterference.h"


using namespace OCNaroWrappers;

OCBOPTools_ListOfInterference::OCBOPTools_ListOfInterference(BOPTools_ListOfInterference* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCBOPTools_ListOfInterference::OCBOPTools_ListOfInterference() 
{
  nativeHandle = new BOPTools_ListOfInterference();
}

 void OCBOPTools_ListOfInterference::Assign(OCNaroWrappers::OCBOPTools_ListOfInterference^ Other)
{
  ((BOPTools_ListOfInterference*)nativeHandle)->Assign(*((BOPTools_ListOfInterference*)Other->Handle));
}

 Standard_Integer OCBOPTools_ListOfInterference::Extent()
{
  return ((BOPTools_ListOfInterference*)nativeHandle)->Extent();
}

 System::Boolean OCBOPTools_ListOfInterference::IsEmpty()
{
  return OCConverter::StandardBooleanToBoolean(((BOPTools_ListOfInterference*)nativeHandle)->IsEmpty());
}

 void OCBOPTools_ListOfInterference::Prepend(OCNaroWrappers::OCBOPTools_Interference^ I)
{
  ((BOPTools_ListOfInterference*)nativeHandle)->Prepend(*((BOPTools_Interference*)I->Handle));
}

 void OCBOPTools_ListOfInterference::Prepend(OCNaroWrappers::OCBOPTools_Interference^ I, OCNaroWrappers::OCBOPTools_ListIteratorOfListOfInterference^ theIt)
{
  ((BOPTools_ListOfInterference*)nativeHandle)->Prepend(*((BOPTools_Interference*)I->Handle), *((BOPTools_ListIteratorOfListOfInterference*)theIt->Handle));
}

 void OCBOPTools_ListOfInterference::Prepend(OCNaroWrappers::OCBOPTools_ListOfInterference^ Other)
{
  ((BOPTools_ListOfInterference*)nativeHandle)->Prepend(*((BOPTools_ListOfInterference*)Other->Handle));
}

 void OCBOPTools_ListOfInterference::Append(OCNaroWrappers::OCBOPTools_Interference^ I)
{
  ((BOPTools_ListOfInterference*)nativeHandle)->Append(*((BOPTools_Interference*)I->Handle));
}

 void OCBOPTools_ListOfInterference::Append(OCNaroWrappers::OCBOPTools_Interference^ I, OCNaroWrappers::OCBOPTools_ListIteratorOfListOfInterference^ theIt)
{
  ((BOPTools_ListOfInterference*)nativeHandle)->Append(*((BOPTools_Interference*)I->Handle), *((BOPTools_ListIteratorOfListOfInterference*)theIt->Handle));
}

 void OCBOPTools_ListOfInterference::Append(OCNaroWrappers::OCBOPTools_ListOfInterference^ Other)
{
  ((BOPTools_ListOfInterference*)nativeHandle)->Append(*((BOPTools_ListOfInterference*)Other->Handle));
}

OCBOPTools_Interference^ OCBOPTools_ListOfInterference::First()
{
  BOPTools_Interference* tmp = new BOPTools_Interference();
  *tmp = ((BOPTools_ListOfInterference*)nativeHandle)->First();
  return gcnew OCBOPTools_Interference(tmp);
}

OCBOPTools_Interference^ OCBOPTools_ListOfInterference::Last()
{
  BOPTools_Interference* tmp = new BOPTools_Interference();
  *tmp = ((BOPTools_ListOfInterference*)nativeHandle)->Last();
  return gcnew OCBOPTools_Interference(tmp);
}

 void OCBOPTools_ListOfInterference::RemoveFirst()
{
  ((BOPTools_ListOfInterference*)nativeHandle)->RemoveFirst();
}

 void OCBOPTools_ListOfInterference::Remove(OCNaroWrappers::OCBOPTools_ListIteratorOfListOfInterference^ It)
{
  ((BOPTools_ListOfInterference*)nativeHandle)->Remove(*((BOPTools_ListIteratorOfListOfInterference*)It->Handle));
}

 void OCBOPTools_ListOfInterference::InsertBefore(OCNaroWrappers::OCBOPTools_Interference^ I, OCNaroWrappers::OCBOPTools_ListIteratorOfListOfInterference^ It)
{
  ((BOPTools_ListOfInterference*)nativeHandle)->InsertBefore(*((BOPTools_Interference*)I->Handle), *((BOPTools_ListIteratorOfListOfInterference*)It->Handle));
}

 void OCBOPTools_ListOfInterference::InsertBefore(OCNaroWrappers::OCBOPTools_ListOfInterference^ Other, OCNaroWrappers::OCBOPTools_ListIteratorOfListOfInterference^ It)
{
  ((BOPTools_ListOfInterference*)nativeHandle)->InsertBefore(*((BOPTools_ListOfInterference*)Other->Handle), *((BOPTools_ListIteratorOfListOfInterference*)It->Handle));
}

 void OCBOPTools_ListOfInterference::InsertAfter(OCNaroWrappers::OCBOPTools_Interference^ I, OCNaroWrappers::OCBOPTools_ListIteratorOfListOfInterference^ It)
{
  ((BOPTools_ListOfInterference*)nativeHandle)->InsertAfter(*((BOPTools_Interference*)I->Handle), *((BOPTools_ListIteratorOfListOfInterference*)It->Handle));
}

 void OCBOPTools_ListOfInterference::InsertAfter(OCNaroWrappers::OCBOPTools_ListOfInterference^ Other, OCNaroWrappers::OCBOPTools_ListIteratorOfListOfInterference^ It)
{
  ((BOPTools_ListOfInterference*)nativeHandle)->InsertAfter(*((BOPTools_ListOfInterference*)Other->Handle), *((BOPTools_ListIteratorOfListOfInterference*)It->Handle));
}


