// File generated by CPPExt (CPP file)
//

#include "BRepOffsetAPI_SequenceNodeOfSequenceOfSequenceOfReal.h"
#include "../Converter.h"
#include "../TColStd/TColStd_SequenceOfReal.h"
#include "BRepOffsetAPI_SequenceOfSequenceOfReal.h"


using namespace OCNaroWrappers;

OCBRepOffsetAPI_SequenceNodeOfSequenceOfSequenceOfReal::OCBRepOffsetAPI_SequenceNodeOfSequenceOfSequenceOfReal(Handle(BRepOffsetAPI_SequenceNodeOfSequenceOfSequenceOfReal)* nativeHandle) : OCTCollection_SeqNode((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_BRepOffsetAPI_SequenceNodeOfSequenceOfSequenceOfReal(*nativeHandle);
}

OCBRepOffsetAPI_SequenceNodeOfSequenceOfSequenceOfReal::OCBRepOffsetAPI_SequenceNodeOfSequenceOfSequenceOfReal(OCNaroWrappers::OCTColStd_SequenceOfReal^ I, TCollection_SeqNodePtr n, TCollection_SeqNodePtr p) : OCTCollection_SeqNode((OCDummy^)nullptr)

{
  nativeHandle = new Handle_BRepOffsetAPI_SequenceNodeOfSequenceOfSequenceOfReal(new BRepOffsetAPI_SequenceNodeOfSequenceOfSequenceOfReal(*((TColStd_SequenceOfReal*)I->Handle), n, p));
}

OCTColStd_SequenceOfReal^ OCBRepOffsetAPI_SequenceNodeOfSequenceOfSequenceOfReal::Value()
{
  TColStd_SequenceOfReal* tmp = new TColStd_SequenceOfReal();
  *tmp = (*((Handle_BRepOffsetAPI_SequenceNodeOfSequenceOfSequenceOfReal*)nativeHandle))->Value();
  return gcnew OCTColStd_SequenceOfReal(tmp);
}


