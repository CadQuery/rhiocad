// File generated by CPPExt (CPP file)
//

#include "TColStd_SetIteratorOfSetOfTransient.h"
#include "../Converter.h"
#include "../Standard/Standard_Transient.h"
#include "TColStd_SetOfTransient.h"
#include "TColStd_SetListOfSetOfTransient.h"
#include "TColStd_ListNodeOfSetListOfSetOfTransient.h"
#include "TColStd_ListIteratorOfSetListOfSetOfTransient.h"


using namespace OCNaroWrappers;

OCTColStd_SetIteratorOfSetOfTransient::OCTColStd_SetIteratorOfSetOfTransient(TColStd_SetIteratorOfSetOfTransient* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCTColStd_SetIteratorOfSetOfTransient::OCTColStd_SetIteratorOfSetOfTransient() 
{
  nativeHandle = new TColStd_SetIteratorOfSetOfTransient();
}

OCTColStd_SetIteratorOfSetOfTransient::OCTColStd_SetIteratorOfSetOfTransient(OCNaroWrappers::OCTColStd_SetOfTransient^ S) 
{
  nativeHandle = new TColStd_SetIteratorOfSetOfTransient(*((TColStd_SetOfTransient*)S->Handle));
}

 void OCTColStd_SetIteratorOfSetOfTransient::Initialize(OCNaroWrappers::OCTColStd_SetOfTransient^ S)
{
  ((TColStd_SetIteratorOfSetOfTransient*)nativeHandle)->Initialize(*((TColStd_SetOfTransient*)S->Handle));
}

 System::Boolean OCTColStd_SetIteratorOfSetOfTransient::More()
{
  return OCConverter::StandardBooleanToBoolean(((TColStd_SetIteratorOfSetOfTransient*)nativeHandle)->More());
}

 void OCTColStd_SetIteratorOfSetOfTransient::Next()
{
  ((TColStd_SetIteratorOfSetOfTransient*)nativeHandle)->Next();
}

OCStandard_Transient^ OCTColStd_SetIteratorOfSetOfTransient::Value()
{
  Handle(Standard_Transient) tmp = ((TColStd_SetIteratorOfSetOfTransient*)nativeHandle)->Value();
  return gcnew OCStandard_Transient(&tmp);
}


