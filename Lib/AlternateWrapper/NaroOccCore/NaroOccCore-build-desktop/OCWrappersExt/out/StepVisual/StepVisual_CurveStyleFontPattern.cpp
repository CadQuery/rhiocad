// File generated by CPPExt (CPP file)
//

#include "StepVisual_CurveStyleFontPattern.h"
#include "../Converter.h"


using namespace OCNaroWrappers;

OCStepVisual_CurveStyleFontPattern::OCStepVisual_CurveStyleFontPattern(Handle(StepVisual_CurveStyleFontPattern)* nativeHandle) : OCMMgt_TShared((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_StepVisual_CurveStyleFontPattern(*nativeHandle);
}

OCStepVisual_CurveStyleFontPattern::OCStepVisual_CurveStyleFontPattern() : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_StepVisual_CurveStyleFontPattern(new StepVisual_CurveStyleFontPattern());
}

 void OCStepVisual_CurveStyleFontPattern::Init(Standard_Real aVisibleSegmentLength, Standard_Real aInvisibleSegmentLength)
{
  (*((Handle_StepVisual_CurveStyleFontPattern*)nativeHandle))->Init(aVisibleSegmentLength, aInvisibleSegmentLength);
}

 void OCStepVisual_CurveStyleFontPattern::SetVisibleSegmentLength(Standard_Real aVisibleSegmentLength)
{
  (*((Handle_StepVisual_CurveStyleFontPattern*)nativeHandle))->SetVisibleSegmentLength(aVisibleSegmentLength);
}

 Standard_Real OCStepVisual_CurveStyleFontPattern::VisibleSegmentLength()
{
  return (*((Handle_StepVisual_CurveStyleFontPattern*)nativeHandle))->VisibleSegmentLength();
}

 void OCStepVisual_CurveStyleFontPattern::SetInvisibleSegmentLength(Standard_Real aInvisibleSegmentLength)
{
  (*((Handle_StepVisual_CurveStyleFontPattern*)nativeHandle))->SetInvisibleSegmentLength(aInvisibleSegmentLength);
}

 Standard_Real OCStepVisual_CurveStyleFontPattern::InvisibleSegmentLength()
{
  return (*((Handle_StepVisual_CurveStyleFontPattern*)nativeHandle))->InvisibleSegmentLength();
}

