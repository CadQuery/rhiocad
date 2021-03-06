// File generated by CPPExt (CPP file)
//

#include "StepVisual_ColourSpecification.h"
#include "../Converter.h"
#include "../TCollection/TCollection_HAsciiString.h"


using namespace OCNaroWrappers;

OCStepVisual_ColourSpecification::OCStepVisual_ColourSpecification(Handle(StepVisual_ColourSpecification)* nativeHandle) : OCStepVisual_Colour((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_StepVisual_ColourSpecification(*nativeHandle);
}

OCStepVisual_ColourSpecification::OCStepVisual_ColourSpecification() : OCStepVisual_Colour((OCDummy^)nullptr)

{
  nativeHandle = new Handle_StepVisual_ColourSpecification(new StepVisual_ColourSpecification());
}

 void OCStepVisual_ColourSpecification::Init(OCNaroWrappers::OCTCollection_HAsciiString^ aName)
{
  (*((Handle_StepVisual_ColourSpecification*)nativeHandle))->Init(*((Handle_TCollection_HAsciiString*)aName->Handle));
}

 void OCStepVisual_ColourSpecification::SetName(OCNaroWrappers::OCTCollection_HAsciiString^ aName)
{
  (*((Handle_StepVisual_ColourSpecification*)nativeHandle))->SetName(*((Handle_TCollection_HAsciiString*)aName->Handle));
}

OCTCollection_HAsciiString^ OCStepVisual_ColourSpecification::Name()
{
  Handle(TCollection_HAsciiString) tmp = (*((Handle_StepVisual_ColourSpecification*)nativeHandle))->Name();
  return gcnew OCTCollection_HAsciiString(&tmp);
}


