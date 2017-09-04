// File generated by CPPExt (CPP file)
//

#include "StepShape_CsgSelect.h"
#include "../Converter.h"
#include "StepShape_BooleanResult.h"
#include "StepShape_CsgPrimitive.h"


using namespace OCNaroWrappers;

OCStepShape_CsgSelect::OCStepShape_CsgSelect(StepShape_CsgSelect* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCStepShape_CsgSelect::OCStepShape_CsgSelect() 
{
  nativeHandle = new StepShape_CsgSelect();
}

 void OCStepShape_CsgSelect::SetTypeOfContent(Standard_Integer aTypeOfContent)
{
  ((StepShape_CsgSelect*)nativeHandle)->SetTypeOfContent(aTypeOfContent);
}

 Standard_Integer OCStepShape_CsgSelect::TypeOfContent()
{
  return ((StepShape_CsgSelect*)nativeHandle)->TypeOfContent();
}

OCStepShape_BooleanResult^ OCStepShape_CsgSelect::BooleanResult()
{
  StepShape_BooleanResult* tmp = new StepShape_BooleanResult();
  *tmp = ((StepShape_CsgSelect*)nativeHandle)->BooleanResult();
  return gcnew OCStepShape_BooleanResult(tmp);
}

 void OCStepShape_CsgSelect::SetBooleanResult(OCNaroWrappers::OCStepShape_BooleanResult^ aBooleanResult)
{
  ((StepShape_CsgSelect*)nativeHandle)->SetBooleanResult(*((StepShape_BooleanResult*)aBooleanResult->Handle));
}

OCStepShape_CsgPrimitive^ OCStepShape_CsgSelect::CsgPrimitive()
{
  StepShape_CsgPrimitive* tmp = new StepShape_CsgPrimitive();
  *tmp = ((StepShape_CsgSelect*)nativeHandle)->CsgPrimitive();
  return gcnew OCStepShape_CsgPrimitive(tmp);
}

 void OCStepShape_CsgSelect::SetCsgPrimitive(OCNaroWrappers::OCStepShape_CsgPrimitive^ aCsgPrimitive)
{
  ((StepShape_CsgSelect*)nativeHandle)->SetCsgPrimitive(*((StepShape_CsgPrimitive*)aCsgPrimitive->Handle));
}

