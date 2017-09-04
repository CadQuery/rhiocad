// File generated by CPPExt (CPP file)
//

#include "StepVisual_PlanarExtent.h"
#include "../Converter.h"
#include "../TCollection/TCollection_HAsciiString.h"


using namespace OCNaroWrappers;

OCStepVisual_PlanarExtent::OCStepVisual_PlanarExtent(StepVisual_PlanarExtent* nativeHandle) : OCStepGeom_GeometricRepresentationItem((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCStepVisual_PlanarExtent::OCStepVisual_PlanarExtent() : OCStepGeom_GeometricRepresentationItem((OCDummy^)nullptr)

{
  nativeHandle = new StepVisual_PlanarExtent();
}

 void OCStepVisual_PlanarExtent::Init(OCNaroWrappers::OCTCollection_HAsciiString^ aName)
{
  ((StepVisual_PlanarExtent*)nativeHandle)->Init(*((Handle_TCollection_HAsciiString*)aName->Handle));
}

 void OCStepVisual_PlanarExtent::Init(OCNaroWrappers::OCTCollection_HAsciiString^ aName, Standard_Real aSizeInX, Standard_Real aSizeInY)
{
  ((StepVisual_PlanarExtent*)nativeHandle)->Init(*((Handle_TCollection_HAsciiString*)aName->Handle), aSizeInX, aSizeInY);
}

 void OCStepVisual_PlanarExtent::SetSizeInX(Standard_Real aSizeInX)
{
  ((StepVisual_PlanarExtent*)nativeHandle)->SetSizeInX(aSizeInX);
}

 Standard_Real OCStepVisual_PlanarExtent::SizeInX()
{
  return ((StepVisual_PlanarExtent*)nativeHandle)->SizeInX();
}

 void OCStepVisual_PlanarExtent::SetSizeInY(Standard_Real aSizeInY)
{
  ((StepVisual_PlanarExtent*)nativeHandle)->SetSizeInY(aSizeInY);
}

 Standard_Real OCStepVisual_PlanarExtent::SizeInY()
{
  return ((StepVisual_PlanarExtent*)nativeHandle)->SizeInY();
}

