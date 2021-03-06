// File generated by CPPExt (CPP file)
//

#include "TColStd_ListIteratorOfSetListOfSetOfTransient.h"
#include "../Converter.h"
#include "TColStd_SetListOfSetOfTransient.h"
#include "../Standard/Standard_Transient.h"
#include "TColStd_ListNodeOfSetListOfSetOfTransient.h"


using namespace OCNaroWrappers;

OCTColStd_ListIteratorOfSetListOfSetOfTransient::OCTColStd_ListIteratorOfSetListOfSetOfTransient(TColStd_ListIteratorOfSetListOfSetOfTransient* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCTColStd_ListIteratorOfSetListOfSetOfTransient::OCTColStd_ListIteratorOfSetListOfSetOfTransient() 
{
  nativeHandle = new TColStd_ListIteratorOfSetListOfSetOfTransient();
}

OCTColStd_ListIteratorOfSetListOfSetOfTransient::OCTColStd_ListIteratorOfSetListOfSetOfTransient(OCNaroWrappers::OCTColStd_SetListOfSetOfTransient^ L) 
{
  nativeHandle = new TColStd_ListIteratorOfSetListOfSetOfTransient(*((TColStd_SetListOfSetOfTransient*)L->Handle));
}

 void OCTColStd_ListIteratorOfSetListOfSetOfTransient::Initialize(OCNaroWrappers::OCTColStd_SetListOfSetOfTransient^ L)
{
  ((TColStd_ListIteratorOfSetListOfSetOfTransient*)nativeHandle)->Initialize(*((TColStd_SetListOfSetOfTransient*)L->Handle));
}

 System::Boolean OCTColStd_ListIteratorOfSetListOfSetOfTransient::More()
{
  return OCConverter::StandardBooleanToBoolean(((TColStd_ListIteratorOfSetListOfSetOfTransient*)nativeHandle)->More());
}

 void OCTColStd_ListIteratorOfSetListOfSetOfTransient::Next()
{
  ((TColStd_ListIteratorOfSetListOfSetOfTransient*)nativeHandle)->Next();
}

OCStandard_Transient^ OCTColStd_ListIteratorOfSetListOfSetOfTransient::Value()
{
  Handle(Standard_Transient) tmp = ((TColStd_ListIteratorOfSetListOfSetOfTransient*)nativeHandle)->Value();
  return gcnew OCStandard_Transient(&tmp);
}


