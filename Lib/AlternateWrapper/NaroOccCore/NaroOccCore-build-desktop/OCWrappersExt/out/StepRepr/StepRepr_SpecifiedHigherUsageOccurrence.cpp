// File generated by CPPExt (CPP file)
//

#include "StepRepr_SpecifiedHigherUsageOccurrence.h"
#include "../Converter.h"
#include "StepRepr_AssemblyComponentUsage.h"
#include "StepRepr_NextAssemblyUsageOccurrence.h"
#include "../TCollection/TCollection_HAsciiString.h"
#include "../StepBasic/StepBasic_ProductDefinition.h"


using namespace OCNaroWrappers;

OCStepRepr_SpecifiedHigherUsageOccurrence::OCStepRepr_SpecifiedHigherUsageOccurrence(Handle(StepRepr_SpecifiedHigherUsageOccurrence)* nativeHandle) : OCStepRepr_AssemblyComponentUsage((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_StepRepr_SpecifiedHigherUsageOccurrence(*nativeHandle);
}

OCStepRepr_SpecifiedHigherUsageOccurrence::OCStepRepr_SpecifiedHigherUsageOccurrence() : OCStepRepr_AssemblyComponentUsage((OCDummy^)nullptr)

{
  nativeHandle = new Handle_StepRepr_SpecifiedHigherUsageOccurrence(new StepRepr_SpecifiedHigherUsageOccurrence());
}

 void OCStepRepr_SpecifiedHigherUsageOccurrence::Init(OCNaroWrappers::OCTCollection_HAsciiString^ aProductDefinitionRelationship_Id, OCNaroWrappers::OCTCollection_HAsciiString^ aProductDefinitionRelationship_Name, System::Boolean hasProductDefinitionRelationship_Description, OCNaroWrappers::OCTCollection_HAsciiString^ aProductDefinitionRelationship_Description, OCNaroWrappers::OCStepBasic_ProductDefinition^ aProductDefinitionRelationship_RelatingProductDefinition, OCNaroWrappers::OCStepBasic_ProductDefinition^ aProductDefinitionRelationship_RelatedProductDefinition, System::Boolean hasAssemblyComponentUsage_ReferenceDesignator, OCNaroWrappers::OCTCollection_HAsciiString^ aAssemblyComponentUsage_ReferenceDesignator, OCNaroWrappers::OCStepRepr_AssemblyComponentUsage^ aUpperUsage, OCNaroWrappers::OCStepRepr_NextAssemblyUsageOccurrence^ aNextUsage)
{
  (*((Handle_StepRepr_SpecifiedHigherUsageOccurrence*)nativeHandle))->Init(*((Handle_TCollection_HAsciiString*)aProductDefinitionRelationship_Id->Handle), *((Handle_TCollection_HAsciiString*)aProductDefinitionRelationship_Name->Handle), OCConverter::BooleanToStandardBoolean(hasProductDefinitionRelationship_Description), *((Handle_TCollection_HAsciiString*)aProductDefinitionRelationship_Description->Handle), *((Handle_StepBasic_ProductDefinition*)aProductDefinitionRelationship_RelatingProductDefinition->Handle), *((Handle_StepBasic_ProductDefinition*)aProductDefinitionRelationship_RelatedProductDefinition->Handle), OCConverter::BooleanToStandardBoolean(hasAssemblyComponentUsage_ReferenceDesignator), *((Handle_TCollection_HAsciiString*)aAssemblyComponentUsage_ReferenceDesignator->Handle), *((Handle_StepRepr_AssemblyComponentUsage*)aUpperUsage->Handle), *((Handle_StepRepr_NextAssemblyUsageOccurrence*)aNextUsage->Handle));
}

OCStepRepr_AssemblyComponentUsage^ OCStepRepr_SpecifiedHigherUsageOccurrence::UpperUsage()
{
  Handle(StepRepr_AssemblyComponentUsage) tmp = (*((Handle_StepRepr_SpecifiedHigherUsageOccurrence*)nativeHandle))->UpperUsage();
  return gcnew OCStepRepr_AssemblyComponentUsage(&tmp);
}

 void OCStepRepr_SpecifiedHigherUsageOccurrence::SetUpperUsage(OCNaroWrappers::OCStepRepr_AssemblyComponentUsage^ UpperUsage)
{
  (*((Handle_StepRepr_SpecifiedHigherUsageOccurrence*)nativeHandle))->SetUpperUsage(*((Handle_StepRepr_AssemblyComponentUsage*)UpperUsage->Handle));
}

OCStepRepr_NextAssemblyUsageOccurrence^ OCStepRepr_SpecifiedHigherUsageOccurrence::NextUsage()
{
  Handle(StepRepr_NextAssemblyUsageOccurrence) tmp = (*((Handle_StepRepr_SpecifiedHigherUsageOccurrence*)nativeHandle))->NextUsage();
  return gcnew OCStepRepr_NextAssemblyUsageOccurrence(&tmp);
}

 void OCStepRepr_SpecifiedHigherUsageOccurrence::SetNextUsage(OCNaroWrappers::OCStepRepr_NextAssemblyUsageOccurrence^ NextUsage)
{
  (*((Handle_StepRepr_SpecifiedHigherUsageOccurrence*)nativeHandle))->SetNextUsage(*((Handle_StepRepr_NextAssemblyUsageOccurrence*)NextUsage->Handle));
}

