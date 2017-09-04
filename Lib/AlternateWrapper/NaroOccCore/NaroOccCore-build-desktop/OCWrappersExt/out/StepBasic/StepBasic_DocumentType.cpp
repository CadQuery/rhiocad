// File generated by CPPExt (CPP file)
//

#include "StepBasic_DocumentType.h"
#include "../Converter.h"
#include "../TCollection/TCollection_HAsciiString.h"


using namespace OCNaroWrappers;

OCStepBasic_DocumentType::OCStepBasic_DocumentType(Handle(StepBasic_DocumentType)* nativeHandle) : OCMMgt_TShared((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_StepBasic_DocumentType(*nativeHandle);
}

OCStepBasic_DocumentType::OCStepBasic_DocumentType() : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_StepBasic_DocumentType(new StepBasic_DocumentType());
}

 void OCStepBasic_DocumentType::Init(OCNaroWrappers::OCTCollection_HAsciiString^ apdt)
{
  (*((Handle_StepBasic_DocumentType*)nativeHandle))->Init(*((Handle_TCollection_HAsciiString*)apdt->Handle));
}

OCTCollection_HAsciiString^ OCStepBasic_DocumentType::ProductDataType()
{
  Handle(TCollection_HAsciiString) tmp = (*((Handle_StepBasic_DocumentType*)nativeHandle))->ProductDataType();
  return gcnew OCTCollection_HAsciiString(&tmp);
}

 void OCStepBasic_DocumentType::SetProductDataType(OCNaroWrappers::OCTCollection_HAsciiString^ apdt)
{
  (*((Handle_StepBasic_DocumentType*)nativeHandle))->SetProductDataType(*((Handle_TCollection_HAsciiString*)apdt->Handle));
}

