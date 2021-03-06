// File generated by CPPExt (CPP file)
//

#include "STEPControl_Reader.h"
#include "../Converter.h"
#include "../XSControl/XSControl_WorkSession.h"
#include "../StepData/StepData_StepModel.h"
#include "../TColStd/TColStd_SequenceOfAsciiString.h"
#include "../StepRepr/StepRepr_RepresentationContext.h"
#include "../TColStd/TColStd_Array1OfAsciiString.h"
#include "../TColStd/TColStd_Array1OfReal.h"


using namespace OCNaroWrappers;

OCSTEPControl_Reader::OCSTEPControl_Reader(STEPControl_Reader* nativeHandle) : OCXSControl_Reader((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCSTEPControl_Reader::OCSTEPControl_Reader() : OCXSControl_Reader((OCDummy^)nullptr)

{
  nativeHandle = new STEPControl_Reader();
}

OCSTEPControl_Reader::OCSTEPControl_Reader(OCNaroWrappers::OCXSControl_WorkSession^ WS, System::Boolean scratch) : OCXSControl_Reader((OCDummy^)nullptr)

{
  nativeHandle = new STEPControl_Reader(*((Handle_XSControl_WorkSession*)WS->Handle), OCConverter::BooleanToStandardBoolean(scratch));
}

OCStepData_StepModel^ OCSTEPControl_Reader::StepModel()
{
  Handle(StepData_StepModel) tmp = ((STEPControl_Reader*)nativeHandle)->StepModel();
  return gcnew OCStepData_StepModel(&tmp);
}

 System::Boolean OCSTEPControl_Reader::TransferRoot(Standard_Integer num)
{
  return OCConverter::StandardBooleanToBoolean(((STEPControl_Reader*)nativeHandle)->TransferRoot(num));
}

 Standard_Integer OCSTEPControl_Reader::NbRootsForTransfer()
{
  return ((STEPControl_Reader*)nativeHandle)->NbRootsForTransfer();
}

 void OCSTEPControl_Reader::FileUnits(OCNaroWrappers::OCTColStd_SequenceOfAsciiString^ theUnitLengthNames, OCNaroWrappers::OCTColStd_SequenceOfAsciiString^ theUnitAngleNames, OCNaroWrappers::OCTColStd_SequenceOfAsciiString^ theUnitSolidAngleNames)
{
  ((STEPControl_Reader*)nativeHandle)->FileUnits(*((TColStd_SequenceOfAsciiString*)theUnitLengthNames->Handle), *((TColStd_SequenceOfAsciiString*)theUnitAngleNames->Handle), *((TColStd_SequenceOfAsciiString*)theUnitSolidAngleNames->Handle));
}


