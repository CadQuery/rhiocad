// File generated by CPPExt (MPV)
//
#ifndef _StepVisual_CameraModel_OCWrappers_HeaderFile
#define _StepVisual_CameraModel_OCWrappers_HeaderFile

// include native header
#include <StepVisual_CameraModel.hxx>
#include "../Converter.h"

#include "../StepGeom/StepGeom_GeometricRepresentationItem.h"

#include "../StepGeom/StepGeom_GeometricRepresentationItem.h"


namespace OCNaroWrappers
{




public ref class OCStepVisual_CameraModel  : public OCStepGeom_GeometricRepresentationItem {

protected:
  // dummy constructor;
  OCStepVisual_CameraModel(OCDummy^) : OCStepGeom_GeometricRepresentationItem((OCDummy^)nullptr) {};

public:

// constructor from native
OCStepVisual_CameraModel(StepVisual_CameraModel* nativeHandle);

// Methods PUBLIC

//! Returns a CameraModel <br>
OCStepVisual_CameraModel();

~OCStepVisual_CameraModel()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
