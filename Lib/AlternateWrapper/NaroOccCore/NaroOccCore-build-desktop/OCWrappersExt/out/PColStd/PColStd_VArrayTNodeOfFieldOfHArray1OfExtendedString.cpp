// File generated by CPPExt (CPP file)
//

#include "PColStd_VArrayTNodeOfFieldOfHArray1OfExtendedString.h"
#include "../Converter.h"
#include "../PCollection/PCollection_HExtendedString.h"
#include "PColStd_FieldOfHArray1OfExtendedString.h"
#include "PColStd_VArrayNodeOfFieldOfHArray1OfExtendedString.h"


using namespace OCNaroWrappers;

OCPColStd_VArrayTNodeOfFieldOfHArray1OfExtendedString::OCPColStd_VArrayTNodeOfFieldOfHArray1OfExtendedString(PColStd_VArrayTNodeOfFieldOfHArray1OfExtendedString* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCPColStd_VArrayTNodeOfFieldOfHArray1OfExtendedString::OCPColStd_VArrayTNodeOfFieldOfHArray1OfExtendedString() 
{
  nativeHandle = new PColStd_VArrayTNodeOfFieldOfHArray1OfExtendedString();
}

OCPColStd_VArrayTNodeOfFieldOfHArray1OfExtendedString::OCPColStd_VArrayTNodeOfFieldOfHArray1OfExtendedString(OCNaroWrappers::OCPCollection_HExtendedString^ aValue) 
{
  nativeHandle = new PColStd_VArrayTNodeOfFieldOfHArray1OfExtendedString(*((Handle_PCollection_HExtendedString*)aValue->Handle));
}

 void OCPColStd_VArrayTNodeOfFieldOfHArray1OfExtendedString::SetValue(OCNaroWrappers::OCPCollection_HExtendedString^ aValue)
{
  ((PColStd_VArrayTNodeOfFieldOfHArray1OfExtendedString*)nativeHandle)->SetValue(*((Handle_PCollection_HExtendedString*)aValue->Handle));
}

 Standard_Address OCPColStd_VArrayTNodeOfFieldOfHArray1OfExtendedString::Value()
{
  return ((PColStd_VArrayTNodeOfFieldOfHArray1OfExtendedString*)nativeHandle)->Value();
}

