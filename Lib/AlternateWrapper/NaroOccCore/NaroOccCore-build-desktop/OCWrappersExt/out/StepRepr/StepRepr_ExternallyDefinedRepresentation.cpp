// File generated by CPPExt (CPP file)
//

#include "StepRepr_ExternallyDefinedRepresentation.h"
#include "../Converter.h"


using namespace OCNaroWrappers;

OCStepRepr_ExternallyDefinedRepresentation::OCStepRepr_ExternallyDefinedRepresentation(Handle(StepRepr_ExternallyDefinedRepresentation)* nativeHandle) : OCStepRepr_Representation((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_StepRepr_ExternallyDefinedRepresentation(*nativeHandle);
}

OCStepRepr_ExternallyDefinedRepresentation::OCStepRepr_ExternallyDefinedRepresentation() : OCStepRepr_Representation((OCDummy^)nullptr)

{
  nativeHandle = new Handle_StepRepr_ExternallyDefinedRepresentation(new StepRepr_ExternallyDefinedRepresentation());
}

