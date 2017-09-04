// File generated by CPPExt (CPP file)
//

#include "StepVisual_SurfaceStyleElementSelect.h"
#include "../Converter.h"
#include "../Standard/Standard_Transient.h"
#include "StepVisual_SurfaceStyleFillArea.h"
#include "StepVisual_SurfaceStyleBoundary.h"
#include "StepVisual_SurfaceStyleParameterLine.h"


using namespace OCNaroWrappers;

OCStepVisual_SurfaceStyleElementSelect::OCStepVisual_SurfaceStyleElementSelect(StepVisual_SurfaceStyleElementSelect* nativeHandle) : OCStepData_SelectType((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCStepVisual_SurfaceStyleElementSelect::OCStepVisual_SurfaceStyleElementSelect() : OCStepData_SelectType((OCDummy^)nullptr)

{
  nativeHandle = new StepVisual_SurfaceStyleElementSelect();
}

 Standard_Integer OCStepVisual_SurfaceStyleElementSelect::CaseNum(OCNaroWrappers::OCStandard_Transient^ ent)
{
  return ((StepVisual_SurfaceStyleElementSelect*)nativeHandle)->CaseNum(*((Handle_Standard_Transient*)ent->Handle));
}

OCStepVisual_SurfaceStyleFillArea^ OCStepVisual_SurfaceStyleElementSelect::SurfaceStyleFillArea()
{
  Handle(StepVisual_SurfaceStyleFillArea) tmp = ((StepVisual_SurfaceStyleElementSelect*)nativeHandle)->SurfaceStyleFillArea();
  return gcnew OCStepVisual_SurfaceStyleFillArea(&tmp);
}

OCStepVisual_SurfaceStyleBoundary^ OCStepVisual_SurfaceStyleElementSelect::SurfaceStyleBoundary()
{
  Handle(StepVisual_SurfaceStyleBoundary) tmp = ((StepVisual_SurfaceStyleElementSelect*)nativeHandle)->SurfaceStyleBoundary();
  return gcnew OCStepVisual_SurfaceStyleBoundary(&tmp);
}

OCStepVisual_SurfaceStyleParameterLine^ OCStepVisual_SurfaceStyleElementSelect::SurfaceStyleParameterLine()
{
  Handle(StepVisual_SurfaceStyleParameterLine) tmp = ((StepVisual_SurfaceStyleElementSelect*)nativeHandle)->SurfaceStyleParameterLine();
  return gcnew OCStepVisual_SurfaceStyleParameterLine(&tmp);
}

