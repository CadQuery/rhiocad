// File generated by CPPExt (Transient)
//
#ifndef _Aspect_GraphicDevice_OCWrappers_HeaderFile
#define _Aspect_GraphicDevice_OCWrappers_HeaderFile

// include the wrapped class
#include <Aspect_GraphicDevice.hxx>
#include "../Converter.h"

#include "../MMgt/MMgt_TShared.h"



namespace OCNaroWrappers
{

ref class OCAspect_GraphicDriver;



public ref class OCAspect_GraphicDevice : OCMMgt_TShared {

protected:
  // dummy constructor;
  OCAspect_GraphicDevice(OCDummy^) : OCMMgt_TShared((OCDummy^)nullptr) {};

public:

// constructor from native
OCAspect_GraphicDevice(Handle(Aspect_GraphicDevice)* nativeHandle);

// Methods PUBLIC


OCAspect_GraphicDevice();

~OCAspect_GraphicDevice()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
